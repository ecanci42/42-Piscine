/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 03:15:57 by ecanci            #+#    #+#             */
/*   Updated: 2022/08/01 19:42:25 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == 0)
		return (str);
	while (str[i])
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x])
		{
			x++;
		}
		if (to_find[x] == 0)
			return (str + i);
		i++;
	}
	return (0);
}
