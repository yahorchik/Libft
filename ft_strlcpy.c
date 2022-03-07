/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:42:24 by seulah            #+#    #+#             */
/*   Updated: 2021/10/06 10:42:26 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen((char *)source));
	i = 0;
	while (i < size - 1 && source[i])
	{
		((char *)dest)[i] = ((char *)source)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return (ft_strlen(((char *)source)));
}
