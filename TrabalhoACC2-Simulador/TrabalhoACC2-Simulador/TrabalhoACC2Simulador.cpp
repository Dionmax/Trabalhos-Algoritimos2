// TrabalhoACC2Simulador.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>

#include "Flood.h"
#include "VirusSpawn.h"
#include "suporte_escrita.h"
#include "CercaSpawn.h"

using namespace std;

void escolhas_menu()
{

}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//menu_central();

	gerar_posicao_virus(QUANTIDADE_LINHAS_PARA_GRANDES, CENTRO);


	cout << endl;

	system("pause");

	return 0;
}
