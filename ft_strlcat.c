/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:52:33 by seulah            #+#    #+#             */
/*   Updated: 2021/10/07 15:52:34 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t size)
{
	char	*s;
	size_t	lenght_dest;
	size_t	result;
	size_t	lenght_source;
	size_t	i;

	s = (char *)source;
	lenght_dest = ft_strlen(dest);
	lenght_source = ft_strlen (s);
	result = 0;
	i = 0;
	if (size > lenght_dest)
		result = lenght_source + lenght_dest;
	else
		result = lenght_source + size;
	while (s[i] && (lenght_dest + 1) < size)
	{
		dest[lenght_dest] = s[i];
		lenght_dest++;
		i++;
	}
	dest[lenght_dest] = '\0';
	return (result);
}
