#include<stdio.h>
#include<windows.h>
#include<conio.h>
/*
Este Programa fue desarrollado para simular un mod del Juego para telefonos 
Preguntados de ese modo su función seria darte las respuestas de las preguntas 
que te realisen en preguntados y asi ganarias puntos y recompensas del juego

Desarrollado en:
Windows 10

Auto:
Sánchez Estrada Angel Isaac
*/

int main ()
{
    //Declaramos Variables
    int op,rs;
    char dg=6, aa=160, ae=130, ai=161, ao=162, au=163, sp=168, cr=175;

    //Función que sirve para limpiar la pantalla cuenado empieza a ejecutar
    system("cls");

    //Mensaje de Bienvenida
    printf("\033[0;33m");
    printf("\n\n\t\t\t%c Bienvenidos a Respondidos.c %c\n\n",dg ,dg);
	printf("\033[0m");

    do
    {
        //Mostrar el menu
        printf("\033[01;36m");
        printf("\n1) Registro con Usuario \n2) Salir");
        printf("\033[0m");

		//Solicitar la opción
        printf("\033[01;35m");
		printf("\n\nElige una opci%cn de la lista: ",ao);
        printf("\033[1;34m");
        printf("%c",cr);
		scanf("%d",&op);
        printf("\033[0m");

        /*Declaramos las matrises antes del switch para que 
        se pueda ejecutar y compilar correctamente*/
	    char con [1][20];
        char nom [1][20];

        switch (op)
        {
        case 1:


            for(int i=0;i<1;i++)
            {

                //Solicita variables de caracter en este caso los nombres de los articulos
                printf("\033[1;33m");
                printf("\nEscriba su nombre de usuario: ");
                printf("\033[1;34m");
                printf("%c",cr);
                scanf("%s",&nom[i]);
                    
                //Solicita variables de caracter en este caso los nombres de los articulos
                printf("\033[1;33m");
                printf("\nContrase%ca: ",164);
                printf("\033[1;34m");
                printf("%c",cr);
                scanf("%s",&con[i]);
                printf("\033[0m");
            }

            //Mensaje de titulo donde mostrara Articulos capturados
            printf("\033[01;32m");
            printf("\n\tSu registro a respondidos fue exitoso!! \n\n",ai);
            printf("\033[0m");
            
            //Lista de las variables que se solicitaron en forma de lista
            for(int i=0;i<1;i++)
            {
                printf("\033[1;33m");
                printf("Nombre de Usuario: ");
                printf("\033[1;34m");
                printf("%s ",nom[i]);
                printf("\033[0m");

            }
                do
                {
                    //Mostrar el menu
                    printf("\033[01;36m");
                    printf("\nPARTIDAS:");
                    printf("\n1) carlos.ram \n2) marta.j \n3) marco.fi \n4) Actualizar partidas \n5) Salir");
                    printf("\033[0m");
                    
                    //Solicitar la opción
                    printf("\033[01;35m");
                    printf("\n\nElige una opci%cn de la lista: ",ao);
                    printf("\033[1;34m");
                    printf("%c",cr);
                    scanf("%d",&rs);
                    printf("\033[0m");

                    switch (rs)
                    {
                    /*Se escriben las preguntas y el oponentes antes asignados 
                    para asi el usuario pueda tener las respuestas de varios oponentes*/
                    case 1:
                        //Oponente 1
                        printf("\033[01;30m");
                        printf("\n------ \n");
                        printf("Oponente: carlos.ram\n");
                        printf("------ \n");

                        printf("Categoria:HISTORY\n\n");
                        printf("Pregunta:%cComo se llama este politico estadounidende?\n\n",sp);

                        printf("Respuesta: 2) Barack Obama\n\n");
                        printf("\033[0m");

                        break;
                    
                    case 2:
                        //Oponente 2
                        printf("\033[01;30m");
                        printf("\n------ \n");
                        printf("Oponente: marta.j\n");
                        printf("------ \n");

                        printf("Categoria: ENTERTAINMENT\n\n");
                        printf("Pregunta: %cDonde nacio Xavier Lopez Alias: Chavelo ?\n\n",sp);

                        printf("Respuesta: 2) Chicago\n");
                        printf("\033[0m");
                        break;

                    case 3:
                        //Oponente 3
                        printf("\033[01;30m");
                        printf("\n------ \n");
                        printf("Oponente: marco.fi\n");
                        printf("------ \n");

                        printf("Categoria: ARTS\n\n");
                        printf("Pregunta: %cQuien es ella?\n\n",sp);

                        printf("Respuesta: 4) Alicia\n");
                        printf("\033[0m");
                        break;

                    case 4:
                        //Imprime en pantalla Actualizar partidas
                        printf("\033[01;32m");
                        printf("\n\tAcabas de Actualizar partidas\n");
                        printf("\033[0m");
                        break;

                    case 5:
                        //Imprime en pantalla la opción de salir
                        printf("\033[01;32m");
                        printf("\n\tElegiste la opci%cn salir\n\n",ao);
                        printf("\033[0m");
                        break;


                    default:
                        //Mensaje de opcion ingresada incorrecta
                        printf("\033[01;31m");
                        printf("\n\tOpci%cn no v%clida!!!\n\n",ao,aa);
                        printf("\033[0m");
                        break;
                    }
                    

                } 
                //Se declara que si ingresa cinco se saldra del switch
                while(rs!=5);

            break;

        case 2:
                //Imprime en pantalla opcion salir
                printf("\033[01;32m");
                printf("\n\tElegiste la opci%cn salir\n\n",ao);
                printf("\033[0m");
                break;

            default:
                //Mensaje de opcion ingresada incorrecta
                printf("\033[01;31m");
                printf("\n\tOpci%cn no v%clida!!!\n\n",ao,aa);
                printf("\033[0m");
                break;
        }



    }
    //Se declara que si ingresa dos se saldra del switch
    while(op!=2);
    


    return 0;

}