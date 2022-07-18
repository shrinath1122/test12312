/*
1.Write a program to calculate sum of first N natural numbers

#include <stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter a number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       sum+=i;
   }
    printf("Sum is %d\n",sum);

    return 0;
}

*/

/*

2. Write a program to calculate sum of first N even natural numbers

#include <stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter a number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {

       sum+=2*i;
   }
    printf("Sum is %d\n",sum);

    return 0;
}

*/


/*
3. Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter a number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {

       sum+=2*i-1;
   }
    printf("Sum is %d\n",sum);

    return 0;
}

*/


/*

4. Write a program to calculate sum of squares of first N natural numbers


#include <stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter a number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {

       sum+=i*i;
   }
    printf("Sum is %d\n",sum);

    return 0;
}

*/

/*

5. Write a program to calculate sum of cubes of first N natural numbers

#include <stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter a number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {

       sum+=i*i*i;
   }
    printf("Sum is %d\n",sum);

    return 0;
}

*/

/*

6. Write a program to calculate factorial of a number

#include <stdio.h>

int main()
{
   int i,n,fac=1;
   printf("Enter a number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {

       fac*=i;
   }
    printf("factorial of %d is %d\n",n,fac);

    return 0;
}

*/


/*

7. Write a program to count digits in a given number

#include <stdio.h>

int main()
{
   int i,n,count=0;
   printf("Enter a number :");
   scanf("%d",&n);

   while(n!=0)
   {
       n=n/10;
       count++;

   }
    printf("count of digits in number is %d\n",count);

    return 0;
}

*/

/*

8. Write a program to check whether a given number is a Prime number or not.

#include <stdio.h>

int main()
{
   int i,n,count=0;
   printf("Enter a number :");
   scanf("%d",&n);

 for(i=2;i<=n/2;i++)
   {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
   }
   if(count==0)
   printf("prime");
   else
   printf("not prime");
    return 0;
}

*/

/* 9.WAP to find LCM of two numbers

#include<stdio.h>
int main()
{
    int a,b,max,L;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    max=a>b?a:b;
    for(L=max;L<=a*b;L+=max)
    {
        if(L%a==0 && L%b==0)
            break;
    }
    printf("LCM is %d",L);

    return 0;

}

*/

/* 10.WAP to print reverse number

#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("reverse number is %d",sum);

    return 0;
}

*/













































