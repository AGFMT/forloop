#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,lim,sum=0;
    printf("WELCOME TO THE PROGRAM FOR THE ADDITION\n");
    printf("ENTER THE LIMIT\n");
    scanf("%d",&lim);
    for ( i = 1; i <= lim; i++)
    {
      sum=sum+i;  /* code */
    }
    printf("\nResult=%d",sum);
    

    return EXIT_SUCCESS;
}