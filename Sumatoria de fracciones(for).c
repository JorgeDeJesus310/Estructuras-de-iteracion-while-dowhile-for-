#include <stdio.h>

  main()
  
  {
  	float sumatoria=0, cont=1, num;
  	
  	printf("\n\n\t\t\t\t\tSumatoria de fracciones"
  	         "\n\n\t------------------------------------------------------------------------------------------------------"
	        "\n\n\tEste programa hace la sumatoria de las fracciones 1/x siendo x los numeros enteros positivos entre 1-n"
			 "\n\n\tIngresa el numero: ");
			 
			 scanf("%f", &num);
		
		if(num>0)
		
		{
		
		printf("\n\n\t");
		
		for(cont; cont<=num; cont++)
		{
			sumatoria += 1/cont;
			printf("1/%g + ", cont);
		}
  	       printf("= %g", sumatoria);
  	       
  	    printf("\n\n\tEl resultado de la sumatoria es igual a: %g\n\n", sumatoria);
  	   }
  	   
  	   else
  	       printf("\n\n\tEl numero introducido no es un entero positivo !!");
  }
