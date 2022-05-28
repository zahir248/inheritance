//MuhammadZahiruddinBinMustaza
//B032110210
//S1G2

#ifndef Rectangle_H
#define Rectangle_H

class Rectangle {

private:

	double Height;
	double Width;

public:

	Rectangle();
	~Rectangle();
	double setData(double, double);
	double calcArea();
	double calcPerimeter();
};
#endif

