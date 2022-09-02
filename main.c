#include <stdio.h>

void count_0s_and_1s(int number)
{
    int ones= 0 ,zeros = 0;

    while (number > 0)
    {
        if(number%2 == 1) {
            ones++;

        }
        number /= 2;
    }

    zeros = 32 - ones;

    printf("zeros: %d\n ones: %d\n",zeros,ones);

}


void leap_year ( int number)
{
    if(((number%4 == 0)&& (number%100 != 0)) || (number%400 == 0) )
    {

        printf("Leap year\n");

    } else
    {
        printf(" Not a leap year\n");
    }


}


void simple_calculator (int number_1,int number_2 , char op)
{

    switch (op) 
    {

        case '+':
            printf("%d + %d = %d\n" , number_1,number_2,(number_1+number_2));
            break;
        case '-':
            printf("%d - %d = %d\n" , number_1,number_2,(number_1-number_2));
            break;
        case '*':
            printf("%d * %d = %d" , number_1,number_2,(number_1*number_2));
            break;
        case '/':
            printf("%d / %d = %d" , number_1,number_2,(number_1/number_2));
            break;
        default:
            break;

    }
    
    
}








int main() {

//    count_0s_and_1s(10);

//    leap_year(2018);
//    simple_calculator(5,10,'/');



    return 0;
}


