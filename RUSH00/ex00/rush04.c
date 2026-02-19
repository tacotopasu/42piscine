/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivozzo- <vivozzo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:33:47 by vivozzo-          #+#    #+#             */
/*   Updated: 2026/02/01 14:07:08 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_linha(int colunas, char esquerda, char meio, char direita)
{
	int	i;

	i = 1;
	while (i <= colunas)
	{
		if (i == 1)
			ft_putchar(esquerda);
		else if (i == colunas)
			ft_putchar(direita);
		else
			ft_putchar(meio);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	colunas;
	int	linhas;

	i = 1;
	colunas = x;
	linhas = y;
	if (colunas <= 0 || linhas <= 0)
		return ;
	while (i <= linhas)
	{
		if (i == 1)
			ft_linha(colunas, 'A', 'B', 'C');
		else if (i == linhas)
			ft_linha(colunas, 'C', 'B', 'A');
		else
			ft_linha(colunas, 'B', ' ', 'B');
		i++;
	}
}
