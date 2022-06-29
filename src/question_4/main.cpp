#include "question4.h"
#include<iostream>





int main()
{

    auto option = 'n';
    int user_length;
    int user_width;
     do
    {
    cout<<"Please enter a length: ";
    cin>>user_length;
    cout<<"Please enter a width: ";
    cin>>user_width;

    if (user_length >= 0 && user_width >= 0)
    {
        tangle tangle(user_length,user_width);
        cout<<tangle.get_length()<<"\n";
        cout<<tangle.get_width()<<"\n";
        cout<<tangle.get_area()<<"\n";
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