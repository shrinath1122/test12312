/* 1. Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Unit digit of %d is %d",a,a%10);

    return 0;
}

*/


/* 2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("number %d without its last digit is %d",b,b/10);
    return 0;
}
*/


/*  3. Write a program to swap values of two int variables


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);

    return 0;
}

*/

/*4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d b=%d",a,b);
    return 0;
}

*/

/* Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter three digit number :");
    scanf("%d",&n);
    printf("sum of number is %d",n/100+n/10%10+n%10);
    return 0;

}

*/

/*   Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    printf("The ASCII code of character %c is : %d",x,x);
    return 0;
}

*/

/* Write a program to find the position of first 1 in LSB

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    if(n&1==1)
        printf("LSB of %d is set 1",n);
    else
        printf("LSB of %d is set 0",n);

    return 0;

}
*/

/*Write a program to check whether the given number is even or odd using a bitwise operator

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    int result=n&1;

    if(result==1)
        printf("odd");
    else
        printf("even");
    return 0;

}

*/

/*
#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("Size of int character is : %d\n",sizeof(a));
    printf("Size of float character is : %d\n",sizeof(b));
    printf("Size of char character is : %d\n",sizeof(c));
    printf("Size of double character is : %d",sizeof(d));

    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    int x=2345;
    printf("number entered is :%d",x);


    printf("number after changes :%d",x);
    return 0;
}

*/

/* . Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.



#include<stdio.h>
int main()
{
    int rupees;
   float dollars;

    printf("enter a amount in rupees :");
    scanf("%d",&rupees);

    dollars=rupees/76.23;

    printf("amount in USD is %f",dollars);

    return 0;

}

*/































































