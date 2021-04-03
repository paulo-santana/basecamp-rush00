/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:13:36 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/03 18:29:48 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	char_to_print;

	i = 0;
	while (i++ < y)
	{
		j = 0;
		while (j++ < x)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == x))
				char_to_print = 'A';
			else if ((i == y && j == 1) || (i == y && j == x))
				char_to_print = 'C';
			else if (i == 1 || i == y || j == 1 || j == x)
				char_to_print = 'B';
			else
				char_to_print = ' ';
			ft_putchar(char_to_print);
		}
		ft_putchar('\n');
	}
}
