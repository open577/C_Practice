#include"BinaryTree.h"
//申请节点
BTNode * BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail!");
		return NULL;
	}
	node->data = x;
	node->left = NULL;
	node->right = NULL;
}
//创建二叉树
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;   
	return node1;
}
//前序遍历(递归)
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}
//中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}
//后序遍历
void BackOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	BackOrder(root->left);
	BackOrder(root->right);
	printf("%d ", root->data);
}
int main()
{
	BTNode;
	BTNode*root=CreatBinaryTree();
	PrevOrder(root);
	printf("\n");
	InOrder(root);
	printf("\n");
	BackOrder(root);
	printf("\n");
	return 0;
}