void	print(char string[])
{
	int	size;

	size = 0;
	while (string[size] != '\0')
	{
		size++;
	}
	write(1, string, size);
}
