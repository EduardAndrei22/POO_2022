#include "Math.h"

int Math::Add(int x, int y)
{
	int z;
	z = x + y;
	printf("%d", z);
	printf("\n");
}

int Math::Add(int x, int y, int z)
{
	int s;
	s = x + y + z;
	printf("%d", s);
	printf("\n");

}

int Math::Add(double a, double b)
{
	double z;
	z = a + b;
	printf("%f", z);
	printf("\n");
}

int Math::Add(double a, double b, double c)
{
	double z;
	z = a + b + c;
	printf("%f", z);
	printf("\n");
}

int Math::Mul(int x, int y)
{
	int z;
	z = x * y;
	printf("%d", z);
	printf("\n");
}

int Math::Mul(int x, int y, int z)
{
	int s;
	s = x * y * z;
	printf("%d", s);
	printf("\n");
}

int Math::Mul(double a, double b)
{
	double z;
	z = a + b;
	printf("%f", z);
	printf("\n");
}

int Math::Mul(double a, double b, double c)
{
	double z;
	z = a * b * c;
	printf("%f", z);
	printf("\n");
}

int Math::Add(int count, ...)
{
	int i;
	double s = 0;
	va_list vl;
	va_start(vl, count);
	for (i = 0; i < count; i++)
	{
		s += va_arg(vl, int);
	}
	va_end(vl);
	printf("%f", s);
	printf("\n");
}
char Math::Add(const char* s1, const char* s2)
{
	char* s3;
	s3 = (char*)malloc(strlen(s1) + strlen(s2) + 1);
	//char s3[100];
	strcpy(s3, s1);
	strcat(s3, s2);
	printf("%s", s3);
	printf("\n");
	//delete[] s3;
	free(s3);
}
