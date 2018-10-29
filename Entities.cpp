#include "Entities.h"


void Entities:: createCube(Camera *camera,GLfloat posx, GLfloat posy,GLfloat posz,GLfloat rotx,GLfloat roty,GLfloat rotz){

	glMatrixMode(GL_MODELVIEW);
	glScalef(1,1,1);
	LoopWall(camera, 0,0,posy,-50);
	CalculateVector_LoopWall();
	Collision1 = getCollision();
	if(Collision1 == true)camera->Count=1;

	glMatrixMode(GL_MODELVIEW);
	glScalef(1,1,1);
	LoopWall(camera, 0,0,posy,-200);
	CalculateVector_LoopWall();
	Collision2 = getCollision();
	if(Collision2 == true)camera->Count=2;

	glMatrixMode(GL_MODELVIEW);
	glScalef(2,2,1);
	LoopWall(camera, 0,-10,posy,-350);
	CalculateVector_LoopWall();
	Collision3 = getCollision();
	if(Collision3 == true)camera->Count=3;
	
	glMatrixMode(GL_MODELVIEW);
	glScalef(2,2,1);
	LoopWall(camera, 0,10,posy,-650);
	CalculateVector_LoopWall();
	Collision4 = getCollision();
	if(Collision4 == true)camera->Count=4;
		
	glMatrixMode(GL_MODELVIEW);
	glScalef(2,2,1);
	LoopWall(camera, 0,4,posy,-750);
	CalculateVector_LoopWall();
	Collision5 = getCollision();
	if(Collision5 == true)camera->Count=5;
		
	glMatrixMode(GL_MODELVIEW);
	glScalef(2,2,1);
	LoopWall(camera, 0,-10,posy,-950);
	CalculateVector_LoopWall();
	Collision6 = getCollision();
	if(Collision6 == true)camera->Count=6;
	
	glMatrixMode(GL_MODELVIEW);
	glScalef(2,2,1);
	LoopWall(camera, 0,0,posy,-1150);
	CalculateVector_LoopWall();
	Collision7 = getCollision();
	if(Collision7 == true)camera->Count=7;
		
	glMatrixMode(GL_MODELVIEW);
	glScalef(2,2,1);
	LoopWall(camera, 0,0,posy,-1350);
	CalculateVector_LoopWall();
	Collision8 = getCollision();
	if(Collision8 == true)camera->Count=8;

	if(Collision1==true&&Collision2==true&&Collision3==true&&Collision4==true&&Collision5==true&&Collision6==true&&Collision7==true&&Collision8==true)
	camera->Count = 9;
}


void Entities:: Building(Camera *camera,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat sx,GLfloat sy,GLfloat sz,GLfloat rot){
	glLoadIdentity();
	gluLookAt(sin(camera->getCamera_rotate()),0.0,cos(camera->getCamera_rotate()), 0.0 ,0.0,0.0,0, 10,0.0);
	//gluLookAt(camera->getCamera_x()+(10+camera->getCamera_zoom())*sin(camera->getCamera_rotate()),1.0,camera->getCamera_z()+(10+camera->getCamera_zoom())*cos(camera->getCamera_rotate()), camera->getCamera_x() ,0.0,camera->getCamera_z(),0.0 , 5.0,0.0);
	glTranslatef(camera->getCamera_x(),0,-camera->getCamera_z());
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(sx,sy,sz);
	glRotatef(rot,1,1,0);
	Floor();
	glPopMatrix();
}

void Entities:: LoopWall(Camera *camera,GLfloat roty,GLfloat posx,GLfloat posy,GLfloat posz){
	glLoadIdentity();
	gluLookAt(sin(camera->getCamera_rotate()),0.0,cos(camera->getCamera_rotate()), 0.0 ,0.0,0.0,0, 10,0.0);
	glTranslatef(camera->getCamera_x(),0,-camera->getCamera_z());
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glRotatef(roty,0,1,0);
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	glVertex3f(Wall_Width_x,Wall_Height,1.0);
	glColor3f(red,0,blue);
	glVertex3f(-Wall_Width_x,Wall_Height,1.0);
	glColor3f(red,green,0);
	glVertex3f(-Wall_Width_x,-Wall_Height,1.0);
	glColor3f(0,green,blue);
	glVertex3f(Wall_Width_x,-Wall_Height,1.0);
	glEnd();
	glGetDoublev(GL_MODELVIEW_MATRIX,model);
	glPopMatrix();
}





