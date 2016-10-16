using UnityEngine;
using System.Collections;

public class myCubeScript : MonoBehaviour {

//    public float ratateSpeed = 1.0f;
//    public Vector3 spinSpeed = Vector3.zero;
//    Vector3 spinAxis = new Vector3(0, 1, 0);


	public Material material; 
	public Material defaultmaterial; 


    // Use this for initialization
    void Start () {
//        spinSpeed = new Vector3(Random.value, Random.value, Random.value);
//        spinAxis = Vector3.up;
//        spinAxis.x = (Random.value - Random.value)*0.1f;
	}
	
    public void setSize(float size)
    {
        this.transform.localScale = new Vector3(size, size, size);
    }

	// Update is called once per frame
	void Update () {
//        this.transform.Rotate(spinSpeed);
//        this.transform.RotateAround(Vector3.zero, Vector3.up, ratateSpeed);

	}
	void OnMouseDown() {
//		this.ratateSpeed = 0.0f;
//		spinSpeed = Vector3.zero; 
		this.GetComponent<Renderer>().material = material;
		Debug.Log (this.transform.name);
		Sketch.sphereindex = int.Parse(this.transform.name);
		//sketchholder.sphereindex = 
	

	}




}
