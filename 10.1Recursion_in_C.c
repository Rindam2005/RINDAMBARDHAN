/* WAP IN C TO PRINT 50 NATURAL NUMBERS USING RECURSION*/
#include<stdio.h>
#include<conio.h>
int natural(int i)
{ 
	if(i==0)
	return 0;
	natural(i-1);
	printf("%d",i);
	
	
}
int main()
{
	int n;
	printf("enter the nth number u want to print");
	scanf("%d",&n);
	printf("%d\n",n);
	natural(n);
	return 0;
	
}

/*output:
enter the nth number: 5
12345*/
