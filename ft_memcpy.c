/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:13:37 by seulah            #+#    #+#             */
/*   Updated: 2021/10/07 15:13:39 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t count)
{
	unsigned char	*buff1;
	unsigned char	*buff2;
	size_t			i;

	buff1 = (unsigned char *) dest;
	buff2 = (unsigned char *) source;
	i = 0;
	if (count == 0 || dest == source)
		return (dest);
	while (i < count)
	{
		buff1[i] = buff2[i];
		i++;
	}
	return (dest);
}
