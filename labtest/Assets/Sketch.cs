using UnityEngine;
using UnityEngine.UI;
using Pathfinding.Serialization.JsonFx; //make sure you include this using

public class Sketch : MonoBehaviour {
    public GameObject myPrefab;
	public GameObject cube;
    // Put your URL here
	public string _WebsiteURL = "http://ccha504.azurewebsites.net/tables/TreeSurvey?zumo-api-version=2.0.0";
	public Material material1; 
	public Material material2; 
	public Material material3; 
	public Material material4; 
	public Material material5;
	TreeSurvey[] data;
	public static int sphereindex = 0; 
	public Text readingID; 
	public Text date; 
	public Text location ; 
	public Text categoty; 
	public Text measure; 
	public Text x; 
	public Text y; 
	public Text z; 
	public string jsonResponse ;



    void Start () {
        //Reguest.GET can be called passing in your ODATA url as a string in the form:
        //http://{Your Site Name}.azurewebsites.net/tables/{Your Table Name}?zumo-api-version=2.0.0
        //The response produce is a JSON string
		jsonResponse = Request.GET(_WebsiteURL);

        //Just in case something went wrong with the request we check the reponse and exit if there is no response.
        if (string.IsNullOrEmpty(jsonResponse))
        {
            return;
        }

        //We can now deserialize into an array of objects - in this case the class we created. The deserializer is smart enough to instantiate all the classes and populate the variables based on column name.
		data = JsonReader.Deserialize<TreeSurvey[]>(jsonResponse);
		int i = 0;

        //We can now loop through the array of objects and access each object individually
		foreach (TreeSurvey reading in data)
        {
			//convert the string readings to floats - as the data given is in floats 
			float x = float.Parse (reading.X);
			float y = float.Parse (reading.Y);
			float z = float.Parse (reading.Z);

			//Plot the prefab "SphereWithText" on the3D space using the reading data  
			GameObject newSphere = (GameObject)Instantiate(myPrefab, new Vector3(x, y, z), Quaternion.identity);
			newSphere.name = i.ToString();

			//Label on each point with their Ecological Value 
			newSphere.GetComponentInChildren<TextMesh>().text = reading.EcologicalValue;

			//Different physical (color) attribute depending on Ecological Value 
			if (reading.EcologicalValue == "Very High") {
				newSphere.GetComponent<Renderer> ().material = material2;
			} else if (reading.EcologicalValue == "High") {
				newSphere.GetComponent<Renderer> ().material = material3;
			} else if (reading.EcologicalValue == "Medium") {
				newSphere.GetComponent<Renderer> ().material = material4;
			}else {
				newSphere.GetComponent<Renderer> ().material = material5;
			}
			i++; 
        }
	}
	
	// Update is called once per frame
	void Update () {


		//Get Mouse position
		RaycastHit hitInfo = new RaycastHit ();
		Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);

		//If left mouse button clicked 
		if (Input.GetMouseButtonDown (0)) {
			if (Physics.Raycast (ray, out hitInfo)) {

				//If the object selected was a sphere 
				if (hitInfo.collider.tag == "Sphere") {

					//Change its color to blue 
					hitInfo.collider.gameObject.GetComponent<Renderer> ().material = material1;

					//Get index of sphere object in the tree survey data 
					int index = int.Parse (hitInfo.collider.gameObject.name);

					//Create a new panel that shows the point data 
					GameObject newPanel = (GameObject)Instantiate (cube, 
						                      new Vector3 (hitInfo.point.x, hitInfo.point.y + 1.0f, hitInfo.point.z), Quaternion.identity);
					newPanel.GetComponentInChildren<TextMesh> ().text = "Location: " + data [index].Location
					+ "\n" + "Ecological Value: " + data [index].EcologicalValue
					+ "\n" + "Historical Significance: " + data [index].HistoricalSignificance
					+ "\n" + "Date: " + data [index].WhenReadingRecorded;
				}
					
				//If the object selected was a cube/panel 
				if (hitInfo.collider.tag == "Cube") {
					//Destroy the panel 
					Destroy (hitInfo.collider.gameObject);
				}
			}
		}
	}

}
