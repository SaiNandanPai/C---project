#include "DisplayManager.h"
#include <iostream>

/*Required Variables*/
bool Anime = false,AnimeDefault = false,Info = false,Pause = false;
GLdouble  dx =0,dz=0,Angle=0;                                                                     
GLdouble  camera_x = 0,camera_z = 0;
GLdouble  camera_rotate =0 ;
GLfloat JET_SPEED =0,TargetButton1,TargetButton2,TargetButton3;
GLfloat Mouse_x=0,Mouse_y=0,Hyperx=0,Hypery=0;
GLdouble Aircraft_Yaw=0,Aircraft_x=0;
GLdouble model[16],x,y,z;
GLfloat Zoom = 0,AnimateButton1,AnimateButton2,AnimateButton3,AnimateMeter=0,AnimateInfoButton;
GLfloat Global_HIGHLIGHTER,	Global_HIGHLIGHTER_Y,Department_HIGHLIGHTER_Y,Department_HIGHLIGHTER,Lab_HIGHLIGHTER_Y,Lab_HIGHLIGHTER,MyName_HIGHLIGHTER_Y,MyName_HIGHLIGHTER,Name_HIGHLIGHTER_Y,Name_HIGHLIGHTER;
GLint window,InfoButtonHitCount=0;
void InfoTab();
void Button1();
void Button2();
void Button3();
	Camera *camera;
	Entities *Block;
	Player *PlayerObject,*WorldObject;
	Interface *interface;
	
DisplayManager:: DisplayManager(char *WindowName){
	initDisplay();
	createDisplay(WindowName);
}

DisplayManager:: ~DisplayManager(){
	delete camera;
	delete WorldObject;
	delete Block;
	delete PlayerObject;
	delete interface;
}
int DisplayManager:: initDisplay(){                           
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(300,100);
	glutInitWindowSize(width,height);    
	camera = new Camera();
   	Block = new Entities();
	PlayerObject = new Player();
	WorldObject = new Player();  
	interface = new Interface();                      
return true;
}

int DisplayManager:: createDisplay(char *WindowName){
window=glutCreateWindow(WindowName);
	glutReshapeFunc(Reshape);
	glutDisplayFunc(Render);
	glutIdleFunc(callBack);
	glutMouseFunc(Mouse);
	glutPassiveMotionFunc(My_mouse_routine );
	glutKeyboardFunc(Keyboard);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}

