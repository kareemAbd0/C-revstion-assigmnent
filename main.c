#include <stdio.h>
#include <string.h>

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

void sum_of_digits (int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum+= (number%10);
        number/=10;

    }

    printf("%d",sum);

}

void power (int number_1,int number_2)
{
    long result = 1;
    for (int i = 0; i < number_2 ; ++i)
    {
        result*=number_1;
    }

    printf("%ld",result);


}

void min_max_4 (int *arr)
{
    int max= 0 ,min = arr[0];

    for (int i = 0; i < 4 ; ++i)
    {
        if(arr[i] > max)
        {
            max= arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("min is %d   max is %d",min,max);


}

void count_even_odd ()
{
    int evens =0 , odds = 0;
    printf("enter size pf array");
    int size;
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size ; ++i)
    {
        printf("enter element %d",i);
        int number;
        scanf("%d",&number);
        arr[i] = number;

    }
    for (int i = 0; i <size ; ++i)
    {
        if(arr[i] %2 == 0)
        {
            evens ++;
        } else
        {

            odds ++ ;
        }

    }
    printf("odds : %d evens: %d ",odds,evens);

}

void copy_string (char * string_1, char * string_2 )
{
    int i = 0;
    while (string_1[i] != '\0')
    {

        string_2[i] = string_1[i];
        i++;

    }

    printf("string 1 %s\n",string_1);

    printf(" copied into string 2 %s\n",string_2);


}

void min_max_returens (int *arr,int * min ,int * max, int size)
{
    *max = 0;
    *min = arr[0];

    for (int i = 0; i < size  ; ++i)
    {
        if(arr[i] > *max)
        {
            *max= arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }

    printf("min is %d   max is %d",*min,*max);

}

void bi_to_dec (char * bi)
{
    int dec;
    int i = 0;
    while (bi[i] != '\0')
    {
        


    }

}










int main() {

//    count_0s_and_1s(10);

//    leap_year(2018);
//    simple_calculator(5,10,'/');
//    sum_of_digits(12345);
//    power(2,3);

//int arr [4] = {4,1,7,3};
//    min_max_4(arr);
//   count_even_odd();

//char string1 [7] = "hello";
//char string2 [7] = "h";
//copy_string(string1,string2);
///
///
//int size = 0 ;
//    printf("enter size");
//    scanf("%d",&size);
//    int arr [size] ;
//    for (int i = 0; i < size ; ++i)
//    {
//        printf("enter number\n");
//        int number;
//        scanf("%d",&number);
//        arr[i]  = number;
//
//    }
//    int min,max;
//    min_max_returens(arr,&min,&max,size);













    return 0;
}


