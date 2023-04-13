#include "main.h"
#include <stdlib.h>
/**
 * count_word - it helps the function to count the num of words in a str
 * @str1: the str to count his words
 * Return: the num of words
 */

int count_word(int *str1)
{
	int abc, a, b;

	abc = 0;
	b = 0;

	for (a = 0;str1[a] != '\0'; a++)
	if (str1[a] == ' ')

		abc = 0;
	else if (abc == 0)
	{
		abc = 1;
		b++;
	}
	return (b);
}
/**
 * **strtow - splits a str into two words
 * @str: the string to split
 * Return: pointer to an array of strings, NULL otherwise
 */

char **strtow(char *str)
{
	char **def, *see;
	int i, j = 0, low = 0, wrds, k = 0, first, last;

	while (*(str + low)
			low++;
			wrds = count_word(str);

			if (wrds == 0)
			return (NULL);
			def = (char **) malloc(sizeof(char *) * (wrds + 1));

			if (def == NULL)
			return (NULL);

			for (i = 0; i <= low; i++)
			{
			        if (str[i] == ' ' || str[i] == '\0')
				{
				   if (k)
				   {
				   last = i;
				   see = (char *) malloc(sizeof(char) * (k + 1));
				   if (see == NULL)
				           return (NULL);
				   while (first < last)
					   *see++ = str[first++];
				   *see = '\0';
				   def[j] = see - k;
				   j++;
				   k = 0;
				   }
			        }
				
				else if (k++ == 0)
					first = i;
		        }
	                
	                def[j] = NULL;
			return (def);
}
