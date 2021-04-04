/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:14:07 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/04/04 18:38:36 by jgomes-c         ###   ########.fr       */
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
			if ((i == 1 && j == x && x > 1)
			|| (i == y && j == x && y > 1 && x > 1))
				char_to_print = 'C';
			else if ((i == y && j == 1) || (i == 1 && j == 1))
				char_to_print = 'A';
			else if (i == 1 || i == y || j == 1 || j == x)
				char_to_print = 'B';
			else
				char_to_print = ' ';
			ft_putchar(char_to_print);
		}
		ft_putchar('\n');
	}
}
