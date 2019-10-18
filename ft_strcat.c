/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:09:21 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/18 12:09:23 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char    *ft_strcat(char *s1,char const *s2)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        j++;
        i++;
    }

    s1[i] = '\0';
    return (s1);    
}