/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:13:33 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/07 13:27:49 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long res;

	res = 0;
	if (nb > 0)
	{
		while (res * res <= nb)
		{
			if (res * res == nb)
				return (res);
			res++;
		}
	}
	return (0);
}
