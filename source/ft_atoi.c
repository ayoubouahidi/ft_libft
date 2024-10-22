#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// void ft_putchar(char c){
//   write(1, c, 1);
// }

int ft_atoi(char *str){
  int i;
  int cmpt;
  int result;
  int cmpmoins;

  cmpmoins = 0;
  result = 0;
  cmpt = 0;
  i = 0;
  while (str[i] == 32 || str[i] != '\0')
  {
    i++;
  }
  while (str[i] == '-' && str[i] == '+')
  {
   cmpt++; 
  }
  
  while (str[i] >= 48 && str[i] <= 57)
  {
    result += str[i] * 10;
  }
  if(cmpt > 1){
     return 0; 
  }
  if (cmpmoins == 1){
    return result * -1;
  }
  return result;
}

int main(){
  printf("ayoub's function : %d\n", atoi("-19ayosd131ub"));
  printf("string's function : %d\n", atoi("-19ouahi51di"));
  return 0;
}
