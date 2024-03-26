#include <stdio.h>
#include <time.h>
#include <string.h>
#include <locale.h>//inclui a biblioteca para usar setlocale
#include <stdlib.h>
#pragma warning(disable:4996) //por causa da IDE da um alerta no scanf





void set();
void impressao();
void dados();
void condicional();
void cast();
void loop();
void loop2();
void arr();
void strin();
void strin2();
void strin3();

void exer1();
void exer2();
void exer3();
void exer4();
void exer5();
void exer6();
void exer7();
void exer8();
void exer9();
void exer10();




int main() {

	setlocale(LC_ALL, "pt:BR");

	int escolha1 = 0;

	do {
		printf("Digite 1: > Materia <\nDigite 2: > Exercicios < \n");
		scanf("%d", &escolha1);
		system("cls");


		if (escolha1 == 1) {
			do {
				printf(" >'0' - SAIR< 1-HELLO WORLD! 2-IMPRESSAO 3- DADOS 4-CONDICIONAL 5-CASTING 6-LOOP 7-LOOP2 8-ARRAY 9-STRINGS 10-STRINGS2 11-STRINGS3 \nMATERIAL: ");
				scanf("%d", &escolha1);

				system("cls");
				switch (escolha1) {
				case 0:
					printf("Saindo...\n");
					break;
				case 1:
					set();
					break;
				case 2:
					impressao();
					break;
				case 3:
					dados();
					break;
				case 4:
					condicional();
					break;
				case 5:
					cast();
					break;
				case 6:
					loop();
					break;
				case 7:
					loop2();
					break;
				case 8:
					arr();
					break;
				case 9:
					strin();
					break;
				case 10:
					strin2();
					break;
				case 11:
					strin3();
					break;
				default:
					printf("INVALIDO!\n");
					break;
				}
			} while (escolha1 != 0);
		}
		else if (escolha1 == 2) {


			//EXERCICIOS!


			int escolha = 0;

			do {
				printf("\nEXERCICIOS DE 1 AO 10 ou '0' para SAIR: ");
				scanf("%d", &escolha);

				system("cls");
				switch (escolha) {
				case 0:
					printf("Saindo...\n");
					break;
				case 1:
					exer1();
					break;
				case 2:
					exer2();
					break;
				case 3:
					exer3();
					break;
				case 4:
					exer4();
					break;
				case 5:
					exer5();
					break;
				case 6:
					exer6();
					break;
				case 7:
					exer7();
					break;
				case 8:
					exer8();
					break;
				case 9:
					exer9();
					break;
				case 10:
					exer10();
					break;

				default:
					printf("INVALIDO!\n");
					break;
				}
			} while (escolha != 0);

		}
		else {
			system("cls");
			printf("INVALIDO!!!!\n");
		}
	} while (escolha1 >= 3);

	return 0;


}

void set() {

	

	//Esta é a função principal do programa.
	//É  onde a execução do programa começa.

	//Imprime "Olá Mundo na tela.
	//printf() é uma funçao que imprime texto na tela.
	//o \n representa uma nova linha, então a proxima impressão será em uma nova linha.
	printf("Olá Mundo\n");

}

void impressao() {
	//Define o ambiente para o idioma Portugues
	setlocale(LC_ALL, "");

	//Tipos de dados atômicos em C:

	//1.Inteiros

	int inteiro = 10;
	printf("Inteiros: %d\n", inteiro);

	//2.Numeros de ponto flutuante
	float flutuante = 3.14;
	printf("Flutuante: %.2f\n", flutuante);

	//3.Caracteres individuais
	char caractere = 'A';
	printf("Caractere: %c\n", caractere);

	//4.Números sem sinal (inteiros posotivos)
	unsigned int sem_sinal = 20;
	printf("Sem sinal: %u\n", sem_sinal);

	//5.Números de ponto flutuante de dupla precisão
	double dupla_precisao = 6.022e23;
	printf("Dupla precisão: %e\n", dupla_precisao);

	//6.Números de ponto flutuante de longa precisão
	long double longa_precisao = 1234567890.123456789;
	printf("Longa precisão %Lf\n", longa_precisao);

}

