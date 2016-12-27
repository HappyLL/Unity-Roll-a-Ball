using UnityEngine;
using System.Collections;

[System.Serializable]
public class Boundary{
	public  float minX;
	public  float minZ;
	public  float maxX;
	public  float maxZ;
};

//实现飞船的移动
public class SpaceController : MonoBehaviour {
	private Rigidbody m_rig = null;
	public float Speed = 10;
	public Boundary m_bd = new Boundary();
	public float Roate;
	public GameObject bolt;
	public Transform m_spPoint;
	public float fireRate;
	private AudioSource m_audio;
	private float nextFire;

	void OnEnable()
	{
		m_rig = GetComponent<Rigidbody> ();
		Roate = 5;
		nextFire = 0;
		m_audio = GetComponent<AudioSource> ();
	}

	void Update()
	{
		if (Input.GetButtonDown ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;
			Instantiate (bolt , m_spPoint.position , m_spPoint.rotation);
			m_audio.Play ();
		}
	}

	//物理固定更新
	void FixedUpdate()
	{
		float fMoveX = Input.GetAxis("Horizontal");
		float fMoveZ = Input.GetAxis("Vertical"); 
		m_rig.velocity = new Vector3(fMoveX*Speed , 0,  fMoveZ*Speed);
		float x = m_rig.position.x;
		float z = m_rig.position.z;
		m_rig.position = new Vector3 (Mathf.Clamp(x, m_bd.minX , m_bd.maxX) , 0 , Mathf.Clamp(z , m_bd.minZ , m_bd.maxZ));
		m_rig.rotation =  Quaternion.Euler(0, 0, 30*fMoveX*(-1));
	}
}
