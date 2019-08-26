#include <stdio.h>

int main()
{
	float e,r,s,ni;
	printf("Informe um numero inicial da sequencia:\n");
	scanf("%f",&ni);
	printf("Informe a posiçao que se deseja saber:\n");
	scanf("%f",&e);
	printf("informe o numero que se acrescente na sequencia:\n");
	scanf("%f",&s);
	r=s*(e-1);
	printf("O dobro do numero e = %.0f\n", ni+r);
		
	return 0;
}

