/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:25:58 by ecanci            #+#    #+#             */
/*   Updated: 2022/08/07 23:27:09 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	x;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb >= 0 && nb <= 9)
	{
		x = nb + 48;
		ft_putchar(x);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
