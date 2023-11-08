#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

/**
 * struct dog - a new type
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
