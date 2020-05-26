#include<stdio.h>

  main()

   
   {
   	int num, multiplicacion, cont=1;
   	
	printf("\n\n\t\t\t\tTablas de multiplicar"
	        "\n\n\t----------------------------------------------------------------------"
			 "\n\n\tEste programa imprime la tabla de multiplicar del numero ingresado"
			   "\n\n\tIngrese el numero: ");
	
	printf("\n\n\tTabla de %d", num);
     
	    scanf("%d", &num);
		
		while(cont<=10)
    	{
    		printf("\n\n\t%d * %d = ", cont, num);
    		multiplicacion = cont * num;
    		cont++;
    		
    		printf("%d", multiplicacion);
    		
		}
   }
