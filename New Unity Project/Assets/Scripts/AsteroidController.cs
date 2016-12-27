using UnityEngine;
using System.Collections;

public class AsteroidController : MonoBehaviour {

	public float RoAngSpeed;
	private Rigidbody m_rig;
	//private AudioSource m_audio;
	public GameObject explosion;
	public GameObject my_explosion;
	private GameController gameController;
	public int Score;
	void OnEnable()
	{
		m_rig = GetComponent<Rigidbody> ();
	}
	void Start()
	{
		//角速度(Random.insideUnit...返回球上的任意一个点)
		m_rig.angularVelocity = Random.insideUnitSphere * RoAngSpeed;
		GameObject obj = GameObject.FindGameObjectWithTag ("UserGameController");
		if (obj == null) {
			Debug.Log ("game controller is null1");
		} else {
			gameController = obj.GetComponent<GameController>();
		}
		if (gameController == null) {
			Debug.Log ("game controller is null2");
		}
			
	}
	//当两个碰撞器刚接触时
	void OnTriggerEnter(Collider obj)
	{
		if (obj.gameObject.tag == "UserAs") {
			return;
		}
		if (obj.gameObject.tag == "UserBoundary") 
		{
			return;
		}
		//GetComponent<AudioSource> ().Play ();
		//m_audio.Play ();
		Instantiate (explosion , transform.position,transform.rotation);
		if (obj.gameObject.tag == "UserPlayer") 
		{
			Instantiate (my_explosion , obj.transform.position , obj.transform.rotation);
			if (gameController)
				gameController.SetGameOver (true);
		}
		if (gameController) {
			Debug.Log ("score"+Score);
			gameController.AddNewScore (Score);
		}
		Destroy (obj.gameObject);
		Destroy (gameObject);
	}
}
