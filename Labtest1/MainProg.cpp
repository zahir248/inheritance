//MuhammadZahiruddinBinMustaza
//B032110210
//S1G2

#include <iostream>
#include "Parallelogram.h"
using namespace std;

void main() {

	double Height;
	double Width;

	Parallelogram zahir;

	cout << "Enter value for Height = ";
	cin >> Height;

	cout << "Enter value for Width = ";
	cin >> Width;

	zahir.setData(Height, Width);

	cout << "\n\nThe Area of Parallelogram is " << zahir.calcArea();
	cout << "\nThe Perimeter of Parallelogram is " << zahir.calcPerimeter();
}