void DisplayManager:: Render(){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
//gluLookAt(camera->getCamera_x()+(10+camera->getCamera_zoom())*sin(camera->getCamera_rotate()) ,1.0,camera->getCamera_z()+(10+camera->getCamera_zoom())*cos(camera->getCamera_rotate()), camera->getCamera_x() ,0.0,camera->getCamera_z(),0.0 , 5.0,0.0);


	PlayerObject->Player_Aircraft(camera,0.0+camera->getCamera_Yaw_x(),-4.0,-7.0+camera->getCamera_zoom(),camera->getCamera_Yaw());

	Block->createCube(camera,0,-2,-20,0,0,0);

	Block->Building(camera,0,-1.5,-50,1,1,5,0);
	Block->Building(camera,0,5,-350,1,1,1,0);
	Block->Building(camera,-4,-5,-350,1,1,1,0);
	Block->Building(camera,0,-1.5,-200,1,1,10,0);
	Block->Building(camera,0,0,-350,1,1,1,0);
	Block->Building(camera,0,0,-650,1,1,5,0);
	Block->Building(camera,4,5,-750,1,1,10,0);
	Block->Building(camera,0,-1.5,-1350,4+Hyperx,4+Hypery,4,Mouse_x);
	Block->Building(camera,0,-1.5,-1350,1,1+Hyperx,1+Hypery,Mouse_y);
	
	
	interface->DeckBackground(0,-3,-4,0.75,1.5,1.5,1,1,1);
	
	interface->Button(-0.5,-1.7,-3,0.15-AnimateButton1,0.15-AnimateButton1,0.25,1,0+TargetButton1,0);/*Button 1*/
	interface->Button(-0.5,-2.1,-3,0.15-AnimateButton2,0.15-AnimateButton2,0.25,1,0+TargetButton2,0);/*Button 2*/
	interface->Button(-0.5,-2.5,-3,0.15-AnimateButton3,0.15-AnimateButton3,0.25,1,0+TargetButton3,0);/*Button 3*/
	
	interface->Button1Text(-0.35,-1.15,-2,0.015-AnimateButton1,0.05-AnimateButton1,1,0,0,0);
	interface->DefaultButtonText(-0.30,-1.15,-2,0.015-AnimateButton1,0.05-AnimateButton1,1,0,0,0);
	
	interface->Button2Text(-0.35,-1.40,-2,0.015-AnimateButton2,0.05-AnimateButton2,1,0,0,0);
	interface->DefaultButtonText(-0.30,-1.40,-2,0.015-AnimateButton2,0.05-AnimateButton2,1,0,0,0);
	
	interface->Button3Text(-0.35,-1.65,-2,0.015-AnimateButton3,0.05-AnimateButton3,1,0,0,0);
	interface->DefaultButtonText(-0.30,-1.65,-2,0.015-AnimateButton3,0.05-AnimateButton3,1,0,0,0);
	
	interface->Button(-1.2,2.8,-3,0.25-AnimateInfoButton,0.10-AnimateInfoButton,0.25,0,1,0);/*Menu Button1*/
	interface->InfoButtonText(-1.25,2.6+(2*AnimateInfoButton),-2.8-(2*AnimateInfoButton),0.025,0.05,0.25,1,1,1);
	
	interface->Button(-0.68,2.8,-3,0.25,0.10,0.25,0,1,0);/*Menu Button2*/
	interface->MenuButtonText(-0.75,2.6,-2.8,0.025,0.05,0.25,1,1,1);
	
	if(Info == true){	
	interface->CollegeNameText(-1.0,3-Global_HIGHLIGHTER_Y,-6.6+Global_HIGHLIGHTER,0.02,0.10,0.05,1-Global_HIGHLIGHTER,1,1-Global_HIGHLIGHTER);
	interface->DepartmentText(-1.5,2.5-Department_HIGHLIGHTER_Y,-6.6+Department_HIGHLIGHTER,0.02,0.10,0.05,1-Department_HIGHLIGHTER,1,1-Department_HIGHLIGHTER);
	interface->LabText(-1.8,2.0-Lab_HIGHLIGHTER_Y,-6.6+Lab_HIGHLIGHTER,0.02,0.10,0.05,1-Lab_HIGHLIGHTER,1,1-Lab_HIGHLIGHTER);
	interface->MyText(0.5-MyName_HIGHLIGHTER_Y,1-MyName_HIGHLIGHTER_Y,-6.6+MyName_HIGHLIGHTER,0.02,0.10,0.05,1-MyName_HIGHLIGHTER,1,1-MyName_HIGHLIGHTER);
	interface->ProfessorText(-1.4+Name_HIGHLIGHTER_Y,1-Name_HIGHLIGHTER_Y,-6.6+Name_HIGHLIGHTER,0.02,0.10,0.05,1-Name_HIGHLIGHTER,1,1-Name_HIGHLIGHTER);
}
	
	interface->Counter(camera,0.8,-2,-3,0.05,0.15,0.25,1,0,0);// Polygon Collision Counter
	
	interface->SpeedGauge(0.1+AnimateMeter,-2,-3,0.025,0.5,1,0,0,0);/*Gauge Animation*/
	interface->AltitudeMeter(0,-2,-4,0.3,0.4,1,0,2,0);
	interface->AltitudeMeter(-0.15,-2,-4,0.3,0.4,1,0,2,0);
	interface->AltitudeMeter(0.15,-2,-4,0.3,0.4,1,0,2,0);
	interface->AltitudeMeter(0.30,-2,-4,0.3,0.4,1,0,2,0);
	interface->Box(0.15,-2.6,-4,0.40,0.6,1,0,0,0.5);

	
	

  	if(dz==0)
	camera_z -= (RUN_SPEED);          
		if(Pause == false){                                 
	dx=(JET_SPEED+RUN_SPEED)*sin(camera_rotate);
	dz=(JET_SPEED+RUN_SPEED)*cos(camera_rotate);    
	camera_x += dx ;                                      
	camera_z -= dz ;  
	if(AnimeDefault == true){
		if(AnimateMeter==0)AnimateMeter = 0;	
		else if(AnimateMeter<0)AnimateMeter+=0.0025;
		else if(AnimateMeter>0)AnimateMeter-=0.0025;/*Gauge Animation updater*/
		
	}else if(Anime==true && AnimeDefault==false){
		AnimateMeter+=0.0025;
		if(AnimateMeter>0.2)
		AnimateMeter=0.22;
	}else if(Anime == false && AnimeDefault==false){
		AnimateMeter-=0.0025;
		if(AnimateMeter<-0.2)
		AnimateMeter=-0.2;
	}
}
		if(Aircraft_Yaw>0)
		Aircraft_Yaw-=0.5;
		else if(Aircraft_Yaw<0)
		Aircraft_Yaw+=0.5;/*Pitch Animation updater*/
		
		if(Aircraft_Yaw==0)
		Aircraft_Yaw = 0;
		
		if(Aircraft_x>0.1)
		Aircraft_x-=0.03;
		else if(Aircraft_x<-0.1)
		Aircraft_x+=0.03;        
		
		
		if(Hyperx>45)Hyperx-=1;
		else if(Hyperx<1)Hyperx+=1;

		if(Hypery>90)Hypery-=1;
		else if(Hypery<1)Hypery+=1;
		     
	camera->setCamera_Position(camera_x,camera_z,camera_rotate,Aircraft_Yaw,Aircraft_x);/*Update the positiion in global Camera object*/


	if(camera->getCount()==8){
		glutDestroyWindow(window);
	}
	glutSwapBuffers();
	glFlush();
}




