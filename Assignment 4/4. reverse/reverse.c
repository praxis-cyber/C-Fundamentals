#include<stdio.h> 

void reverse(int); 

int main() 
{ 
    int num; 

    printf("Enter a number: "); 
    scanf("%d", &num); 

    printf("Reverse of %d is ", num); 

    reverse(num); 

    return 0; 
} 
 
void reverse(int num) 
{ 
    int rem, rev=0; 
     
    while(num != 0) 
    { 
        rem = num % 10; 
        rev = rev * 10 + rem; 
        num = num / 10; 
    } 
     
    printf("%d\n", rev); 
} 