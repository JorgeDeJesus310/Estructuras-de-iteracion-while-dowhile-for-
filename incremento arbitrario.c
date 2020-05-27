#include <stdio.h>


   main()

{

    int x = 100, n, inc;

  printf("\n\n\t\t\tIncremento arbitrario "
         "\n\t\t------------------------------------------------"
         "\n\n\t\tEste programa realiza un conteo de n a 100" 
         "\n\n\t\tIntroduce el valor de n: ");

         scanf("%d", &n);

  printf("\n\n\t\tIntroduce el valor del incremento: ");

         scanf("%d", &inc);

  printf("\n\n\tConteo"
          "\n\t----------");


         while(x>n)

         {
             n = n + inc;

             printf("\n\n\t %d ", n);


         }


}
