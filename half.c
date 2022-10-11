#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int billbefore_tax;
    do
    {
        billbefore_tax = get_int("Bill before tax: ");
    }
    while (billbefore_tax < 1);

    int saletax_percent;
    do
    {
        saletax_percent = get_int("Sale Tax Percent: ");
    }
    while (saletax_percent < 1);

    int tip_percent;
    do
    {
        tip_percent= get_int("Tip Percent: ");
    }
    while (saletax_percent < tip_percent);

    int percentdiv = 100;

    float totalbillwith_tax;
    totalbillwith_tax = (float)billbefore_tax * saletax_percent/percentdiv;

    float tipwithtax;
    tipwithtax = (float)billbefore_tax * tip_percent/percentdiv;

    float endtotal;
    endtotal = (float) totalbillwith_tax + tipwithtax;

    float finaltotal;
    finaltotal = (float) endtotal + billbefore_tax;

    int percentdiv2 = 2;

    float totality;
    totality = (float) finaltotal/percentdiv2;
    printf("You will each owe  = %100f%%", totality);

    return 0;

}
