#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H
#define GLUT_DISABLE_ATEXIT_HACK
#include<GL/freeglut.h>
#include "Camera.h"
#include "Entities.h"
#include "Player.h"
#include "Interface.h"

class DisplayManager
{
		static const int width = 1000, height = 800;  /*Window Resolution*/
		static const GLfloat RUN_SPEED = 0.005;
		static const GLfloat TURN_SPEED = 35.0;
		static const GLfloat ZOOM_IN_LEVEL = -4.0; 
		static const GLfloat ZOOM_OUT_LEVEL = 6.0;
		
		static void Render();
		static void callBack();
		static void Reshape(int width,int height);
		static void Keyboard(unsigned char key, int x, int y); /*Update Global Camera Variable camera_x and camera_z*/
		static void Mouse(int btn, int state, int x, int y);
		static void My_mouse_routine(int x, int y);
	private:
		
	
	public:
		DisplayManager(char *Window);
		~DisplayManager();
		int  initDisplay();
		int createDisplay(char *WindowName);

};

#endif
