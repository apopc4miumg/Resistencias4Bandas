//
#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main (void)
{
	int banda1, banda2, banda3, banda4, flag;
	float valorResistencia;
	char opcion;
	
	do
	{
		system("color 0B");
		printf("PROYECTO FINAL \n");
		system("cls");
		flag = 0;
		printf("\n 1 -> cafe \n 2 -> rojo \n 3 -> naranja \n 4 -> amarillo \n 5 -> verde \n 6 -> azul \n 8 -> gris \n");
		printf("\n \t\t\tEscribe tu Informacion ->");
		scanf("%d",&banda1);
		
		switch(banda1)
		{
			case 1:
				printf("El Valor de la banda 2 es: \n ");
				printf("0 -> nego \n 2 -> rojo \n 5 -> verde \n 8 -> gris");
				printf("\n \t Escribe la informacion -> ");
				scanf("%d" ,&banda2);
				switch(banda2)
				{
					case 0:
						valorResistencia=10;
						break;
					case 2:
						valorResistencia=12;
						break;
					case 5:
						valorResistencia=15;
						break;
					case 8:
						valorResistencia=18;
						break;
					default:
						printf("Valor Incorrecto para la banda 2");
						flag=1;
						break;
				}
				break;
			
			case 2:
				printf("El valor de la banda 2 es: \n");
				printf("2 -> rojo \n 7 -> violeta ");
				printf("\n \t Escribe tu informacion -> ");
				scanf("%d" ,&banda2);
				switch(banda2)
				{
					case 2:
						valorResistencia=22;
						break;
					case 7:
						valorResistencia=27;
						break;
					default:
						printf("valor incorrecto para la banda 2");
						flag=1;
						break;
				}
				break;
				
			case 3:
				printf("El valor de la banda 2 es: \n ");
				printf("3 -> naranja \n 9 -> blanco ");
				printf("\n \t Escribe tu informacion -> ");
				scanf("%d" ,&banda2);
				switch(banda2)
				{
					case 3:
						valorResistencia=33;
						break;
					case 9:
						valorResistencia=39;
						break;
					default:
						printf("valor incorrecto para la banda 2");
						flag=1;
						break;
				}
				break;
				
			case 4:
				printf("En esta banda solo hay un color correcto (7 -> violeta)");
				valorResistencia=47;
				break;
				
			case 5:
				printf("El valor de la banda 2 es: \n ");
				printf("1 -> cafe \n 6 -> azul ");
				printf("\n \t Escribe tu informacion -> ");
				scanf("%d" ,&banda2);
				switch(banda2)
				{
					case 1:
						valorResistencia=51;
						break;
					case 6:
						valorResistencia=56;
						break;
					default:
						printf("valor incorrecto para la banda 2");
						flag=1;
						break;
				}
				break;
			
			case 6:
				printf("En esta banda solo hay un color correcto (8 -> Gris)");
				valorResistencia=68;
				break;
			
			case 8:
				printf("En esta banda solo hay un color correcto (2 -> Rojo)");
				valorResistencia=82;
				break;
				default:
					printf("valor incorrecto");
					flag=1;
					break;
					
		}
		
		if(flag!=1)
		{
			printf("El valor de la banda 2 es: \n");
			printf("0 -> negro \n 1 -> cafe \n 2 -> rojo \n 3 -> naranja \n 4 -> amarillo \n 5 -> verde \n 6 -> azul \n 10 -> oro");
			printf("\n \t Escribe tu info -> ");
			scanf("%d" ,&banda3);
			system("cls");
			switch(banda3)
			{
				case 0:
					printf("El valor de la resistencia es: %2.1f Ohms", valorResistencia);
					break;
				case 1:
					valorResistencia*=10;
					printf("El valor de la resistencia es: %2.1f Ohms", valorResistencia);
					break;
				case 2:
					valorResistencia*=100;
					valorResistencia/=1000;
					printf("El valor de la resistencia es: %2.1f KOhms", valorResistencia);
					break;
				case 3:
					printf("El valor de la resistencia es: %2.1f KOhms", valorResistencia);
					break;
				case 4:
					valorResistencia*=10000;
					valorResistencia/=1000;
					printf("El valor de la resistencia es: %2.1f Ohms", valorResistencia);
					break;
				case 5:
					valorResistencia*=100000;
					valorResistencia/=1000000;
					printf("El valor de la resistencia es: %2.1f MOhms", valorResistencia);
					break;
				case 6:
					if(valorResistencia==10)
						printf("El valor de la resistencia es: %2.1f MOhms", valorResistencia);
					else
						printf("Este color es incorrecto para la resistencia ");
					break;
				case 10:
					valorResistencia/=10;
					printf("El valor de la resistencia es: %2.1f Ohms", valorResistencia);
					break;
				default:
					printf("Este color no es permitido en esta banda");
					break;
			}
			printf("\n Los valores para la cuarta banda deben ser: \n");
			printf("S/C -> 20% \n plata -> 10% \n oro -> 5% \n rojo 2% \n cafe -> 1%");
			
		}
		printf("\n Le gusta realizar una nueva operacion? [S]i / [N]o");
		opcion=getche();
		fflush(stdin);
	}while((opcion=='S')||(opcion=='s'));
	system("cls");
	printf("\n \t Muchas Gracias por su atencion xD");
	system("pause");
	
	
}

