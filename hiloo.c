#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
int saldo;

void * holaHilo(){
    printf("Hola desde un hilo\n");
    pthread_exit(NULL);
}

void * incrementaSaldo(){
    printf("Saldo Actual: %d\n", saldo);
    saldo=saldo+100;
    printf("Saldo Agregado: %d\n", saldo);

}

int main(){
    pthread_t t;
    saldo = 0;
    for(int i=1; i<=100; ++i){
    pthread_create(&t, NULL, incrementaSaldo, NULL);
    }
    pthread_exit(NULL);
    return 0;
}
// Lo hice otra vez porque no supe hacer un pull request con el original.