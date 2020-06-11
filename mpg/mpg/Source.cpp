#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
	//Declare Vars
	double miles = 0, eth = 0, pure = 0, mpg = 0;
	//Get Input

	cout << "Enter the amount of Miles Traveled, then the gallons of pure gasoline used.  " << endl;
	cin >> miles >> pure;
		//If Bad Data -> 
		//Vars stay the same
		//Cin is put into a failed state, and can't take in anything new
		//Garbage Data stays in buffer
	while(cin.fail()) 
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;

		cout << "Enter the amount of Miles Traveled, then the gallons of pure gasoline used.  " << endl;
		cin >> miles >> pure;
	}


	//Calculate
		mpg = miles / pure;
		eth = miles / (mpg * .9);
	//Disp
		cout << "You got " << mpg << " miles per gallon of pure gasoline." << endl;
		cout << "You would go " << eth << " miles with ethonal gasoline." << endl;
		cout << "A wise man once said, 'Corn is good for u.'" << endl;



	system("PAUSE");
	return 0;
}