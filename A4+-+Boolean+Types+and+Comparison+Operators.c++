//LECTURE : BOOLEAN in C++


#include <stdio.h>

int main(){

 /*
  Format Specifiers - %d
  true or false = bool

  INTEGER to BOOLEN
  true = 1
  false = 0
  any non zero = 1
  0 = false
*/

bool b1 = true;
bool b2 = false;
printf("%d %d\n",b1,b2);

/*
==  \ Equality
!=     \ Inequality
>       \ greater than
<       \ less than
>=      \ greater than or equal to
<=      \ less than or equal to
*/

printf(" 7 == 7 : %d\n ", 7== 7);
printf(" 7 != 7   : %d\n ", 7 != 7);
printf(" 10 > 20 : %d\n" , 10> 20);
printf(" 10 >= 20 :%d\n", 10 >=20);
printf(" 10 < 20: %d\n", 10<20);
printf(" 20 <=20 : %d\n",20 <=20);

} 
