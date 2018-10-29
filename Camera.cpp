#include "Camera.h"
#include "DisplayManager.h"
/*Update Camera Postition*/
void Camera::setCamera_Position(GLdouble Camera_x,GLdouble Camera_z,GLdouble Camera_Rotate,GLdouble Camera_Yaw,GLdouble Camera_Yaw_x){
		this->Camera_x = Camera_x;
		this->Camera_z = Camera_z;
		this->Camera_Rotate = Camera_Rotate;
		this->Camera_Yaw = Camera_Yaw;
		this->Camera_Yaw_x = Camera_Yaw_x;
}

void Camera:: setCount(GLint Count){
	this->Count = Count;
}
void Camera:: setCamera_zoom(GLdouble  Camera_zoom){
	this->Camera_zoom = Camera_zoom;
}

GLint Camera:: getCount(){
	return Count;
}

GLdouble Camera:: getCamera_Yaw_x(){
	return Camera_Yaw_x;
}
GLdouble Camera:: getCamera_Yaw(){
	return Camera_Yaw;
}

GLdouble Camera:: getCamera_rotate(){
	return Camera_Rotate;
}
GLdouble  Camera:: getCamera_zoom(){
	return Camera_zoom;
}

GLdouble  Camera:: getCamera_x(){
	return Camera_x;
}

GLdouble  Camera:: getCamera_z(){
	return Camera_z;
}

