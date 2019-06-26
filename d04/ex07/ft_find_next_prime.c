/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:42:34 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/07 17:35:43 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_floor(int n)
{
	long res;

	res = 0;
	if (n > 0)
	{
		while (res * res < n)
			res++;
	}
	return (res);
}

int		ft_is_prime(int n)
{
	int nb_mult;
	int i;
	int sqrt;

	nb_mult = 2;
	sqrt = ft_sqrt_floor(n);
	i = 2;
	while (i <= sqrt && i < n && nb_mult < 3)
	{
		if (n % i == 0)
			nb_mult++;
		i++;
	}
	if (nb_mult == 2 && n > 1)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
