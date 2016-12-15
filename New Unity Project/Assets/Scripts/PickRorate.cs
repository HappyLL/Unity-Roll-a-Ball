using UnityEngine;
using System.Collections;

public class PickRorate : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.Rotate (new Vector3(25 , 25 , 25) * Time.deltaTime);	
	}
}
