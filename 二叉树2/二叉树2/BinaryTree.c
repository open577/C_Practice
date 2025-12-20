#include"BinaryTree.h"
// 求第k层节点个数
int TreeLevalSize(BTNode * root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return TreeLevalSize(root->left, k - 1) + TreeLevalSize(root->right, k - 1);
}
//查找值为x的节点
BTNode* TreeFind(BTNode* root, int x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BTNode* ret1 = TreeFind(root->left, x);
	BTNode* ret2 = TreeFind(root->right, x);
	if (ret1)
		return ret1;
	if (ret2)
		return ret2;
	return NULL;
}
//树的高度
int TreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;
	int leftheight = TreeHeight(root->left);
	int rightheight = TreeHeight(root->right);
	return leftheight > rightheight ? leftheight + 1 : rightheight + 1;

}
//叶的个数
int TreeleafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else if (root->left == NULL & root->right == NULL)
		return 1;
	else
		return TreeleafSize(root->left) + TreeleafSize(root->right);
}
//节点个数
int TreeSize(BTNode* root)
{
	return root==NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
//申请节点
BTNode* BuyNode(BTDataType x)
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
	BTNode* root = CreatBinaryTree();
	//前序遍历
	printf("前序遍历：");
	PrevOrder(root);
	printf("\n");
	//中序遍历
	printf("中序遍历:");
	InOrder(root);
	printf("\n");
	//后序遍历
	printf("后序遍历：");
	BackOrder(root);
	printf("\n");
	//节点个数
	printf("TreeSize:%d\n", TreeSize(root));
	//叶的个数
	printf("TreeleafSize:%d\n", TreeleafSize(root));
	//树的高度
	printf("TreeLevalSize:%d\n", TreeHeight(root));
	//第k层节点个数
	printf("Treeheight:%d\n", TreeLevalSize(root,2));
	printf("TreeLevalSize:%d\n", TreeLevalSize(root,3));
	//值为x的节点
	BTNode* node = TreeFind(root, 2);
	printf("%d\n", node->data);
	return 0;
}