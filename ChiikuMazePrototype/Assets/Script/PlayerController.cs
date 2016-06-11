using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	private Rigidbody2D rigidbody;

	private Vector2 beforePosition;
	private Vector2 afterPosition;

	private float speedX;
	private float speedY;

	private float distanceFromCamera;

	// Use this for initialization
	void Start () {
		this.rigidbody = GetComponent<Rigidbody2D> ();
		this.distanceFromCamera = Vector3.Distance (this.rigidbody.position, Camera.main.transform.position);
		/*
		this.beforePosition = this.rigidbody.position;
		this.afterPosition = this.rigidbody.position;

		this.speedX = 0.0f;
		this.speedY = 0.0f;
		*/
	}
	
	// Update is called once per frame
	/*
	void Update() {
		this.afterPosition = this.rigidbody.position;
		if (this.beforePosition != this.afterPosition) {
			Debug.Log ("Change Position");
			this.speedX = (this.afterPosition.x - this.beforePosition.x) * 30;
			this.speedY = (this.afterPosition.y - this.beforePosition.y) * 30;
			this.beforePosition = this.afterPosition;
			this.rigidbody.velocity = new Vector2 (this.speedX, this.speedY);
		}
	}
	*/

	void Update() {
		if (Input.GetMouseButton(0)) {
			Vector3 pos = Input.mousePosition;
			pos.z = this.distanceFromCamera;
			pos = Camera.main.ScreenToWorldPoint (pos);
			this.rigidbody.velocity = (pos - this.transform.position) * 10;
		}
	}

	/*
	void OnMouseDrag() {
		print ("OnMouseDrag");
		float distance_to_screen = Camera.main.WorldToScreenPoint(gameObject.transform.position).z;

		// Move by Rigidbody rather than transform directly
		this.rigidbody.MovePosition(Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, distance_to_screen )));
		/*
		Vector3 objectPointInScreen = Camera.main.WorldToScreenPoint(this.transform.position);
		Vector3 mousePointInScreen = new Vector3(Input.mousePosition.x, Input.mousePosition.y, objectPointInScreen.z);
		Vector3 mousePointInWorld = Camera.main.ScreenToWorldPoint(mousePointInScreen);
		mousePointInWorld.z = this.transform.position.z;
		this.transform.position = mousePointInWorld;
		*/
	//}

	void OnCollisionEnter2D(Collision2D coll)
	{
		Debug.Log ("OnCollisionEnter");
		// Freeze on collision
		//this.rigidbody.isKinematic = true;
	}
	/*
	void OnCollisionEnter(Collision collision) {
		Debug.Log ("OnCollisionEnter");
	}
	*/
	void OnTriggerEnter(Collider collider) {
		Debug.Log ("OnTriggerEnter");
	}
}
