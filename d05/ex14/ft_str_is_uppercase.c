/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:42:15 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/14 22:42:17 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isup(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isup(str[i])))
			return (0);
		i++;
	}
	return (1);
}
