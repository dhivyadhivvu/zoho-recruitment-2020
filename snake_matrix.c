#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-i;j++)   //(2*n)-i  is number columns for each row
        {
            if(j<=n-i)            //To print the spaces
            {
                printf(" ");
            }
            else if(i%2==1)       //To print the odd rows
            {
                k++;
                printf("%d ",k);
            }
            else                  //To print the even rows
            {
                printf("%d ",k);
                k--;             //To decrement the values
            }
        }k+=n;                   //To start values for each row
        printf("\n");
    }
}
