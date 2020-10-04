#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define STACK_DIM 100
#define TRUE 1
#define FALSE 0

typedef int Bool;
typedef int Stack;
typedef char Operator;

int top = 0;
Stack stack[STACK_DIM] = {0};

Bool is_empty();
Bool is_full();
void push(int elem);
int pop();
void stack_overflow();
void stack_underflow();
int reverse_number(int num, int exponent);
void calculate_result(Operator op);

int main(void)
{
	char ch;
	Bool keep_insert = TRUE;
	int reversed_num = 0, exponent = 0, result;
	
	printf("This program calculate the result of an RPN expression\n");
	printf("Please, enter an RPN expression: ");
	
	while(keep_insert)
	{
		ch = getchar();
		if(ch >= '0' && ch <= '9')
		{
			int digit = ch - '0';
			printf("Digit: %d\n", digit);
			reversed_num += digit * pow(10, exponent++);
			printf("Reversed: %d\n", reversed_num);
		}
		else if(ch == ' ')
		{
			reversed_num = reverse_number(reversed_num, exponent);
			push(reversed_num);
			exponent = 0;
			reversed_num = 0;
		}
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			calculate_result(ch);
		}
		else if(ch == '=')
		{
			keep_insert = FALSE;
			result = pop();
		}
		else
		{
			printf("You have inserted an unexpected character...killing the process...\n");
			exit(EXIT_FAILURE);
		}
	}
	
	printf("The result is: %d\n", result);
	exit(EXIT_SUCCESS);
}

Bool is_empty()
{
	Bool empty = FALSE;
	if(top < 0)
		empty = TRUE;
	return empty;
}

Bool is_full()
{
	Bool full = FALSE;
	if(top >= STACK_DIM)
		full = TRUE;
	return full;
}

void push(int elem)
{
	if(is_full())
		stack_overflow();
	else
		stack[top++] = elem;
}

int pop()
{
	if(is_empty())
	{
		stack_underflow();
		return -1;	
	}
	else
		return stack[--top];
}

void stack_overflow()
{
	printf("The stack is full...killing the process...\n");
	exit(EXIT_FAILURE);
}

void stack_underflow()
{
	printf("The stack is empty, you can't pop an element...killing the process...\n");
	exit(EXIT_FAILURE);
}

int reverse_number(int num, int exponent)
{
	int digit, new_number = 0;
	do
	{
		digit = num % 10;
		new_number += digit * pow(10, --exponent);
		num /= 10;
	}while(num != 0);
	printf("New number: %d\n", new_number);
	return new_number;
}

void calculate_result(Operator op)
{
	int result = 0;
	int num1 = pop();
	int num2 = pop();
	
	switch(op)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if(num2 == 0)
			{
				printf("Only Chuck Norris can divide by zero...killing the process...\n");
				exit(EXIT_FAILURE);
			}
			else
				result = num1 / num2;
			break;
	}
	printf("Result: %d\n", result);
	push(result);
}
