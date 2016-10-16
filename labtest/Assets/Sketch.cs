using UnityEngine;
using UnityEngine.UI;
using Pathfinding.Serialization.JsonFx; //make sure you include this using

public class Sketch : MonoBehaviour {
    public GameObject myPrefab;
    // Put your URL here
	public string _WebsiteURL = "http://ccha504.azurewebsites.net/tables/WaterPollution?zumo-api-version=2.0.0";
	public Material material1; 
	public Material material2; 
	public Material material3; 
	public Material material4; 
	WaterPollution[] data;
	public static int sphereindex = 0; 
	public Text readingID; 
	public Text date; 
	public Text location ; 
	public Text categoty; 
	public Text measure; 
	public Text x; 
	public Text y; 
	public Text z; 




    void Start () {
        //Reguest.GET can be called passing in your ODATA url as a string in the form:
        //http://{Your Site Name}.azurewebsites.net/tables/{Your Table Name}?zumo-api-version=2.0.0
        //The response produce is a JSON string
        string jsonResponse = Request.GET(_WebsiteURL);

        //Just in case something went wrong with the request we check the reponse and exit if there is no response.
        if (string.IsNullOrEmpty(jsonResponse))
        {
            return;
        }

        //We can now deserialize into an array of objects - in this case the class we created. The deserializer is smart enough to instantiate all the classes and populate the variables based on column name.
		data = JsonReader.Deserialize<WaterPollution[]>(jsonResponse);
		int i = 0;


        //We can now loop through the array of objects and access each object individually
		foreach (WaterPollution reading in data)
        {
            //Example of how to use the object

			float x = float.Parse (reading.X);
			float y = float.Parse (reading.Y);
			float z = float.Parse (reading.Z);

			GameObject newSphere = (GameObject)Instantiate(myPrefab, new Vector3(x, y, z), Quaternion.identity);
			newSphere.name = i.ToString();
			newSphere.GetComponentInChildren<TextMesh>().text = "(" + reading.X + ", " + reading.Y + ", " + reading.Z + ")";
			i++; 
        }
	}
	
	// Update is called once per frame
	void Update () {
		Debug.Log (sphereindex.ToString());
		readingID.text = "ReadingID: " + data [sphereindex].ReadingID;
		date.text  = "Date: " + data [sphereindex].WhenReadingRecorded;
		location.text  = "location: " + data [sphereindex].Location;
		categoty.text  = "Safety Category: " + data [sphereindex].SafetyCategory;
		measure.text  = "Safety Measure: " + data [sphereindex].SafetyMeasure;
		x.text  =  "X: " + data [sphereindex].X;
		y.text  = "Y: " + data [sphereindex].Y;
		z.text  = "Z: " + data [sphereindex].Z;
	
	}

//	void OnGUI() {
//
//	
//	}

//
//
//	if (age <= 100 && age > 90 ){
//		Debug.Log("This age at death is: " + int.Parse(cenotaph.Ageatdeath));
//		float y = 9.0f;
//		float z = 0.0f;
//		GameObject newCube = (GameObject)Instantiate(myPrefab, new Vector3(x, y, z), Quaternion.identity);
//		newCube.GetComponent<myCubeScript>().setSize((1.0f - perc) * 2);
//		newCube.GetComponent<myCubeScript>().ratateSpeed = perc;
//		newCube.GetComponentInChildren<TextMesh>().text = cenotaph.Ageatdeath;
//		newCube.GetComponent<Renderer> ().material = material1;
//
//	}else if (age <= 90 && age > 85 ){
//		Debug.Log("This age at death is: " + int.Parse(cenotaph.Ageatdeath));
//		float y = 7.0f;
//		float z = 0.0f;
//		GameObject newCube = (GameObject)Instantiate(myPrefab, new Vector3(x, y, z), Quaternion.identity);
//		newCube.GetComponent<myCubeScript>().setSize((1.0f - perc) * 2);
//		newCube.GetComponent<myCubeScript>().ratateSpeed = perc;
//		newCube.GetComponentInChildren<TextMesh>().text = cenotaph.Ageatdeath;
//		newCube.GetComponent<Renderer> ().material = material2;
//	}
//	else if (age <= 85 && age > 80 ){
//		Debug.Log("This age at death is: " + int.Parse(cenotaph.Ageatdeath));
//		float y = 4.0f;
//		float z = 0.0f;
//		GameObject newCube = (GameObject)Instantiate(myPrefab, new Vector3(x, y, z), Quaternion.identity);
//		newCube.GetComponent<myCubeScript>().setSize((1.0f - perc) * 2);
//		newCube.GetComponent<myCubeScript>().ratateSpeed = perc;
//		newCube.GetComponentInChildren<TextMesh>().text = cenotaph.Ageatdeath;
//		newCube.GetComponent<Renderer> ().material = material3;
//
//	}
//	else{
//		Debug.Log("This age at death is: " + int.Parse(cenotaph.Ageatdeath));
//		float y = 1.0f;
//		float z = 0.0f;
//		GameObject newCube = (GameObject)Instantiate(myPrefab, new Vector3(x, y, z), Quaternion.identity);
//		newCube.GetComponent<myCubeScript>().setSize((1.0f - perc) * 2);
//		newCube.GetComponent<myCubeScript>().ratateSpeed = perc;
//		newCube.GetComponentInChildren<TextMesh>().text = cenotaph.Ageatdeath;
//		newCube.GetComponent<Renderer> ().material = material4;
//
//	}



//	GUI.Label (new Rect (10, 20, 300, 40), "ReadingID: " + data [sphereindex].ReadingID);
//	GUI.Label (new Rect (10, 40, 300, 40), "Date: " + data [sphereindex].WhenReadingRecorded);
//	GUI.Label (new Rect (10, 60, 300, 40), "Label: " + data [sphereindex].Location);
//	GUI.Label (new Rect (10, 80, 300, 40), "Safety Category: " + data [sphereindex].SafetyCategory);
//	GUI.Label (new Rect (10, 100, 300, 40), "Safety Measure: " + data [sphereindex].SafetyMeasure);
//	GUI.Label (new Rect (10, 120, 300, 40), "X: " + data [sphereindex].X);
//	GUI.Label (new Rect (10, 140, 300, 40), "Y: " + data [sphereindex].Y);
//	GUI.Label (new Rect (10, 160, 300, 40), "Z: " + data [sphereindex].Z);
}
