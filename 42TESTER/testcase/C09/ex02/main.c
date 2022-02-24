#include "./ft_split.c"
#include <stdio.h>
#include <stdlib.h>

int main(){
	{
		printf("----ex02----\n");
		char **str_arr;
		int i;
		str_arr = ft_split("Hello World Cat\tDog\nPizza School"," \n");
		for(i=0;str_arr[i] != 0; i++)
			printf("%s\n",str_arr[i]);
		for(i=0;str_arr[i] != 0; i++)
			free(str_arr[i]);
		free(str_arr[i]);
		free(str_arr);	
		str_arr = ft_split("Hello World Cat\tDog\nPizza School"," World");
		for(i=0;str_arr[i] != 0; i++)
			printf("%s\n",str_arr[i]);
		for(i=0;str_arr[i] != 0; i++)
			free(str_arr[i]);
		free(str_arr[i]);
		free(str_arr);
		str_arr = ft_split("GMZ37pYIF    5qr3mAsOtCHS9gJEnplUp9xiihc    m9","");
		for(i=0;str_arr[i] != 0; i++)
			printf("%s\n",str_arr[i]);
		for(i=0;str_arr[i] != 0; i++)
			free(str_arr[i]);
		free(str_arr[i]);
		free(str_arr);		

	}
}
