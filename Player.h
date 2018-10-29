#ifndef PLAYER_H
#define PLAYER_H
#include <GL/freeglut.h>
#include "Camera.h"
#include "Math.h"
class Player
{
	public:
		void Aircraft();
		void PlainSphere(Camera *camera ,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat size,GLfloat red,GLfloat green,GLfloat blue);

		void Player_Aircraft(Camera *camera ,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat rotz);
		void Animation(Camera *camera,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat sx,GLfloat sy,GLfloat sz);
	private:
		GLfloat c =0.65;
		GLfloat phi,phir,theta,phir20,thetar,x,y,z;
};

#endif
