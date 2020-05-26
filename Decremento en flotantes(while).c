#include<stdio.h>
  
  main()
   {
   	  float cont, num;
   	  
   	  printf("\n\n\t\t\t\tDecremento en flotantes"
	          "\n\n\t---------------------------------------------------------------------------------"
			    "\n\n\tEste programa realiza un decremento de floatantes 0.1 partiendo de un numero n"
				  "\n\thasta 0.1"
				  "\n\n\tIngrese el numero de inicio n: ");
				  
				  scanf("%f",&num);
				  cont = num;
		
		        printf("\n\n\tDecremento"
				        "\n\t------------------");	  
			while(cont>0.0)
			{
				printf("\n\n\t\t%.1f", cont);
				cont -= 0.1;
			}
   	
   	
   }
