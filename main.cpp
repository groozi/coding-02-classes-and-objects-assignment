/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub. 
**********************/

#include "main.h"

int main(int argc, char** argv) {

	//creating objects. testing overloaded functions
	Triangle myTriangle1;
	Triangle myTriangle2(1, 3);

	Pyramid myPyramid1;
	Pyramid myPyramid2(8, 6, 5);

	//displays results
	displayTriangle(&myTriangle1);
	displayTriangle(&myTriangle2);

	displayPyramid(&myPyramid1);
	displayPyramid(&myPyramid2);

    return 0;

}