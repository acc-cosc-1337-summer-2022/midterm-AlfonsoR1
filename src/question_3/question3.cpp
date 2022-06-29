#include "question3.h"



double Receipt:: calculate_tax()
{
    double expected_tax = price * tax;
    return expected_tax; 
}
double Receipt::calculate_gratuity()
{
    double expected_gratuity = price * gratuity; 
    return expected_gratuity;
}
void Receipt::display_receipt()
{
    cout<<"Meal Price:   $"<<price<<"\n";
    cout<<"Tip Rate:     $  "<<gratuity<<"\n";
    cout<<"Tax Rate:     $  "<<tax<<"\n";
    cout<<"Tax amount:   $  "<<calculate_tax()<<"\n";
    cout<<"Tip amount:   $ "<<calculate_gratuity()<<"\n";
    cout<<"Total due is: $"<< price+gratuity+tax+calculate_tax()+calculate_gratuity()<<"\n";
}