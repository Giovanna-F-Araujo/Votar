#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>



int main()
{
    /* Declaração de variáveis */
    int voto=7, Esc1=0, Esc2=0, Esc3=0, Esc4=0, votoN=0, votoB=0;


    printf("Eleições: ");

    while(voto!=0)
    {
        /*Entrada de dados*/
        printf("\n\n 1-Candidato 1\n 2-Candidato 2\n 3-Candidato 3\n 4-Candidato 4\n 5-Voto em BRANCO \n 6-Voto NULO");
        printf("\nDigite o numero correspondente ao seu voto e aperte ENTER: ");
        scanf("%i", &voto);

        /*Escolha de candidatos*/
        switch (voto)
        {
        case 0: 
        printf("\nFim da votação"); 
        break;

        case 1: 
        Esc1 = Esc1 + 1;
        printf("\nVoto confirmado");
        break;

         case 2: 
        Esc2 = Esc2 + 1;
        printf("\nVoto confirmado");
        break;

         case 3: 
        Esc3 = Esc3 + 1;
        printf("\nVoto confirmado");
        break;

         case 4: 
        Esc4 = Esc4 + 1;
        printf("\nVoto confirmado");
        break;

         case 5: 
        votoN = votoN + 1;
        printf("\nVoto confirmado");
        break;

         case 6: 
        votoB = votoB + 1;
        printf("\nVoto confirmado");
        break;

        default: 
        printf("\nOpção não aceita"); 
        break;
        }
    }
    /*Resultado da votação*/
    
    float resul = 0;
    resul = Esc1 + Esc2 + Esc3 + Esc4 + votoN + votoB;
    float TotalEsc1 = 0;
    float TotalEsc2 = 0;
    float TotalEsc3 = 0;
    float TotalEsc4 = 0;
    float TotalvotoN = 0;
    float TotalvotoB = 0;
    
    /*Porcetagem de votos de cada candidato*/
    TotalEsc1 = Esc1 / resul * 100;
    TotalEsc2 = Esc2 / resul * 100;
    TotalEsc3 = Esc3 / resul * 100;
    TotalEsc4 = Esc4 / resul * 100;
    TotalvotoN = votoN / resul * 100;
    TotalvotoB = votoB / resul * 100;


    /*Saída de dados*/
    printf(" Total de votos por candidatos:\n Candidato 1\t %i\n Candidato 2\t %i\n Candidato 3\t %i\n Candidato 4\t %i\n Votos Nulos\t %i\n Votos em Branco\t %i\n",Esc1,Esc2,Esc3,Esc4,votoN,votoB); 
    printf(" \nPercentual dos candidatos:\n Candidato 1\t %.2f%\n Candidato 2\t %.2f%\n Candidato 3\t %.2f%\n Candidato 4\t %.2f%\n Votos Nulos\t %.2f%\n Votos em Branco\t %.2f%\n",TotalEsc1,TotalEsc2,TotalEsc3,TotalEsc4,votoN,votoB); 

        getchar();
        printf("\n\n");
        system("pause");
        return(0);
    }
