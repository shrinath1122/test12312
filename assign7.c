/* 1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0, i;
    printf("Enter the n value: ");
    scanf("%d", &n);

    if(n == 0 || n == 1)
        printf("%d", n);
    else
        nextTerm = t1 + t2;

    for (i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("%d", t2);
}

*/


/* 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,i,t;
    printf("Enter the no of terms :");
    scanf("%d",&t);

    printf("%d %d",n1,n2);

    for(i=2;i<t;i++)
    {
        n3=n1+n2;
        printf(" %d ",n3);
        n1=n2;
        n2=n3;
    }

    return 0;
}

*/

/* 4. Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int a,b,H,min;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    min=a<b?a:b;
    for(H=min;H>=1;H--)
        if(a%H==0 && b%H==0)
        break;
    printf("HCF is %d",H);

    return 0;
}

*/


/* Write a program to check whether two given numbers are co-prime
numbers or not

#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    min=a<b?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            break;
    }

    if(i==min+1)
        printf("%d and %d are coprime",a,b);
    else
        printf("%d and %d are not coprime",a,b);

    return 0;
}

*/


/*

#include <stdio.h>

int main()
{
  int i, a = 1, count;


  while(a <= 100)
  {
    count = 0;
    i = 2;
    while(i <= a/2)
    {
      if(a%i == 0)
      {
        count++;
	break;
      }
      i++;
    }
    if(count == 0 && a != 1 )
    {
	printf(" %d ", a);
    }
    a++;
  }
  return 0;
}

*/

/*  Write a program to check whether a given number is an Armstrong number
or not

#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter a number :");
    scanf("%d",&n);

    temp=n;

    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(temp==sum)
        printf("Armstrong");
    else
        printf("not Armstrong");

    return 0;
}

*/

/* Write a program to print all Armstrong numbers under 1000


#include<stdio.h>
int main()
{
    int n,r,x,s;
    printf("Armstrong numbers are\n");

    for(n=1;n<=1000;n++)
    {
        s=0;
        x=n;
        while(x!=0)
        {
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
            printf("%d\n",n);
    }
    return 0;
}

*/



































