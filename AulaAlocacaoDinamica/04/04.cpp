// 04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

template<typename T>
void escrever(T algo)
{
	cout << algo << endl;
}

template<typename T>
struct Array
{
	T *objeto;

	int tamanho;
};

int main()
{
	Array <string>nomes;

	string array_nomes;

	nomes.objeto = &array_nomes;

	cin >> nomes.tamanho;

	nomes.objeto = new string[nomes.tamanho];

	cin.get();
	cin.get();
    return 0;
}

