#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int x;
	cout << "Enter the value of X :";
	cin >> x;
		
	if(x >=0){
		cout << "The Value of Y is " << x*x + sqrt(x) << endl;
		
	}
	else if(x<=-10){
		cout << "The Value of Y is " << abs(x+5) << endl;

		
	}
	else{
		cout << "The Value of Y is " << 1-exp(x) << endl;
	}
	
}
