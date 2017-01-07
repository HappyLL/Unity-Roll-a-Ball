using UnityEngine;
using System.Collections;

public class GunShooter : MonoBehaviour {

	public float RayDistance = 100;

	private AudioSource m_asSor;
	private ParticleSystem m_parSystem;
	private Light m_light;
	private LineRenderer m_linerRender;
	private int m_shooterMask;
	private Ray m_ray;

	void Start () {
		m_asSor = GetComponent<AudioSource> ();
		m_parSystem = GetComponent<ParticleSystem> ();
		m_light = GetComponent<Light> ();
		m_linerRender = GetComponent<LineRenderer> ();
		m_shooterMask = LayerMask.GetMask ("Shootable");
	}

	void Update () {
	
	}

	void FixedUpdate()
	{
		if (Input.GetKeyDown (KeyCode.Mouse0)) 
		{
			Shooter ();
		}
		else if(Input.GetKeyUp(KeyCode.Mouse0))
		{
			UnShooter();
		}
	}

	private void Shooter()
	{
		m_asSor.Play ();
		m_parSystem.Play ();
		m_light.enabled = true;
		m_linerRender.enabled = true;

		m_ray = new Ray (transform.position, transform.forward);
		RaycastHit hitPoint;
		m_linerRender.SetPosition (1, new Vector3 (0, 0, 0));
		//由于射线的初始点是从枪口出发的 返回的hitpoint是射线与shooter层的交点
		if (Physics.Raycast (m_ray, out hitPoint, RayDistance, m_shooterMask)) 
		{
			m_linerRender.SetPosition (1 , new Vector3(0 , 0 ,Vector3.Distance(hitPoint.point ,  transform.position)));
			if (hitPoint.collider.CompareTag ("Enimy")) 
			{
				//hitPoint.collider.GetComponent
				NavvController ctr = hitPoint.collider.GetComponent<NavvController> ();
				ctr.OnAttack (10.0f, hitPoint.point);
			}
		} 
		else 
		{
			m_linerRender.SetPosition (1 , new Vector3(0 , 0 , RayDistance));
		}
	}

	private void UnShooter()
	{
		m_light.enabled = false;
		m_linerRender.enabled = false;
	}
}
