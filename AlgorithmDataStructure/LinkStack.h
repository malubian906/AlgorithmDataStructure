#pragma once
#include "LinkStack.h"
// 链式栈
typedef struct StackNode
{
	int data;
	struct StackNode *next;
} StackNode, *LinkStackPtr;

typedef struct LinkStack
{
	LinkStackPtr top;
	int count;
} LinkStack;
//  链式栈操作函数
bool Push(LinkStack *s,int e);
bool Pop(LinkStack *S,int &e);
bool StackEmpty(LinkStack *S);