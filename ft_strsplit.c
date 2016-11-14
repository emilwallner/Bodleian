/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:47:45 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/14 20:17:07 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		ft_cntwrd(char const *s, char c)
{
	unsigned int	i;
	int				w;
	int				m;

	w = 0;
	i = 0;
	while (s[i] != '\0')
	{
		m = 0;
		while(s[i] != c)
		{
			m = 1;
			if (s[i] == '\0')
				return (w + 1);
			i++;
		}
		if(m == 1)
			w++;
		i++;
	}
	return (w);
}

/*
char **ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char**str2;

	if (!s || !(str2 = (char **)malloc(sizeof(*str2) *
					(ft_cntwrd(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_cntwrd(s, c))
	{
		k = 0;
		if (!(str2[i] = ft_strnew(ft_cntwrd(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
//		printf("THis is is: %c \n", str2[0][0]);
		str2[i][k] = '\0';
	}
	str2[i] = 0;
	return (str2);
}*/


char	**ft_strsplit(char const *s, char c)
{
   unsigned int	i;
   unsigned int	f;
	unsigned int		index;
int				w;
   char			**list;

   list = (char**)malloc(sizeof(*list) * ft_cntwrd(s, c) + 1);
   f = 0;
   w = 0;
   while (w < ft_cntwrd(s, c))
   {
		i = 0;
		while (s[i + f] == c)
			f++;
		while(s[i + f] != c && s[i + f] != '\0')
			i++;
		list[w]= ft_strnew(i);
		if (list[w] == NULL)
			return (NULL);
		index = 0;
		while (index < i)
		{
			list[w][index] = s[f + index];
			index++;
		}
		list[w][index] = '\0';
		f = f + i;
		w++;
	}
	list[w] = NULL;
	return (list);
}


int		main(void)
{
	//char s[] = "delete**hello****bob***this*is*the*world*****out*there";

	ft_strsplit("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", ' ');
	return (0);
}
