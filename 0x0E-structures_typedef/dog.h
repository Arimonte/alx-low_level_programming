#ifndef DOG_H

#define DOG_H

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: given name of the dog
 * @age: given age of the dog
 * @owner: warden of the dog
 */

struct dog

{

	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
