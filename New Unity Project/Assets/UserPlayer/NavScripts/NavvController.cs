using UnityEngine;
using System.Collections;

public class NavController : MonoBehaviour {

	public Transform m_target;


	// Use this for initialization
	void Start () {
		if (m_target != null) {
			GetComponent<NavMeshAgent> ().destination = m_target.position;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
