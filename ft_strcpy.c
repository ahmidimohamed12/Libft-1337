/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:00:57 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/18 12:00:59 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"


char    *ft_strcpy(char *dest, char *src)
{
    if (!src)
        return (NULL);
    while (*src != '\0')
        *dest = *src;
    return (dest);
}
