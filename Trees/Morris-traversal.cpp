//morris traversal for inorder
#include <bits/stdc++.h>
using namespace std;


struct tNode {
	int data;
	struct tNode* left;
	struct tNode* right;
};

/* Function to traverse the binary tree without recursion
and without stack */
void MorrisTraversal(struct tNode* root)
{
	struct tNode *current, *pre;

	if (root == NULL)
		return;

    /* Constructed binary tree is
			1
		  /  \
		2	  3
	   / \
	  4	  5
*/                                                                
	current = root;    
	while (current != NULL) {

		if (current->left == NULL) {
			cout << current->data << " ";
			current = current->right;
		}
		else {

			/* Find the inorder predecessor of current */
			pre = current->left;
			while (pre->right != NULL && pre->right != current)
				pre = pre->right;

			/* Make current as the right child of its
			inorder predecessor */
			if (pre->right == NULL) {
				pre->right = current;
				current = current->left;
			}

			/* Revert the changes made in the 'if' part to
			restore the original tree i.e., fix the right
			child of predecessor */
			else {
				pre->right = NULL;
				cout << current->data << " ";
				current = current->right;
			} /* End of if condition pre->right == NULL */
		} 
	} 
}

/* UTILITY FUNCTIONS */
/* Helper function that allocates a new tNode with the
given data and NULL left and right pointers. */
struct tNode* newtNode(int data)
{
	struct tNode* node = new tNode;
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

int main()
{

	/* Constructed binary tree is
			1
		  /  \
		2	  3
	   / \
	  4	  5
*/
	struct tNode* root = newtNode(1);
	root->left = newtNode(2);
	root->right = newtNode(3);
	root->left->left = newtNode(4);
	root->left->right = newtNode(5);

	MorrisTraversal(root);

	return 0;
}