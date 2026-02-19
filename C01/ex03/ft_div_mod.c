/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 09:55:09 by joavieir          #+#    #+#             */
/*   Updated: 2026/01/30 09:59:15 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	div_r;
	int	mod_r;	

	ft_div_mod(10, 5, &div_r, &mod_r);
	printf("%d, %d\n", div_r, mod_r);
}
*/
