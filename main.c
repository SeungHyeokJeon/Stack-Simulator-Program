#include <stdio.h>
#include <stdlib.h>
#define SIZE 5;								//���� ũ��

int top;									//������ ����Ű�� ��ġ

void clearScreen()							//ȭ�����찳
{
	system("clear");
}

void wait()									//Ű������ ������ ���
{
	printf("     �ƹ�Ű�� ��������.\n");
	fflush(stdin);
	getchar();
}

void menu()									//���θŴ�
{
	int Select;
	for (;;)
	{
		clearScreen;
		puts("----- Stack Simultation Program -----\n");
		puts("     Push Data     ---------(1)");
		puts("     Pop Data      ---------(2)");
		puts("     Show Stack    ---------(3)");
		puts("     Search Data   ---------(4)");
		puts("     Quit Program  ---------(5)\n");
		printf("Select Work(1~5) : ");
		scanf_s("%d", &Select);

		switch(Select)
		{
			case 1:
				push;
				break;
			case 2:
				pop;
				break;
			case 3:
				showStack;
				break;
			case 4:
				searchData;
				break;
			case 5:
				exit(0);
			default:
				puts("Please Enter The Correct Number");
				wait;
				break;
		}
	}
}

int isnegative(int)						//�Ű� ������ ���� ������ �������� �Ǻ�
{
	int x;
	if (x >= 0) return 0;
	else return 1;
}

int isEmpty()							//����Ű�� ������ ����ִ��� Ȯ��
{

}

int isFull()							//������ ���� á���� Ȯ��
{
	int top;
	top == SIZE - 1;

	if (stack(top) == NULL) return 0;
	else return 1;
}

int push(int)							//�Է¹��� ���� ���ÿ� �ֱ�
{
	scanf_s("%d", &stack(top));
	isnegative(int stack[top]);
	if (isnegative == 0)
	{
		puts("Error : You entered negative number, Please Enter positive number.");
		stack[top] = 0;
	}
	else top++;
}

int pop()								//����Ű�� ���� ���� ���
{
	top--;
	if (top < (-1))
	{
		puts("Error : Stack is empty.");
		top = top - 1;
		return -1;
	}
	else
	{
		printf("%d\n", stack[top + 1]);
		return 0;
	}

}

void showStack()						//���� ��� ���� ���
{
	if (isEmpty() = 1)
		puts("Stack is Empty.");
	else
	{
		for (;;)
		{
			if (top == -1) break;
			else
			{
				printf("%d", stack[top]);
				top--;
			}
		}
	}
}

void searchData(int)
{
	int i;
}

void main()
{
	menu;

}