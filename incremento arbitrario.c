#include <stdio.h>


main()

{

    int x = 100, n, inc;

  printf("\n\n\t\tEste programa realiza un conteo de 1 a n"
         "\n\n\t\tIncremento arbitrario "
         "\n\n\t\tIntroduce el valor de n: ");

         scanf("%d", &n);

  printf("\n\n\t\tIntroduce el valor del incremento: ");

         scanf("%d", &inc);

  printf("\n\n\tConteo"
          "\n\t----------");


         while(x>=n)

         {
             n = n + inc;

             printf("\n\n\t %d ", n);


         }


}
