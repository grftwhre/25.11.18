#include <iostream>
#include <stdio.h>
using namespace std;
int prime(int a)
{
if (a!=2)
{
if ((a<2)||(a%2==0))
return 0;
}
for (int i=3;i*i<a;i++)
{
if((a%i)==0)
{
return 0;
}
}
return 1;
}
int main()
{
int n;
int r=1;
printf("enter n\n");
scanf("%d",&n);
  for (int l=2;l<=n;l++)
  {
    if(prime(l)!=0)
     r=r*l;
  }
printf("primorial n = %d",r);
return 0;
}
