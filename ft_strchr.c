/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:00:27 by seulah            #+#    #+#             */
/*   Updated: 2021/10/06 11:00:28 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while ((*string != '\0') && (*string != (char)symbol))
	{
		string++;
	}
	if (*string == (char)symbol)
	{
		return ((char *)string);
	}
	return ((char *) '\0');
}
