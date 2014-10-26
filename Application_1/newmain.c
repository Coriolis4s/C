/* 
 * File:   newmain.c
 * Author: supc
 *
 * Created on 20 October, 2014, 8:41 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "newfile.h"
#include <math.h>
/*
 * 
 */
/*main() {
    printf("Hello world\n");
    int a=10, b=3, i=0;
    int *p;
    p = &a;
    float c=0;
    while (i<10)    {
        c = divbycent(a);
        printf("result=%d\n", c);
        i++;
    }
    return (EXIT_SUCCESS);
}*/

/*main()  {
    printf("hello, world\n");
    float a=3.0, c=0.0;
    c = multbycent(a);
    float *x;
    x = &c;
    printf("%u, %u\n", x, *x);
    printf("result=%f", c);
    return (EXIT_SUCCESS);
}*/

/*main () {
   int a, b;

   a = abs(5);
   printf("value of a = %d\n", a);

   b = abs(-10);
   printf("value of b = %d\n", b);

   return(0);
}*/

/*main()	{
  printf("process id: %d:", getpid());
}*/

/*main()  {
    int *p, a, b, *q, *r;
    a = 21;
    b= 1;
    p = &a;
    q = &b;
    printf("value of pointer: %u\n", p);
    r = p&&q;
    printf("value of a+b=%d\n", *r);
    printf("value of derefernced pointer: %d\n", *p);
    return(EXIT_SUCCESS);
}*/

/*main()  {
    FILE *ofile;
    ofile = fopen("/tmp/ctest.txt", "w+");
    fprintf(ofile, "this is a line.");
    fclose(ofile);
    ofile = fopen("/tmp/ctest.txt", "r");
    char buffer[255];
    fgets(buffer, 255, (FILE*)fopen);
    printf("line: %s\n", buffer);
}*/

main()  { /*this doesn't work'*/
    char word[] = "abracadabra";
    char *ptr;
    ptr = word;
    while (*ptr!='\0')  {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return(EXIT_SUCCESS);
}