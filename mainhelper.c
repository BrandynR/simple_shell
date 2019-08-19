/**
 * _strcmp - compares two strings, NOT null terminator
 * @s1: first string
 * @s2: second string
 * Return: difference in ASCII value between string 1 and string 2
 */
int _strcmp(char *s1, char *s2)
{
        int i;

        i = 0;
        if (s1[i] == '\0' || s2[i] == '\0')
                return (-1);
        while (s1[i] != '\0' && s2[i] != '\0')
        {
                if (s1[i] != s2[i])
                        return ((s1[i] - '0') - (s2[i] - '0'));
                i++;
        }
        return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * _strlen - returns the length of a given string
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
        int i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}
