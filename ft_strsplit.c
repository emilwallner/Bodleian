/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:47:45 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/10 17:59:55 by ewallner         ###   ########.fr       */
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

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	f;
	int				w;
	unsigned int	d;
	char			**list;
	
	list = (char**)malloc(sizeof(**list) * ft_cntwrd(s, c) + 1);
	f = 0;
	w = 0;
	while (s[f] != '\0')
	{
		i = 0;
			while(s[f + i] != c && s[f + i] != '\0')
				i++;
			if (i > 0)
				{
					list[w] = (char*)malloc(sizeof(char) * i + 1);
						if (list[w] == NULL)
							return (NULL);
					d = 0;
					while (d < i)
					{
						list[w][d] = s[f + d];
						printf("THIS IS PRINT: ----->  %c\n", list[w][d]);
						d++;
					}
					list[w][d] = '\0';
					w++;
					f = f + i;
				}
		f++;
	}
//	printf("This is final");
	printf("This is the first of each %c", list[0][0]);
	return (list);
}

int		main(void)
{
	//char s[] = "delete**hello****bob***this*is*the*world*****out*there";

	ft_strsplit("split  ||this|for|me|||||!|", '|');
	return (0);
}
