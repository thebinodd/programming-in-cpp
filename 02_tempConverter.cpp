#include<iostream>
using namespace std;

int main(){
	int tC;
	float tF;
	cout << "Enter Temperature in degree Celsius : ";
	cin >> tC;
	tF = (9*(float)tC + 160)/5;
	cout << "The Temperature in degree Fahrenheit is " << tF << endl;
	return 0;
	
}
