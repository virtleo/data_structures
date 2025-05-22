#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
       { for(j=1;j<=2*n-1;j++)
            {if(j<i+n&&j>i-n&&j>-i+n&&j<-i+3*n) 
                printf("*");
                else printf(" ");
            }
    printf("\n");
        }
return 0;
}