/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:45:27 by seulah            #+#    #+#             */
/*   Updated: 2021/10/07 15:45:29 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t count)
{
	int					i;
	unsigned char		*buff1;
	const unsigned char	*buff2;

	buff1 = (unsigned char *)dest;
	buff2 = (unsigned char *)source;
	i = 0;
	if (dest <= source)
		ft_memcpy(dest, source, count);
	else
	{
		buff1 = dest + count - 1;
		buff2 = source + count - 1;
		while (count--)
		{
			buff1[i] = buff2[i];
			i--;
		}
	}
	return (dest);
}
