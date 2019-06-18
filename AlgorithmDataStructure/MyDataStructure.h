#pragma once
#include <math.h>
#include <iosfwd>
#include <ostream>
#include <istream>
#include <iostream>
#include <QString>

//  ���Ա��ܼ���
template<typename T>
class LinearList
{
	virtual ~LinearList() {};
	virtual  bool empty() const = 0;
	virtual  int size() const = 0;
	virtual T& get(int theIndex) const = 0;
	virtual int indexOf(const T& theElement) const = 0;
	virtual void erase(int theIndex) = 0;
	virtual void insert(int theIndex, const T& theElement) = 0;
	virtual void output(std::ostream& out) const = 0;
};

//  �ı�һ������ĳ���
template<typename T>
void ChangeLength1D(T*a, int oldLength, int newLength)
{
	if (newLength < 0)
	{
		throw QString::fromLocal8Bit("�����鳤�Ȳ���С��0");
	}

	T* temp = new T[newLength];
	int num = std::min(oldLength, newLength);
	std::copy(a, a + num*4, temp);
	delete[] a;
	a = temp;
};