#include<iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << left;
    cout << setw(8)  << "S.No."
         << setw(15) << "City"
         << setw(15) << "District"
         << setw(15) << "Province"
         << setw(12) << "Population" << endl;

    cout << setw(8)  << "1"
         << setw(15) << "Kathmandu"
         << setw(15) << "Kathmandu"
         << setw(15) << "Bagmati"
         << setw(12) << "50000" << endl;

    cout << setw(8)  << "2"
         << setw(15) << "Pokhara"
         << setw(15) << "Kaski"
         << setw(15) << "Gandaki"
         << setw(12) << "50000" << endl;

    cout << setw(8)  << "3"
         << setw(15) << "Butwal"
         << setw(15) << "Rupandehi"
         << setw(15) << "Lumbini"
         << setw(12) << "100000" << endl;

    cout << setw(8)  << "4"
         << setw(15) << "Dharan"
         << setw(15) << "Sunsari"
         << setw(15) << "Koshi"
         << setw(12) << "80000" << endl;

    return 0;
}
