#include <stdio.h>

  main()
  {
  	int cont;
  	
  	 printf("\n\n\t\t\tNumeros pares entre 0 y 50"
	          "\n\n\t----------------------------------------------------------------"
			    "\n\n\tEste programa imprime los numeros pares exitentes entre 0-50"
			     "\n\n\tNumeros pares");
			     
		   for(cont=1; cont<=50; cont++)
		   
		{
			if(cont%2==0)
			 printf("\n\n\t\t%d", cont);
		}
  	
  	
  }
