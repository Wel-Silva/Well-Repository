#include <stdio.h>
#include <stdlib.h>

int main(){
    setbuf(stdin, NULL);
    
char aluno1, aluno2, aluno3;
float nota_aluno1, nota_aluno2, nota_aluno3;

printf("Entre com o nome do aluno #1: ");
setbuf(stdin, NULL);
scanf("%c", &aluno1);
printf("Entre com a nota do aluno #1: ");
scanf("%f", &nota_aluno1);

printf("Entre com o nome do aluno #2: ");
setbuf(stdin, NULL);
scanf("%c", &aluno2);
printf("Entre com a nota do aluno #2: ");
scanf("%f", &nota_aluno2);

printf("Entre com o nome do aluno #3: ");
setbuf(stdin, NULL);
scanf("%c", &aluno3);
printf("Entre com a nota do aluno #3: ");
scanf("%f", &nota_aluno3);


   if (nota_aluno1 > nota_aluno2 && nota_aluno1 > nota_aluno3)
   {
       printf("%c. tem a maior nota(%.1f) e ",aluno1, nota_aluno1);
   }else if (nota_aluno2 > nota_aluno1 && nota_aluno2 > nota_aluno3)
   {
       printf("%c. tem a maior nota(%.1f) e ",aluno2, nota_aluno2);

   }else if (nota_aluno3 > nota_aluno2 && nota_aluno3 > nota_aluno1)
   {
       printf("%c. tem a maior nota(%.1f) e ",aluno3, nota_aluno3);
   }
    if (nota_aluno1 < nota_aluno2 && nota_aluno1 < nota_aluno3)
   {
       printf("%c. tem a menor nota (%.1f)",aluno1, nota_aluno1);
   }else if (nota_aluno2 < nota_aluno1 && nota_aluno2 < nota_aluno3)
   {
       printf("%c. tem a menor nota (%.1f)",aluno2, nota_aluno2);

   }else if (nota_aluno3 < nota_aluno2 && nota_aluno3 < nota_aluno1)
   {
       printf("%c. tem a menor nota (%.1f)",aluno3, nota_aluno3);
   }
    
}