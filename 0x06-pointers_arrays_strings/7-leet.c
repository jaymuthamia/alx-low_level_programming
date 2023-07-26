/**
 * *leet - converts characters to respective leet value
 * @str: char str
 *
 * Return: char
 */

char *leet(char *str)
{
	int i, j;
	char repl[] = "4 4 3 3 0 0 7 7 1 1";
	char check[] = "a A e E o O t T l L";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; check[j] != '\0' && repl[j] != '\0'; j++)
			if (str[i] == check[j])
				str[i] = repl[j];

	return (str);
}
