/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:45:38 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/16 14:45:43 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int n;
	int i;
	int	*tab;

	i = 0;
	n = max - min;
	if (n <= 0)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * n);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
