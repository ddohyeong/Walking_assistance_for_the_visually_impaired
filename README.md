# Walking_assistance_for_the_visually_impaired
3D 라이다를 통한 시각 장애인 보행 보조 시스템 <br>
https://drive.google.com/file/d/19gUFldZSCK4rvnf1i6G_igYAghKZHpQB/view?usp=sharing

## 💁🏻프로젝트 소개
- 진행기간 : 2023.3 ~ 2023.11
- 인원 : 5명
- 기술 스택
  -  C++, Python, ROS, YOLO
- 구성 요소
  -  CygLiDAR, Camera

### 🛠️시스템 아키텍처
<img width="951" alt="image" src="https://github.com/user-attachments/assets/373229c9-2b37-4c74-a839-4a8d5acde878">
 
## 📌주요 기능 
### 1. CygLiDAR를 활용한 장애물 탐지 및 알림
#### 장애물 탐지
- 3D LiDAR : CygLiDAR 
- 탐지 범위 : 2m, 탐지 각도 : w=120, h=60
- 2D LiDAR 탐지 범위를 벗어난 위험물을 인식 및 2D LiDAR 보조

<img width="574" alt="image" src="https://github.com/user-attachments/assets/fcf56a2a-0544-4584-ad28-a78c2f2c5b19">

#### 청각신호로 장애물 알림
- 왼쪽, 오른쪽 소리 발생
- 50cm단위로 2m까지 구분하여 신호를 다르게 전달 (가까울수록 높은 음으로 위험을 알림)
<img width="786" alt="image" src="https://github.com/user-attachments/assets/8dc4402c-2207-4343-8062-a24a294eb892">

### 2. Camera를 활용한 횡단보도의 상태(파란불, 빨간불) 탐지
#### YOLOv7-tiny 모델을 활용한 횡단보도 객체 탐지 
<img width="786" alt="image" src="https://github.com/user-attachments/assets/2f81967d-94fd-405b-a6ee-e04d96b9bef7">

**횡단보도 탐지** <br>
<img width="473" alt="image" src="https://github.com/user-attachments/assets/9b2c779d-5cde-4a66-953c-62b2fa06a3a3">



