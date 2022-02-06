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

Pyramid::Pyramid(double l, double w, double h){
	setLength(l);
	setWidth(w);
	setHeight(h);
}


double Pyramid:: getLength(){
	return length;
}

double Pyramid:: getWidth(){
	return width;
}

double Pyramid :: getArea(){
	return ((length*width) + (length*sqrt((pow((width/2),2)+pow(height, 2)))) + (width*(sqrt(pow((length/2),2)+pow(height,2)))));
} 


void Pyramid::setLength(double l){
	if (l > MIN){
		length = l;
	}
	else {
		length = MIN;
	}
}

void Pyramid:: setWidth(double w){
	if ( w > MIN){
		width = w;
	}
	else {
		width = w;
	}
	
}

