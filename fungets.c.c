#include <stdio.h>
#include <string.h>

int main()
{
  char nombre[70];
  
  printf("Por favor, escribe tu nombre\n");
  gets(nombre);
  printf("Hola %s, tu nombre tiene %d letras\n",nombre,strlen(nombre));
  
  
  return 0;
}