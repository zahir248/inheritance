//MuhammadZahiruddinBinMustaza
//B032110210
//S1G2

#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() {
	Height = 0;
	Width = 0;
}
double Rectangle::setData(double z, double m) {
	Height = z;
	Width = m;

	return(Height, Width);
}
Rectangle::~Rectangle() {}

double Rectangle::calcArea() {
	return(Height * Width);
}
double Rectangle::calcPerimeter() {
	return(2 * (Height + Width));
}


