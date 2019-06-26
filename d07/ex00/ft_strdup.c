/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 10:27:58 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/16 10:28:00 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(src);
	res = (char*)malloc(sizeof(char) * (n + 1));
	while (i < n)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
