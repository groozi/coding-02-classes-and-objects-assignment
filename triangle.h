/*********************
* Name: Graziella Buitron
* Coding 02
* Purpose: To demonstrate (and advance) your knowledge of classes, header files, objects,
* compiling, version control, and GitHub. 
**********************/

#ifndef CLASSES_TRIANGLE_H
#define CLASSES_TRIANGLE_H

#define MIN 0

class Triangle {

    public:
    /*
     * constructors. one with, and one without parameters
     */ 
    Triangle();
    Triangle(double, double);  

    /*
     * Getters
     */
    double getBase();
    double getHeight();
    double getArea();

    /*
     * Setters
     */
    void setBase(double);
    void setHeight(double);

    protected:
        double base, height;
};

#endif // CLASSES_TRIANGLE_H
