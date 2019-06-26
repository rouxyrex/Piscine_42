/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:54:34 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/09 19:09:46 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				i;
	int				len;

	len = ft_strlen(src);
	i = 0;
	while (n > 0)
	{
		if (src[i] != '\0' && i < len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
