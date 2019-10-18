/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:39:40 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/18 11:39:42 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "libft.h"

char    *ft_strjoin(char  *s1,char  *s2)
{
    char    *result;

    result = ft_strnew(ft_strlen(s1)+ft_strlen(s2));
    if(!result)
        return (NULL);
    ft_strcpy(result,s1);
    ft_strcat(result,s2);
    return (result);
}