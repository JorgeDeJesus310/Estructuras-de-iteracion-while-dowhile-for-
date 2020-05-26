#include<stdio.h>

  main()
  
  {
  	long int cont, num, factorial;
  	
  	printf("\n\n\n\t\tFactorial de un numero"
  	        "\n\n\t-----------------------------------------------------"
	        "\n\n\tEste programa calcula el factorial de un numero entero "
			  "\n\n\tIngrese el numero: ");
	
	scanf("%ld", &num);
	
	cont = num;
	factorial = num;
	
	do{
		cont--;
		factorial *= cont; 
	  }
	  
	while(cont>1);
	
	printf("\n\n\tEl resultado del factorial del numero %ld es igual: %ld\n\n ", num, factorial);
  	
  	
  	
  	
  }
