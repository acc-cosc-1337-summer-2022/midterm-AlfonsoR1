#include "question3.h"
#include<iostream>

int main()
{
    auto option = 'n';
    double meal_price ;
    double tip_rate;
    do
    {
    cout<<"Please enter the meal price: ";
    cin>>meal_price;
    cout<<"Please enter the tip rate: ";
    cin>>tip_rate;

    if (meal_price >= 0 && tip_rate >= 0)
    {
        Receipt receipt(meal_price,tip_rate);
        receipt.display_receipt();
    }
        else{
            cout<<"INCORRECT ONLY POSITIVE NUMBERS"<<"\n";
        }

    cout << "Do you want to continue Y or N: ";
	cin>>option;  

    }
    while (option == 'Y' || option == 'y');

    return 0;
}