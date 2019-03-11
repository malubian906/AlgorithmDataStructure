#pragma once
#include <iosfwd>
#include <ostream>
#include <istream>
#include <iostream>

//  线性表功能几类
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