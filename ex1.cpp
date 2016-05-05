#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct str_Interno {
	int id;
	int pesoEntrar, pesoSair;
	char nome[250];
	int diasTratamento;
	int cal[30];
	int alta;
};

		{
			case '1':	cadastra(); break;
			case '2':	alta(); break;
			case '3':	return 0;
		}
		
		printf("\n\n");
	} while(1);
}

void cadastra()
{
	int i;
	
	printf("Peso: "); scanf("%d", &internos[curP].pesoEntrar);
	fflush(stdin);
	printf("Nome: "); gets(internos[curP].nome);
	printf("Dias: "); scanf("%d", &internos[curP].diasTratamento);
	for(i = 0; i < internos[curP].diasTratamento; i++) {
		printf("Cal no dia %d", i+1);
		scanf("%d", &internos[curP].cal[i]);
	}
	printf("\n");
	curP++;
	
	return;
}

void alta()
{
	int id;
	printf("Digite o ID: "); scanf("%d", &id);
	internos[id-1].alta = 1;
	printf("Deu alta11\n\n");
	
	return;
}
