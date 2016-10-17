using UnityEngine;
using System.Collections;
using Pathfinding.Serialization.JsonFx; //make sure you include this using

public class InstantiatePanel : MonoBehaviour {
//
//	public GameObject cube;
//	public string _WebsiteURL = "http://ccha504.azurewebsites.net/tables/WaterPollution?zumo-api-version=2.0.0";
//	WaterPollution[] data;
//	public int sphereIndex = 0; 

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	static void displayCube() {
//		string jsonResponse = Request.GET(_WebsiteURL);
//
//		//Just in case something went wrong with the request we check the reponse and exit if there is no response.
//		if (string.IsNullOrEmpty(jsonResponse))
//		{
//			return;
//		}
//
//		//We can now deserialize into an array of objects - in this case the class we created. The deserializer is smart enough to instantiate all the classes and populate the variables based on column name.
//		data = JsonReader.Deserialize<WaterPollution[]>(jsonResponse);
//		float x = float.Parse (data[sphereIndex].X);
//		float y = float.Parse (data[sphereIndex].Y) + 2;
//		float z = float.Parse (data[sphereIndex].Z);
//
//		GameObject newCube = (GameObject)Instantiate(cube, new Vector3(x, y, z), Quaternion.identity);
//
//		newCube.GetComponentInChildren<TextMesh>().text = "ReadingID: " + data [sphereIndex].ReadingID 
//		+ "Date: " + data [sphereIndex].WhenReadingRecorded
//		+ "location: " + data [sphereIndex].Location 
//		+"Safety Category: " + data [sphereIndex].SafetyCategory
//		+ "Safety Measure: " + data [sphereIndex].SafetyMeasure
//		+ "X: " + data [sphereIndex].X
//		+ "Y: " + data [sphereIndex].Y
//		+"Z: " + data [sphereIndex].Z;

	}


}
