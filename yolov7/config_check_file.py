import cv2
import rospy
import torch

print("=========================")
print("cv2 버전 : ")
print(cv2.__version__)
print("=========================")
print("cv2 waitKey() 동작 확인 : ")
print(cv2.waitKey(0))
print("=========================")
print("opencv2 cuda 가속확인 : ")
print(cv2.cuda.getCudaEnabledDeviceCount())
print("=========================")
print("rospy 동작확인 : ")
print("이 파일이 실행되면 import 된거임ㅋ")
print("=========================")
print("torch 동작 확인 / gpu 사용 확인 : ")
print(torch.__version__)
print("CUDA is available!")
print("torch version : ", torch.__version__)
print("CUDA device count:", torch.cuda.device_count())
print("CUDA device name:", torch.cuda.get_device_name(0))
print("=========================")