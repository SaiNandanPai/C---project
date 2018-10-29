#include "Interface.h"


void Interface:: Counter(Camera *camera,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue ){
	count = camera->getCount();
		glLoadIdentity();
		glPushMatrix();
		glTranslatef(posx,posy,posz);
		glScalef(scalex,scaley,0);
		glColor3f(red,green,blue);
		if(count == 1)Text1();
		else if(count == 2)Text2();
		else if(count == 3)Text3();
		else if(count == 4)Text4();
		else if(count == 5)Text5();
        else if(count == 6)Text6();
		else if(count == 7)Text7();
  		else if(count == 8)Text8();
        glPopMatrix();
	

}
void Interface:: TextEditor(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,scalez);
	glColor3f(red,green,blue);
}
void Interface:: ProfessorText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	TextEditor(posx+0.07*2,posy,posz,scalex,scaley,scalez,red,green,blue);//Guided
	TextG();
	glPopMatrix();
	TextEditor(posx+0.07*3,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextU();
	glPopMatrix();
	TextEditor(posx+(0.07*4),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*5),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextD();
	glPopMatrix();
	TextEditor(posx+(0.07*6),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*7),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextD();
	glPopMatrix();

	TextEditor(posx+(0.07*10),posy,posz,scalex,scaley,scalez,red,green,blue);//by
	TextB();
	glPopMatrix();
	TextEditor(posx+(0.07*11),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextY();
	glPopMatrix();
	
	
	TextEditor(posx,posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//Ms
	TextM();
	glPopMatrix();
	TextEditor(posx+0.07,posy-0.42,posz,scalex,scaley-0.03,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	
	
	
	TextEditor(posx+(0.07*3),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();
	TextEditor(posx+(0.07*4),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//Tanushree
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*5),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*6),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextU();
	glPopMatrix();
	TextEditor(posx+(0.07*7),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*8),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextH();
	glPopMatrix();
	TextEditor(posx+(0.07*9),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	TextEditor(posx+(0.07*10),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*11),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	
	TextEditor(posx+(0.07*13),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//K
	TextK();
	glPopMatrix();
	
	TextEditor(posx+(0.07*15),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//N
	TextN();
	glPopMatrix();
	
	TextEditor(posx-0.07*2,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);//Assistant
	TextA();
	glPopMatrix();
	TextEditor(posx-0.07,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+0.07,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*2),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*3),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();
	TextEditor(posx+(0.07*4),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*5),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*6),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();
	
	TextEditor(posx+0.07*8,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);//Professor
	TextP();
	glPopMatrix();
	TextEditor(posx+0.07*9,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	TextEditor(posx+(0.07*10),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*11),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextF();
	glPopMatrix();
	TextEditor(posx+(0.07*12),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*13),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*14),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*15),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*16),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();		
	
}
void Interface:: MyText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	TextEditor(posx+0.07*2,posy,posz,scalex,scaley,scalez,red,green,blue);//Project
	TextP();
	glPopMatrix();
	TextEditor(posx+0.07*3,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	TextEditor(posx+(0.07*4),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*5),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextJ();
	glPopMatrix();
	TextEditor(posx+(0.07*6),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*7),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*8),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();
	
	
	TextEditor(posx+(0.07*10),posy,posz,scalex,scaley,scalez,red,green,blue);//by
	TextB();
	glPopMatrix();
	TextEditor(posx+(0.07*11),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextY();
	glPopMatrix();
	
	
	TextEditor(posx,posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//Sai
	TextS();
	glPopMatrix();
	TextEditor(posx+0.07,posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*2),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	
	TextEditor(posx+(0.07*4),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//Nandan
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*5),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*6),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*7),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextD();
	glPopMatrix();
	TextEditor(posx+(0.07*8),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*9),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	
	TextEditor(posx+(0.07*11),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//Pai
	TextP();
	glPopMatrix();
	TextEditor(posx+(0.07*12),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*13),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	
	TextEditor(posx+(0.07*15),posy-0.4,posz,scalex,scaley,scalez,red,green,blue);//M
	TextM();
	glPopMatrix();
	
	TextEditor(posx+0.07*2,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);//1ga14cs113
	Text1();
	glPopMatrix();
	TextEditor(posx+0.07*3,posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextG();
	glPopMatrix();
	TextEditor(posx+(0.07*4),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*5),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	Text1();
	glPopMatrix();
	TextEditor(posx+(0.07*6),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	Text4();
	glPopMatrix();
	TextEditor(posx+(0.07*7),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*8),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*9),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	Text1();
	glPopMatrix();
	TextEditor(posx+(0.07*10),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	Text1();
	glPopMatrix();
	TextEditor(posx+(0.07*11),posy-0.8,posz,scalex,scaley,scalez,red,green,blue);
	Text3();
	glPopMatrix();	

}
void Interface:: CollegeNameText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	TextEditor(posx,posy,posz,scalex,scaley,scalez,red,green,blue);//Global
	TextG();
	glPopMatrix();
	TextEditor(posx+0.07,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextL();
	glPopMatrix();
	TextEditor(posx+(0.07*2),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*3),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextB();
	glPopMatrix();
	TextEditor(posx+(0.07*4),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*5),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextL();
	glPopMatrix();
	
	TextEditor(posx+(0.07*7),posy,posz,scalex,scaley,scalez,red,green,blue);//Academy
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*8),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*9),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*10),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextD();
	glPopMatrix();	
	TextEditor(posx+(0.07*11),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();	
	TextEditor(posx+(0.07*12),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextM();
	glPopMatrix();	
	TextEditor(posx+(0.07*13),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextY();
	glPopMatrix();
	
	TextEditor(posx+(0.07*15),posy,posz,scalex,scaley,scalez,red,green,blue);//of
	TextO();
	glPopMatrix();	
	TextEditor(posx+(0.07*16),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextF();
	glPopMatrix();
	
	
	TextEditor(posx+(0.07*18),posy,posz,scalex,scaley,scalez,red,green,blue);//Technology
	TextT();
	glPopMatrix();
	TextEditor(posx+(0.07*19),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*20),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*21),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextH();
	glPopMatrix();	
	TextEditor(posx+(0.07*22),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();	
	TextEditor(posx+(0.07*23),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();	
	TextEditor(posx+(0.07*24),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextL();
	glPopMatrix();
	TextEditor(posx+(0.07*25),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*26),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextG();
	glPopMatrix();
	TextEditor(posx+(0.07*27),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextY();
	glPopMatrix();
	/*
	
	*/
}
void Interface::DepartmentText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	TextEditor(posx,posy,posz,scalex,scaley,scalez,red,green,blue);//Department
	TextD();
	glPopMatrix();
	TextEditor(posx+0.07,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*2),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextP();
	glPopMatrix();
	TextEditor(posx+(0.07*3),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();	
	TextEditor(posx+(0.07*4),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();	
	TextEditor(posx+(0.07*5),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();	
	TextEditor(posx+(0.07*6),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextM();
	glPopMatrix();
	TextEditor(posx+(0.07*7),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*8),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*9),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();
	
	
	TextEditor(posx+(0.07*11),posy,posz,scalex,scaley,scalez,red,green,blue);//of
	TextO();
	glPopMatrix();	
	TextEditor(posx+(0.07*12),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextF();
	glPopMatrix();
	
	TextEditor(posx+(0.07*14),posy,posz,scalex,scaley,scalez,red,green,blue);//Computer
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*15),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*16),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextM();
	glPopMatrix();
	TextEditor(posx+(0.07*17),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextP();
	glPopMatrix();	
	TextEditor(posx+(0.07*18),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextU();
	glPopMatrix();	
	TextEditor(posx+(0.07*19),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();	
	TextEditor(posx+(0.07*20),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*21),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	
	
	TextEditor(posx+(0.07*23),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*24),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*25),posy,posz,scalex,scaley,scalez,red,green,blue);//Science
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*26),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*27),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*28),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();	
	TextEditor(posx+(0.07*29),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	
		
	TextEditor(posx+(0.07*31),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();	
	TextEditor(posx+(0.07*32),posy,posz,scalex,scaley,scalez,red,green,blue);//And
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*33),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextD();
	glPopMatrix();
	
	
	TextEditor(posx+(0.07*35),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*36),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*37),posy,posz,scalex,scaley,scalez,red,green,blue);//Engineering
	TextG();
	glPopMatrix();
	TextEditor(posx+(0.07*38),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*39),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*40),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();	
	TextEditor(posx+(0.07*41),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();	
	TextEditor(posx+(0.07*42),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();	
	TextEditor(posx+(0.07*43),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*44),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*45),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextG();
	glPopMatrix();
}
void Interface::LabText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	TextEditor(posx,posy,posz,scalex,scaley,scalez,red,green,blue);//Computer
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*2),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextM();
	glPopMatrix();
	TextEditor(posx+(0.07*3),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextP();
	glPopMatrix();	
	TextEditor(posx+(0.07*4),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextU();
	glPopMatrix();	
	TextEditor(posx+(0.07*5),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();	
	TextEditor(posx+(0.07*6),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextE();
	glPopMatrix();
	TextEditor(posx+(0.07*7),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	
	TextEditor(posx+(0.07*9),posy,posz,scalex,scaley,scalez,red,green,blue);//Graphics
	TextG();
	glPopMatrix();
	TextEditor(posx+(0.07*10),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	TextEditor(posx+(0.07*11),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*12),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextP();
	glPopMatrix();	
	TextEditor(posx+(0.07*13),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextH();
	glPopMatrix();	
	TextEditor(posx+(0.07*14),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();	
	TextEditor(posx+(0.07*15),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*16),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	
	
	TextEditor(posx+(0.07*18),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();	
	TextEditor(posx+(0.07*19),posy,posz,scalex,scaley,scalez,red,green,blue);//And
	TextN();
	glPopMatrix();
	TextEditor(posx+(0.07*20),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextD();
	glPopMatrix();
	
	
	TextEditor(posx+(0.07*22),posy,posz,scalex,scaley,scalez,red,green,blue);//Visualisation 
	TextV();
	glPopMatrix();
	TextEditor(posx+(0.07*23),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*24),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*25),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextU();
	glPopMatrix();	
	TextEditor(posx+(0.07*26),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();	
	TextEditor(posx+(0.07*27),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextL();
	glPopMatrix();	
	TextEditor(posx+(0.07*28),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*29),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*30),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*31),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();
	TextEditor(posx+(0.07*32),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+(0.07*33),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();	
	TextEditor(posx+(0.07*34),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();	
	
	
	TextEditor(posx+(0.07*36),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextL();
	glPopMatrix();	
	TextEditor(posx+(0.07*37),posy,posz,scalex,scaley,scalez,red,green,blue);//Laboratory
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*38),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextB();
	glPopMatrix();
	TextEditor(posx+(0.07*39),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();	
	TextEditor(posx+(0.07*40),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	TextEditor(posx+(0.07*41),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextA();
	glPopMatrix();
	TextEditor(posx+(0.07*42),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextT();
	glPopMatrix();	
	TextEditor(posx+(0.07*43),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
	TextEditor(posx+(0.07*44),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextR();
	glPopMatrix();
	TextEditor(posx+(0.07*45),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextY();
	glPopMatrix();	
	
	TextEditor(posx+(0.07*47),posy,posz,scalex,scaley,scalez,red,green,blue);//10CSL67
	Text1();
	glPopMatrix();
	TextEditor(posx+(0.07*48),posy,posz,scalex,scaley,scalez,red,green,blue);
	Text0();
	glPopMatrix();	
	TextEditor(posx+(0.07*49),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextC();
	glPopMatrix();
	TextEditor(posx+(0.07*50),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextS();
	glPopMatrix();
	TextEditor(posx+(0.07*51),posy,posz,scalex,scaley,scalez,red,green,blue);
	TextL();
	glPopMatrix();
	TextEditor(posx+(0.07*52),posy,posz,scalex,scaley,scalez,red,green,blue);
	Text6();
	glPopMatrix();
	TextEditor(posx+(0.07*53),posy,posz,scalex,scaley,scalez,red,green,blue);
	Text7();
	glPopMatrix();	
	
	
}
void Interface::InfoButtonText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	TextEditor(posx,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextI();
	glPopMatrix();
	TextEditor(posx+0.07,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextN();
	glPopMatrix();
	TextEditor(posx+0.07*2,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextF();
	glPopMatrix();
	TextEditor(posx+0.07*3,posy,posz,scalex,scaley,scalez,red,green,blue);
	TextO();
	glPopMatrix();
}
void Interface::MenuButtonText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	TextH();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(posx+0.07,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	TextE();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(posx+0.14,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	TextL();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(posx+0.21,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	TextP();
	glPopMatrix();
}
void Interface:: Button(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue ){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);

	glBegin(GL_POLYGON);
	glColor3f(0,green,0);
	glVertex3f(1,1,0);
	glColor3f(red,0,0);
	glVertex3f(-1,1,0);
	glColor3f(red,0,0);
	glVertex3f(-1,-1,0);
	glColor3f(0,green,0);
	glVertex3f(1,-1,0);	
	glEnd();
	glPopMatrix();
}
void Interface:: SpeedGauge(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);
	glBegin(GL_LINE_LOOP);
	glColor3f(1,1,1);
	glVertex3f(0,1,0);
	glColor3f(1,0,0);
	glVertex3f(-0.5,0,0);
	glColor3f(1,0,0);
	glVertex3f(0.5,0,0);
	glEnd();
	glPopMatrix();

}

void Interface:: Button1Text(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	Text7();
	glPopMatrix();
}

void Interface:: Button2Text(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	Text4();
	glPopMatrix();
}
void Interface:: Button3Text(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	Text2();
	glPopMatrix();
}
void Interface:: DefaultButtonText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);
	glColor3f(1,1,1);
	Text0();
	glPopMatrix();
}
void Interface:: AltitudeMeter(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);

	glColor3f(red,green,blue);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0,0,0);
	glVertex3f(0,1,0);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.1,0,0);
	glVertex3f(0.1,0.5,0);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.2,0,0);
	glVertex3f(0.2,0.5,0);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.3,0,0);
	glVertex3f(0.3,0.5,0);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.4,0,0);
	glVertex3f(0.4,0.5,0);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.5,0,0);
	glVertex3f(0.5,1,0);
	glEnd();/*set 1*/
	glPopMatrix();
}
void Interface:: Box(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	glVertex3f(1,1.7,0);
	glColor3f(0,0,blue);
	glVertex3f(-1,1.7,0);
	glColor3f(red,0,0);
	glVertex3f(-1,-0.25,0);
	glVertex3f(1,-0.25,0);
	glEnd();
	glPopMatrix();
}
void Interface:: DeckBackground(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue){
	glLoadIdentity();
	glPushMatrix();
	glTranslatef(posx,posy,posz);
	glScalef(scalex,scaley,0);

	glColor3f(red,green,blue);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-3,0,0);
	glVertex3f(-2,0,0);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glVertex3f(2,0,0);
	glVertex3f(3,0,0);
	glVertex3f(3,-1,0);
	glVertex3f(-3,-1,0);
	glEnd();
	glPopMatrix();
}
void Interface:: Text0(){
	glBegin(GL_LINE_LOOP);
	glVertex3f(1,1,0);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);/*draw 0*/
	glVertex3f(1,-1,0);
	glEnd();

}
void Interface:: Text1(){
	glBegin(GL_LINE_LOOP);
	glVertex3f(0,1,0);
	glVertex3f(0,-1,0);
	glEnd();
}
void Interface:: Text2(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,0,0);
	glVertex3f(-1,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,0,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(1,-1,0);
	glEnd();

}
void Interface:: Text3(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,0,0);
	glVertex3f(-1,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,0,0);
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(-1,-1,0);
	glEnd();

}
void Interface:: Text4(){
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,0,0);
	glVertex3f(1.5,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(-1,0,0);
	glEnd();
}
void Interface:: Text5(){
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(-1,1,0);
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,0,0);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex3f(-1,0,0);
	glVertex3f(1,0,0);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex3f(1,0,0);
	glVertex3f(1,-1,0);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	
}
void Interface:: Text6(){
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(-1,1,0);
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,0,0);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex3f(-1,0,0);
	glVertex3f(1,0,0);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex3f(1,0,0);
	glVertex3f(1,-1,0);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,0,0);
	glVertex3f(-1,-1,0);
	glEnd();
	
}
void Interface:: Text7(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,-1,0);
	glEnd();
	
}
void Interface:: Text8(){
	glBegin(GL_LINE_LOOP);
	glVertex3f(1,1,0);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);/*draw 0*/
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,0,0);
	glVertex3f(-1,0,0);
	glEnd();
	
}
void Interface:: Text9(){
	glBegin(GL_LINE_LOOP);
	glVertex3f(1,1,0);/*draw 9*/
	glVertex3f(-1,1,0);
	glVertex3f(-1,0,0);
	glVertex3f(1,0,0);
	glVertex3f(1,-1,0);
	glEnd();
	
}
void Interface:: TextA(){
	glBegin(GL_LINES);
	glVertex3f(1.0,-1,0);
	glVertex3f(0,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(0,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.2,0,0);
	glVertex3f(-0.2,0,0);
	glEnd();
} 
void Interface:: TextB(){
	Text8();
}
void Interface:: TextC(){
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(-1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	
} 
void Interface:: TextD(){
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.5,1,0);
	glVertex3f(-0.5,-1,0);
	glEnd();
} 
void Interface:: TextE(){
	
	TextF();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(1,-1,0);
	glEnd();
} 
void Interface:: TextF(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,0,0);
	glVertex3f(1,0,0);
	glEnd();
} 
void Interface:: TextG(){
	TextC();
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(1,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(1,0,0);
	glEnd();
} 
void Interface:: TextH(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,0,0);
	glVertex3f(1,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,-1,0);
	glEnd();
} 
void Interface:: TextI(){
	glBegin(GL_LINES);
	glVertex3f(0,1,0);
	glVertex3f(0,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(1,-1,0);
	glEnd();
}
void Interface:: TextJ(){
	glBegin(GL_LINES);
	glVertex3f(0,1,0);
	glVertex3f(0,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(0,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(-1,0,0);
	glEnd();
} 
void Interface:: TextK(){
	Text1();
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(1.5,1.2,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(1.5,-1.2,0);
	glEnd();
} 
void Interface:: TextL(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(1,-1,0);
	glEnd();
} 
void Interface:: TextM(){
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(-1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(0,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,-1,0);
	glEnd();
} 
void Interface:: TextN(){
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(-1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(1,1,0);
	glEnd();
} 
void Interface:: TextO(){
	Text0();
} 
void Interface:: TextP(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(-1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(1,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,0,0);
	glVertex3f(-1,0,0);
	glEnd();
} 
void Interface:: TextQ(){
	Text0();
	glBegin(GL_LINES);
	glVertex3f(1.5,-1.5,0);
	glVertex3f(0,0,0);
	glEnd();
} 
void Interface:: TextR(){
    TextP();
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(0,0,0);
	glEnd();
} 
void Interface:: TextS(){
	Text5();
} 
void Interface:: TextT(){
	Text1();
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
} 
void Interface:: TextU(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,-1,0);
	glVertex3f(1,1,0);
	glEnd();
} 
void Interface:: TextV(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(0,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0,-1,0);
	glVertex3f(1,1,0);
	glEnd();
} 
void Interface:: TextW(){
	glRotatef(180,0,0,1);
	TextM();
} 
void Interface:: TextX(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
}
void Interface:: TextY(){
	glBegin(GL_LINES);
	glVertex3f(0,-1,0);
	glVertex3f(0,0,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(-1,1,0);
	glEnd();
}
void Interface:: TextZ(){
	glBegin(GL_LINES);
	glVertex3f(-1,1,0);
	glVertex3f(1,1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1,1,0);
	glVertex3f(-1,-1,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1,-1,0);
	glVertex3f(1,-1,0);
	glEnd();
}


