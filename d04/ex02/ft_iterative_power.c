/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 02:57:57 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/06 03:31:51 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 1;
	if (power < 0)
		res = 0;
	else
		res = 1;
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
