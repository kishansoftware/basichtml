#include <stdio.h>
int main()
{
    int a[] = {3, 5, 6, 8, 4};
    int size = sizeof(a) / sizeof(int);
    int i, j, t,k;
    
    for (i = 0; i <= size - 2; i++)
    {
    for(k=0;k<=size-1;k++)
          printf("%d,",a[k]);
          printf("\n");

        if (a[i] > a[i + 1])
        {
      
            t=a[i+1];//j-1>=0 j>=1
          j=i+1;// j=4
          while (  j>=1 &&        a[j-1]>t)
          {
            a[j]=a[j-1];
            j--;
          }
          a[j]=t;
          for(k=0;k<=size-1;k++)
          printf("%d,",a[k]);
          printf("\n");
          // marks>=40  marks-1  j-1
        }


        }
    return 0;
}


/*
2,5,6,8,4
4 bahar
2,5,6,8,[]
2,5,6,[],8
{3, 5, 6, 8, 4}
i=3, i+1=4

 */


