/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:52:56 by seulah            #+#    #+#             */
/*   Updated: 2021/10/07 14:52:59 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buf, size_t n)
{
	unsigned char		*buffer;
	size_t				i;

	buffer = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		buffer[i] = '\0';
		i++;
	}
}
