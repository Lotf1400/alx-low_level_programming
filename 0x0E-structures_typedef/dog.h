#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type with some elements
 * @name: dog's name
 * @age: the dog's age
 * @owner: the name of the owner
 * Description: a description of the structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - the typedef
 */

typedef struct dog_t;

void int_dog(struct dog *d, float age, char *name, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *a, char *str);
int _strlen(char *i);

#endif
