
#include "NumberList.h"
using namespace std;
int main()
{
	NumberList list;
	list.Init();
	int i,x,n;
	cin >> n;
	for (i = 0; i<n; i++)
	{
		cin>> x;
		list.Add(x);
	}
	list.Sort();
	list.Print();
	return 0;
}