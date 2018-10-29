#ifndef INTERFACE_H
#define INTERFACE_H
#include "Camera.h"
class Interface
{
	private:
		int count;
		GLfloat x = 0.07;
	public:
	void InfoButtonText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void MenuButtonText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	
	
	void CollegeNameText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void DepartmentText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void LabText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void MyText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void ProfessorText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void TextEditor(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	
	
	void Button(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void DeckBackground(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void SpeedGauge(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void AltitudeMeter(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void Box(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void Button1Text(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void Button2Text(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void Button3Text(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void DefaultButtonText(GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void Counter(Camera *camera,GLfloat posx,GLfloat posy,GLfloat posz,GLfloat scalex,GLfloat scaley,GLfloat scalez,GLfloat red,GLfloat green,GLfloat blue);
	void Text0();
	void Text1();
	void Text2();
	void Text3();
	void Text4();
	void Text5();
	void Text6();
	void Text7();
	void Text8();
	void Text9();
	void TextA();
	void TextB();
	void TextC();
	void TextD();
	void TextE();
	void TextF();
	void TextG();
	void TextH();
	void TextI();
	void TextJ();
	void TextK();
	void TextL();
	void TextM();
	void TextN();
	void TextO();
	void TextP();
	void TextQ();
	void TextR();
	void TextS();
	void TextT();
	void TextU();
	void TextV();
	void TextW();
	void TextX();
	void TextY();
	void TextZ();
};

#endif
