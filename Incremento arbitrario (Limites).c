#include <stdio.h>

 main()
 
 {
 	int n, m, inc;
 	
 	printf("\n\n\t\t\tIncremento arbitrario"
 	        "\n\t\t------------------------------------------------"
  	         "\n\n\t\tEste programa realiza un incremento de n a m"
			  "\n\n\t\tIngresa el valor de n(Punto de partida): ");
			  scanf("%d", &n);
			  
	printf("\n\n\t\tIngrese el valor de m(Punto de finalizacion): ");
	         scanf("%d", &m);
	         
	printf("\n\n\t\tIngrese el valor de incremento: ");
	         scanf("%d", &inc);
	         
	         printf("\n\n\t\tConteo de incremento"
			         "\n\t\t----------------------");
	            
	         
	         while(m>n)
	         {
	         	n += inc;
	         	
	         	printf("\n\n\t\t\t%d ");
	         	
			 }
 	
 	
 }
