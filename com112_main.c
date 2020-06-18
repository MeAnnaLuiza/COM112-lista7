#include <stdio.h>
#include <stdlib.h>
#include "com112_ArvoreAVL.h"
void menu(int op, int data, int valor)
{
	do
	{

		ArvAVL *avl;
		printf("\nEscolha uma das operacoes:\n");
		printf("1.Criar arvore\n2.Liberar arvore\n3.Inserir elemento\n4.Remover elemento\n5.Consultar elemento\n6.Imprimir percurso pre-ordem\n7.Imprimir percurso em ordem\n8.Imprimir percurso pos-ordem\n9.Altura da arvore\n10.Total de elementos\n11.Sair\n");
		printf("Operacao: ");
		scanf("%d", &op);
		switch(op)
		{
		case 1:
			avl = cria_ArvAVL();
			if(avl != NULL)printf("\nArvore Criada\n");
			else printf("\nERRO\n");
			break;
		case 2:
			data = libera_ArvAVL(avl);
			if(data)printf("\nArvore Liberada\n");
			else printf("\nArvore nao liberada\n");
			break;
		case 3:
			printf("\ndigite um valor para ser inserido: \n");
			scanf("%d", &valor);
			data = insere_ArvAVL(avl, valor);
			if(data)printf("\nValor inserido\n");
			else printf("\nValor não foi inserido\n");
			break;
		case 4:
			printf("\ndigite um valor para ser inserido: \n");
			scanf("%d", &valor);
			data = remove_ArvAVL(avl, valor);
			if(data)printf("\nValor removido\n");
			else printf("\nValor não foi removido\n");
			break;
		case 5:
			printf("\ndigite um valor para ser buscado: \n");
			scanf("%d", &valor);
			data = consulta_ArvAVL(avl, valor);
			if(data)printf("\nValor achado\n");
			else printf("\nValor não foi achado\n");
			break;
		case 6:
			preOrdem_ArvAVL(avl);
			break;
		case 7:
			emOrdem_ArvAVL(avl);
			break;
		case 8:
			posOrdem_ArvAVL(avl);
			break;
		case 9:
			data = altura_ArvAVL(avl);
			printf("\nA altura da arvore é: %d", data);
			break;
		case 10:
			data = totalNO_ArvAVL(avl);
			printf("\nA arvore tem um total de %d nos\n", data);

			break;
		case 11:
			break;
		}
	}
	while(op != 11);
}
int main()
{

	int op = 0;
	int data = 0, valor = 0;

	menu(op, data, valor);

	return 0;
}
