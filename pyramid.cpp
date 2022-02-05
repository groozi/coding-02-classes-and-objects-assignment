/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub. 
**********************/

#include "pyramid.h"

Pyramid::Pyramid() {
	setLength(MIN);
	setWidth(MIN);
	setHeight(MIN);
}

Pyramid::Pyramid(int l, int w, int h){
	setLength(l);
	setWidth(w);
	setHeight(h);
}

Pyramid::~Pyramid() {
}

int Pyramid:: getLength(){
	return length;
}

int Pyramid:: getWidth(){
	return width;
}

/*
 * example of override
 */
double Pyramid :: getArea(){
	
}

void Pyramid::setLength(int l){
	if (l > MIN){
		length = l;
	}
	else {
		length = MIN;
	}
}

void Pyramid:: setWidth(int w){
	if ( w > MIN){
		width = w;
	}
	else {
		width = w;
	}
	
}

