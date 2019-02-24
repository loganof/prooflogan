#include "LinkStack.h"
#include <stdlib.h>
#include <assert.h>

typedef struct STACK_NODE
{
	STACK_TYPE value;
	struct STACK_NODE *next;
}StackNode;
static StackNode * stack;

void create_stack(size_t size)
{
}

void destroy_stack(void)
{
	while(!is_empty())
	pop();
}

void push(STACK_TYPE value)
{
	StackNode *new_node;
	new_node =(StackNode*)malloc(sizeof(StackNode));
	assert(nullptr != new_node);
	new_node->value = value;
	new_node->next = stack;
	stack = new_node;
}

void pop()
{
	StackNode * first_node;
	assert(!is_empty());
	first_node = stack;
	stack = first_node->next;
	free(first_node);
}

STACK_TYPE top(void)
{
	assert(!is_empty());
	return stack->value;
}

int is_full()
{
	return false;
}

int is_empty(void)
{
	return nullptr == stack;
}