#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int	i;
	size_t	j;

	if (ac == 1)
	
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(i = 1; i < ac; i++)
		{
				for(j = 0; j < strlen(av[i]);j++)
					av[i][j] = std::toupper(av[i][j]);
				std::cout << av[i] << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}