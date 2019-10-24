#include <stdio.h>

void preenche(int v[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("%da. senha? ", i+1);
		scanf("%d", &v[i]);
	}
}

void ordena(int v[], int n)
{
	int i, j;
	
	for(i=1; i<n; i++)
		for(j=0;j<n-1;j++)
			if(v[j]>v[j+1])
			{
				int x = v[j];
				v[j] = v[j+1];
				v[j+1] = 1;
			}
}

int pertence(int x, int v[], int n)
{
	int i=0, f=n-1, m;
	
	while(i<=f)
	{
		m = (i+f)/2;
		if(x==v[m]) return 1;
		if(x<v[m]) f = m-1;
		else i=m+1;
	}
return 0;	
}

int main(void)
{
	int A[5],U[9],x;
	
	printf("Cadastro de administradores:\n");
	preenche(A,5);
	printf("\nCadastro de usuarios:\n");
	preenche(U,9);
	ordena(A,5);
	ordena(U,9);
	
	while(1)
	{
		printf("\nSenha: ");
		scanf("%d",&x);
		
		if(pertence(x,A,5) ) { printf("Administrador: "); break;}
		else if( pertence(x,U,9) ) { printf("Usuario: "); break;}
		
		puts("Senha Invalida!");
		}
		puts ("senha valida!\n");
		return 0;
	}
	

