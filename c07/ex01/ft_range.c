/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:01:01 by ecanci            #+#    #+#             */
/*   Updated: 2022/08/08 19:47:24 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	p = malloc(sizeof(int *) * (max - min));
	if (max <= min || p == 0)
	{
		p = 0;
		return (p);
	}
	while (min < max)
		p[i++] = min++;
	return (p);
}
