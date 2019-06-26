/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:31:13 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/06 22:49:15 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	int space;

	space = 0;
	if (c == '\n' || c == ' ' || c == '\v')
		space = 1;
	if (c == '\t' || c == '\f' || c == '\r')
		space = 1;
	return (space);
}

void	gestion_spaces(char c, int i)
{
	while (ft_isspace(c) == 1)
		i++;
}

int		ft_atoi(char *str)
{
	int res;
	int i;
	int signe;

	signe = 1;
	res = 0;
	i = 0;
	gestion_spaces(str[i], i);
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
		{
			if (str[i] == '-')
				signe = -1;
		}
		else
			return (res);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * signe);
}
