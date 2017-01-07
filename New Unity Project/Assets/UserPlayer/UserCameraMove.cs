using UnityEngine;
using System.Collections;

public class UserCameraMove : MonoBehaviour {

	// Use this for initialization
	public GameObject m_gameObj;
	private Vector3 m_offset;
	void Start () {
		m_offset = transform.position - m_gameObj.transform.position;
		//Debug.Log ("X:"+transform.position.x+" Y:"+transform.position.y+" Z:"+transform.position.z);
		//Debug.Log ("X1:"+gameObject.transform.position.x+" Y1:"+gameObject.transform.position.y+" Z1:"+gameObject.transform.position.z);
	}
	
	// Update is called once per frame
	void Update () {
		if(m_gameObj)
			transform.position = m_offset + m_gameObj.transform.position;
	}
}
