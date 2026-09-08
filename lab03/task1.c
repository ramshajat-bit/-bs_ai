#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks out of 100 ");
	scanf("%d",&marks);
	printf("%d",marks/10);
	switch(marks/10)
	{
		case 10:
		case 9:
		case 8:
		printf("your grade is A");
		break;
		case 7:
		printf("Your grade is B");
		break;
		case 6:
		printf("Your grade is c");
		break;
			
	    default: printf("your grade is d");
	}
	return 0;
}
