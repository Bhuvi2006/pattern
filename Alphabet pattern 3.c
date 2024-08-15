#include <stdio.h>

int main()
{
    int i,j,row;
    printf("Enter the number of rows");     
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
}
