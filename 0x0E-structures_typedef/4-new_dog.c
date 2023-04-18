#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - it returns the length of a str
 * @s: the string to use
 * Retrun: the length of the str
 */

int _strlen(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		i++
	}
	return (i);
}
/**
 * _strcpy - copies the string pointed to by src
 * by inclding the terminal null bytes (\0)
 * @dest: pointer to the buffer in which we're going
 * to copy the str
 * @src: the string that has to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, i;
	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
	}
	dest[i] != '\0';

	return (dest);
}
/**
 * new_dog - it creates a new dog
 * @name: the new name
 * @age: the new age
 * @owner: the new owner
 * Retrun: success if it returns a pointer to the new dog, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;
	
	a = _strlen(name);
	b = _strlen(owner);
	
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	
	return (dog);
}