void DisplayManager:: callBack(){
	glutPostRedisplay();
}
void DisplayManager:: Reshape(int width, int height){
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
if(width<=height)
	gluPerspective(90,2.0,1.0,1000.0);
	//glFrustum(-2.0, 2.0, -2.0 *(GLfloat)height/(GLfloat)width,2.0*(GLfloat) height/(GLfloat) width, 1.0, 120.0);
else
	gluPerspective(90,0.5,1.0,1000.0);
	//glFrustum(-2.0, 2.0, -2.0 *(GLfloat)width/(GLfloat)height,2.0* (GLfloat) width / (GLfloat) height, 1.0, 120.0);
	glMatrixMode(GL_MODELVIEW);
}
void DisplayManager:: My_mouse_routine (int x, int y){

	Mouse_x=500;//center of screen
	Mouse_y=400;
	
	if(y<1)
	y=1;
	if(y>795)
	y=795;
	
	if(x>345&&x<635&&y>210&&y<220){
	Global_HIGHLIGHTER_Y=0.85;//to set it down
	Global_HIGHLIGHTER=2;//to bring it front and highlight
	}
	else {
	Global_HIGHLIGHTER_Y=0;	
	Global_HIGHLIGHTER=0;//Highlight
}
	if(x>270&&x<750&&y>240&&y<250){
	Department_HIGHLIGHTER_Y=0.75;//to set it down
	Department_HIGHLIGHTER=2;//to bring it front and highlight
	}
	else {
	Department_HIGHLIGHTER_Y=0;	
	Department_HIGHLIGHTER=0;//Highlight
}
	if(x>225&&x<790&&y>270&&y<280){
	Lab_HIGHLIGHTER_Y=0.6;//to set it down
	Lab_HIGHLIGHTER=2;//to bring it front and highlight
	}
	else {
	Lab_HIGHLIGHTER_Y=0;	
	Lab_HIGHLIGHTER=0;//Highlight
}
if(x>560&&x<790&&y>334&&y<410){
	MyName_HIGHLIGHTER_Y=0.2;//to set it down
	MyName_HIGHLIGHTER=2;//to bring it front and highlight
	}
	else {
	MyName_HIGHLIGHTER_Y=0;	
	MyName_HIGHLIGHTER=0;//Highlight
}
if(x>255&&x<465&&y>330&&y<395){
	Name_HIGHLIGHTER_Y=0.2;//to set it down
	Name_HIGHLIGHTER=2;//to bring it front and highlight
	}
	else {
	Name_HIGHLIGHTER_Y=0;	
	Name_HIGHLIGHTER=0;//Highlight
}


//TO Navigate only outside the deck
if(y<500&&Pause==false){
	if((x-Mouse_x)>0){
	Angle -= 0.00010;
	camera_rotate = Angle*57.2958;
	dx=(JET_SPEED+RUN_SPEED)*sin(camera_rotate);/*Automatically calculate the translation wrt to RUN_SPEED*/
	dz=(JET_SPEED+RUN_SPEED)*cos(camera_rotate);/**/
	//std::cout<<dx<<"   deviation  "<<dz<<"\n";

	Aircraft_Yaw-=1.5;
	Aircraft_x-=0.1;
	if(Aircraft_x<-5.5)
	Aircraft_x=-5.5;
	camera->setCamera_Position(camera_x,camera_z,camera_rotate,Aircraft_Yaw,Aircraft_x);/*Update the positiion in global Camera object*/
	DisplayManager::Render();
	}  //mouse moved to right
	
	if((x-Mouse_x)<0){
	Angle += 0.00010; /*0.0017 because we are turning wrt frames per second and not wrt system time so lower the value better the smoothness of turning 1340fps for 64bit system (const must be changed wrt 32 bit system)*/
	camera_rotate = Angle*57.2958; /*180/3.14 = 57.2958 since we want to rotate in terms of degrees*/
	dx=(JET_SPEED+RUN_SPEED)*sin(camera_rotate);
	dz=(JET_SPEED+RUN_SPEED)*cos(camera_rotate);

	std::cout<<dx<<"    "<<dz<<"\n";
	
		Aircraft_Yaw+=1.5;
		Aircraft_x+=0.1;
		if(Aircraft_x>5.5)
		Aircraft_x=5.5;
	camera->setCamera_Position(camera_x,camera_z,camera_rotate,Aircraft_Yaw,Aircraft_x);/*Update the positiion in global Camera object*/
	DisplayManager::Render();
	}  //mouse moved to left
}
	DisplayManager::Render();
	//std::cout<<x<<" "<<y<<"\n";
	
} 

