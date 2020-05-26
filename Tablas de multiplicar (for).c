#include<stdio.h>

 main()
 {
 	int cont, num, multiplicacion;
 	
 	printf("\n\n\t\t\t\tTablas de multiplicar"
	          "\n\n\t----------------------------------------------------------------------"
			   "\n\n\tEste programa imprime la tabla de multiplicar del numero ingresado"
			     "\n\n\tIngrese el numero: ");
 	   
 	   scanf("%d", &num);
 	   
 	   for(cont=1; cont<=10; cont++)
 	   {
 	   	 printf("\n\n\t%d * %d = ", cont, num);
 	   	 multiplicacion = cont * num;
 	   	 printf("%d", multiplicacion);
 	   	
		}
 }