void dados() {
	//Define o ambiente para o idioma Portugues
	setlocale(LC_ALL, "");

	//tipos de dados atômicos em C:

	//1.Inteiros
	int inteiro;
	printf("Digite um número  inteiro: ");
	scanf("%d", &inteiro);
	printf("Você digitou: %d\n", inteiro);

	//2. Números de ponto flutuante
	float flutuante;
	printf("Digite um número  flutuante: ");
	scanf("%f", &flutuante);
	printf("Você digitou: %.2f\n", flutuante);

	//3.Caracteres individuais
	char caractere;
	printf("Digite um caractere: ");
	scanf(" %c", &caractere);
	printf("Você digitou: %c\n", caractere);

	//4.Número sem sinal (inteiros posotivos)
	unsigned int sem_sinal;
	printf("Digite um número  inteiro sem sinal: ");
	scanf("%u", &sem_sinal);
	printf("Você digitou: %u\n", sem_sinal);

	//5.Números de ponto flutuante de dupla precisão
	double dupla_precisao;
	printf("Digite um número de ponto flutuante de dupla precisão: ");
	scanf("%lf", &dupla_precisao);
	printf("Você digitou: %lf\n", dupla_precisao);

	//6.Números de ponto flutuante de longa precisão
	long double longa_precisao;
	printf("Digite um número  de ponto flutuante de longa precisão: ");
	scanf("%Lf", &longa_precisao);
	printf("Você digitou: %Lf\n", longa_precisao);










}

void condicional() {

	//Variável para armazenar a idade
	int idade;

	//Solicita ao usuário que insira sua idade
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	//Verifica a idade e imprime uma mensagem apropriada
	if (idade < 18) {
		//Se a idade for menor que 18
		printf("Você é menor de idade.\n");
	}
	else if (idade >= 18 && idade <= 65) {
		//Se a idade estiver entre 18 e 65
		printf("Você é um adulto.\n");
	}
	else {
		//Se a idade for maior que 65
		printf("Você é um idoso.\n");
	}

}

void cast() {
	//Variável para armazenar a idade

	int idade;

	//Solicita ao usuário que insira sua idade
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	//Verifica a idade e imprime umamensagem apropriada
	if (idade < 18) {
		//Se a idade for menor que 18
		printf("Você é menor de idade.\n");
	}
	else if (idade >= 18 && idade <= 65) {
		//Se a idade estiver entre 18 e 65
		printf("Você é um adulto.\n");
	}
	else {
		//Se a idae for maior que 65
		printf("Você é um idoso.\n");
	}

	//Exemplos de casting implicito e explícito:

	//Casting Implícito:
	//Quando um tipo de dado é automaticamente convertido para outro pelo compilador.
	int numero_inteiro = 10;
	float numero_flutuante = numero_inteiro; //Casting implicito de int para float
	printf("Casting Implícito: %f\n", numero_flutuante);

	//Casting Explícito:
	//Quando o programador força a vonversão de um tipo de dado para outro.
	float outro_numero_flutuante = 3.75;
	int outro_numero_inteiro = (int)outro_numero_flutuante;//Casting explicito de foat para int
	printf("Casting Explícito: %d\n", outro_numero_inteiro);






}

void loop(){
	//Exemplo de um loop while
	printf("Exemplo de um loop while\n");
	int contador = 0;
	while (contador < 5) {
		printf("Contador: %d\n", contador);
		contador++;
	}

	//Exemplo de um loop do-while
	printf("\nExemplo de um loop do-while:\n");
	contador = 0;

	do {
		printf("Contador: %d\n", contador);
		contador++;
	} while (contador < 5);

	//Exemplo de um loop for
	printf("\Exemplo de um loop for:\n");
	for (int i = 0; i < 5; i++) {
		printf("Contador: %d\n", i);
	}

}

