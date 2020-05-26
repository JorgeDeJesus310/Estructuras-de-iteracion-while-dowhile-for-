#include<stdio.h>

 main()
 
 {
 	
 	int cont, num = 8, division, multiplo;
  	
     printf("\n\n\t\tMultiplos de 8 en en el intervalo 1-100"
	        "\n\n\t----------------------------------------------------");
	        
	        division = 100/8;
	        
	for(cont = 1; cont<=division; cont++)
	{
		multiplo = cont * num;
		printf("\n\n\t%d", multiplo);
	}
	        
	 
 	
 }
