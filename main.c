#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

int main () {
    int horas;
    int minutos;
    int segundos;
    bool rodando = true;

    printf("====================================\n");
    printf("Bem-vindo ao timer para terminal !!\n");
    printf("====================================\n");

    printf("\n");
    printf("Para começar o timer digite o tempo desejado(Ex: 1:10:05-uma hora 10 minutos e 5 segundos):");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    while (horas != 0 || minutos != 0 || segundos != 0)
    {   
        //Tenho que ir decrementando os segundos em 1 até o segundos serem negativos;
        //Esperar um segundo para decrementar 1s
        //depois do decremento colocar na tela 
        printf("\r Tempo: %02d:%02d:%02d", horas, minutos, segundos);
        fflush(stdout);
        sleep(1);
        segundos--;
        if (segundos < 0)
        {   
            segundos = 59;
            minutos--;
            
        }
        if (minutos < 0)
        {   
            minutos = 59;
            horas--;

        }
        
        
        

    }
    

    return 0;
}