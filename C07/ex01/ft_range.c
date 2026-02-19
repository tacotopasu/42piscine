/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:03:12 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/19 15:17:05 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ret;

	if (max < min)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * ((max - min) + 1));
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}

/*
int	main(void)
{
	int	*the_big_range;
	int	i;

	printf("And now I introduce... the range between 1 and 100!\n");
	printf("(Reminder: ft_range includes the min but not the max!)\n");
	the_big_range = ft_range(1, 100);
	
	i = 0;
	while (i < 99 - 1)
		printf("%d, ", the_big_range[i++]);
	printf("%d!\n", the_big_range[i]);
}
*/
