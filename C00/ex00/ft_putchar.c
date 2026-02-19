/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:23:35 by joavieir          #+#    #+#             */
/*   Updated: 2026/01/28 19:17:10 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//int	main(void)
//{
//	ft_putchar('c');
//	ft_putchar('o');
//	ft_putchar('o');
//	ft_putchar('l');
//	ft_putchar('\n');
//	return (0);
//}
