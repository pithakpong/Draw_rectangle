#include <stdio.h> 
int main() 
{ 
    int number,i,j; 
    printf("Enter your number: "); 
    scanf("%d",&number); 
    for(i=0;i<number;i++){ 
        for(j=0;j<number;j++){ 
            printf("*");
        }  
        printf("\n");
    }
}