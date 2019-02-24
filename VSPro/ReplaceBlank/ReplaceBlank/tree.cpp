#include "tree.h"
#include <assert.h>
#include <stdlib.h>

typedef struct TREE_NODE
{
	TREE_TYPE value;
	struct TREE_NODE *left;
	struct TREE_NODE *right;
}TreeNode;

static TreeNode *tree;

void insert(TREE_TYPE value)
{
	TreeNode *current;
	TreeNode ** link;
	link = &tree;
	while((current = *link) != nullptr)
	{
		if(value < current->value)
			link = &current->left;
		else
		{
			assert(value != current->value);
			link = &current->right;
		}
	}
	current = (TREE_NODE*)malloc(sizeof(TreeNode));
	assert(nullptr != current);
	current->value = value;
	current->left = NULL;
	current->right = NULL;
	*link = current;
}

TREE_TYPE *find(TREE_TYPE value)
{
	TreeNode *current;
	current = tree;
	while (NULL != current && current->value != value)
	{
		if (value<current->value)
		{
			current = current->left;
		}
		else
			current = current->right;
	}
	if (NULL!= current)
	{
		return &current->value;
	}
	else
		return NULL;
}

void do_pre_order_traverse(TreeNode *current, void(*callback)(TREE_TYPE value))
{
	if(NULL != current)
	{
		callback(current->value);
		do_pre_order_traverse(current->left, callback);
		do_pre_order_traverse(current->right, callback);
	}
}

void pre_order_traverse(void(*callback)(TREE_TYPE value))
{
	do_pre_order_traverse(tree, callback);
}