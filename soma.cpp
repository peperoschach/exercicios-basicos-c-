// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
#include <stdio.h>
#include <iostream>

int main()
{
    int op;
	float pop, sup, dens;
    float mortes, nasc;
	do {
        printf("Escolha:\n1-Densidade demografica\n2-Taxa de Natalidade\n3-Taxa de Mortalidade\n\n");
        scanf("%d", &op);

        switch(op) {
            case 1: {
                printf("Informe o numero de habitantes : ");
                scanf("%f", &pop);
                printf("Informe o a area  : ");
                scanf("%f", &sup);

                dens = pop / sup;

                printf("Densidade demografica: %0.2f hab/km²\n\n", dens);

            break;
            }

            case 2: {
                printf("Informe o numero de habitantes : ");
                scanf("%f", &pop);
                printf("Digite a quantidade de nascimentos: ");
                scanf("%f", &nasc);

                if(pop < 1000)
                    nasc =(nasc / pop) * 100;
                else if(pop >= 1000)
                    nasc =(nasc / pop) * 1000;

                printf("\nNatalidade: %0.2f%%\n\n", nasc);
            break;
            }

            case 3: {
                printf("Informe o numero de habitantes : ");
                scanf("%f", &pop);
                printf("Digite a quantidade de mortes: ");
                scanf("%f", &mortes);


                if(pop <= 1000){
                    mortes =(mortes / pop) * 100;
                    printf("\nMortalidade: %0.2f%%\n\n", mortes);
                }else if(pop > 1000){
                    mortes =(mortes / pop) * 1000;
                    printf("\nMortalidade: %0.2f  mortes por mil/hab\n\n", mortes);
                    }
            break;
            }

        }
	} while(op != 0);

	return 0;
}

