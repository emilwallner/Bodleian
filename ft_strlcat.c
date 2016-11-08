/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:39:16 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/08 21:33:17 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	len;
	size_t			flen;
	
	if (src == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(dest);
	while ((len + i) < (n - 1))
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	flen = ft_strlen(dest);
	return (flen);
}
