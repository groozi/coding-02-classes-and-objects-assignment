/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub. 
**********************/

#include "functions.h"

void displayTriangle(Triangle *myTriangle){
    std::cout << "Triangle base: " << myTriangle->getBase() << std::endl;
    std::cout << "Triangle height: " << myTriangle->getHeight() << std::endl;
    std::cout << "Triangle area: " << myTriangle->getArea() << std::endl;
}