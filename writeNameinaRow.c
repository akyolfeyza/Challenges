// Online C compiler to run C program online
#include <stdio.h>

int main(){
int i,j,k,n;
printf("Enter the number of rows :");
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

*********************************************************************
#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter tne number of rows: ");
    scanf("%d",&n);

    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("Akif ");
        }
        printf("\n");
    }
    return 0;
}

**********************************************************************

int main()
{
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=n; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("Akif ");
        }
        printf("\n");
    }
    
    return 0;
}

*********************************************************************

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n;
	int i;
	int j;
	int k;
	
	printf("Enter N value: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("     ");
	    }
		for(k=1;k<=2*i-1;k++)
		{
			printf("Akif ");
		}
		printf("\n");
	}
	return 0;
	
}

***********************************************************************
