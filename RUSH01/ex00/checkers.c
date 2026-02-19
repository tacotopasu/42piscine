/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:42:00 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/08 19:46:13 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col(int n, int grid[], int col)
{
	int	i;
	int	j;

	i = 0;
	if (col < 0 || col >= n)
		return (0);
	while (i < n)
	{
		j = i + 1;
		if (grid[(i * n) + col] == 0)
		{
			i++;
			continue ;
		}
		while (j < n)
		{
			if (grid[(i * n) + col] == grid[(j * n) + col])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_row(int n, int grid[], int row)
{
	int	i;
	int	j;

	i = 0;
	if (row < 0 || row >= n)
		return (0);
	while (i < n)
	{
		j = i + 1;
		if (grid[(row * n) + i] == 0)
		{
			i++;
			continue ;
		}
		while (j < n)
		{
			if (grid[(row * n) + i] == grid[(row * n) + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_col_full(int n, int grid[], int col)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (grid[(i * n) + col] == 0)
			return (0);
		i++;
	}
	return (1);
}

int	is_row_full(int n, int grid[], int row)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (grid[(row * n) + i] == 0)
			return (0);
		i++;
	}
	return (1);
}
