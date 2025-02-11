#include <stdio.h>

int fatorial(int n);

int main(){
    int  n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    
    int resultado = fatorial(n);
    printf("O fatorial é %d.", resultado);
    return 0;
}

int fatorial(int n) {
    if (n == 0 || n == 1){
        return (1);
    } else {
        return (n * fatorial (n-1));
    }
}