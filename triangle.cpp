/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub.
**********************/

#include "triangle.h"

//constructors
Triangle::Triangle() {
    //setters
    setBase(MIN);
    setHeight(MIN);
}

Triangle:: Triangle (double b, double h){
    setBase(b);
    setHeight(h);
}

//Getters and Setters
double Triangle::getBase() {
    return base;
}

double Triangle::getHeight(){
    return height;
}

double Triangle::getArea(){
    return 0.5 * base * height;
}

void Triangle::setBase(double b){
    if (b > MIN){
        base = b;
    }
    else {
        base = MIN;
    }
}

void Triangle::setHeight(double h){
    if (h > MIN){
        height = h;
    }
    else {
        height = MIN;
    }
}
