#include "list.h"
#include <vector>
int main()
{
	List l(10);
	int j = l.size();
	int i = 0;
	while (i < j)
	{
		l[i] = j - i;
		i++;
	}

	l.sort_list();
	l.print();

	List l2(9);
	std::vector<int> a = { 4,3,2,6,5,45,21,1,0 };
	for (int i = 0; i < a.size(); i++)
	{
		l2[i] = a[i];
	}

	l2.sort_list();
	l2.print();

	List l6(15000);
	for (int i = 0; i < 15000; i++)
	{
		l6[i] = rand() % 100;
	}
	l6.sort_list();

	List l3(10000);
	for (int i = 0; i <10000; i++)
	{
		l3[i] = rand() % 100;
	}
	l3.sort_list();

	List l4(5000);
	for (int i = 0; i < 5000; i++)
	{
		l4[i] = rand() % 100;
	}
	l4.sort_list();

	List l5(1000);
	for (int i = 0; i < 1000; i++)
	{
		l5[i] = rand() % 100;
	}
	l5.sort_list();
}