/**
 * init_dog -  initializes a variable of type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: pointer to structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
