//�������Ĺ������������

#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode
{
	char data;
	struct BiTNode *lChild, *rChild;
} BiTNode, *BiTree;

//���������
void CreateBiTree(BiTree T )
{
	char ch;
	
	if('#'== ch)
	{
		T = NULL;
	}
	else
	{
		T = (BiTree)malloc(sizeof(BiTNode));
		T->data = ch;
		CreateBiTree(T->lChild);	
		CreateBiTree(T->rChild);
	}
			
}

//ǰ�����
void PreOrderTraverse(BiTree T)
{
	if (T == NULL)
	{
		return;
	}
	printf("%c", T->data);
	PreOrderTraverse(T->lChild);
	PreOrderTraverse(T->rChild);
}


