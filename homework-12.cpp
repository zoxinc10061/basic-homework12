#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i,space,j,num;
	
	printf("�п�J�ˤT���Ϊ���:\n");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(space=1;space<=num;space++)
		{
			if(num-i>=space)
				printf(" ");
			else
				break;
		}
		for(j=i;j>=1;j--)
			printf("*");
		printf("%\n");
	}
	system("pause");
	return 0;
}
