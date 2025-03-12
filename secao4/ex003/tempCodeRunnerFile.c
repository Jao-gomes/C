#include  <stdio.h>


int main(){
    int numero, maior, menor =0;

    for(int i =0; i<10; i++){
        printf("informe o valor %d de 10: ", i + 1 );
        scanf("%d", numero);

        if (i == 0)
        {
            maior = numero;
            menor = numero;
        }
        if( numero > maior ){
            numero = maior;
        }
        if( numero < menor){
            numero = menor;
        }

    }
    printf("o maior valor é %d o menor valor é %d", maior,menor);
    return 0;
}
