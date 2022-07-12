/* 1.Write a program to print Hello Students on the screen.

#include<stdio.h>
int main()
{
    printf("Hello");
    return 0;
}

*/

/* 2. Write a program to print Hello in the first line and Students in the second line

#include<stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;
}

*/

/* 3.Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

#include<stdio.h>
int main()
{
    printf(" \"MySirG\" ");
    return 0;
}

*/

/* 4.WAP to calculate area of circle
#include<stdio.h>
int main()
{
    int R;
    float A;
    printf("Enter a radius :\n");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("\"Area of circle is %f having the radius %d"\",A,R);
    return 0;
}

*/


/*5. WAP to calculate the length of String using printf function.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int l;
    printf("Enter the string name :");
    gets(s);
    l=strlen(s);
    printf("Length of %s is %d",s,l);
    return 0;
}

*/

/* 6. WAP to print the name of the user in double quotes.

#include<stdio.h>
int main()
{
    printf("\"Hello ,Amit Kumar\" ");
    return 0;

}

*/

/*  7. WAP to print “%d” on the screen.

#include<stdio.h>
int main()
{
    printf("%%d");
    return 0;
}

*/

/* 8. WAP to print “\n” on the screen.

#include<stdio.h>
int main()
{
    printf("\\n");
    return 0;

}

*/

/* 9. WAP to print “\\” on the screen.

#include<stdio.h>
int main()
{
    printf("\\\\");
    return 0;

}
*/

/* 10. WAP to take date as an input in below given format and convert the date format and
display the result as given below.

User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)

#include<stdio.h>
int main()
{
    int date,month,year;
    printf("Enter the date in the form of DD/MM/YYYY :");
    scanf("%d/%d/%d",&date,&month,&year);

    printf("converted date you enter : %d-%d-%d\n",date,month,year);
    return 0;
}

*/


/* 11. WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”

#include<stdio.h>
int main()
{
    int hour,minute;
    printf("Enter the time in the form of HH:MM  :");
    scanf("%d:%d",&hour,&minute);

    printf("converted time format : %d hour and %d minute",hour,minute);
    return 0;
}

*/


/*
12. Find output of below code:
#include<stdio.h>
int main()
{

    int x = printf(“ineuron”);
    printf(“%d”,x);
    return 0;

}

*/














































































































































