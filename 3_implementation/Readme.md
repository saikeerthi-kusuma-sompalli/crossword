## Software Required:
  PyCharm Community Edition 2021.1.1 x6 /  Anaconda Navigator
## Packages to be installed
   - Open-cv 
   - time 
### As we are using pre-trained deep Learning Architectures based on Tensorflow we need to download some files like config,weights etc. We can download them from open-cv official github link.
[open-cv official github link](https://github.com/opencv/opencv/wiki/TensorFlow-Object-Detection-API)
#### [In this link we can get many Deep-Learning Architectures that are pre-trained based on Tensorflow]
#### Things to be downloaded
-- Go to the SSD-MobileNetv3 download weights and download config
-- include config  folder ssd_mobilenet_v3_large_coco_2020_01_14.pbtx in current directory
-- include frozen_inference_graph.pb(This is in weights folder) in current directory

## Execution steps:
  ## Execute main.py file
  - [we created a file in main.py which contains all the files, So they execute one by one without user interface]
  - we can assume that at files are executing one by one:
  ## 1. clickPicture.py
  - output: Pictures clicked successfully
  ## 2.createBucket.py
  - output: Bucket created and made public successfully
  ## 3.uploadPictures.py
  - output: Uploaded images Successfully into the bucket
  ## 4.receiveResponses.py
  
  ## 5.countVehicles.py
  - output: shows the colour of the traffic light in each path like "green","red" or "Yellow" based on the count of vehicles
  
  