void DisplayManager:: Mouse(int BUTTON, int STATE, int x, int y){
	Mouse_y=400;
		std::cout<<x<<"      "<<" "<<y<<"\n";
	if(BUTTON==GLUT_LEFT_BUTTON && STATE == GLUT_DOWN){
	if(Pause == false){
		if(x>290&&x<380&&y>605&&y<645)Button1();
		if(x>290&&x<380&&y>660&&y<700)Button2();
		if(x>290&&x<380&&y>715&&y<755)Button3();
	}
		if(x>30&&x<180&&y>10&&y<40)InfoTab();
	}
		   											// Wheel reports as button 3(scroll up) and button 4(scroll down)
   	else if ((BUTTON == 3) && STATE == GLUT_UP && Pause == false){ 		
        if(Zoom==ZOOM_IN_LEVEL)Zoom=ZOOM_IN_LEVEL;              /*Counts the required zoom-in value	// It's a wheel event*/
		else Zoom--;
       	camera->setCamera_zoom(Zoom);  /*Updates the camera positon*/
      }

   	else if((BUTTON == 4) && STATE == GLUT_UP && Pause == false){
		if(Zoom==ZOOM_OUT_LEVEL)Zoom=ZOOM_OUT_LEVEL;       /*Counts the required zoom-out value*/
		else Zoom++;
        camera->setCamera_zoom(Zoom);
	}

	DisplayManager::Render();
	}

