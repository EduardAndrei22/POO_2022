#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	count++;
	numbers[count] = x;
}

void NumberList::Sort()
{
	int aux,i,j;
	for (i = 0; i < count; i++)
		for ( j = i + 1; j < count; j++)
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
	for (i = 0; i < count; i++)
		cout<<numbers[i]<<' ';
}
