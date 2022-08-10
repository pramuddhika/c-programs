#include <iostream>
#include <cmath>

using namespace std;

int main (void) {
	
	int n;
	double x,y;
	
	cout << "                              Choice your calculation ";
	
	cout << "\n";  
	cout << "\n";
	
	cout << "1.computes Power (x^y)                         2.computes square root\n";
	cout << "3.find hypotenuse of a right angled tringle    4.compute cube root \n";
	cout << "5.compute cosine of x                          6.compute sine of x \n";
	cout << "7.compute the natural logarithm of x (log)     8.compute exponential e (e^x)";
	
	cout << "\n";
	cout << "\n";
	
	cout << "Enter your choice: ";
	cin >> n; //get user input
	
	cout << "\n";
	cout << "\n";
	
	cout << "Enter value for x : "; 
	cin >> x;  //get value for x
	
	switch(n) {
		case 1:
			cout << "Enter value for y : ";
	        cin >> y;
			cout << "Your answer is " << pow(x,y) << endl; //computes Powe (x^y) 
			break;
		case 2:
			cout << "Your answer is "<< sqrt(x) << endl; //computes square root\n
			break;
		case 3:
			cout << "Enter value for y : ";
	        cin >> y;
			cout << "Your answer is "<< hypot(x,y) << endl; //find hypotenuse of a right angled tringle
			break;
		case 4:
			cout << "Your answer is "<< cbrt(x) <<endl; //compute cube root
			break;
		case 5:
			cout << "Your answer is "<< cos(x) <<endl; //compute cosine of x
			break;
		case 6:
			cout << "Your answer is "<< sin(x) <<endl; //compute sine of x
			break;
		case 7:
			cout << "Your answer is "<< log(x) <<endl; //compute the natural logarithm of x (log)
			break;
		case 8:
			cout << "Your answer is "<< exp(x) <<endl; //compute exponential e (e^x)
			break;
	}
	
	return 0;
}