void loop2() {
	//Exemplo de um loop while
	printf("Exemplo de um loop while\n");
	int contador = 0;
	while (contador < 5) {
		printf("Contador: %d\n", contador);
		contador++;
	}

	//Exemplo de um loop do-while
	printf("\nExemplo de um loop do-while:\n");
	contador = 0;

	do {
		printf("Contador: %d\n", contador);
		contador++;
	} while (contador < 5);

	//Exemplo de um loop for
	printf("\Exemplo de um loop for:\n");
	for (int i = 0; i < 5; i++) {
		printf("Contador: %d\n", i);
	}

	//Exemplo do uso de loops com printf
	printf("\nExemplo do uso de loops com printf:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}
}

void arr() {
	//Declarar um array de inteiros com tamanho 5
	int numeros[5];

	// Inicializar os elementos do array
	numeros[0] = 10;
	numeros[1] = 20;
	numeros[2] = 30;
	numeros[3] = 40;
	numeros[4] = 50;
	//int numeros[] = { 10, 20, 30, 40, 50 }; EXEMPLO SIMPLIFICADO

	//Acessar e imprimir os elementos do array
	printf("Elementos do array:\n");
	printf("numeros[0]: %d\n", numeros[0]);
	printf("numeros[0]: %d\n", numeros[1]);
	printf("numeros[0]: %d\n", numeros[2]);
	printf("numeros[0]: %d\n", numeros[3]);
	printf("numeros[0]: %d\n", numeros[4]);

	//Calcular a soma dos elementos do array
	int soma = numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4];
	printf("\nSoma dos elementos do array: %d\n", soma);

	//Declarar e inicializar um array de carcteres
	char letras[4] = { 'a', 'b', 'c', 'd' };

	//Acessar e imprimir os elementos do array de caracteres
	printf("\nElementos do array de caracteres:\n");
	printf("letras[0]: %c\n", letras[0]);
	printf("letras[0]: %c\n", letras[1]);
	printf("letras[0]: %c\n", letras[2]);
	printf("letras[0]: %c\n", letras[3]);



	char nome[] = "João";
	printf("Exemplo de armazenamento de uma string em um array de caracteres: \n");
	printf("Nome: %s\n", nome);

}

void strin() {
	//Exemplo de utilizaçao de funçao strcpy(destino, origem)
	char origem[] = "Hello";
	char destino[20];
	strcpy(destino, origem);
	printf("strcpy(destino, origem): %s\n", destino); //Deve imprimir "Hello"

	//Exeplo de utilizaçao de funçao strcat(destino, origem)
	char origem2[] = "World";
	strcat(destino, origem2);
	printf("strcat(destino): %zu\n", strlen(destino)); //Deve imprimir o comprimento de "Hello World"

	//Exemplo de utilizaçao da funçao strcmp(string1,string2)
	char string1[] = "Hello";
	char string2[] = "Hello";
	printf("strcmp(string1, string2): %d\n", strcmp(string1, string2)); //Deve imprimir 0, pois as strings sao iguais





}

void strin2() {
	char nome[50]; //Declara uma string para armazenar o nome completo

	printf("Digite seu noe completo: ");

	//Usa scanf para ler a primeira palavra da entrada do usuario
	scanf("%s", nome); //nao precisa do |&|

	printf("Primeira palavra inserida: %s\n", nome);


}

void strin3() {
	char nome[50]; //Declara uma string para armazenar o nome completo

	printf("Digite seu nome completo: ");

	//Usa fgets para ler a linha inteira, incluido espaços em brancos
	fgets(nome, sizeof(nome), stdin);

	//remove o caractere de nova linha (\n) do final da string
	nome[strcspn(nome, "\n")] = '\0';

	//Imprime o nome completo inserido pelo usuario
	printf("Nome completo inserido: %s\n", nome);

}

// Métodos em C - EXERCÍCIOS

void findEvenOdd(int num) {

	if (num % 2 == 0) {
		printf("%d é um numero par", num);
	}
	else printf("%d é um numero impar", num);
}





//Exercicios!

void exer1() {

	float notas[3];
	int i = 0;
	float media = 0;

	for (i = 0; i < 3; i++) {
	printf("Digite as notas\n");
	printf("Digite uma nota:");
	scanf("%f", &notas[i]);

	media += notas[i];
	}

	media = media / 3;

	/* OUTRO METODO A FAZER:
	
	printf("Digite uma nota:");
	scanf("%f", &notas[0]);

	printf("Digite uma nota:");
	scanf("%f", &notas[1]);

	printf("Digite uma nota:");
	scanf("%f", &notas[2]);
	*/


	printf("Sua media é: %.2f",media);





}

void exer2() {

	int numero = 0;
	int resultado = 0;
	printf("Coloque um numero para saber se é impar ou par :");
	scanf("%d", &numero);

	resultado = numero % 2;

	if (resultado == 0) {
		printf("O numero é par!");
	}
	else printf("O numero é impar");

}

