/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:10:22 by joavieir          #+#    #+#             */
/*   Updated: 2026/01/29 12:16:04 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// abc = 0 1 2; a = 0, b = 1, c = 2
void	ft_print_comb(void)
{
	char	nums[3];

	nums[0] = '0';
	nums[1] = '0';
	nums[2] = '0';
	while (nums[0] <= '9')
	{
		if (nums[0] < nums[1] && nums[1] < nums[2])
		{
			write(1, nums, 3);
			if (nums[0] != '7' && nums[1] != '8' && nums[2] != '9')
			{
				write(1, ", ", 2);
			}
		}
		
		nums[2]++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
