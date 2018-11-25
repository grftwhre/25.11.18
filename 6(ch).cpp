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
int n;
scanf("%d",&n);
for (int k=3;k<=n;k++)
{
if (prime(k)==1)
{

        if (prime(k+2)==1)
    {
         printf("%d\n",k);
    }
    for (int j=2;j<=k+2;j++)
    {
        int m=(k+2)/j;
        if (prime(m)==1)
            printf("%d\n",k);
    }
}
}
    return 0;
}
