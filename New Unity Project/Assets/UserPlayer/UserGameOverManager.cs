using UnityEngine;
using System.Collections;

public class UserGameOverManager : MonoBehaviour {

	public UserPlayerController UserPlayer;

	private Animator m_ani;

	void Start(){
		m_ani = GetComponent<Animator> ();
	}

	// Update is called once per frame
	void Update () {
		if (UserPlayer == null)
			return;
		if (UserPlayer.IsDead ()) {
			m_ani.SetTrigger ("GameOver");
		}
		
	}
}
