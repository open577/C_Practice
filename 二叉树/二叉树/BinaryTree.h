#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;
//定义节点
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;
//申请节点
BTNode* BuyNode(BTDataType x);
//创建二叉树
BTNode* CreatBinaryTree();
//前序遍历
void PrevOrder(BTNode* root);
//中序遍历
void InOrder(BTNode * root);
//后序遍历
void BackOrder(BTNode* root);