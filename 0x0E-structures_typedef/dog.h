#ifndef DOG_H
#define DOG_H

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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog dog_t;


#endif /* MAIN_H */
