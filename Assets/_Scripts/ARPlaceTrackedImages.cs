using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System;

public class ARPlaceTrackedImages : MonoBehaviour
{
    [SerializeField]
    public GameObject[] ArPrefabs;

    private readonly Dictionary<string, GameObject> _instantiatedPrefabs = new Dictionary<string, GameObject>();

    // Cache AR tracked images manager from ARCoreSession
    private ARTrackedImageManager _trackedImagesManager;



    void Awake()
    {
        _trackedImagesManager = GetComponent<ARTrackedImageManager>();

    }


    void OnEnable()
    {
        _trackedImagesManager.trackedImagesChanged += OnTrackedImagesChanged;
    }
    void OnDisable()
    {
        _trackedImagesManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    //hack OnTrackedImagesChanged
    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (var trackedImage in eventArgs.added)
        {

            var imageName = trackedImage.referenceImage.name;

            foreach (var curPrefab in ArPrefabs)
            {
                if (string.Compare(curPrefab.name, imageName, StringComparison.Ordinal) == 0
                    && !_instantiatedPrefabs.ContainsKey(imageName))
                {
                
                    var newPrefab = Instantiate(curPrefab, trackedImage.transform);
               
                    _instantiatedPrefabs[imageName] = newPrefab;
                    ShowAndroidToastMessage("Instantiated!");

                    GameObject newPrefab1 = Instantiate(newPrefab, Vector3.forward * 8 + Vector3.left, Quaternion.identity);

                   


                }
              
            }
        }

     
        foreach (var trackedImage in eventArgs.updated)
        {
            _instantiatedPrefabs[trackedImage.referenceImage.name]
                .SetActive(trackedImage.trackingState == TrackingState.Tracking);
        }

      
        foreach (var trackedImage in eventArgs.removed)
        {
           
            Destroy(_instantiatedPrefabs[trackedImage.referenceImage.name]);
           
            _instantiatedPrefabs.Remove(trackedImage.referenceImage.name);

      
        }

    }

    private static void ShowAndroidToastMessage(string message)
    {
    }
 }

