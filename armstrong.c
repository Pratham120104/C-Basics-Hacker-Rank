#include<stdio.h>
int main()
{
	int temp,sum=0,num,rem;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	printf("%d is an armstrong",sum);
	else
	printf("%d is not an armstrong",sum);
	getch();
	
}
