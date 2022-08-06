/*
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user

#include<stdio.h>
int main()
{
    int i, a[10],sum=0;

    printf("Enter 10 numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }

    printf("sum of 10 numbers is %d",sum);

    return 0;

}

*/

/*
2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.


#include<stdio.h>
int main()
{

    int i, a[10],sum=0;
    float avg;

    printf("Enter 10 numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }

    avg=sum/10;
    printf("avg of 10 numbers is %2.f",avg);

    return 0;
}


*/

/*
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user


#include<stdio.h>
int main()
{
    int i,a[10],se=0,so=0;

    printf("Enter 10 numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
            se=se+a[i];
        else
            so=so+a[i];
    }
    printf("sum of even numbers is %d\n",se);
    printf("sum of odd numbers is %d",so);

    return 0;
}

*/

/*
4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.


#include<stdio.h>
int main()
{
    int i,arr[10],max=arr[0];

    printf("Enter 10 numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]>max)
            max=arr[i];
    }
    printf("greatest number is %d",max);

    return 0;
}

*/

/*
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.


#include<Stdio.h>
int main()
{
    int i,a[10],min;
    min=a[0];

    printf("Enter 10 numbers :");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
            min=a[i];
    }

    printf("smallest number is %d",min);

    return 0;
}

*/

/*
6. Write a program to sort elements of an array of size 10. Take array values from the
user.


#include<stdio.h>
int main()
{
     int a[10],i,j,temp;

     printf("Enter 10 numbers :");

     for(i=0;i<=9;i++)
     {
         scanf("%d",&a[i]);

     }

     for(i=0;i<=9;i++)
     {
         for(j=i+1;j<=9;j++)
         {
             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }
     printf("array elements :");
     for(i=0;i<=9;i++)
     {
         printf("%d ",a[i]);
     }

     return 0;
}

*/

/*
7. Write a program to find second largest in an array.Take array values from the user

#include<stdio.h>
int main()
{
    int a[5],i;

    printf("enter 5 numbers :");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=4;i++)
    {
        if()
    }

}

*/

/*
9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[5],i;

    printf("Enter 5 numbers :");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

*/

/*

#include<stdio.h>
int main()
{
    int a1[5],i,a2[5];

    printf("enter 5 numbers :");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&a1[i]);


    }

    for(i=0;i<=4;i++)
    {
        a2[i]=a1[i];
    }

    for(i=0;i<=4;i++)
    {
        printf("%d",a2[i]);
    }

    return 0;
}

*/
























