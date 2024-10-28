#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void inorder(node* root) {    //left node right
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(node* root) {   //node left right
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root) {   //left right node
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

node* insertToBST(node* root, int d)
{
    //base case
    if(root == NULL)
    {
        root = new node(d);
        return root;
    }

    if(d > root->data){
        //right part me insert krna h
        root->right=insertToBST(root->right,d);
    }
    else{
        //left part me insert krna h
        root->left=insertToBST(root->left,d);
    }
    return root;
}

void input(node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        if (root == NULL) {
            root = new node(data);
        } else {
            insertToBST(root, data);
        }
        cin >> data;
    }
}

int main() {

    node* root = NULL;

    //creating a Tree
    
    cout<<"Enter data to create BST : "<<endl;
    input(root);

    // cout<<"Printing the Binary search tree : "<<endl;
    // levelOrderTraversal(root);

    cout << "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root);
    
    return 0;
}