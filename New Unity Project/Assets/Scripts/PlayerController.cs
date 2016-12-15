using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public Camera m_camera;
	public Text m_countText;
	public Text m_youwinText;
	private Rigidbody m_rigidBody;
	private int m_count;
	private Vector3 offset;

	// Use this for initialization
	void Start () {
		m_rigidBody = GetComponent<Rigidbody> ();
		offset = m_camera.transform.position - m_rigidBody.transform.position;
		m_youwinText.text = "";
		SetCountText ();
	}

	//物理引擎对应固定的更新频率
	void FixedUpdate()
	{
		float x = Input.GetAxis ("Horizontal");
		x = (float)(x * 0.2);
		float y = Input.GetAxis ("Vertical");
		y = (float)(y * 0.2);
		Vector3 p = m_rigidBody.transform.position;
		m_rigidBody.transform.position = p + new Vector3 (x, 0, y);
		m_camera.transform.position = m_rigidBody.transform.position + offset;
	}

	// Update is called once per frame
	void Update () {
	
	}
		
	void OnTriggerEnter(Collider obj)
	{
		if (obj.gameObject.CompareTag ("pickup")) {
			obj.gameObject.SetActive (false);
			m_count = m_count + 1;
			SetCountText ();
		}
	}

	void SetCountText()
	{
		m_countText.text = "Count: " + m_count.ToString ();
		if (m_count >= 10) {
			m_youwinText.text = "You Win!!!";
		}
	}
}
