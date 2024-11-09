#include "list.h"
#include <vector>
#include <time.h>
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

	clock_t t_start = clock();
	l2.sort_list();
	clock_t t_end = clock();
	std::cout << float(t_end - t_start) / CLOCKS_PER_SEC << std::endl;
	l2.print();

	List l3(10000);

	for (int i = 0; i <10000; i++)
	{
		l3[i] = rand() % 100;
	}

	clock_t t2_start = clock();
	l3.sort_list();
	clock_t t2_end = clock();
	std::cout << float(t2_end - t2_start) / CLOCKS_PER_SEC << std::endl;
}