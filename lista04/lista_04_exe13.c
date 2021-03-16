#include <stdio.h>

int main(){

int num, i, j;
int cont1 = 0, cont2 = 1;

printf("Digite um numero n: ");  
scanf("%d", &num);

while(num <= 0){ 
    
printf("\nO numero precisa ser maior que 0, Digite um numero para n:");
scanf("%d", &num);
}
printf("\nDigite o valor de i: ");
scanf("%d", &i);

while(i <= 0){
    
printf("\nO numero precisa ser maior que 0, Digite um numero para i:");
scanf("%d", &i);
}
printf("\nDigite o valor de j: ");
scanf("%d", &j);

while(j <= 0){  
    
printf("\nO numero precisa ser maior que 0, Digite um numero para j:");
scanf("%d", &j);
printf("\nO numero precisa ser maior que 0, Digite um numero para j:");

}

while(cont2 <= num){

if(cont1 % i == 0 || cont1 % j == 0){

printf("%d  ", cont1);

cont2 = cont2 + 1; 

}
cont1 = cont1 + 1;
}
return 0;
}