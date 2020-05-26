#include <stdio.h>

   
   main()
   
   {
      float producto = 1, num;
      
      printf("\n\n\t\t\t\tProducto de numeros reales"
	          "\n\n\t---------------------------------------------------------------------------------"
			    "\n\n\tEste programa calcula el producto de todos los numeros reales introducidos el  "
				  "\n\tresultado del calculo se imprime hasta que se introduce el numero 0");
		   
		  do{
		   printf("\n\n\tIngrese un numero: ");
		   scanf("%f",&num);
		   if(num != 0)
		   producto *= num;
		  }
		    while(num!=0);
		    
		    printf("\n\n\tEl resultado del producto es igual a: %g\n\n", producto);
		    
		    
		   
	
   }
