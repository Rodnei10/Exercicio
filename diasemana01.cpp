#include <stdio.h>
int main()
{
	int dia=0;
	
	printf("digite um dia de um a cinco:\n");
	scanf("%d", &dia);
	if(dia==1)
	{
		printf("segunda-feira!");
	}
	else if(dia ==2)
	{
		printf("terca- feira !");
	}else if(dia==3) {
	
	    printf("quarta-feira !");
}
	else if(dia==4)	{
	
	
	    printf("quinta-feira !");
}
	else if(dia==5)   	
	{
	    
		printf("sexta - feira !");
	}
	else	{
		printf("numero invalido !");
	}

		
	
	return 123;
}
