#include <stdio.h>
   
   main()
   
   {
   	 int cont = 1;
   	
   	printf("\n\n\t\t\tNumeros pares entre 0 y 50"
	        "\n\n\t----------------------------------------------------------------"
			  "\n\n\tEste programa imprime los numeros pares exitentes entre 0-50"
			     "\n\n\tNumeros pares");
		
		do{
			if(cont%2==0)
			  printf("\n\n\t\t%d", cont);
			  cont++;
	      }
	      while(cont<=50);
   	
   }
