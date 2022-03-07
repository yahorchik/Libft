/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:44:12 by seulah            #+#    #+#             */
/*   Updated: 2021/10/07 17:44:13 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*dest;
	unsigned int	l;
	unsigned int	i;

	l = count * size;
	dest = malloc(l);
	if (!dest)
		return (NULL);
	i = 0;
	while (l--)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
