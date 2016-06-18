using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	private string playerName;

	private Rigidbody2D rigidbody2d;

	private float distanceFromCamera;

	// Use this for initialization
	void Start () {
		this.playerName = "Rabbit";
		this.rigidbody2d = GetComponent<Rigidbody2D> ();
		this.distanceFromCamera = Vector3.Distance (this.rigidbody2d.position, Camera.main.transform.position);
	}

	void Update() {
		if (Input.GetMouseButton(0)) {
			Vector3 pos = Input.mousePosition;
			pos.z = this.distanceFromCamera;
			pos = Camera.main.ScreenToWorldPoint (pos);
			this.rigidbody2d.velocity = (pos - this.transform.position) * 50;
		}
	}
}
