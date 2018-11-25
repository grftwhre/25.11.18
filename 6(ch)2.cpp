#include <iostream> /*через решето эратосфена*/
#include <stdio.h>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
bool A[n];
for (int y = 0; y<=n+2; y++)
    A[y]=0;
 for (int i = 2; i<n; i++)
  {
  for(long g = i*i; g<=n; g = g+i)
   {
    A[g]=1;
   }
  }
for (int k=3;k<=n;k++)
{
if (prime[k]==0)
{

        if (prime[k+2]==0)
    {
         printf("%d\n",k);
    }
    for (int j=2;j<=k+2;j++)
    {
        int m=(k+2)/j;
        if (prime[m]==0)
            printf("%d\n",k);
    }
}
}
    return 0;
}
