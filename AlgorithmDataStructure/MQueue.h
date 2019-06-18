#pragma once
#define  MAXSIZE 100
namespace MQueue
{
	enum Status
	{
		OK,
		Error
	};
	// ˳������
	typedef int QElemType;
	typedef struct 
	{
		QElemType data[MAXSIZE];
		int front;	//ͷָ��
		int rear;	//βָ��
	}SqQueue;
	// ��ʼ������
	Status InitQueue(SqQueue*);
	// ������г���
	int QueueLength(SqQueue);
	// ����Ԫ��
	Status EnQueue(SqQueue*,QElemType);
	// ɾ��Ԫ��
	Status DeQueue(SqQueue*,QElemType&);
};