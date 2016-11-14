/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:33:22 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/14 18:59:14 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	
	size_t	i;
	i = 0;
	if(start > (unsigned int)ft_strlen(s))
		return (NULL);
	if (*s == '\0' || s == NULL)
		return (NULL);
	dest = (char*)malloc(sizeof(*s) * (len + 1));
		if (dest == NULL)
			return (NULL);
	while (i < len && s[start])
	{
		dest[i++] = s[start++];
	}
	dest[i] = '\0';
	return (dest);
}
