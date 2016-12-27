using UnityEngine;
using System.Collections;

public class BoltMove : MonoBehaviour {

	// Use this for initialization
	public int Speed = 10;
	void Start () {
		Rigidbody m_rig = GetComponent<Rigidbody> ();
		m_rig.velocity = transform.forward * Speed;
	}
}
