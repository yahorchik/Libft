/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:12:24 by seulah            #+#    #+#             */
/*   Updated: 2021/10/07 18:12:26 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new;
	char	*str;

	if (!s)
		return (NULL);
	if ((unsigned char)ft_strlen((char *)s) < start)
		return (ft_strdup(""));
	new = ft_strlen((char *)s + start);
	if (new < len)
		len = new;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
