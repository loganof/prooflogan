#include "Stack.h"
#include <assert.h>
#include <stdlib.h>

#define STACK_SIZE 100

//static STACK_TYPE stack[STACK_SIZE];
static STACK_TYPE stack_size;
static int top_element = -1;
static STACK_TYPE *stack;

void create_stack(size_t size)
{
	assert(stack_size == 0);
	stack_size = size;
    stack = (STACK_TYPE *)malloc(stack_size * sizeof(STACK_TYPE));
	assert (nullptr != stack);
}

void destroy_stack(void)
{
	assert(stack_size > 0);
	stack_size = 0;
	free(stack);
}

void push(STACK_TYPE value)
{
	assert(!is_full());
	top_element ++;
	stack[top_element] = value;
}

void pop()
{
	assert(!is_empty());
	top_element--;
}

STACK_TYPE top(void)
{
	assert(!is_empty());
	return stack[top_element];
}

int is_full()
{
	assert(stack_size > 0);
	return top_element == stack_size - 1; 
}

int is_empty(void)
{
	assert(stack_size > 0);
	return top_element == -1;
}