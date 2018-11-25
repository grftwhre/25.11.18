#include <iostream>
#include <stdio.h>
using namespace std;
int prime(int a)
{
    for (int k=2;k*k<=a;k++)
        if ((a%k)==0)
         return 0;
        else return 1;
}

int main()
{
int i;
int n;
 printf("enter n\n");
 scanf("%d",&n);
 for (int i=2;i<=n;i++)
 {
  if ((prime(i))&&(prime(2*i+1)))
  printf("%d\n",i);
 }
    return 0;
}
