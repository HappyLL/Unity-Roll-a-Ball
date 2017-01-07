using UnityEngine;
using System.Collections;

public class NavvController : MonoBehaviour {

	private Transform m_target;
	private AudioSource m_audio;
	private Animator m_animtor;
	private NavMeshAgent m_nav;
	private CapsuleCollider m_capcol;

	public float m_iHealth = 100;
	private bool m_isPlayerDead;

	// Use this for initialization
	void Start () {
		m_audio = GetComponent<AudioSource> ();
		m_animtor = GetComponent<Animator> ();
		m_nav = GetComponent<NavMeshAgent> ();
		m_capcol = GetComponent<CapsuleCollider> ();
		GameObject gm = GameObject.FindGameObjectWithTag ("UserPlayer");
		m_target = gm.GetComponent<Transform> ();
	}
	
	// Update is called once per frame
	void Update () {
		//m_parSyste.Play ();
		if (m_target != null && m_nav.enabled && !IsTargetDead ()) {
			m_nav.destination = m_target.position;
			m_isPlayerDead = false;
		} else {
			if (IsTargetDead ()&&!m_isPlayerDead) {
				m_animtor.SetTrigger ("PlayerDeath");
				m_isPlayerDead = true;
				m_nav.enabled = false;
			}
		}
	}

	private bool IsTargetDead()
	{
		if (m_target == null)
			return true;
		UserPlayerController userGm = m_target.gameObject.GetComponent<UserPlayerController>();
		if (userGm == null)
			return true;
		return userGm.IsDead ();
	}

	public void OnAttack(float dmg , Vector3 hitPoint)
	{
		//m_parSyste.position = hitPoint;
		//m_parSyste.Play ();
		m_iHealth = m_iHealth - dmg;
		if (m_iHealth > 0) 
		{
			m_audio.Play ();
		} 
		else 
		{
			m_animtor.SetTrigger ("Dead");
			m_nav.enabled = false;
			m_capcol.isTrigger = true;
			Destroy (this.gameObject , 2.0f);
			UserScoreManager.Score = UserScoreManager.Score + 10;
		}
	}

	public void StartSinking()
	{
		Debug.Log("StartSinking");
	}

}
