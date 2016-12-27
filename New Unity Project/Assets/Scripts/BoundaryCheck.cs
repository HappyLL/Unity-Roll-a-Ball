using UnityEngine;
using System.Collections;

public class BoundaryCheck : MonoBehaviour {
	//碰撞离开时才触发
	void OnTriggerExit(Collider obj)
	{
		//Debug.Log ("yes");
		//直接删除obj 会将其的碰撞器删除
		//.obj是直接删除对应持有该组件的gmobj 所以必须要有碰撞器这样一个组件才能进入TriggerExit
		Destroy (obj.gameObject);
	}
}
