/*

1.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
2.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
3.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
4.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
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
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}


*/

/*
6.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i&& j<=10-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
7.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i && j>=5+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
8.

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
         k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
                else
                    printf(" ");

        }
        printf("\n");
    }

    return 0;

}

*/


/*
9.

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {    k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
               {
                printf("%d",k);
                j<4?k++:k--;
               }
                else
                    printf(" ");

        }
        printf("\n");
    }

    return 0;

}

*/

/*
10.

#include<stdio.h>
int main()
{
    int i,j,k;


    for(i=1;i<=4;i++)
    {    k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i && j>=3+i)
               {
                printf("%d",k);
                j<4?k++:k--;
               }
                else
                    printf(" ");

        }
        printf("\n");
    }

    return 0;

}

*/

/*
11.

#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1; i<=5; i++)
    {
        k='A';
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",k);
                j<5?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
12.

#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1; i<=4; i++)
    {
        k='A';
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
13.

#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1; i<=7; i++)
    {
        k='A';
        for(j=1; j<=13; j++)
        {
            if(j<=8-i || j>=6+i)
            {
                printf("%c",k);
                j<7?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
14.

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
15.

#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j>=6-k && j<=4+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


*/














































































/*


#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {    k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=6-i && j<=4+i)
                printf("%c",k);
                j<5?k++:k--;
        }
        printf("\n");
    }

    return 0;

}

*/

/*

#include<stdio.h>
int main()
{
    int i,j,k=65;

    for(i=1;i<=4;i++)
    {    k=65;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("%c",k);
                j<4?k++:k--;


    }
        }
        printf("\n");
    }

    return 0;

}

*/









































































































