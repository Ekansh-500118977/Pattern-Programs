#include<stdio.h>
int odd(int n)
{
    int r = n%2;;
    if( r == 0)
    return r;
    else
    return r;
}
int main()
{
    int n,l,s;

    printf("Enter the number of rows you want (if you give even number row will return after dicrementing one number: ");
    scanf("%d",&n);
    
    int r=odd(n);
    
    if ( r == 0)
    n=n-1;

    l=n/2;
    s= n/2;

    for(int i=1; i<=n; i++)
    {
        if( i <= ((n/2)+1))
        {
            for(int k=s; k >= i; k--)
            {
                printf("  ");
            }
            for(int j=n; j<=i; j++ )
            {
                printf("%d ",j);
            }
        }
        else
        {
            for(int s1= ((n/2)+1); s1< i; s1++)
            {
                printf("  ");
            }
            l--;
            for(int j= 1; j <= l+1; j++)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}