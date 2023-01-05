/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:19:53 by miozkan           #+#    #+#             */
/*   Updated: 2022/08/01 16:19:55 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *ptr;
    int        len;
    int        i;
    int        j;

    i = 0;
    len = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            len++;
            j++;
        }
        j = 0;
        while(sep[j] != '\0')
        {
            len++;
            j++;
        }
        i++;
    }
    ptr = (char *)malloc(sizeof(char)*len);
    i = 0;
    len = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            ptr[len] = strs[i][j];
            printf("%c", ptr[len]);
            len++;
            j++;
        }
        j = 0;
        while(sep[j] != '\0' && i != size - 1)
        {
            ptr[len] = sep[j];
             printf("%c", ptr[len]);
            len++;
            j++;
        }
        i++;
    }
    
    return ptr;
}
