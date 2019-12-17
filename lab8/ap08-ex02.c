#include <stdio.h>
#include <string.h>
#define LEN 50

 struct endereco {
	char rua[LEN];
	char Cidade[15];
	char Estado[3];
	char CEP[10];
 };

 struct endereco obtem_endereco() {
	struct endereco ender;
	printf("\t Entre Rua: ");
	gets(ender.rua);
	printf("\t Entre Cidade: ");
	gets(ender.Cidade);
	printf("\t Entre Estado: ");
	gets(ender.Estado);
	printf("\t Entre CEP: ");
	gets(ender.CEP);
	return ender;
 }

 void imprime_endereco(struct endereco ender) {
	printf("\t %s\n", ender.rua);
	printf("\t %s\n", ender.Cidade);
	printf("\t %s\n", ender.Estado);
	printf("\t %s\n", ender.CEP);
 }

 void main() {
	struct endereco residencia;
	printf("Entre seu endereco residencial:\n");
	residencia = obtem_endereco();
	printf("\nSeu endereco eh:\n");
	imprime_endereco(residencia);
 }
