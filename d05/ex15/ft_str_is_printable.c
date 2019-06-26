/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:54:51 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/14 22:54:53 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isprint(str[i])))
			return (0);
		i++;
	}
	return (1);
}
