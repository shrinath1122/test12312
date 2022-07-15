/* 1. Write a program to check whether a given number is positive or non-positive

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);

    if(a>0)
        printf("positive");
    else
        printf("non positive");

    return 0;
}

*/

/* 2. Write a program to check whether a given number is divisible by 5 or not


#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if(n%5==0)
        printf("divisible by 5");
    else
        printf("not divisible by 5");

    return 0;

}
*/

/*  write a program to check whether a given number is even or odd


#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);

    if(a%2==0)
        printf("even");
    else
        printf("odd");

    return 0;

}
*/

/*  wiyhout using % operator

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if(n/2*2==n)
        printf("even");
    else
        printf("odd");
    return 0;
}

*/

/* WAP to a given number is three digit or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if(n>=100 && n<=999)
        printf("three digit number");
    else
        printf("not Three digit number");
    return 0;
}

*/

/* 7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots


#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d;
    printf("Enter the values of a,b,c :");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;

    if(d>0)
    {
      r1=-b+sqrt(d)/(2*a);
      r2=-b-sqrt(d)/(2*a);
      printf("The real roots = %f %f",r1,r2);

    }
    else if(d==0)
    {
        r1=-b/(2*a);
        r2=-b/(2*a);
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
   int year;
   printf("Enter a year:");
   scanf("%d",&year);

   if(((year%4==0) && (year%100!=0)) || (year%400==0))
    printf("%d is leap year",year);
   else
    printf("%d is not leap year",year);

  return 0;
}
*/

/*

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("greatest number is %d,a");
    }
    else if(b>c && b>a)
    {
        printf("greatest number is %d",b);
    }
    else
    {
        printf("greatest number is %d",c);
    }

    return 0;
}

*/


/*
#include<stdio.h>
int main()
{
    int cp,sp;
    int profit,loss;
    float profit_per,loss_per;

    printf("enter the cost price and selling price :");
    scanf("%d %d",&cp,&sp);

    profit = sp-cp;
    profit_per = (profit* 100/cp);

    loss=cp-sp;
    loss_per=(loss*100/cp);

    if(sp>cp)
    {
        printf("profit in percentage is %.2f", profit_per);
    }
    else
    {
        printf("loss in percentage is %2.f",loss_per);
    }

    return 0;
}

*/

/*
 WAP to check whether given alphabet is uppercase or lowercase

#include<stdio.h>

int main() {
   char ch;

   printf("Enter The Character : ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z')
      printf("Character is Upper Case Letters");
   else
      printf("Character is Lower Case Letters");

   return 0;
}
*/

/*

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    if(n%3==0 && n%2==0)
        printf("divisible by 3 and divisible by 2");
    else
        printf("not divisible by 3 and not divisible by 2");
    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    if(n%7==0 || n%3==0)
        printf("divisible by 7 or divisible by 3");
    else
        printf("not divisible by 7 or not divisible by 3");
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);

    if(a>0)
        printf("positive");
    else if(a<0)
        printf("negative");
    else
        printf("zero");
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    char c;
    printf("enter a character :");
    scanf("%c",&c);

    if(c>='A' && c<='z')
        printf("uppercase");
    else if(c>='a' && c<='z')
        printf("lowercase");
    else
        printf(" digit or special character");

    return 0;
}

*/


/*
#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter Length of Three Sides of a Triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if((side1 + side2 > side3)&&(side2 + side3 > side1)
            &&(side3 + side1 > side2))
     {
          printf("It is a Valid Triangle\n");
     }
      else {
        printf("It is an invalid Triangle");
         }

    return 0;
}
*/



/*
#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("31 days");
    }
    else if(month == 2)
    {
        printf("28 or 29 days");
    }
    else if(month == 3)
    {
        printf("31 days");
    }
    else if(month == 4)
    {
        printf("30 days");
    }
    else if(month == 5)
    {
        printf("31 days");
    }
    else if(month == 6)
    {
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    return 0;
}

*/





























