#include <stdio.h>

int main() {
    float billbefore_tax;
    do
    {
    printf("Bill before tax: ");
    scanf("%f", &billbefore_tax);
    printf("Your Bill before Tax and Tip Is: %f\n", billbefore_tax);
    }
    while (billbefore_tax < 1);

    float saletax_percent;
    do
    {
    printf("Saletax Percent: ");
    scanf("%f", &saletax_percent);
    printf("Your Saletax Percent Is: %f\n", saletax_percent );
    }
    while (saletax_percent < 1);

    float tip_percent;
    do
    {
    printf("Tip Percent: ");
    scanf("%f", &tip_percent);
    printf("Your Tip Percent Is: %f\n", tip_percent );
    }
    while (tip_percent < 1);

    float percentdiv = 100;

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
    printf("You Will Each Owe  = %100f%%", totality);

    return 0;

}
