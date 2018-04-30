#pragma once
class MyVector
{
public:
	MyVector() = default;
	MyVector(int size);
	MyVector(const MyVector & obj);
	int size()const { return cur_size; }
	int & push_back(int element);
	void print(int i);

	//operators
	int &operator[](int index);
	int operator+(MyVector &obj);
	void operator-(MyVector &obj);
	int & operator>>(int element);
	int operator==(MyVector &obj);

	virtual ~MyVector();
private:
	int cur_size;
	int buf_size;
	int *els;
};

