#include <stdio.h>

 main()

 {

    int cont = 1, suma = 0, n;


  printf("\n\n\t\tEste programa realiza una sumatoria de 1 a n"
          "\n\n\t\tSiendo n un numero entero mayor o igual a 1"
          "\n\n\t\tIntroduce el valor de n: ");
          scanf("%d", &n);
          
          printf("\n\n\t\t  Conteo \t\t\tSuma"
		          "\n\t\t------------------\t\t------------------");
		          


          while (cont <= n)
          {
             printf("\n\n\t\t\t\t\t\t%d + %d = ", suma, cont);
              suma = suma + cont;
              cont++;
              
              printf("%d \r\t\t\t%d", suma, suma);
              
              

          }

          if(n>=1)
             printf("\n\n\t\tEl resultado de la sumatoria es: %d \n\n", suma);

             else
                printf("\n\n\t\tEl numero introducido es incorrecto");


 }
