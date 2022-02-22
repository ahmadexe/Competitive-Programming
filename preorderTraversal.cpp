#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

void preorderTraversal(struct Node* n){
    if (n != NULL){
        cout<<n->data;
        preorderTraversal(n->left);
        preorderTraversal(n->right);
    }
}

int main(int argc, char const *argv[])
{
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    struct Node* left1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* right1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* left2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* right2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* left3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* right3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* left4 = (struct Node*)malloc(sizeof(struct Node));
    //struct Node* right4 = (struct Node*)malloc(sizeof(struct Node));
    
    root->data = 7;
    root->left = left1;
    root->right = right1;
    left1->data = 6;
    left1->left = left2;
    left1->right = right2;
    right1->data = 8;
    right1->left = left3;
    right1->right = right3;
    left3->data = 3;
    left3->left = NULL;
    left3->right = NULL;
    right3->data = 1;
    right3->left = NULL;
    right3->right = NULL;
    left2->data = 5;
    left2->left = left4;
    left2->right = NULL;
    right2->data = 4;
    right2->left = NULL;
    right2->right = NULL;
    left4->data = 2;
    left4->left = NULL;
    left4->right = NULL;


    preorderTraversal(root);

return 0;
}