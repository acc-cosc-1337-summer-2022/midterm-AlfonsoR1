//
#include<iostream>
using std::cin;
using std::cout;
 

class tangle 
{
public:
    tangle(){}
    tangle (int l, int w  ): length{l}, width{w}{};
    int get_area();
    int get_length();
    int get_width();

private: 
    int length{0}; 
    int width{0};

};