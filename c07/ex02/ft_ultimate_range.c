/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:23:32 by ecanci            #+#    #+#             */
/*   Updated: 2022/08/10 01:52:19 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	i;
	int	*p;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	x = max - min;
	p = malloc(x * sizeof(int));
	if (p == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = p;
	i = 0;
	while (i < x)
	{
		p[i] = min + i;
		i++;
	}
	return (x);
}
