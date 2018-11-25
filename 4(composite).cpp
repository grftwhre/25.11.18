#include <iostream>
#include <stdio.h>
using namespace std;
void printcomposite(bool prime[], int n)
{
int k;
int a;
  for (a=2; a<=n; a++)
    prime[a]=true;
   for(a=2;a*a<=n;a++)
   {
     k=a*a;
      if (prime[a])
        while (k<=n)
        {
         prime[k]=false;
         k+=a;
        }
   }
printf("composite numbers:\n");
 for (a=3;a<=n;a++)
     if (prime[a]==false)
     printf("%d\n",a);
}
int main()
{
int n;
printf("enter N\n");
scanf("%d",&n);
bool *prime=new bool[n];
printcomposite(prime, n);
return 0;
}
