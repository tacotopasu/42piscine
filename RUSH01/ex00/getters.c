/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:41:01 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/08 19:52:47 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col(int n, int grid[], int col);
int	check_row(int n, int grid[], int row);

int	direction(int n, int clue)
{
	int	side;

	side = clue / n;
	if (side == 0)
		return (n);
	else if (side == 1)
		return (-1 * n);
	else if (side == 2)
		return (1);
	else if (side == 3)
		return (-1);
	return (0);
}

int	can_place(int n, int grid[], int pos, int value)
{
	int	temp;
	int	ret;

	temp = grid[pos];
	grid[pos] = value;
	if (!check_col(n, grid, pos % n))
		ret = 0;
	else if (!check_row(n, grid, pos / n))
		ret = 0;
	else
		ret = 1;
	grid[pos] = temp;
	return (ret);
}

int	visible(int n, int grid[], int offset, int direction)
{
	int	i;
	int	max;
	int	visible;
	int	pos;

	i = 0;
	max = 0;
	visible = 0;
	pos = offset;
	while (i < n)
	{
		if (grid[pos] > max)
		{
			max = grid[pos];
			visible++;
		}
		pos += direction;
		i++;
	}
	return (visible);
}

int	get_offset(int n, int i)
{
	int	side;

	side = i / n;
	if (side == 0)
		return (n);
	else if (side == 1)
		return (-1 * n);
	else if (side == 2)
		return (1);
	else if (side == 3)
		return (-1);
	return (0);
}

int	get_index(int n, int i)
{
	int	side;
	int	pos;

	side = i / n;
	pos = i % n;
	if (side == 0)
		return (pos);
	else if (side == 1)
		return ((n - 1) * n + pos);
	else if (side == 2)
		return ((pos) * n);
	else
		return ((pos) * n + (n - 1));
}
