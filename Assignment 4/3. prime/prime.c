#include<stdio.h> 
 
int isPrime(int); 
 
int main() 
{ 
    int num, result; 
     
    printf("Enter a number: "); 
    scanf("%d", &num); 
     
    result = isPrime(num); 
     
    if(result == 1) 
        printf("%d is prime\n", num); 
    else 
        printf("%d is not prime\n", num); 
     
    return 0; 
} 
 
int isPrime(int num) 
{ 
    int i; 
     
    if(num <= 1) 
        return 0; 
     
    for(i=2; i<num; i++) 
    { 
        if(num % i == 0) 
            return 0; 
    } 
     
    return 1; 
} 