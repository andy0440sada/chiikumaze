using UnityEngine;
using System.Collections;

public class GoalController : MonoBehaviour {

	private GameObject goalText;

	// Use this for initialization
	void Start () {
		this.goalText = GameObject.Find("GoalText");
		this.goalText.SetActive(false);
		// Debug用
		PlayerPrefs.DeleteAll();
	}

	void OnTriggerEnter2D(Collider2D collider) {
		string objectName = collider.gameObject.name;
		if (objectName == "Player") {
			Debug.Log ("Goal!!!" + objectName);
			this.goalText.SetActive(true);
			var gettedCat = PlayerPrefs.GetInt("gettedCat", 0);
			if (gettedCat == 1) {
				Debug.Log("Cat済");
			} else {
				Debug.Log("Cat未済");
				PlayerPrefs.SetInt("gettedCat", 1);
			}
		}
	}
}
