using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveRoverExplorer : MonoBehaviour
{
    public GameObject target;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("hello,world");
    }

    // Update is called once per frame
    void Update()
    {
    }
    public void Move()
    {
        Debug.Log("Move RoverExplorer Begin");
        if (target == null)
        {
            return;
        }
        Vector3 tmp = target.transform.position;
        target.transform.position = new Vector3(tmp.x + 1, tmp.y, tmp.z);
        Debug.Log("Move RoverExplorer End");
    }
}
