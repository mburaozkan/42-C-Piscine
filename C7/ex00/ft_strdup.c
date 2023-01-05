/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:24:02 by miozkan           #+#    #+#             */
/*   Updated: 2022/08/01 14:24:05 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char *src)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strdup(char *src)
{
	char	*s;
	int		i;
	int		j;

	i = get_len(src);
	s = (char *)malloc(sizeof(src[0])*i);
	j = 0;
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}

	return (s);
}
