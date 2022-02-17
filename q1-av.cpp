#include <lib.h>
#include <bibli.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brasil");
	
	int mat, mat_maior, mat_menor;
	float nota, nota_maior, nota_menor;
	
	int continuar = 1;
	nota_menor = 0.0;
	nota_maior = 0.0;
	
	while (continuar == 1){	
		fflush(stdin);
		gets(nome);
			
		scanf("%d", &mat);
		
		scanf("%f", &nota);
		
		if(nota <= nota_menor) {
			nota_menor = nota;
			mat_menor = mat;
			strcpy(nome_menor, nome);
		}
		
		if(nota >= nota_maior) {
			nota_maior = nota;
			mat_maior = mat;
			strcpy(nome_maior, nome);
		}

		scanf("%d", &continuar);
		
		system("cls");
	}
	
	printf("\tAluno: %s", nome_menor);
	printf("\tMatrícula: %d", mat_menor);
	printf("\tNota: %.1f", nota_menor);
	
}
