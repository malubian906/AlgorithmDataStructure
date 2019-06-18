#include "LinkStack.h"

bool StackEmpty(LinkStack *S)
{
	bool isflag = false;
	if (S->count <= 0)
	{
		isflag = true;
	}
	return isflag;
}

bool Push(LinkStack *s, int e)
{
	LinkStackPtr *p = new LinkStackPtr;
	(*p)->data = e;
	(*p)->next = s->top;
	s->top = *p;
	s->count++;

	return true;
}

bool Pop(LinkStack *S,int &e)
{
	if(StackEmpty(S))
	return false;

	LinkStackPtr p = S->top;
	S->top = S->top->next;
	e = S->top->data;
	S->count--;
}