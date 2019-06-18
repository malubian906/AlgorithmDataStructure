#include "LinkStack.h"

bool LinkStackSpace::StackEmpty(LinkStack *S)
{
	bool isflag = false;
	if (S->count <= 0)
	{
		isflag = true;
	}
	return isflag;
}

bool  LinkStackSpace::Push(LinkStack *s, int e)
{
	LinkStackPtr *p = new LinkStackPtr;
	(*p)->data = e;
	(*p)->next = s->top;
	s->top = *p;
	s->count++;

	return true;
}

bool  LinkStackSpace::Pop(LinkStack *S,int &e)
{
	if(StackEmpty(S))
	return false;

	LinkStackPtr p = S->top;
	S->top = S->top->next;
	e = S->top->data;
	S->count--;
}