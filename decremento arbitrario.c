#include <stdio.h>


main()

{

    int x = 100, n, dec;

  printf("\n\n\t\tEste programa realiza un conteo de 1 a n"
         "\n\n\t\tDecremento arbitrario "
         "\n\n\t\tIntroduce el valor de n: ");

         scanf("%d", &n);

  printf("\n\n\t\tIntroduce el valor del decremento: ");

         scanf("%d", &dec);

  printf("\n\n\tConteo"
          "\n\t----------");


         while(x>=n)

         {
             x-=dec;
             

             printf("\n\n\t %d ", x);


         }


}
