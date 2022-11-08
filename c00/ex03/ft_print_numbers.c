/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:08:15 by ecanci            #+#    #+#             */
/*   Updated: 2022/07/23 21:08:34 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	print_numbers;

	print_numbers = '0';
	while (print_numbers <= '9')
	{
		write (1, &print_numbers, 1);
		print_numbers++;
	}
}
