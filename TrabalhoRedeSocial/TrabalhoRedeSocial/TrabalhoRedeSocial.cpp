// TrabalhoRedeSocial.cpp :Defines the entry point for Dionmax the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "SuporteEscrita.h"
#include "Modelo.h"
#include "Criacao_usuario.h"

using namespace std;

void testes()
{
	Usuarios *user_one, *user_two;

	user_one = new Usuarios[2];
	user_two = new Usuarios[2];

	user_one[1].nome_completo = " dasdasd";

	copiar_array(user_one,user_two,2);

	cout << user_two[1].nome_completo;
}

void teste1()
{
	
}


int main()
{
	Usuarios *usuario = new Usuarios[0];

	//teste1();

	controle_usuarios(usuario);

	cin.get();
	cin.get();
	return 0;
}


/*
*algo ,
*novo ,
p1,p2;

algo = &p1;
novo = &p2;

algo = new Usuarios[1];
novo = new Usuarios[1];

novo[0].senha = 123;

algo[0] = novo[0];

//cout <<algo[0].senha;

int arrayum[3] = { 2,2,2 },
arraydois[3] = { 0 };

*/

