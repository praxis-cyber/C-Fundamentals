#include<stdio.h> 

void fibonacci(int); 

int main() 
{ 
    int n; 

    printf("Enter number of terms: "); 
    scanf("%d", &n); 
    printf("Fibonacci series: "); 

    fibonacci(n); 

    return 0; 
} 
 
void fibonacci(int n) 
{ 
    int i, a=0, b=1, next; 
     
    for(i=1; i<=n; i++) 
    { 
        printf("%d ", a); 
        next = a + b; 
        a = b; 
        b = next; 
    } 
     
    printf("\n"); 
} 