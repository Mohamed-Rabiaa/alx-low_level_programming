#ifndef DOG_H_
#define DOG_H_
#define dog dog_t

/**
 *struct dog - This is dog struct
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
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
