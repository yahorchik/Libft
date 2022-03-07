/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:48:12 by seulah            #+#    #+#             */
/*   Updated: 2021/10/06 13:48:14 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t c)
{
	unsigned char	*buff1;
	unsigned char	*buff2;
	size_t			i;

	if (c == 0)
		return (0);
	buff1 = (unsigned char *) a1;
	buff2 = (unsigned char *) a2;
	i = 0;
	while (*buff1 == *buff2 && ++i < c)
	{
		buff1++;
		buff2++;
	}
	return ((int)(*buff1 - *buff2));
}
