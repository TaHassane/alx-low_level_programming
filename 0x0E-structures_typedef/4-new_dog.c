#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
* _strlen -  returns the length of a string.
* @s: input 1
* Return: i length of a string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	++i;

	return (i);

}

/**
* *_strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* followed by a new line
* @dest: input 1
* @src: input 2
* Return: the buffer pointed to by dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);

}

/**
 * *new_dog - unction that creates a new dog.
 * @name: new name
 * @age: new age
 * @owner: new owner's name
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || age < 0 || !owner)
		return (NULL);
	new = (dog_t *) malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*new).owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->name = _strcpy(new->name, name);
	new->age = age;
	new->owner = _strcpy(new->owner, owner);

	return (new);

}
