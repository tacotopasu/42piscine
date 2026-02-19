/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:43:56 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/08 19:51:49 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_offset(int n, int i);
int	get_index(int n, int i);

void	clues_of_one(int n, int clues[], int grid[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (clues[i] == 1)
			grid[get_index(n, i)] = n;
		i++;
	}
}

void	clues_of_n(int n, int clues[], int grid[])
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	while (i < n)
	{
		if (clues[i] == n)
		{
			j = 0;
			while (j < n)
			{
				pos = get_index(n, i) + get_offset(n, i) * j;
				grid[pos] = j + 1;
				j++;
			}
		}
		i++;
	}
}
