#include <stdio.h> 
 
int main()  
 
{ 
    int num, sum, digit; 
     
    printf("Enter a number: "); 
    scanf("%d", &num); 
     
    sum = 0; 
     
    while (num > 0)  
     
    { 
        digit = num % 10; 
        sum = sum + digit; 
        num = num / 10; 
    } 
     
    printf("Sum of digits is: %d\n", sum); 
     
    return 0; 
} 