/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seulah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:42:49 by seulah            #+#    #+#             */
/*   Updated: 2021/10/11 14:42:50 by seulah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ns;
	int		i;

	if (!s || !f)
		return (NULL);
	ns = (char *)malloc(sizeof(char) * (ft_strlen((char *) s) + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ns[i] = f(i, s[i]);
		++i;
	}
	ns[i] = '\0';
	return (ns);
}
