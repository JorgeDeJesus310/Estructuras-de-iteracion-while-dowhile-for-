#include <stdio.h>

 main()
 {
 	int m, n, dec;
 	
 	printf("\n\n\t\tEste programa realiza un decremento de m a n"
	        "\n\n\t\t\tDecremento entre limites arbitrarios"
			 "\n\t\t--------------------------------------------------"
			  "\n\n\t\tIngrese el valor de m(Punto partida): ");
			  scanf("%d", &m);
	printf("\n\n\t\tIngrese el valor de de n(Punto de finalizacion):");
	          scanf("%d", &n);
	          
	printf("\n\n\t\tIngrese el numero de decremento: ");
	         scanf("%d", &dec);
	          
	          printf("\n\n\t\t\tConteo regresivo"
			         "\n\t\t-----------------------");
	          
	          while(m>=n)
	          {
	          	
	          	m -=dec;
	          	
	          	printf("\n\n\t\t %d", m);
	          	
			  }
			 

 	
 	
 }
