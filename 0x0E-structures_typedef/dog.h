#ifndef STRTYP
#define STRTYP

/**
*main - header file for protoypes
*void protoypes (void)
*int protoypes (int)
*/
struct dog
{
    char *name;
    float age;
    char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