void DisplayManager:: Keyboard(unsigned char key, int xx, int yy){

	if (key == 'w') {
	if(dz==0)
	camera_z -= RUN_SPEED; /* Set the initial speed*/
	
	camera_x += dx ; /*Add only the updated tranlation and not the total speed*/
	camera_z -= dz ;/**/
	std::cout<<"this is camera_z + dz"<<camera_z<<"\n";
	camera->setCamera_Position(camera_x,camera_z,camera_rotate,Aircraft_Yaw,Aircraft_x);/*Update the positiion in global Camera object*/
	//camera->setCamera_count(Count);/*Animation of Sphere and First Person*/
}
else if (key == 's'){
	if(dz==0)
	camera_z += RUN_SPEED;

	camera_x -= dx ;
	camera_z += dz ;
	camera->setCamera_Position(camera_x,camera_z,camera_rotate,Aircraft_Yaw,Aircraft_x);/*Update the positiion in global Camera object*/
	//camera->setCamera_count(Count);/*Animation of Sphere and First Person*/
}
else if (key == 'd') {
	Angle -= 0.00010;
	camera_rotate = Angle*57.2958;
	dx=(JET_SPEED+RUN_SPEED)*sin(camera_rotate);/*Automatically calculate the translation wrt to RUN_SPEED*/
	dz=(JET_SPEED+RUN_SPEED)*cos(camera_rotate);/**/
	std::cout<<dx<<"   deviation  "<<dz<<"\n";
	Aircraft_Yaw-=3.5;
	Aircraft_x-=0.3;
	if(Aircraft_x<-5.5)
	Aircraft_x=-5.5;
	camera->setCamera_Position(camera_x,camera_z,camera_rotate,Aircraft_Yaw,Aircraft_x);/*Update the positiion in global Camera object*/
	DisplayManager::Render();
}
else if (key == 'a'){
	Angle += 0.00010; /*0.0017 because we are turning wrt frames per second and not wrt system time so lower the value better the smoothness of turning 1340fps for 64bit system (const must be changed wrt 32 bit system)*/
	camera_rotate = Angle*57.2958; /*180/3.14 = 57.2958 since we want to rotate in terms of degrees*/
	dx=(JET_SPEED+RUN_SPEED)*sin(camera_rotate);
	dz=(JET_SPEED+RUN_SPEED)*cos(camera_rotate);
	
	Aircraft_Yaw+=3.5;
	Aircraft_x+=0.3;
	if(Aircraft_x>5.5)
	Aircraft_x=5.5;
	camera->setCamera_Position(camera_x,camera_z,camera_rotate,Aircraft_Yaw,Aircraft_x);/*Update the positiion in global Camera object*/
	std::cout<<dx<<"    "<<dz<<"\n";
	DisplayManager::Render();
}
else if(key == '1')Button1();
else if(key == '2')Button2();
else if(key == '3')Button3();
else if(key == 'q')InfoTab();


DisplayManager::Render(); 
}

void InfoTab(){
	Info = true;
			Pause = true;
			InfoButtonHitCount++;
			AnimateInfoButton = 0.025;/*Info Button animation*/
			AnimateButton1=0;/*Button animation*/
			AnimateButton2=0; 
			AnimateButton3=0;
			TargetButton3=0;/*Button animation color*/
			TargetButton1=0;
			TargetButton2=0;
			JET_SPEED = 0;
			if(InfoButtonHitCount == 2){
			InfoButtonHitCount = 0;
			Info=false;
			Pause = false;
			AnimateInfoButton = 0;
}
}

void Button1(){
			AnimateButton1 = 0.025;/*Button animation*/
			AnimateButton2=0; 
			AnimateButton3=0;
			Anime = true;
			AnimeDefault = false;
			TargetButton1 = 0.5;/*Button animation color*/
			TargetButton2=0;
			TargetButton3=0;
			JET_SPEED = 0.2;
}

void Button2(){
			AnimateButton2 = 0.025;/*Button animation*/
			AnimateButton1=0;
			AnimateButton3=0;
			AnimeDefault = true;
			TargetButton2 = 0.5;/*Button animation color*/
			TargetButton1=0;
			TargetButton3=0;
		    JET_SPEED = 0.03;
}

void Button3(){
			AnimateButton3 = 0.025;/*Button animation*/
			AnimateButton1=0;
			AnimateButton2=0;
			Anime = false;
			AnimeDefault = false;
			TargetButton3 = 0.5;/*Button animation color*/
			TargetButton1=0;
			TargetButton2=0;
			JET_SPEED = 0.005;
}
 /*Call Back Once Key is pressed*/







