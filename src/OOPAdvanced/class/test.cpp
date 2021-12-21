#include<iostream>
#include"test.hpp"
#include"geometricalShape.hpp"
#include"ellipse.hpp"
#include"square.hpp"
#include"circle.hpp"
#include"rectangle.hpp"

using namespace std;

void test::ellipseTest(){
    geometricalShape *elliPtr = new ellipse(3.5, 2.5);

    cout << "Ellipse Area = " << elliPtr->area() << endl;
    cout << "Ellipse Perimeter = " << elliPtr->perimeter() << endl << endl;

    delete elliPtr;
}

void test::rectTest(){
    geometricalShape *rectPtr = new rectangle(3.5, 2.5);

    cout << "Rectangle Area = " << rectPtr->area() << endl;
    cout << "Rectangle Perimeter = " << rectPtr->perimeter() << endl << endl;

    delete rectPtr;
}

void test::circleTest(){
    geometricalShape *circlePtr = new circle(3.5);

    cout << "Circle Area = " << circlePtr->area() << endl;
    cout << "Circle Perimeter = " << circlePtr->perimeter() << endl << endl;

    delete circlePtr;
}

void test::squareTest(){
    geometricalShape *squarePtr = new square(3.5);

    cout << "Square Area = " << squarePtr->area() << endl;
    cout << "Square Perimeter = " << squarePtr->perimeter() << endl << endl;

    delete squarePtr;
}