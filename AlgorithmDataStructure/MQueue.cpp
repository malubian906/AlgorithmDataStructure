#include"MQueue.h"
namespace MQueue
{
	Status InitQueue(SqQueue* tQ)
	{
		tQ->front = 0;
		tQ->rear = 0;

		return OK;
	}

	int QueueLength(SqQueue tQ)
	{
		return (tQ.rear - tQ.front + MAXSIZE) % MAXSIZE;
	}

	Status EnQueue(SqQueue* tQ,QElemType e)
	{
		if ((tQ->rear+1)%MAXSIZE == tQ->front)
		{
			return Error;
		}
		tQ->data[tQ->rear] = e;
		tQ->rear = (tQ->rear+1)%MAXSIZE;

		return OK;
	}

	Status DeQueue(SqQueue* tQ, QElemType &e)
	{
		if (tQ->front == tQ->rear)
		{
			return Error;
		}

		e = tQ->data[tQ->front];
		tQ->front = (tQ->front+1)%MAXSIZE;

		return OK;
	}
}
