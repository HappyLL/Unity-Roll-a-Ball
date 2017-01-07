using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class UserScoreManager : MonoBehaviour {

	public static int Score;
	public Text m_text;
	// Use this for initialization
	void Start () {
		Score = 0;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void LateUpdate(){
		m_text.text = "Score : " + Score;
	}
}
