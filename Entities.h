#ifndef ENTITIES_H
#define ENTITIES_H
#include <GL/freeglut.h>
#include "Camera.h"
#include "Math.h"
#include <iostream>
class Entities
{
	public:
		
	
		void LoopWall(Camera *camera,GLfloat roty,GLfloat posx,GLfloat posy,GLfloat posz);
		GLfloat CalculateVector_LoopWall();
		void createCube(Camera *camera,GLfloat posx, GLfloat posy,GLfloat posz,GLfloat rotx,GLfloat roty,GLfloat rotz);
		void Building(Camera *camera ,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat sx,GLfloat sy,GLfloat sz,GLfloat rot);
		bool checkCollision(GLdouble);
		bool checkPlaneBound();
		bool getCollision();
		
		void Floor(); 
		void FrontWall();
		void SideWall();
		void Button(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
		int getCount();
		

	private:
		const GLfloat Wall_Height = 3.0;
		const GLfloat Wall_Width_x = 3.0;
		const GLfloat Wall_Width_z = 3.0;
		
		GLdouble planeNormal[4], Ray[4], intersectionPoint[4] ,theta;
		GLdouble p1[4],p2[4],p3[4],p4[4];
		GLdouble Vec1[4],Vec2[4];
		GLdouble pStart[4],pDest[4];
		GLdouble model[16];
		
		bool hit,isPointWithinPlane;
		bool Collision;
		GLint count=0;
		GLdouble red = 0.1;
		GLdouble green = 0.658824 ;
		GLdouble blue = 0.658824;
		GLfloat FirstFloor = -2;
		bool Collision1,Collision2,Collision3,Collision4,Collision5,Collision6,Collision7,Collision8;

};

#endif
