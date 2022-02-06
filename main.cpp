/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub. 
**********************/

#include "main.h"

int main(int argc, char** argv) {

	//creates triangle object using constructor with no parameter
	Triangle myTriangle1;
	//creating triangle object using constructor that accepts parameters
	Triangle myTriangle2(1, 3);

	//testing triangle class
	std::cout << "base, height: " << myTriangle1.getBase() << ", " << myTriangle1.getHeight() << std::endl;

	std::cout << "base, height: " << myTriangle2.getBase() << ", " << myTriangle2.getHeight() << std::endl;


	Pyramid myPyramid1;
	Pyramid myPyramid2(8.0, 6.0, 5.0);

	std::cout<< myPyramid1.getArea() << ", " << myPyramid2.getArea() << std::endl;

    return 0;

}