#include "question1.h"
#include<iostream>

using std::cin;
using std::cout;
 



int main()
{

    auto option = 'n';
    double user_sales;
    do
    {
    cout << "Please enter the sales amount: ";
	cin>>user_sales;  

    double bonus_amount = get_sales_commission(user_sales);

    cout<< "The sale amount of $"<<user_sales<< ". Yields a commission of $"<<bonus_amount<<'\n';


    cout << "Do you want to continue Y or N: ";
	cin>>option;  
    }
    while (option == 'Y' || option == 'y');


    return 0;
}