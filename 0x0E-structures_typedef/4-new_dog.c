#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * _strlen - a function to find the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the pointer to the buffer string copy
 * @src: the string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, b;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (b = 0; b < len; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: pointer to the new struct dog (success), NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int second_len, first_len;

	first_len = _strlen(name);

	second_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)

		return (NULL);

	dog->name = malloc(sizeof(char) * (first_len + 1));

	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (second_len + 1));

	if (dog->owner == NULL)
	{
		free(dog);

		free(dog->name);

		return (NULL);
	}

	strcpy(dog->name, name);

	_strcpy(dog->owner, owner);

	dog->age = age;
	return (dog);
}
