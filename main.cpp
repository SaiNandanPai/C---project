#include <iostream>
#include <windows.h>
#include "DisplayManager.h"

/*Create Window*/
int main(int argc, char** argv){
bool Initialized = false;
glutInit(&argc,argv);
DisplayManager *Display;
Display = new DisplayManager("The Cube");
delete Display;	
}
