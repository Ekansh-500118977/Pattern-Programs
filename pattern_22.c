#include<stdio.h>
int main()
{
    int n; 

    printf("Enter no. iof rows you want: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int s=n; s>=i+1; s--)
        {
            printf("  ");
        }
        for(int j=1; j<= i*2-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}#include<stdio.h>
int main()
{
    int n; 

    printf("Enter no. iof rows you want: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int s=n; s>=i+1; s--)
        {
            printf("  ");
        }
        for(int j=1; j<= i*2-1; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}