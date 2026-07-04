#include<iostream>
using namespace std;

int main(){
	
	int totalDays , year , month , days;
	cout << "Enter Number of Days : ";
	cin >> totalDays;
	year = totalDays/365;
	month = ((totalDays - year*365)/30);
	days = (totalDays - (year*365 + month*30));
	cout << endl << year << " Years " << month << " Months " << days << " Days ";
	return 0;
	
	
	
	
}
