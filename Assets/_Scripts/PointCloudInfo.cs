using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class PointCloudInfo : MonoBehaviour
{
    private ARPointCloud _pointCloud;

    
    public UnityEngine.UI.Text Log;

    void OnEnable()
    {
        
        _pointCloud = GetComponent<ARPointCloud>();
        _pointCloud.updated += OnPointCloudChanged;
    }

    void OnDisable()
    {
       
        _pointCloud.updated -= OnPointCloudChanged;
    }

    private void OnPointCloudChanged(ARPointCloudUpdatedEventArgs eventArgs)
    {
        if (!_pointCloud.positions.HasValue ||
            !_pointCloud.identifiers.HasValue ||
            !_pointCloud.confidenceValues.HasValue)
            return;

        var positions = _pointCloud.positions.Value;
        var identifiers = _pointCloud.identifiers.Value;
        var confidence = _pointCloud.confidenceValues.Value;

        if (positions.Length == 0) return;

        var logText = "Number of points: " + positions.Length + "\nPoint info: x = "
                   + positions[0].x + ", y = " + positions[0].y + ", z = " + positions[0].z
                   + ",\n Identifier = " + identifiers[0] + ", Confidence = " + confidence[0];

        if (Log)
        {
            Log.text = logText;
        }
        else
        {
            Debug.Log(logText);
        }
    }
}
