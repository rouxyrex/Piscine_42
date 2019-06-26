/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 16:10:03 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/22 16:10:05 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_nbchiffres(int n)
{
	int i;

	i = 1;
	n /= 10;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_neg(char *res, int n, int nb)
{
	res = malloc(sizeof(char) * nb + 2);
	res[0] = '-';
	res[nb + 1] = '\0';
	while (nb >= 1)
	{
		res[nb] = -n % 10 + 48;
		n = n / 10;
		nb--;
	}
	return (res);
}

char	*ft_pos(char *res, int n, int nb)
{
	res = malloc(sizeof(char) * nb + 1);
	res[nb] = '\0';
	while (nb - 1 >= 0)
	{
		res[nb - 1] = n % 10 + 48;
		n = n / 10;
		nb--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nb;

	res = 0;
	nb = ft_nbchiffres(n);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		return (ft_neg(res, n, nb));
	else
		return (ft_pos(res, n, nb));
	return (res);
}
