/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:15:35 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/19 15:40:55 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max < min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

int	main(void)
{
	int	*the_big_range;
	int	the_difference;
	int	i;

	printf("And now I introduce... the range between 1 and 100! Again!\n");
	printf("(This time the function returns max - min, that's it.)\n");
	the_difference = ft_ultimate_range(&the_big_range, 1, 100);
	printf("Mhhhhm... I wonder what 100 - 1 equals... Here's what C thinks: %d\n", the_difference);

	i = 0;
	while (i < 99 - 1)
		printf("%d, ", the_big_range[i++]);
	printf("%d!\n", the_big_range[i]);
}

