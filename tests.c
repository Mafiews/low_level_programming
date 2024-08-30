/* #include <stdio.h> */
/* #include <stdlib.h> */
/* int main(void){ */
/*       char c; */

/*       c = 'a'; */
/*       while(c <= 'z'){ */
/*               printf("value %d char %c\n", c, c); */
/*               c = c+1; */
/*       } */

/*       exit(EXIT_SUCCESS); */
/* } */

/* prints alphabet along which each letter's value */


/* #include <stdio.h> */
/* #include <stdlib.h> */
/* int main(void){ */
/*       int this_char, comma_count, stop_count; */

/*       comma_count = stop_count = 0; */
/*       this_char = getchar(); */
/*       while(this_char != EOF){ */
/*               if(this_char == '.') */
/*                       stop_count = stop_count+1; */
/*               if(this_char == ',') */
/*                       comma_count = comma_count+1; */
/*               this_char = getchar(); */
/*       } */
/*       printf("%d commas, %d stops\n", comma_count, */
/*                       stop_count); */
/*       exit(EXIT_SUCCESS); */
/* } */

/* counts number of commas and dots in user-provided input */


/* #include <stdio.h> */
/* #include <stdlib.h> */

/* #define BOILING 212     /\* degrees Fahrenheit *\/ */

/* int main(void){ */
/*       float f_var; double d_var; long double l_d_var; */
/*       int i; */

/*       i = 0; */
/*       printf("Fahrenheit to Centigrade\n"); */
/*       while(i <= BOILING){ */
/*               l_d_var = 5*(i-32); */
/*               l_d_var = l_d_var/9; */
/*               d_var = l_d_var; */
/*               f_var = l_d_var; */
/*               printf("%d %f %f %Lf\n", i, */
/*                       f_var, d_var, l_d_var); */
/*               i = i+1; */
/*       } */
/*       exit(EXIT_SUCCESS); */
/* } */
/* converts Farenheit to Centigrade */



/* #include <limits.h> */
/* #include <stdio.h> */
/* #include <stdlib.h> */
/* int main(void){ */
/*      char c; */

/*      c = CHAR_MIN; */
/*      while(c != CHAR_MAX){ */
/*              printf("%d\n", c); */
/*              c = c+1; */
/*      } */
     
/*      exit(EXIT_SUCCESS); */
/* } */
/*  will print from -128 to 126 */
