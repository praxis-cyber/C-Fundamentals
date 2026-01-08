#include<stdio.h> 
int main() 
{  
    int first, second, sum;  
    float average;  

    printf("Enter the first number: "); 
    scanf("%d", &first);  
    printf("Enter the second number: "); 
    scanf("%d", &second);  

    sum= first + second;  
    average = (first + second)/2;  

    printf("sum = %d\n",sum); 
    printf("average = %f\n", average);  
}