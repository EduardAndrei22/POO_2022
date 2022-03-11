
using namespace std;
#include "Math.h"

int main()
{
	Math nr;
	nr.Add(2, 3);
	nr.Add(2, 3, 5);
	nr.Mul(2, 3);
	nr.Mul(2, 3, 5);
	nr.Add(2.3, 2.4);
	nr.Add(2.3, 2.4, 2.5);
	nr.Mul(2.3, 2.4);
	nr.Mul(2.3, 2.4, 2.5);
	nr.Add(12, 1, 2, 3, 4, 12, 1, 2, 23, 23, 2, 323, 2);
	nr.Add("SOLVED", "PROBLEM");
	return 0;





}