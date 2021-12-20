#include <iostream>



int main(int argc, char** argv) 
{
	int A, B, C, menor;
	printf ("Primer entero: ");
	scanf ("%d", &A);
	menor = A;
	
	printf ("Segundo entero: ");
	scanf ("%d", &B);
	if (B < menor)
		menor = B;
	
	printf ("Tercer entero: ");
	scanf ("%d", &C);
	if (C < menor)
		menor = C;
		
	printf ("El valor menor es %d", menor);
	
	return 0;
}
