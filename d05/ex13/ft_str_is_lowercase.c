/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:36:04 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/14 22:36:08 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islow(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_islow(str[i])))
			return (0);
		i++;
	}
	return (1);
}
