using UnityEngine;
using System.Collections;

public class UserEnemyManager : MonoBehaviour {

	// Use this for initialization
	public int[] InTime;
	public GameObject[] InObjects;
	public Transform[] InTrans;

	public UserPlayerController UserController;

	void Start () {
		StartCoroutine (InitNewEnemy());
	}
		
	IEnumerator InitNewEnemy()
	{
		while (true) {
			if (UserController == null || UserController.IsDead ())
				break;
			int index = Random.Range (0,InTrans.Length);
			Instantiate (InObjects[index] , InTrans[index].position , InTrans[index].rotation);
			yield return new WaitForSeconds(InTime[index]);
		}
	}
}
