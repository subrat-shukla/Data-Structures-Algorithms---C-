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

void levelOrderTraversal(node* root) {
    if (root == NULL) {
        cout << "Tree is empty!" << endl;
        return;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; i++) {
            node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }
        cout << endl; // Print a new line after each level
    }
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

node* minValue(node* root){
    node* temp = root;

    while(temp->left!=NULL)
        temp  = temp->left;
    
    return (temp);
}

// deleting a node from the BST
node* deleteNode(node* root, int val){
    /* Base Case */
    if (root==NULL)
        return root;

    if(root->data == val){
        //have 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //have 1 child
        //only left
        if(root->left != NULL && root->right == NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }

        //only right
        if(root->left == NULL && root->right != NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }

        //have 2 child
        if(root->left != NULL && root->right != NULL){
            int min = minValue(root->right)->data;
            root->data = min;
            root->right = deleteNode(root->right,min);
            return root;
        }
    }
    else if(root->data < val){
        root->right=deleteNode(root->right,val);
        return root;
    }
    else{
        root->left=deleteNode(root->left,val);
        return root;
    }
    
}

int main() {

    node* root = NULL;

    //creating a Tree
    
    cout<<"Enter data to create BST : "<<endl;
    input(root);

    cout<<"Printing the Binary search tree : "<<endl;
    levelOrderTraversal(root);

    root = deleteNode(root, 50);

    cout<<"Printing the Binary search tree : "<<endl;
    levelOrderTraversal(root);
    
    return 0;
}