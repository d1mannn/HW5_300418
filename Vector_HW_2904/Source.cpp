#include "Library.h"
int TaskNumb();
int main()
{
	setlocale(LC_ALL, "");
	MyVector v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		cout << v1[i] << endl; //оператор []
	}
	MyVector v2(v1); //копируем
	for (int i = 0; i < v2.size(); i++)
	{
		v2[i] = 5;
	}
	int sum = v2[0] + v1[3]; // суммируем элементы двух операторров
	cout << "sum = " << sum << endl;
	v1 - v2; // удаляет из первой те цифры, которые есть во втором. вектор два заполнен 5ками. удалит цифру 5.
	v1 >> 5; // то же что и push_back добавили в конец цифру 5
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}
	system("pause");
	return 0;
}