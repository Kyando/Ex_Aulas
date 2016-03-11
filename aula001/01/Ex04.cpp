#include <stdio.h>
#include <stdlib.h>

int main() {

	float r, d, pi, resposta;
	pi = 3.14f;

	printf("digite o diametro\n");
	scanf_s("%f", &d);

	r = d / 2;

	resposta = r*r*pi;
	printf("A area desse circulo é %.2f\n\n\n", resposta);

	system("pause");

}