#include<stdio.h>
#include<windows.h>
#include<conio.h>


int main ()
{
    int op,rs;
    char dg=6, aa=160, ae=130, ai=161, ao=162, au=163, sp=168, cr=175;

    system("cls");

    printf("\033[01;33m");
    printf("\n\n\t\t\t%c Bienvenidos a Respondidos.c %c\n\n",dg ,dg);
	printf("\033[0m");

    do
    {
        //Mostrar el menu
        printf("\n1) Registro con Usuario \n2) Salir");

		//Solicitar la opción
		printf("\n\nElige una opci%cn de la lista: ",ao);
        printf("%c",cr);
		scanf("%d",&op);

	    char con [1][20];
        char nom [1][20];

        switch (op)
        {
        case 1:


            for(int i=0;i<1;i++)
            {

                //Solicita variables de caracter en este caso los nombres de los articulos
                printf("\033[1;36m");
                printf("\nEscriba su nombre de usuario: ");
                printf("\033[0m");
                printf("%c",cr);
                scanf("%s",&nom[i]);
                    
                //Solicita variables de caracter en este caso los nombres de los articulos
                printf("\033[1;36m");
                printf("\nContrase%ca: ",164);
                printf("\033[0m");
                printf("%c",cr);
                scanf("%s",&con[i]);
            }

            //Mensaje de titulo donde mostrara Articulos capturados
            printf("\033[01;33m");
            printf("\n\n\tSu registro a respondidos fue exitoso!! \n\n",ai);
            printf("\033[0m");
            
            //Lista de las variables que se solicitaron en forma de lista
            for(int i=0;i<1;i++)
            {
                printf("\033[1;36m");
                printf("Nombre de Usuario: ");
                printf("\033[1;34m");
                printf("%s ",nom[i]);
                printf("\033[0m");

            }
                do
                {
                    //Mostrar el menu
                    printf("\n1) carlos.ram \n2) marta.j \n3) marco.fi \n4) Actualizar partidas \n5) Salir");

                    //Solicitar la opción
                    printf("\n\nElige una opci%cn de la lista: ",ao);
                    printf("%c",cr);
                    scanf("%d",&rs);

                    switch (rs)
                    {
                    case 1:
                        printf("\n------ \n");
                        printf("Oponente: carlos.ram\n");
                        printf("------ \n");

                        printf("Categoria:HISTORY\n\n");
                        printf("Pregunta:%cComo se llama este politico estadounidende?\n\n",sp);

                        printf("Respuesta: 2) Barack Obama\n\n");

                        break;
                    
                    case 2:
                        printf("\n------ \n");
                        printf("Oponente: marta.j\n");
                        printf("------ \n");

                        printf("Categoria: ENTERTAINMENT\n\n");
                        printf("Pregunta: %cDonde nacio Xavier Lopez Alias: Chavelo ?\n\n",sp);

                        printf("Respuesta: 2) Chicago\n");
                        break;

                    case 3:
                        printf("\n------ \n");
                        printf("Oponente: marco.fi\n");
                        printf("------ \n");

                        printf("Categoria: ARTS\n\n");
                        printf("Pregunta: %cQuien es ella?\n\n",sp);

                        printf("Respuesta: 4) Alicia\n");
                        break;

                    case 4:
                        printf("Acabas de Actualizar partidas\n");
                        break;

                    case 5:
                        printf("Elegiste la opci%cn salir\n\n",ao);
                        break;


                    default:
                        printf("Opci%cn no v%clida!!!\n\n",ao,aa);
                        break;
                    }
                    

                } while(rs!=5);

            break;

        case 2:
            printf("Elegiste la opci%cn salir\n\n",ao);

                break;

            default:
                printf("Opci%cn no v%clida!!!\n\n",ao,aa);
                break;
        }



    }
    while(op!=2);
    


    return 0;

}