/*
1.write a function to calculate LCM of two numbers

#include<stdio.h>
int LCM(int,int);

int main()
{
    int lcm,x,y;
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    lcm=LCM(x,y);
    printf("LCM of numbers is %d",lcm);
    return 0;

}

int LCM(int a,int b)
{
    int L,max;
    max=a>b?a:b;
    for(L=max;L<=a*b;L=L+max)
        if(L%a==0&&L%b==0)
        break;

    return L;

}
*/

/*
2.HCF OF TWO NUMBERS

#include<stdio.h>
int HCF(int,int);

int main()
{
    int hcf,x,y;
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    hcf=HCF(x,y);
    printf("HCF of two numbers is %d",hcf);

    return 0;
}

int HCF(int a,int b)
{
    int H,min;
    min=a<b?a:b;
    for(H=min;H>=1;H--)
        if(a%H==0 && b%H==0)
        break;

    return H;
}

*/

/*
3.
#include <stdio.h>
int prime(int);
int main()
{
	int num,res=0;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}

*/


/*
#include<stdio.h>


int main()
{

}


void nextprime(int n)
{
    int np;
}

*/

/*
7.

#include<stdio.h>
void fibonacci(int);

int main()
{
    int N;
    printf("Enter a number :");
    scanf("%d",&N);

    fibonacci(N);
    return 0;
}

void fibonacci(int n)
{
    int n1=0,n2=1,n3,i;
    n3=n1+n2;

    for(i=3;i<=n;i++)
    {
        printf("%d, ",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
}

*/

/*
9.

#include<stdio.h>
int square(int);

int main()
{
    int N,square_two;
    printf("Enter a number :");
    scanf("%d",&N);

    square_two=square(N);
    printf("%d",square_two);

    return 0;
}

int square(int n)
{
    return n*n;
}


*/

/*
11.

#include<stdio.h>
int fact(int);
int main()
{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("%d",sum);

    return 0;
}

int fact(int n)
{
   int num=0,f=1;
        while(num<=n-1)
        {
            f =f+f*num;
            num++;
        }
    return f;
}

*/



















































































