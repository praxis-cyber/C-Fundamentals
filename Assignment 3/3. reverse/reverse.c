 
#include<stdio.h> 
 
int main() 
{ 
    int i = 1, n, reminder; 
 
    printf("Enter the numbers: "); 
    scanf("%d", &n); 
 
    while(n!=0) 
    { 
        reminder = n % 10; 
        n = n/10; 
        printf("%d", reminder); 
    } 
    return 0; 
}