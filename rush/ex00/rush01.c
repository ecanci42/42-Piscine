/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskira <itaskira@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:17:18 by itaskira          #+#    #+#             */
/*   Updated: 2022/07/24 18:16:53 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	output(int x, char first, char middle, char last)
{
	int	width_counter;

	width_counter = 1;
	while (x >= width_counter)
	{
		if (width_counter == 1)
			ft_putchar(first);
		else if (width_counter == x)
			ft_putchar(last);
		else
			ft_putchar(middle);
		width_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	hight_counter;

	hight_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (y >= hight_counter)
		{
			if (hight_counter == 1)
				output(x, '/', '*', '\\');
			else if (hight_counter == y)
				output(x, '\\', '*', '/');
			else
				output(x, '*', ' ', '*');
			hight_counter++;
		}
	}
}
