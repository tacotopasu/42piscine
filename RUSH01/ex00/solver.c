/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:17:58 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/08 20:12:06 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col(int n, int grid[], int col);
int	check_row(int n, int grid[], int row);
int	is_col_full(int n, int grid[], int col);
int	is_row_full(int n, int grid[], int row);
int	direction(int n, int clue);
int	can_place(int n, int grid[], int pos, int value);
int	visible(int n, int grid[], int offset, int direction);
int	get_offset(int n, int i);
int	get_index(int n, int i);

int	val_view_col(int n, int clues[], int grid[], int col)
{
	int	vis;

	if (!is_col_full(n, grid, col))
		return (1);
	vis = visible(n, grid, col, n);
	if (vis != clues[col])
		return (0);
	vis = visible(n, grid, col + (n - 1) * n, -n);
	if (vis != clues[col + n])
		return (0);
	return (1);
}

int	val_view_row(int n, int clues[], int grid[], int row)
{
	int	vis;

	if (!is_row_full(n, grid, row))
		return (1);
	vis = visible(n, grid, row * n, 1);
	if (vis != clues[2 * n + row])
		return (0);
	vis = visible(n, grid, row * n + (n - 1), -1);
	if (vis != clues[3 * n + row])
		return (0);
	return (1);
}

int	validate_ev(int n, int clues[], int grid[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (!val_view_row(n, clues, grid, i))
			return (0);
		if (!val_view_col(n, clues, grid, i))
			return (0);
		i++;
	}
	return (1);
}

int	backtrack(int n, int clues[], int grid[], int pos)
{
	int	value;

	value = 1;
	if (pos == n * n)
		return (validate_ev(n, clues, grid));
	if (grid[pos] != 0)
		return (backtrack(n, clues, grid, pos + 1));
	while (value <= n)
	{
		if (can_place(n, grid, pos, value))
		{
			grid[pos] = value;
			if (val_view_col(n, clues, grid, pos % n)
				&& val_view_row(n, clues, grid, pos / n))
			{
				if (backtrack(n, clues, grid, pos + 1))
					return (1);
			}
			grid[pos] = 0;
		}
		value++;
	}
	return (0);
}
