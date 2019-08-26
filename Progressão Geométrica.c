#include <stdio.h>
#include <math.h>

int main()
{
	float r,m,ni,e,t;
	printf("Informe um numero inicial da sequencia:\n");
	scanf("%f", &ni);
	printf("informe o numero que multipica o numero inicial:\n");
	scanf("%f", &m);
	printf("Informe a posiçao que se deseja saber:\n");
	scanf("%f", &e);
	
	t=e-1;
	m=pow(m,t);
	r=ni*m;

	printf("A progressão desejada e = %.0f\n", r);
		
	return 0;
}

