/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub. 
**********************/


#ifndef CLASSES_PYRAMID_H
#define CLASSES_PYRAMID_H

#include "triangle.h"
#include <cmath>


class Pyramid : public Triangle {
public: 
	Pyramid();
	Pyramid(double, double, double);

	/*
	 * Getters
	 */
	double getLength();
	double getWidth();
	double getArea();
	

	/*
	 * Setters
	 */
	void setLength(double);
	void setWidth(double);

private:
		double length, width;
};

#endif //CLASSES_PYRAMID_H