/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:41:50 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/04/04 18:38:20 by jgomes-c         ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == y && j == x)
			|| (i == 1 && j == x) || (j == 1 && i == y))
				char_to_print = 'o';
			else if ((j == 1) || (j == x))
				char_to_print = '|';
			else if (i == 1 || i == y || j == 1 || j == x)
				char_to_print = '-';
			else
				char_to_print = ' ';
		}
		ft_putchar('\n');
	}
}
