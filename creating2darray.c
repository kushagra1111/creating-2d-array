#include<stdio.h>
#include<stdlib.h>
int main()
{    int i,j;
    int a[3][4]={{2,3,4,5},{4,5,6,7},{6,7,8,9}};
    for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
      {
        printf("%d",a[i][j]);
      }
      printf("\n");
    }
return 0;
}
