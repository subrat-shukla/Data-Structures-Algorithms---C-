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

node* minValue(node* root){
    node* temp = root;

    while(temp->left!=NULL)
        temp  = temp->left;
    
    return (temp);
}

node* maxValue(node* root){
    node* temp = root;

    while(temp->right!=NULL)
        temp  = temp->right;
    
    return (temp);
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

    cout<<"Minimum value of BST is : "<<minValue(root)->data<<endl;
    cout<<"Maximum value of BST is : "<<maxValue(root)->data<<endl;
    
    return 0;
}