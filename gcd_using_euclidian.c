//7. Write a C program to find gcd of any two numbers using Euclidian algorithms and prime factorization method 
#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else 
    return (b%a,b);

}
int main()
{
    printf("%d",gcd(4,9));
}