/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:24:59 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/01 14:30:09 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	temp;
	int	i;

	sorted = 0;

	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if(tab[i] > tab[i+1])
			{
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}
