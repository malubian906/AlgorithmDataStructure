#pragma once
#define  MAXSIZE 100
namespace MQueue
{
	enum Status
	{
		OK,
		Error
	};
	// 顺序表队列
	typedef int QElemType;
	typedef struct 
	{
		QElemType data[MAXSIZE];
		int front;	//头指针
		int rear;	//尾指针
	}SqQueue;
	// 初始化队列
	Status InitQueue(SqQueue*);
	// 计算队列长度
	int QueueLength(SqQueue);
	// 插入元素
	Status EnQueue(SqQueue*,QElemType);
	// 删除元素
	Status DeQueue(SqQueue*,QElemType&);
};