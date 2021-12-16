#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int x)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorderprinting(struct node *tree)
{
    if(tree != NULL)
    {
        printf("%d ",tree->data);
        preorderprinting(tree->left);
        preorderprinting(tree->right);
    }
}

void inorderprinting(struct node *tree)
{
    if(tree != NULL)
    {
        inorderprinting(tree->left);
        printf("%d ",tree->data);
        inorderprinting(tree->right);
    }
}


int main()
{
    struct node *root = (struct node*)malloc(sizeof(struct node));
     root = newnode(1);
     root->left = newnode(2);
     root->right = newnode(3);
     root->left->left = newnode(4);
     root->left->right = newnode(5);
     root->right->left = newnode(6);
     root->right->right = newnode(7);
     printf("Pre Order Traversal of binary tree = \n");
     preorderprinting(root);
     printf("\n");
     printf("In Order Traversal of binary tree = \n");
     inorderprinting(root);
    return 0;
}
    
    
