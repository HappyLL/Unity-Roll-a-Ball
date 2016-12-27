using UnityEngine;
using System.Collections;

public class DestoryByTime : MonoBehaviour {

	// Use this for initialization
	public int EndTime = 2;
	void Start () {
		Destroy (this.gameObject , EndTime);
	}
}
