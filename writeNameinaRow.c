// Online C compiler to run C program online
#include <stdio.h>

int main(){
int i,j,k,n;
printf("Enter tne number of rows :");
scanf("%d", &n);

for(i=1; i<=n; i++)
{
    for(j=1; j<=i; j++)
    {
        printf("Akif");
    }
    for(k=1; k<=n-1; k++)
    {
        printf("  ");
    }
    printf("\n");
}    
    
    return 0;
}
