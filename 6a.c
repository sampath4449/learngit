#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,k;
    printf("enter the number of vertex\n");
    scanf("%d",&n);
    printf("enter the cost matrix\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][j]>a[i][k]+a[k][j])
            {
                a[i][j]=a[i][k]+a[k][j];
            }
        }
    }
    printf("elements in the cost matrux is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
         printf("\n");
    }
    printf("\n"); 
}