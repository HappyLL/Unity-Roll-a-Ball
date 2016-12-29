using UnityEngine;
using System.Collections;

public class NavvController : MonoBehaviour {

	public Transform Target;
	private NavMeshAgent m_nav;
	// Use this for initialization
	void Start () {
		m_nav = GetComponent<NavMeshAgent> ();

	}	
	
	// Update is called once per frame
	void Update () {
		m_nav.destination = Target.position;
	}
}
