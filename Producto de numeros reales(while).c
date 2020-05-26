#include <stdio.h>

  main()
  
  {
  	
	  float producto = 1, num;
	  
	  printf("\n\n\t\t\t\tProducto de numeros reales"
	          "\n\n\t---------------------------------------------------------------------------------"
			    "\n\n\tEste programa calcula el producto de todos los numeros reales introducidos el  "
				  "\n\tresultado del calculo se imprime hasta que se introduce el numero 0"
				   "\n\n\tIngrese un numero: ");
		    
		    scanf("%f",&num);
		    
		while(num != 0)
		{
		  
		  	producto *= num;
		  	printf("\n\n\tIngrese un numero: ");
		  	scanf("%f",&num);
		
			
		}
		
		printf("\n\n\tEl resultado del producto es igual a: %g\n\n", producto);		  
	   
  	
  	
  	
  }
