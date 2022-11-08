/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:11:27 by ecanci            #+#    #+#             */
/*   Updated: 2022/08/10 01:39:39 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(char **strs, int size, int len_sep)
{
	int	total;
	int	i;

	i = -1;
	total = (size - 1) * len_sep + 1;
	while (++i < size)
		total += ft_strlen(strs[i]);
	return (total);
}

void	ft_join(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	index;

	i = -1;
	index = 0;
	while (++i < size)
	{
		j = -1;
		while (++j < ft_strlen(strs[i]))
		{
			str[index] = strs[i][j];
			index++;
		}
		j = -1;
		while (++j < ft_strlen(sep) && i != size -1)
		{
			str[index] = sep[j];
			index++;
		}
	}
	str[index] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len_sep;

	if (size == 0)
	{
		str = malloc(1);
		*str = 0;
		return (str);
	}
	len_sep = ft_strlen(sep);
	str = malloc(ft_total_len(strs, size, len_sep));
	if (!str)
		return (0);
	ft_join(size, strs, sep, str);
	return (str);
}
