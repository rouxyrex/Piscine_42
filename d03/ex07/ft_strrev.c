/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 12:47:16 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/06 13:19:55 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		n;
	char	c;
	int		i;

	n = ft_strlen(str) - 1;
	i = 0;
	while (i <= n)
	{
		c = str[i];
		str[i] = str[n];
		str[n] = c;
		i++;
		n--;
	}
	return (str);
}
