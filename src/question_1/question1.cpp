#include "question1.h"

bool test_config()
{
    return true;
}

double get_sales_commission( double sales )
{
    double bonus_amount;
    double bonus_percent;
    if (sales >= 0 && sales <= 499)
    {
        bonus_percent += .05;
    }
    if (sales >= 500 && sales <= 999)
    {
        bonus_percent += .06;
    }
    if (sales >= 1000 && sales <= 1499)
    {
        bonus_percent += .07;
    }
    if (sales >= 1500 && sales <= 99999999999999999)
    {
        bonus_percent += .08;
    }
    if (sales <= 0)
    {
        bonus_percent += 0;
    }

    bonus_amount = bonus_percent * sales;


    return bonus_amount;
}