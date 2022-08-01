/*
1.
Write a function to calculate the area of a circle (TSRS)

#include<stdio.h>
float area(int);
int main()
{
    int r;
    float a;
    printf("Enter a radius :");
    scanf("%d",&r);
    a=area(r);
    printf("area is %f",a);
    return 0;
}

float area(int x)
{
    float y;
    y=3.14*x*x;
    return y;
}

*/


/*
2.

#include<stdio.h>
float simpleinterest(float,float,float);

int main()
{
    float a,b,c,interest;
    printf("Enter the values of principal,rate,year :");
    scanf("%f %f %f",&a,&b,&c);

    interest=simpleinterest(a,b,c);
    printf("SI is %.2f",interest);

    return 0;

}

float simpleinterest(float p,float r,float t)
{
    float si;
    si=p*r*t/100;
    return si;
}

*/


/*
3.

#include<stdio.h>
int isEven(int);

int main()
{
    int x,y;
    printf("Enter the value of number :");
    scanf("%d",&x);
    y=isEven(x);

    printf("return is %d",y);
    return 0;
}

int isEven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

*/



/*
4.

#include<stdio.h>
void printN(int);
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    printN(x);
    return 0;
}

void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}

*/


/*
5.

#include<stdio.h>
void printN(int);
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    printN(x);
    return 0;
}

void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }
}

*/

/*
6.

#include<stdio.h>
int factorial(int);

int main()
{
    int x;
    x=factorial(5);
    printf("%d",x);

    return 0;
}

int factorial(int n)
{
  int i,f=1;
  for(i=1;i<=n;i++)
    f=f*1;
  return f;
}

*/

/*

#include<stdio.h>
int comb(int,int);
int fact(int);

int main()
{
    int a,b;
    printf("Enter the value of n and r:");
    scanf("%d %d",&a,&b);

    comb(a,b);
    printf("combination value is %d",comb(a,b));

    return 0;
}


int comb(int n,int r)
{
    int c;
    c=fact(n)/fact(r)*fact(n-r);

    return c;
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

*/


















/*


#include<stdio.h>
void primefactors(int);

int main()
{
    int num;
    printf("Enter a positive integer\n");
    scanf("%d",&num);

    primefactors(num);

    return 0;
}

void primefactors(int num)
{
    int count;

    for(count=2;num>1;count++)
    {
        while(num%count==0)
        {
            printf("%d ",count);
            num=num/count;
        }
    }
}

*/






































