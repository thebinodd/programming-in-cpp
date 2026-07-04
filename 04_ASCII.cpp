#include<iostream>
using namespace std;


int main(){
	char letter;
	cout << "Enter any Letter :";
	cin >> letter;
	cout << "The ASCII value of " << letter << " is " << static_cast<int>(letter) ;
	return 0;
}
