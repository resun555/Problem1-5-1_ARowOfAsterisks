// Problem1-5-1_ARowOfAsterisks.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	int length;
	scanf("%d", &length);
	if (length < 0)
	{
		printf("Invalid input");
		exit(EOF);
	}
	for (size_t i = 0; i < length; i++)
	{
		printf("*");
	}
    return 0;
}

