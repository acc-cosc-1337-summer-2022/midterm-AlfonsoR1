#include "question2.h"
#include<iostream>

using std::cin;
using std::cout;
 



int main()
{
    auto option = 'n';
    double celcius;
   
    do
    {
    cout << "Please enter the celcius temperature to convert: ";
	cin>>celcius;  

    double fahrenheit = get_fahrenheit(celcius);

    cout<< "The Celsius you entered "<<celcius<< ". Is "<<fahrenheit<<"  degrees in Fahrenheit."<<'\n';


    cout << "Do you want to continue Y or N: ";
	cin>>option;  
    }
    while (option == 'Y' || option == 'y');

    return 0;
}