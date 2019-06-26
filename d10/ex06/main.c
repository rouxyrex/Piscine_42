/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 13:40:48 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/22 13:40:52 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_match(char *operateur, int a, int b)
{
	char	*(*tab[5])(int a, int b);

	tab[0] = &addition;
	tab[1] = &soustraction;
	tab[2] = &multiplication;
	tab[3] = &modulo;
	tab[4] = &division;
	if (ft_strlen(operateur) > 1)
		ft_aff("0");
	else if (operateur[0] == '+')
		ft_aff((*tab[0])(a, b));
	else if (operateur[0] == '-')
		ft_aff((*tab[1])(a, b));
	else if (operateur[0] == '*')
		ft_aff((*tab[2])(a, b));
	else if (operateur[0] == '%')
		ft_aff((*tab[3])(a, b));
	else if (operateur[0] == '/')
		ft_aff((*tab[4])(a, b));
	else
		ft_aff("0");
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_match(argv[2], a, b);
	return (0);
}
