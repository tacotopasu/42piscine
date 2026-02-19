/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:03:14 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/11 14:47:31 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 1)
	{
		result *= --nb;
	}
	return (result);
}
