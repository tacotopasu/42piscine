/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:01:57 by joavieir          #+#    #+#             */
/*   Updated: 2026/01/28 19:19:07 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
		return ;
	}
	if (n > 0 || !n)
	{
		write(1, "P", 1);
		return ;
	}
}

//int	main(void)
//{
//	ft_is_negative(-1);
//	ft_is_negative(0);
//	ft_is_negative(1);
//	return (0);
//}
