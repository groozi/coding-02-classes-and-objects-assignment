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
     *
     */ 

    Triangle();
    Triangle(int, int);  
    /*
     * Getters
     */
    int getBase();
    int getHeight();
    double getArea();


    /*
     * Setters
     */
    void setBase(int);
    void setHeight(int);


    protected:
        //private variables defining the circle
        int base, height;

};

#endif // CLASSES_TRIANGLE_H
