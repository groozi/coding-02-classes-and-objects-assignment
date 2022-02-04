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

Triangle:: Triangle (int b, int h){
    setBase(b);
    setHeight(h);
}

//Getters and Setters
int Triangle::getBase() {
    return base;
}

int Triangle::getHeight(){
    return height;
}

void Triangle::setBase(int b){
    if (b > MIN){
        base = b;
    }
    else {
        base = MIN;
    }
}

void Triangle::setHeight(int h){
    if (h > MIN){
        height = h;
    }
    else {
        height = MIN;
    }
}
