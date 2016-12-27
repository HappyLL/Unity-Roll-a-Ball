using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

//用于生产陨石
public class GameController : MonoBehaviour {

	// Use this for initialization
	//陨石的prefab
	public GameObject AsObj;
	public Vector3 SpawnInitPos;
	public int ASCount;
	public int WaitSec;
	public Text text;
	private int score = 0;
	private bool gameOver;
	void Start () {
		//在第一帧且onEnable = true时才调用
		AddNewScore(score);
		StartCoroutine(SpawnStart());
		gameOver = false;
	}
	IEnumerator SpawnStart()
	{
		while (true) {
			for (int index = 0; index < ASCount; index++) {
				Vector3 vt = new Vector3 (Random.Range (-SpawnInitPos.x, SpawnInitPos.x), 0, 16);
				//默认不旋转
				Quaternion ra = Quaternion.identity;
				Instantiate (AsObj, vt, ra);
			}
			yield return new WaitForSeconds(WaitSec);
			if (gameOver)
				break;
		}
	}

	void Update()
	{
		if (Input.GetKeyDown (KeyCode.R)&&gameOver) {
			SceneManager.LoadScene ("SpaceShooter");
		}
	}

	public void AddNewScore(int score)
	{
		this.score = this.score + score;
		text.text = "Score: "+this.score;
	}

	public void SetGameOver(bool gmOver)
	{
		gameOver = gmOver;
	}
}
