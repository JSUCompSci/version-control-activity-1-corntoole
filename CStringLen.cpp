// CStringDemo.cpp : Demonstrates how to compute length of a c-string
// 2/12/16

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;


int length(char *str) {
	char *ch = str;
	int len = 0;
	while (*ch != '\0') {
		len++;
		ch++;
		//cout << len << endl;
		
	}
	return len;
}


int _tmain(int argc, _TCHAR* argv[])
{
	char *myStr = "Joe";
	cout << length(myStr) << endl;
	cout << strlen(myStr) << endl;
	cin.ignore();
	return 0;
}

