/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub. 
**********************/


#ifndef CLASSES_PYRAMID_H
#define CLASSES_PYRAMID_H

#include "triangle.h"


class Pyramid : public Triangle {
public: 
	Pyramid();
	Pyramid(int, int, int);

	/*
	 * Getters
	 */
	int getLength();
	int getWidth();
	double getArea();

	/*
	 * Setters
	 */
	void setLength(int);
	void setWidth(int);

private:
		int length, width;
}

#endif //CLASSES_PYRAMID_H