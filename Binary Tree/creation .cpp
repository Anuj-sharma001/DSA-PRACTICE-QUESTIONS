#include<iostream>
#include<algorithm>>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//traversal
void inorder(Node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node *root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void preorder(Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//queue traversal

void levelorder(Node *root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *current = q.front();
        cout<<current->data<<" ";
        if(current->left != NULL){
            q.push(current->left);
        }
        if(current->right != NULL){
            q.push(current->right);
        }
        q.pop();
    }
}


//insertion 
void insertion(Node *root , int value){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *current = q.front();

        if(current->left == NULL){
            current->left = new Node(value);
            return;
        }
        else{
            q.push(current->left);
        }
        if(current->right == NULL){
            current->right = new Node(value);
            return;
        }
        else{
            q.push(current->right);
        }

        q.pop();
    }
}

//deletion code is pending

//count nodes
int countNodes(Node *root){
    if(root == NULL){
        return;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

//count height
int maxn(Node *root){
    if(root == NULL){
        return;
    }
    int leftNode = maxn(root->left);
    int rightNode = maxn(root->right);

    return max(root->data, max(leftNode,rightNode));


}

int Sum(Node *root){
    if(root == NULL){
        return;
    }

    return root->data + Sum(root->left) + Sum(root->right);
}

int search(Node *root , int key){
    if(root == NULL){
        return -1;
    }
    else if(root->data == key){
        cout<<"Element Found"<<endl;
        return 0;
    }

    return search(root->left,key) || search(root->right,key);
}

int countLeafNode(Node *root , int key){
    if(root == NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    
    return countLeafNode(root->left,key) + countLeafNode(root->right,key);
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(4);
}