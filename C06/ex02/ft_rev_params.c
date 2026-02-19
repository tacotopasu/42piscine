/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:30:13 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/11 15:34:32 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
