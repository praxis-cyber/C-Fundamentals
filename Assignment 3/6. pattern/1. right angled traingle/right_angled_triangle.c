#include<stdio.h> 
 
int main() 
{ 
    int x, y, z=5; 
 
    for (x=0; x<=z; x++) 
    { 
        for(y=0; y<=x; y++) 
        { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
 
} 