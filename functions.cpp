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
    std::cout << std::endl;
}

void displayPyramid(Pyramid *myPyramid){
    std::cout << "Pyramid length: " << myPyramid->getLength() << std::endl;
    std::cout << "Pyramid width: " << myPyramid->getWidth() << std::endl;
    std::cout << "Pyramid height: " << myPyramid->getHeight() << std::endl;
    std::cout << "Pyramid area: " << myPyramid->getArea() << std::endl;
    std::cout << "Pyramid volume: " << myPyramid->getVolume() << std::endl;
    std::cout << std::endl;
}