#include "main.h"

/**
 * _strcat - appends src to the dest string 
 * @dest: string to append by src 
 * @src: string to append to dest 
 *@n: largerst number of bytes to append
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

     i = j = 0;
     while (*(dest + i))
	     i++;
     while (j < n && *(src + j))
     {
	  *(dest + i) = *(scr +j) ;
	     i++;
	     j++;
     }if (j < n) = *(src + j);
           return (dest);

    }
