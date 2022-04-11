#ifndef _DOG_
#define _DOG_

/**
 * typedef - new typedef for struct
 */

typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function that initializes structure */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* function that prints a struct */
void print_dog(struct dog *d);
/* created a new dog */
dog_t *new_dog(char *name, float age, char *owner);
/* frees dog */
void free_dog(dog_t *d);

#endif /* #ifndef _DOG_ */

