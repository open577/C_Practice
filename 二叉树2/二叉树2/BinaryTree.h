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
void InOrder(BTNode* root);
//后序遍历
void BackOrder(BTNode* root);
//节点个数
int TreeSize(BTNode* root);
//叶的个数
int TreeleafSize(BTNode* root);
//树的高度
int TreeHeight(BTNode* root);
//求第k层节点个数
int TreeLevalSize(BTNode* root, int k);
//查找值为x的节点
BTNode* TreeFind(BTNode* root, int x);