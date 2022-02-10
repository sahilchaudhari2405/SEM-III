#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};
Node *inserted(Node *root, int val)
{
	if (root == NULL)
	{
		return new Node(val);
	}
	if (val < root->data)
	{
		root->left = inserted(root->left, val);
	}
	else
	{
		root->right = inserted(root->right, val);
	}
	return root;
}
void show(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	show(root->left);
	show(root->right);
}
void show1(Node *root)
{
	if (root == NULL)
	{
		return;
	}

	show1(root->left);
	cout << root->data << " ";
	show1(root->right);
}
void show2(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	show2(root->left);
	show2(root->right);
	cout << root->data << " ";
}
int main()
{
	Node *root = NULL;
	root = inserted(root, 5);
	inserted(root, 1);
	inserted(root, 3);
	inserted(root, 4);
	inserted(root, 2);
	cout << "pre order" << endl;
	show(root);
	cout<<"\n";
	cout << "in order" << endl;
	show1(root);
		cout<<"\n";
	cout << "post order" << endl;
	show2(root);
	cout << endl;

	return 0;
}