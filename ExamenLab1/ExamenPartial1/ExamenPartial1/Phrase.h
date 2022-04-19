#pragma once
#include <iostream>
#include <cstring>
#include<stdio.h>
#include <stdarg.h>
#include <string>
using namespace std;

class Phrase
{
	String text;
public:

	Phrase(String text);
	void getText();
	Phrase operatorint(String text);
	int GetLongestWord();
	int CountLetter(char a);
	

};

