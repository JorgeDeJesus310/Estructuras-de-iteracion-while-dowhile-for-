#include<stdio.h>
  
  main()
  
  {
  	int cont = 1, num = 8, division, multiplo;
  	
     printf("\n\n\t\tMultiplos de 8 en en el intervalo 1-100"
	        "\n\n\t----------------------------------------------------");
	        
	        division = 100/8;
	        
	        do{
	        	multiplo = cont * num;
	        	printf("\n\n\t%d", multiplo);
	        	cont++;        	
			}
  	    
  	        while(cont <= division);
  	
  }
