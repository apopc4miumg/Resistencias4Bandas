//Cálculo de Resitencias en cpp con cuatro bandas
//INGRESANDO ---------------------------//------------------------//------------
//---------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
 //----------------------------------------
 //----------------------------------------
using namespace std;
int main(){
		int a, b, c, d;
		char opcion;
		do{
			printf("\n			     \tUNIVERSIDAD MARIANO GALVEZ	");
			printf("\n            \t\tFACULTAD DE INGENIERIA EN SISTEMAS, SEDE COBAN.");
			printf("\n     \t\t   \t              \tPROYECTO FINAL\n"); //Título del proyecto
			printf("\nEnumeracion de colores de  Banda:\n"); 	//Número i cololores de las bandas
			//-------------------------enumeracion de colores que el usuario ingresa al momento de ejecutar el programa-------------------------------------
			printf("\n 0 = Negro \n 1 = Marron \n 2 = Rojo \n 3 = Naranja \n 4 = Amarillo \n 5 = Verde \n 6 = Azul \n 7 = Violeta \n 8 = Gris \n\t");
			printf("\n Ingrese el color de la primera Banda \n");//primera opcion en consola
			scanf("\n%d",&a);
			printf("\n Ingrese el color de la segunda Banda \n");//segunda opcion en consola
			scanf("\n%d",&b);
			printf("\n Ingrese el color de la tercera Banda \n");//tercera opcion en consola
			scanf("\n%d",&c);
			printf("\n Ingrese el color de la cuarta Banda \n");//cuarta opcion en consola
			scanf("\n%d",&d);
			system("cls");//limpiar consola
			//--------------------------primera banda; selector una de las ocho opciones de colores---------------------------------------------------------
		switch(a){
			case 0: printf("1° banda = Negro\n"); break;
			case 1: printf("1° banda = Marron\n"); break;
			case 2: printf("1° banda = Rojo\n"); break;
			case 3: printf("1° banda = Naranja\n"); break;
			case 4: printf("1° banda = Amarrillo\n"); break;
			case 5: printf("1° banda = Verde\n"); break;
			case 6: printf("1° banda = Azul\n"); break;
			case 7: printf("1° banda = Violeta\n"); break;
			case 8: printf("1° banda = Gris\n"); break;
			default: printf("1° banda Blanco\n"); break;
	 
		}
			//--------------------------segunda banda; selector una de las ocho opciones de colores---------------------------------------------------------
			switch(b){
			case 0: printf("2° banda = Negro\n"); break;
			case 1: printf("2° banda = Marron\n"); break;
			case 2: printf("2° banda = Rojo\n"); break;
			case 3: printf("2° banda = Naranja\n"); break;
			case 4: printf("2° banda = Amarrillo\n"); break;
			case 5: printf("2° banda = Verde\n"); break;
			case 6: printf("2° banda = Azul\n"); break;
			case 7: printf("2° banda = Violeta\n"); break;
			case 8: printf("2° banda = Gris\n"); break;
			default: printf("2° banda Blanco\n"); break;
	 
		}
		//--------------------------tercera banda; selector una de las ocho opciones de colores---------------------------------------------------------
		switch(c){
			case 0: printf("3° banda = Negro\n"); break;
			case 1: printf("3° banda = Marron\n"); break;
			case 2: printf("3° banda = Rojo\n"); break;
			case 3: printf("3° banda = Naranja\n"); break;
			case 4: printf("3° banda = Amarrillo\n"); break;
			case 5: printf("3° banda = Verde\n"); break;
			case 6: printf("3° banda = Azul\n"); break;
			case 7: printf("3° banda = Violeta\n"); break;
			case 8: printf("3° banda = Gris\n"); break;
			default: printf("3° banda Blanco\n"); break;
		 
		}
		//---------------------------cuarta banda; selector una de las ocho opciones de colores---------------------------------------------------------
		switch(d){
			case 0: printf("4° banda = Negro\n"); break;
			case 1: printf("4° banda = Marron\n"); break;
			case 2: printf("4° banda = Rojo\n"); break;
			case 3: printf("4° banda = Naranja\n"); break;
			case 4: printf("4° banda = Amarrillo\n"); break;
			case 5: printf("4° banda = Verde\n"); break;
			case 6: printf("4° banda = Azul\n"); break;
			case 7: printf("4° banda = Violeta\n"); break;
			case 8: printf("4° banda = Gris\n"); break;
			default: printf("4° banda Blanco\n"); break;
	 
		}
		//-------------------------------resultados de Resistencia total. operadas en cuatro bandas-----------------------------------------------------
		switch(d){
			case 0: printf("La Resistencia es: %d%d Ohms \n",a,b,c,d); break;
			case 1: printf("\nLa Resistencia es: %d%d0 Ohms\n",a,b,c,d); break;
			case 2: printf("\nLa Resistencia es: %d%d00 Ohms\n",a,b,c,d); break;
			case 3: printf("\nLa Resistencia es: %d%d000 Ohms\n",a,b,c,d); break;
			case 4: printf("\nLa Resistencia es: %d%d0000 Ohms\n",a,b,c,d); break;
			case 5: printf("\nLa Resistencia es: %d%d00000 Ohms\n",a,b,c,d); break;
			case 6: printf("\nLa Resistencia es: %d%d000000 Ohms\n",a,b,c,d); break;
			case 7: printf("\nLa Resistencia es: %d%d0000000 Ohms\n",a,b,c,d); break;
			case 8: printf("\nLa Resistencia es: %d%d00000000 Ohms\n",a,b,c,d); break;
			default: printf("\n\tLa Resistencia es: %d%d000000000 Ohms\n",a,b,c,d); break;
	 
		}
		//--------------------------Opcion para toma de decisiones--------------------------------------------------------------------------------------
		printf("\n\n\n\n\n\n\n\n\n\n\n\nPresionar S para seguir\n");
		printf("Presionar N para Salir\n");
		printf("\n\n\n\n\t\t\t\t\t\t\t\t\tSeguir? [S]i / [N]o\n\n\n");
		opcion=getche();
		fflush(stdin);
		system("cls");//Limpiar consola despues de tomar la decision S || N
	
	}
	//----------------------------------si no seguir entonces: -------------------------------------------------------------------------------------
	while((opcion=='S')||(opcion=='s')); //Opcion para seguir con el programa || return. cls
	system("cls");
	printf("\n\n \t\t\t\t    \tMuchas Gracias por su atencion  \n\n\n\n\n		\n\n\n\n\n \n\n\n\n\n\n\n\n\n\n"); //mensaje de agradecimiento
	
	 
	
	
}


