#include "Phrase.h"
using namespace std;


Phrase::Phrase(String text)
{
	this->text = text;
	
}
void Phrase::getText()
{	
	this->text = text;
}

Phrase Phrase::operatorint(String text)
{
	int i=0,p=0;
		while (text[i] != NULL)
		{
			if (text[i] == ' ')
				p++;


		}
		p++;
		return p;
}

int Phrase::GetLongestWord()
{
	int i;
	int numara;
	int max = -1;
	while (text[i] != NULL)
	{
		if (text[i] != ' ')
		{
			numara++;
		}
		else
		{
			if (max < numara)
			{
				max = numara;
			}
			numara = 0;
		}
		i++;
	}
}

int Phrase::CountLetter(char a)
{
	int i = 0,numara=0;
	while (text[i] != NULL)
	{
		if (text[i] == a)
		{
			numara++;
		}

	}
	
}




