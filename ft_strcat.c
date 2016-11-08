/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:42:19 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/08 18:08:03 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	char	*src2;	
	size_t		i;

	i = 0;
	src2 = ft_strnew(ft_strlen(src));
	if (src2 == NULL)
		return (NULL);
	i = ft_strlen(dest);
	*dest[i + 1] = src2;
}
