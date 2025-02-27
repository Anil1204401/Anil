#include<stdio.h>
#define r 2
#define c 3
main()
{
    int a[r][c],i,j;
    printf("enter matrix");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
   }


}

