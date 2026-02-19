/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:31:56 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/08 20:17:56 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	clues_of_one(int n, int clues[], int grid[]);
void	clues_of_n(int n, int clues[], int grid[]);
int		backtrack(int n, int clues[], int grid[], int pos);

void	zero(int array[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		array[i] = 0;
		i++;
	}
}

int	parse_clues(int n, int clues[], char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && j < (4 * n))
	{
		if (str[i] >= '1' && str[i] <= '0' + n)
		{
			clues[j] = str[i] - '0';
			j++;
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (j != (4 * n))
		return (0);
	return (1);
}

int	validate_args(int argc, char **argv, int n, int clues[])
{
	int	i;

	if (argc != 2)
		return (0);
	if (!parse_clues(n, clues, argv[1]))
		return (0);
	if (n < 4 || n > 9)
		return (0);
	i = 0;
	while (i < (n * 4))
	{
		if (clues[i] < 1 || clues[i] > n)
			return (0);
		i++;
	}
	return (1);
}

void	print_grid(int n, int grid[])
{
	int		i;
	char	c;

	i = 0;
	while (i < n * n)
	{
		c = grid[i] + '0';
		write(1, &c, 1);
		if ((i + 1) % n == 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;
	int	clues[16];
	int	grid[16];
	int	result;

	n = 4;
	if (!validate_args(argc, argv, n, clues))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	zero(grid, n * n);
	clues_of_n(n, clues, grid);
	clues_of_one(n, clues, grid);
	result = backtrack(n, clues, grid, 0);
	if (result)
		print_grid(n, grid);
	else
		write(1, "Error\n", 6);
	return (result);
}