void Entities:: Floor(){
FrontWall();
glTranslatef(3.0,0,-2);
SideWall();
glTranslatef(-3,0,-4);
FrontWall();
glTranslatef(-3.0,0,4);
SideWall();
glTranslatef(3,4,0);
glRotatef(90,1,0,0);//Cieling
FrontWall();
}
void Entities:: FrontWall(){
glPushMatrix();
	glBegin(GL_LINE_LOOP);
	glColor3f(red,green,blue);
	glVertex3f(Wall_Width_x,Wall_Height,1.0);
	glColor3f(red,green,blue);                             //wall 1
	glVertex3f(-Wall_Width_x,Wall_Height,1.0);
	glColor3f(red,green,0);
	glVertex3f(-Wall_Width_x,-Wall_Height,1.0);
	glColor3f(red,0,blue);
	glVertex3f(Wall_Width_x,-Wall_Height,1.0);
	glEnd();
glPopMatrix();
}
void Entities:: SideWall(){
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.5,0.5);
	glVertex3f(0,Wall_Height,Wall_Width_z);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0,Wall_Height,-Wall_Width_z);
	glColor3f(0.2,0.1,0.1);
	glVertex3f(0,-Wall_Height,-Wall_Width_z);
	glColor3f(0.0,0.0,1.0);
	glVertex3f(0,-Wall_Height,Wall_Width_z);
	glEnd();
	glPopMatrix();
}
GLfloat Entities:: CalculateVector_LoopWall(){
GLint i;
GLfloat magnitude;
GLfloat mag_PN,mag_p1;
GLfloat DotProduct =0,angle, distanceFromPlane , result;

p1[1]= Wall_Width_x + model[12];
p1[2]= Wall_Height + model[13];
p1[3]= 1.0 + model[14];

p2[1]= -Wall_Width_x + model[12];
p2[2]= Wall_Height + model[13];
p2[3]= 1.0 + model[14];


p3[1]= -Wall_Width_x + model[12];
p3[2]= -Wall_Height + model[13];
p3[3]= 1.0 + model[14];

p4[1] = Wall_Width_x + model[12];
p4[2] = -Wall_Height + model[13];
p4[3] = 1.0 + model[14];

for( i=0;i<=3;i++){
	Vec1[i]=p1[i]-p2[i];/*Vector1 p1-p2*/
	Vec2[i]=p3[i]-p2[i];/*Vector2 p3-p2*/
 }
	/*Calculating CROSS PRODUCTS of two vectors [sin(90)=1,n^=1]....|a||b|sin(90).n^*/
	planeNormal[1]=(Vec1[2]*Vec2[3])-(Vec1[3]*Vec2[2]);
	planeNormal[2]=(Vec1[3]*Vec2[1])-(Vec1[1]*Vec2[3]);
	planeNormal[3]=(Vec1[1]*Vec2[2])-(Vec1[2]*Vec2[1]);
	magnitude=sqrt( (planeNormal[1]*planeNormal[1]) + (planeNormal[2]*planeNormal[2]) + (planeNormal[3]*planeNormal[3]) );
	for(i=1;i<=3;i++)
	planeNormal[i]=	planeNormal[i]/magnitude;

	
	DotProduct = (planeNormal[1]*p1[1]) + (planeNormal[2]*p1[2]) + (planeNormal[3]*p1[3]); //A.B dot product 
//	angle = acos(DotProduct/(mag_PN*mag_p1)); //calculating angle between those vectors 
	distanceFromPlane = -DotProduct;

	hit = checkCollision(distanceFromPlane);
	isPointWithinPlane = checkPlaneBound();
	
	if(hit && isPointWithinPlane == true){
//	std::cout<<" collision has occured within plane "<<"\n";
	Collision = true;
}
else Collision = false;
}

