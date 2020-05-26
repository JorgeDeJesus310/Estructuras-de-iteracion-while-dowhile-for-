#include <stdio.h>

 main()
 {
 	
	 	 float producto, num;
	 	 
	  printf("\n\n\t\t\t\tProducto de numeros reales"
	          "\n\n\t---------------------------------------------------------------------------------"
			    "\n\n\tEste programa calcula el producto de todos los numeros reales introducidos el  "
				  "\n\tresultado del calculo se imprime hasta que se introduce el numero 0"
				   "\n\n\tIngrese un numero: ");
				   
		         scanf("%f",&num);
		         
		         for(producto = 1; num != 0;)
		         {
		         	producto *= num;
		         	printf("\n\n\tIngrese un numero: ");
		         	scanf("%f",& num);
					   
				 }
				 
				 printf("\n\n\tEl resultado del producto es igual a: %g\n\n", producto);		  
	   
 	
 }
