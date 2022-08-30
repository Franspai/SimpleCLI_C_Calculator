#include<stdio.h>

int main()
{
	char opt;
	int n1, n2;
	float res;
	printf(" What do you want to do + - * / ? \n");
	scanf("%c", &opt); 
	//operator choice
	if(opt == '/')
	{
		printf("Division");
	}
	else if(opt == '*')
	{
		printf("Multiplication");
	}
	else if(opt == '+')
	{
		printf("Addition");
	}
	else if(opt == '-')
	{
		printf("Subtraction");
	}
	printf("\n Number");
	scanf("%d", &n1); //scan for first num
	printf("\n Number");
	scanf("%d", &n2); //scan for second num
	
        switch(opt)
	{
		case '+':
		res = n1 + n2;
		printf("%.2f", n1, n2, res);
		break;

		case '-':
		res = n1 - n2;
		printf("%.2f", n1, n2, res);
		break;

		case '*':
		res = n1 * n2;
		printf("%.2f", n1, n2, res);
		break;

		case '/':
			if(n2 == 0)
			{
				printf("\n Ilegal operation");
				scanf("%d", &n2);
			}

		res = n1 / n2;
		res = n1 % n2;
		printf("%.2f", n1, n2, res);
		break;
deafault:
		printf("Wrong!!!!!");
	}
	return 0;
}


