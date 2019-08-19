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