void exer3() {

	float peso = 0;
	float altura = 0;

	printf("Digite seu peso: ");
	scanf("%f", &peso);

	printf("Digite sua Altura: ");
	scanf("%f", &altura);

	float resultado = 0;
	resultado = peso / (altura * altura);


	if (resultado <= 20) {
		printf("Seu IMC é %.1f, Esta abaixo do normal.", resultado);
	}
	else if (resultado <= 24.9f) {
		printf("Seu IMC é %.1f, Normal!.", resultado);
	}
	else if (resultado <= 29.9f) {
		printf("Seu IMC é %.1f, Obesidade Leve.", resultado);
	}
	else if (resultado <= 39.9f) {
		printf("Seu IMC é %.1f, Obesidade Moderada." , resultado);
	}
	else if (resultado > 43) {
		printf("Seu IMC é %.1f, \a Obesidade Mórbida!!!.", resultado);
	}

}

void exer4() {

	float celsi = 0;
	float resultado = 0;

	printf("Insira uma temperatura em Celsius: ");
	scanf("%f", &celsi);

	resultado = (celsi * 9 / 5) + 32;

	printf("O valor em Fahrenheit é %.1f : ", resultado);


}

void exer5() {

	srand(time(NULL));
	int numero_aleatorio = rand() % 100 + 1;

	printf("%d\n", numero_aleatorio);

	int numero_usuario;
	int contador = -1;
	int tentativas = 4;

	do {
		printf("Digite um valor entre 1 e 100: ");
		scanf("%d", &numero_usuario);

		
		contador = contador++;

		if (contador > 3) {
			printf("\nTentativas demmais\n");
			break;
		}
		if (numero_usuario < numero_aleatorio) {
			tentativas--;
			printf("Voce errou!, o Numero é maior! que %d.\n voce tem apenas %d tentativas\n", numero_usuario, tentativas );
		}
		else if (numero_usuario > numero_aleatorio) {
			tentativas--;
			printf("Voce errou!, o Numero é menor!! que %d.\n voce tem apenas %d tentativas\n", numero_usuario,tentativas);
		}
		
		else {
			if (numero_usuario == numero_aleatorio) {
				printf("Parabéns, você acertou!\n");
				printf("Voce tentou %d", contador);
			}
			else {
				printf("Que pena, você errou. Tente novamente.\n");
			}

			}
	} while (numero_usuario != numero_aleatorio);


}

void exer6() {
	int notas[5];
	int i = 0;
	int soma = 0;

	for (i = 0; i < 5; i++) {
		printf("Digite 5 valores: \n");
		printf("Insira o %d valor: ", i +1);
		scanf("%d", &notas[i]);

	}
	for (i = 0; i < 5; i++) {
		soma += notas[i];;
	}
	printf("A soma total é: %d",soma);

}

void exer7() {

		char palavra[50];

		printf("Digite uma palavra: ");
		scanf("%s", palavra);

		printf("Palavra de trás para frente: ");
		for (int i = strlen(palavra) - 1; i >= 0; i--) {
			printf("%c", palavra[i]);
		}
		printf("\n");


}

void exer8() {

		char pais[10][20] = { "brasil", "alemanha", "peru" ,"portugal"};
		char nome[10];
		int encontrado = 0;


		do{
		printf("Digite um nome de um país: ");
		scanf("%s", nome);

		

		for (int i = 0; i < 4; i++) {
			if (strcmp(nome, pais[i]) == 0) {
				encontrado = 1; 
			}
		}

		if (encontrado) {
			printf("Voce acertou!");
		}
		else printf("Voce errou!\n");

		} while (encontrado == 0);
		
	

}

void exer9() {


		int array[5][5];
		int i, j ;
		int maior, menor;

		
		srand(time(NULL));

		
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				array[i][j] = rand() % 100; 
			}
		}

		
		maior = menor = array[0][0];

		
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				if (array[i][j] > maior) {
					maior = array[i][j];
				}
				if (array[i][j] < menor) {
					menor = array[i][j];
				}
			}
		}



		printf("Numeros da Array:\n");
		for (i = 0; i < 5; i++) {
			printf("\n\n-linha %d- >",i +1);
			for (j = 0; j < 5; j++) {
				printf("||COLUNA %d|| > NUM: %d  ", j + 1, array[i][j]);
					}
			}
			printf("\n");
		

		printf("............................................\n");
		printf("Maior elemento: %d\n", maior);
		printf("Menor elemento: %d\n", menor);

}

void exer10() {

}








