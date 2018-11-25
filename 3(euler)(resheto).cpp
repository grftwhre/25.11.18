#include <iostream>
#include <stdio.h>
using namespace std;
int euler(int n)
{
int r=1;
bool A[n];
for (int y = 0; y<=n; y++)
 A[y]=0;
for (int i=2; i<n; i++)
{
 for(int x=i*i; x<=n; x=x+i)
{
 if (x>n) break;
 else A[x]=1;
}
}

if ((n==1)||(n==2))
return 1;
if (A[n]!=0)
{
for (int k=2;k<n;k++)
{
if(((n%k)==0)&&(A[k]==0))
  r*=euler(k);
}
return r;
}
else
return n-1;
}
int main()
{
int n;
printf("enter n\n");
scanf("%d",&n);
printf("euler(n) = %d",euler(n));
return 0;
}