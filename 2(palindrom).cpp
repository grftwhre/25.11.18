#include <iostream>
#include <stdio.h>
using namespace std;
void func_palindrom (int n)
{
int chet;
int p=1;
int b[n];
for (int k=0;k<=9;k++)
      {
      b[1]=k;
      b[n]=k;
      n=n-2;
      if (n>2)
      {
        for (int i=0;i<=9;i++)
        {
            b[2]=i;
            b[n-1]=i;
        }
          p++;
          n=n-2;
      }
      if (n==2)
      {
       for (int s=0;s<=9;s++)
       {
          b[1+p]=s;
          b[n-p]=s;
       }
      }
       if (n==1)
       {
           for(int e=0;e<=9;e++)
           b[1+p]=e;
       }
    for (chet=1;chet<=n;chet++)
    printf("%d\n",b[chet]);
    }
}
int main()
{
    int n;
    printf("enter n (size of palindrom)\n");
    scanf("%d",&n);
    func_palindrom(n);
    return 0;
}
