/*

1. Write a program which takes the month number as an input and display
number of days in that month.


#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month :");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28 or 29 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;
    default:
        printf("Invalid input month number ! Enter between 1 to 12 number");
    }

    return 0;
}

*/

/*
2.

#include<stdio.h>
int main()
{
    int x,a,b;

    while(1)
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");

        printf("Enter your choice");
        scanf("%d",&x);

        switch(x)
        {
        case 1:
            printf("Enter two numbers :");
            scanf("%d %d",&a,&b);
            printf("Addition is %d",a+b);
            break;
        case 2:
            printf("Enter two numbers :");
            scanf("%d %d",&a,&b);
            printf("subtraction is %d",a-b);
            break;
        case 3:
            printf("Enter two numbers :");
            scanf("%d %d",&a,&b);
            printf("Multiplication is %d",a*b);
            break;
        case 4:
            printf("Enter two numbers :");
            scanf("%d %d",&a,&b);
            printf("Division is %d",a/b);
            break;
        case 5:
            break;
        default:
            printf("Invalid choice");
        }
        if(x==5)
            break;

    }

    printf("\n");
    return 0;
}

*/

/*
3.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the day in number of week :");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thrusday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
            printf("sunday");
            break;

        default:
            printf("invalid input");
    }
    return 0;
}

*/

/*
4.

#include<stdio.h>
int main()
{
    int x,a,b,c;

    while(1)
    {
        printf("1.Isosceles triangle or not\n");
        printf("2.right angled triangle or not\n");
        printf("3.equilateral triangle or not\n");
        printf("4.Exit\n");

        printf("Enter a number");
        scanf("%d",&x);

        switch(x)
        {
        case 1:
            printf("Enter three numbers");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b || b==c || c==a)
                printf("Isosceles triangle");
            else
                printf("not isosceles triangle");
            break;

        case 2:
            printf("Enter three numbers");
            scanf("%d %d %d",&a,&b,&c);
            if(c*c==a*a+b*b)
                printf("right angle triangle");
            else
                printf("not right angled triangle");
            break;

        case 3:
            printf("Enter three numbers");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b && b==c)
                printf("equilateral triangle");
            else
                printf("not equilateral triangle");
            break;

        case 4:
            break;


        }
        if(x==4)
            break;
        printf("\n");
    }
        return 0;
    }

*/

/*
5.

#include<stdio.h>
int main()
{
    int var;
    printf("Enter a number :");
    scanf("%d",&var);

    switch(var)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;

    default :
        printf("Invalid");

    }
    return 0;
}

*/



/*
6.

#include<stdio.h>
int main()
{
    int year,x;
    printf("Enter a number");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("Enter a year");
        scanf("%d",&year);
        if(year%4==0)
            printf("leap year");
        else
            printf("not leap year");
        break;

    case 2:
        printf("Enter a year");
        scanf("%d",&year);
        if(year%400==0)
            printf("leap year");
        else
            printf("not leap year");
        break;

    case 3:
        printf("Enter a year");
        scanf("%d",&year);
        if(year%100==0)
            printf("not leap year");
        else
            printf("leap year");
        break;

    }
    return 0;
}

*/


/*

#include<stdio.h>
int main()
{
    int x,unit;
    float bill;
    printf("Enter a number");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("Enter the unit");
        scanf("%d",&x);
        if(x<=50){
                bill=x*0.50;
            printf("bill of %d unit is %f",x,bill);
        }



    }
}

*/



/*


#include<stdio.h>
int main()
{
    int x,n;

    printf("1.positive to negative\n");
    printf("2.negative to positive\n");

    printf("\nEnter a choice :");
    scanf("%d",&x);


    switch(x)
    {
    case 1:
        printf("Enter a positive number :");
        scanf("%d",&n);
        n=n*(-1);
        printf("negative number is %d",n);
        break;

    case 2:
         printf("Enter a negative number :");
        scanf("%d",&n);
        n=n*(-1);
        printf("negative number is %d",n);
        break;

    default :
        printf("Invalid input");

    }
    return 0;
}

*/





























































































