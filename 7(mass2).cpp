#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void changemass(int a[],int n,int k)
{
int s;
int x=k;
int c;
char str2[n];
strcpy(str2,"all twos - ");
    for (int i=0;i<n;i++)
    {
     s=0;
     c=a[i];
      while(c)
      {
          if(c%3==2)
          {
              s++;
              strcat(str2,"2");
          }
       c=(int)c/3;
      }
     if (s<k)
        printf("%d\n",a[i]);
    }
std::cout << str2 << std::endl;
}
int main()
{
int n;
int k;
 printf("enter n\n");
 scanf("%d",&n);
 printf("enter k\n");
 scanf("%d",&k);
int a[n];
 for (int i=0;i<n;i++)
     scanf("%d",&a[i]);
changemass(a,n,k);
}
