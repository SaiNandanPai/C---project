#ifndef CAMERA_H
#define CAMERA_H
#include <GL/freeglut.h>

 class Camera
{
	private:
	 GLdouble Camera_x ;
	 GLdouble Camera_z ;
	 GLdouble Camera_Rotate; 
	 GLdouble Camera_Yaw;
	 GLdouble Camera_Yaw_x;
     GLdouble Camera_zoom;
	public:
		GLint Count = 0 ;
		void setCamera_Position(GLdouble Camera_x,GLdouble Camera_z,GLdouble Camera_Rotate,GLdouble Camera_Yaw,GLdouble Camera_Yaw_x);
		void setCamera_zoom(GLdouble Camera_zoom);
		void setCount(GLint Camera_Count);
		GLint getCount();
		GLdouble getCamera_Yaw_x();
		GLdouble getCamera_Yaw();
		GLdouble getCamera_rotate();
		GLdouble  getCamera_zoom();
		GLdouble  getCamera_x();
		GLdouble  getCamera_z();
};
#endif
