#pragma once
#include "LinkStack.h"
// ��ʽջ
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
//  ��ʽջ��������
bool Push(LinkStack *s,int e);
bool Pop(LinkStack *S,int &e);
bool StackEmpty(LinkStack *S);