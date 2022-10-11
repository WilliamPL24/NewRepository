// Instead of doing all the math the math.h thing helps me with the calculation
#include <cs50.h>
#include <stdio.h>
#include <math.h>
//The following lines prompt for user input and it continues to ask the use until it gives a correct number. The end size integer has to be greater than the start size integer or it will continue to ask you for a number
int main(void)
{
    int start_size;
    do
    {
        start_size = get_int("Start size(PositiveInteger): ");
    }
    while (start_size < 1);

    int end_size;
    do
    {
        end_size = get_int("End size(Positive Integer): ");
    }
    while (end_size < start_size);
    //Here I made a variable of the years, a variable of the start size, and a variable of the calculator that will help him with the calculation
    int year = 0;
    int w = start_size;
    int calculator = 0;

    //Here I made the log calculation which I didn't define because the <math.h> library helps me with that. I just made start size varibale to be divide and added by the rate ( start size divided by 3(increase rate) and startsize divided by 4(decrease rate). It keeps doing the same calculation forever because I definite it while w < end_size. The only way it can stop the calculation is if the number is greater or equal. While it keeps doing this calculation I have a funciton that adds the number of times with the varibale year. At the end, it prints the number of years.
    do
    {
        w = round(w + (w / 3) - (w / 4));
        year += 1;

    }

    while (w < end_size);
    printf("Years: %i", year);

}
