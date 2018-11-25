#include <iostream> /*достаточно эффективная проверка на простоту числа, т.к. рассматриваются i только до корня из а*/
#include <stdio.h> /*более эффективенбыл бы перебор решетом эратосфена (файл этой программы приложен), но он работает не совсем корректно*/
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
int euler(int a)
{
    int n=1;
    if ((a==1)||(a==2))
     return 1;
    if (prime(a)==0)
        {
            for (int k=2;k<a;k++)
            {
                if(((a%k)==0)&&(prime(k)==1))
                    n*=euler(k);
            }
            return n;
        }
        else
            return a-1;
}
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    printf("euler(n) = %d",euler(n));
    return 0;
}
