/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:49:52 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/14 21:49:54 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isnum(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isnum(str[i])))
			return (0);
		i++;
	}
	return (1);
}
