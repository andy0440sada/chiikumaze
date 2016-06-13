using UnityEngine;
using System.Collections;

public class GoalController : MonoBehaviour {

	private GameObject goalText;

	// Use this for initialization
	void Start () {
		this.goalText = GameObject.Find("GoalText");
		this.goalText.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D collider) {
		string objectName = collider.gameObject.name;
		if (objectName == "Player") {
			Debug.Log ("Goal!!!" + objectName);
			this.goalText.SetActive(true);
		}
	}
}
