#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number (from 1 to 9): \n");

    scanf("%d",&n);
    int on= (n*2)-1;

    for(i=on; i>=1;i--)
    {
        for(j=on; j>=1;j--)
        {
            if(j==1 || j==on || i==1 || i==on)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;

}