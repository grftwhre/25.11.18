#include <iostream>
#include <stdio.h>
using namespace std;
void mass(int a[],int n,int k)
{
    int x=k;
    int b;
    int c;
    for (int i=0;i<n;i++)
    {
        b=1;
        c=a[i];
        while (c)
        {
            if (c%10)
              b*=c%10;
            c=(int)(c/10);
        }
     if (b>x)
         printf("%d\n",a[i]);
    }
}
int main()
{
    int n;
    int k;
 printf("enter size of mass\n");
 scanf("%d",&n);
 printf("enter k\n");
 scanf("%d",&k);
 int a[n];
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for (int i=0;i<n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
mass(a,n,k);
    return 0;
}
