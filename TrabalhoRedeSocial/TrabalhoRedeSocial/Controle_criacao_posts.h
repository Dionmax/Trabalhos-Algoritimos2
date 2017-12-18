#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

void escrever_novo_post(char *post)
{
	cin.getline(post, TAMANHO_POSTAGEM);


}

Timeline criar_novo_post(char *nome_usuario, Timeline *posts, int &quantidade_posts)
{
	Timeline *array_aux = new Timeline[quantidade_posts];

	copiar_array(posts, array_aux, quantidade_posts);

	quantidade_posts += 1;

	posts = new Timeline[quantidade_posts];

	copiar_array(array_aux, posts, quantidade_posts - 1);

	escrever_novo_post(posts[quantidade_posts - 1].postagens);

	posts[quantidade_posts].criador_post = nome_usuario;

	return posts[quantidade_posts - 1];
}

void timeline_pots(Usuarios *usuario, int numero_usuario, Timeline *posts, int &quantidade_posts)
{
	do
	{
		menu_timeline_escrito();
		quebra_de_linha();

		switch (selecionar_escolha(3))
		{
		case 1:
			break;
		case 2:
			posts[quantidade_posts - 1] = criar_novo_post(usuario[numero_usuario].nome_completo, posts, quantidade_posts);
			break;
		case 3:
			return;
		default:
			break;
		}

	} while (true);
}
