#include "Player.h"



void Player::  Animation(Camera *camera,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat sx,GLfloat sy,GLfloat sz){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(1,1,-4);
	glScalef(1,1,1);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(1,0,0);
	glVertex3f(camera->getCamera_Yaw(),camera->getCamera_rotate(),0);
	glVertex3f(camera->getCamera_rotate(),camera->getCamera_Yaw(),0);
	glVertex3f(camera->getCamera_rotate(),camera->getCamera_Yaw_x(),0);
	glEnd();
	glPopMatrix();
}
void Player:: Aircraft(){
		glPushMatrix();
   	    glRotatef(-180,1,0,0);
		glBegin(GL_POLYGON);//Front wings
		glColor3f( 0.00 ,0.00, 0.61);
		glVertex3f(-4.5,-0.0,-1.5);
		glColor3f( 1 ,1,1);
		glVertex3f(-3,0,0);
		glVertex3f(-0.5,-0.5,1.5);
		glColor3f( 1 ,1,1);
		glVertex3f(0.5,-0.5,1.5);
		glVertex3f(3,0,0);
		glColor3f( 0.00 ,0.00, 0.61);
		glVertex3f(4.5,0,-1.5);	
		glEnd();

	
		glTranslatef(0,0,-2);
		glBegin(GL_POLYGON);//back wings
		glColor3f( 1 ,1,1);
		glVertex3f(-1,0,0);
		glColor3f( 0.329412 ,0.329412,0.329412);
		glVertex3f(0,-0.25,0.5);
		glColor3f( 0.329412 ,0.329412,0.329412);
		glVertex3f(1,0,0);
		glColor3f( 1 ,1,1);
		glVertex3f(1,0,-0.25);
		glVertex3f(-1,0,-0.25);
		glEnd();
		glPopMatrix();


		glPushMatrix();
		glRotatef(-180,1,0,0);//Back Panels		
		glTranslatef(-0.4,-0.5,-2);//left
		glBegin(GL_POLYGON);
		glColor3f( 1,1,1);
		glVertex3f(0,0.5,0.5);
		glColor3f( 0.00 ,0.00, 0.61);
		glVertex3f(0,0.5,-0.5);
		glVertex3f(0,-1,-1);
		glVertex3f(0,-0.5,0.5);
		glEnd();
		glPopMatrix();
	
		glPushMatrix();
		glRotatef(-180,1,0,0);	//Back Panels
		glTranslatef(0.4,-0.5,-2);//right
		glBegin(GL_POLYGON);
		glColor3f( 1,1,1);
		glVertex3f(0,0.5,0.5);
		glColor3f( 0.00 ,0.00, 0.61);
		glVertex3f(0,0.5,-0.5);
		glVertex3f(0,-1,-1);
		glVertex3f(0,-0.5,0.5);
		glEnd();
		glPopMatrix();
	
		glPushMatrix();	
		glRotatef(-180,1,0,0);	//Right Engine
		glColor3f(0.556863,0.137255,0.137255);
		glTranslatef(0.2,-0.2,-2.5);
		glRotatef(-10,1,0,0);
		glutWireCone(0.2,0.8,15,15);
		glPopMatrix();
	
		glPushMatrix();
		glRotatef(-180,1,0,0);	//Left Engine
		glColor3f(0.556863,0.137255,0.137255);
		glTranslatef(-0.2,-0.2,-2.5);
		glRotatef(-10,1,0,0);
		glutWireCone(0.2,0.8,15,15);
		glPopMatrix();
	
		glColor3f( 0.90 ,0.91,0.98);
		glRotatef(-180,1,0,0);//front deck
		glPushMatrix();
		glTranslatef(0,-1,0);
		glRotatef(-10,1,0,0);
		glutWireCone(0.7,4.0,185,185);
		glPopMatrix();
		
		glColor3f( 0.90 ,0.91,0.98);
		glPushMatrix();
		glTranslatef(0,-1,0);
		glRotatef(185,1,0,0);
		glutWireCone(0.7,0.6,165,165);
		glPopMatrix();
		
		glColor3f( 0.90 ,0.91,0.98);
		glPushMatrix();
		glTranslatef(0,-1,0);
		glRotatef(170,1,0,0);
		glutWireCone(0.7,0.6,165,165);
		glPopMatrix();
		
		glColor3f( 0.90 ,0.91,0.98);
		glPushMatrix();
		glTranslatef(0,-1,0);
		glRotatef(190,1,0,0);
		glutWireCone(0.7,0.8,165,165);
		glPopMatrix();
		
		glColor3f( 0.678431, 0.917647 , 0.917647);
		glPushMatrix();
		glTranslatef(0,-1,0);
		glRotatef(205,1,0,0);
		glutWireCone(0.7,1.1,165,165);
		glPopMatrix();
		glColor3f( 0.678431, 0.917647 , 0.917647);
		glPushMatrix();
		glTranslatef(0,-1,0);
		glRotatef(215,1,0,0);
		glutWireCone(0.7,1.3,165,165);
		glPopMatrix();
		
		
		glColor3f( 0.90 ,0.91,0.98);
		glPushMatrix();
		glTranslatef(0,-1,0);
		glRotatef(220,1,0,0);
		glutWireCone(0.75,1.5,165,165);
		glPopMatrix();
		
		
		glColor3f(0,0,0);
		glPushMatrix();
		glTranslatef(-2,0.2,-1);//left Rockets
		glutSolidCone(0.1,2.5,10,10);
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(-3,0.2,-1);//Extreme-left Rockets
		glRotatef(0,1,0,0);
		glutSolidCone(0.1,2.5,10,10);
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(2,0.2,-1);//Right Rockets
		glutSolidCone(0.1,2.5,10,10);
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(3,0.2,-1);//Extreme-right Rockets
		glutSolidCone(0.1,2.5,10,10);
		glPopMatrix();

}
void Player::Player_Aircraft(Camera *camera ,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat rotz){
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//gluLookAt(camera->getCamera_x()+(10+camera->getCamera_zoom())*sin(camera->getCamera_rotate()),1.0,camera->getCamera_z()+(10+camera->getCamera_zoom())*cos(camera->getCamera_rotate()), camera->getCamera_x() ,0.0,camera->getCamera_z(),0.0 , 5.0,0.0);
	glTranslatef(posx,posy,posz-4);//animation on 2d
	glRotatef(rotz,0,0,1);
	Aircraft();
	
}
void Player:: PlainSphere(Camera *camera ,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat size,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	gluLookAt(sin(camera->getCamera_rotate()),0.0,cos(camera->getCamera_rotate()), 0.0 ,0.0,0.0,0, 10,0.0);
	glTranslatef(camera->getCamera_x(),0.0,-camera->getCamera_z());	
	glTranslatef(posx,posy,posz);
	glScalef(size,size,size);
	glColor3f(red,green,blue);
	glutSolidSphere(1,35,35);
	glPopMatrix();
}
