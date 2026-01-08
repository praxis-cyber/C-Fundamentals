#include<stdio.h> 
 
int isArmstrong(int); 
 
int main() 
{ 
    int i; 
     
    printf("Armstrong numbers between 1 and 500:\n"); 
     
    for(i=1; i<=500; i++) 
    { 
        if(isArmstrong(i) == 1) 
        { 
            printf("%d ", i); 
        } 
    } 
     
    printf("\n"); 
    return 0; 
} 
 
int isArmstrong(int num) 
{ 
    int original, remainder, result=0; 
     
    original = num; 
     
    while(num != 0) 
    { 
        remainder = num % 10; 
        result = result + remainder * remainder * remainder; 
        num = num / 10; 
    } 
     
    if(result == original) 

    return 1; 

    else 

    return 0; 
}