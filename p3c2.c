#include <stdio.h> 
int main() 
{ 
    int number,loop,i; 
    printf("Enter your number:");
    scanf("%d",&number);  
    loop = number*number;
    for(i=1;i<=loop;i++)
    { 
        if (i%number == 0 && i!=1)
        { 
            printf("\n");
        }
        else{ 
            printf("*");
        }
    }
}