bool Entities:: checkCollision(GLdouble distanceFromPlane){
	GLdouble result , magnitude ,t ,vec1[4],vec2[4],vec3[4],vec4[4] ,v1,v2,v3,v4;
	GLint pStartLoc,pDestLoc ,i;
	/*Classification of start and destination point*/
	pStart[1]=0.0;
	pStart[2]=1.0;
	pStart[3]=-1.0;//xyz for start point
	
	pDest[1]=0.0;
	pDest[2]=1.0;
	pDest[3]=-2.0;//xyz for end point (consider as a ray)
	
	result = (planeNormal[1]*pStart[1]) + (planeNormal[2]*pStart[2]) + (planeNormal[3]*pStart[3]) + distanceFromPlane ; /*D.P(N,pstart)+d*/
	if(result>0.0f)pStartLoc = 1 ;//1 -> plane front
	else if(result < 0.0f)pStartLoc = -1 ; //-1 plane back
	else pStartLoc = 0 ; //0-> on plane
	
	result = (planeNormal[1]*pDest[1]) + (planeNormal[2]*pDest[2]) + (planeNormal[3]*pDest[3]) + distanceFromPlane ;
	if(result>0.0f)pDestLoc = 1 ;//1 -> plane front
	else if(result < 0.0f)pDestLoc = -1 ; //-1 plane back
	else pDestLoc = 0 ; //0-> on plane
	
	for(i=1;i<=3;i++)
	Ray[i] = pDest[i]-pStart[i]; /*Computing Ray for star and end point  ray= pDest- pStart*/

	magnitude = sqrt((Ray[1]*Ray[1])+(Ray[2]*Ray[2])+(Ray[3]*Ray[3])); /*Normalizing Ray vector*/
	for(i=1;i<=3;i++)
	Ray[i] = Ray[i]/magnitude;

	/*t= - D.P(N,pstart)+d   / D.P(N,ray)         to find the intersection point on plane*/
	t = -((planeNormal[1]*pStart[1]) + (planeNormal[2]*pStart[2]) + (planeNormal[3]*pStart[3]) + distanceFromPlane) / ((planeNormal[1]*Ray[1]) + (planeNormal[2]*Ray[2]) + (planeNormal[3]*Ray[3]));
	for(i=1;i<=3;i++)
	intersectionPoint[i] = pStart[i] + (Ray[i] * t) ;
	//std::cout<<"Intersection point = "<<intersectionPoint[1]<<" "<<intersectionPoint[2]<<" "<<intersectionPoint[3] <<"\n";
	
	/*intersection point - four points of plane = for diagnol vectors from intersection points (to calculate angle)*/
	for(i=1;i<=3;i++){
		vec1[i] = intersectionPoint[i] - p1[i];
		vec2[i] = intersectionPoint[i] - p2[i];
		vec3[i] = intersectionPoint[i] - p3[i];
		vec4[i] = intersectionPoint[i] - p4[i];
	}
	
	/*Normalizing the vectors*/
	magnitude = sqrt((vec1[1]*vec1[1])+(vec1[2]*vec1[2])+(vec1[3]*vec1[3]));
	for(i=1;i<=3;i++)
	vec1[i] = vec1[i]/magnitude;

	magnitude = sqrt((vec2[1]*vec2[1])+(vec2[2]*vec2[2])+(vec2[3]*vec2[3]));
	for(i=1;i<=3;i++)
	vec2[i] = vec2[i]/magnitude;

	magnitude = sqrt((vec3[1]*vec3[1])+(vec3[2]*vec3[2])+(vec3[3]*vec3[3]));
	for(i=1;i<=3;i++)
	vec3[i] = vec3[i]/magnitude;

	magnitude = sqrt((vec4[1]*vec4[1])+(vec4[2]*vec4[2])+(vec4[3]*vec4[3]));
	for(i=1;i<=3;i++)
	vec4[i] = vec4[i]/magnitude;
	// Angles around intersection should total 360 degrees (2 PI)
	v1=	(vec1[1]*vec2[1]) + (vec1[2]*vec2[2]) + (vec1[3]*vec2[3]);
	v2=	(vec2[1]*vec3[1]) + (vec2[2]*vec3[2]) + (vec2[3]*vec3[3]);
	v3=	(vec3[1]*vec4[1]) + (vec3[2]*vec4[2]) + (vec3[3]*vec4[3]);
	v4=	(vec4[1]*vec1[1]) + (vec4[2]*vec1[2]) + (vec4[3]*vec1[3]);
	theta =  acos(v1) + acos(v2) + acos(v3) + acos(v4) ;
	//std::cout<<"Angle "<<theta<<"\n";
		if(pStartLoc == pDestLoc) return false; //if both are in front or behind the plane no collision has occured
		else return true; 			
}

bool Entities:: checkPlaneBound(){
	if(fabs(theta - (2*3.14159))<0.1)/*checks if collision occured within the surface*/
	return true;
	else 
	return false;
}
bool Entities:: getCollision(){
	return Collision;
}
GLint Entities:: getCount(){
	return count;
}

