#include "NumberList.h"


void NumberList::Init()
{
	count = -1;
}

bool NumberList::Add(int x)
{
	
	numbers[++count] = x;
	
	return 1;
}

void NumberList::Sort()
{
	int aux,i,j;
	for (i = 0; i <= count; i++)
		for ( j = i + 1; j <= count; j++)
			if (numbers[i] > numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}

void NumberList::Print()
{
	int i;
	for (i = 0; i <= count; i++)
		std::cout<<numbers[i]<<' ';
}
