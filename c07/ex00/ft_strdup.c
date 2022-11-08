/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:29:13 by ecanci            #+#    #+#             */
/*   Updated: 2022/08/10 01:34:06 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*p;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	p = malloc(l + 1);
	if (!p)
		return (0);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
