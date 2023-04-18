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
 * dog_t - the typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, float age, char *name, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
