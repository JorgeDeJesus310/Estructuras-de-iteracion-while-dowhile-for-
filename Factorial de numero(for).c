#include <stdio.h>

  main()
  {
  	
  	long int cont, num, factorial;
  	
    printf("\n\n\n\t\tFactorial de un numero"
  	        "\n\n\t-----------------------------------------------------"
	        "\n\n\tEste programa calcula el factorial de un numero entero "
			  "\n\n\tIngrese el numero: ");
			  
	scanf("%ld", &num);
	    
	    factorial = num;
	    
    for(cont=num-1; cont>1; cont--)
	 
		factorial *= cont;
		
	printf("\n\n\tEl resultado del factorial del numero %ld es igual: %ld\n\n ", num, factorial);
			
  	
  }
