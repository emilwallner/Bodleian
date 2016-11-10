/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:46:21 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/10 09:03:14 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	len;
	char	*dest;
	
	if (*s == '\0' || s == NULL)
		return ((char *)s);
	while((*s == ' ' || *s == '\n' || *s == '\t') && *s)
		s++;
	len = ft_strlen(s);
	if(len == 0)
		return ((char*)s);
	i = len - 1;
	while((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
	{
		len--;
		i--;
	}
	dest = (char*)malloc(sizeof(*s) * len + 1);
		if (dest == NULL)
			return (NULL);
	ft_strncpy(dest, s, len);
	dest[len] = '\0';
	return (dest);
}
