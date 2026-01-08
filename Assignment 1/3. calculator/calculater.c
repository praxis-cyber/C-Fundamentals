#include<stdio.h>   
int main()   
{   
    int first, second, addition, subtraction, multiplication;   
    float division, temp;   
 
    printf("Enter the first number: ");   
    scanf("%d", &first);   
 
    printf("Enter the second number: ");   
    scanf("%d", &second);     
 
    addition = first + second;   
    subtraction = first - second;   
    multiplication = first * second;   
    temp = first;   
    division = temp / second;  

    printf("addition = %d\n", addition);  
    printf("subtraction = %d\n", subtraction);  
    printf("multiplication = %d\n", multiplication);  
    printf("division = %f\n", division);  
}  