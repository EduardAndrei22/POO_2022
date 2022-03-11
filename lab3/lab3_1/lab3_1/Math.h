#pragma once
#include <cstring>
#include <iostream>
#include <stdio.h>      
#include <stdarg.h> 
class Math

{

public:

    static int Add(int, int);

    static int Add(int, int, int);

    static int Add(double, double);

    static int Add(double, double, double);

    static int Mul(int, int);

    static int Mul(int, int, int);

    static int Mul(double, double);

    static int Mul(double, double, double);

    static int Add(int count, ...); // sums up a list of integers

    char Add(const char* s1, const char* s2);


};
