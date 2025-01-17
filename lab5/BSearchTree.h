#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct BinaryTreeNode {
    int key; 
    int size; 
    struct BinaryTreeNode* left; 
    struct BinaryTreeNode* right;
} BinaryTreeNode;

BinaryTreeNode* Create(int);
void UpdateSize(BinaryTreeNode*);
BinaryTreeNode* Insert(BinaryTreeNode*, int);
int FindNumElem(BinaryTreeNode*, int);
BinaryTreeNode* FindElemInNum(BinaryTreeNode*, int);
BinaryTreeNode* FindElemNumMinusK(BinaryTreeNode*, int, int);
bool Print(BinaryTreeNode*);
void Free(BinaryTreeNode*);
