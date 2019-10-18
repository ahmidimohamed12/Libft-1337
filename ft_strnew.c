/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:50:29 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/18 12:47:14 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "libft.h"
#include <string.h>

char    *ft_strnew(int  t)
{
    char    *text;
    
    text = (char *)malloc((t + 1) * sizeof(char));
    if(!text)
        return (NULL);
    ft_bzero(text,t);
    text[t] = '\0';
    return (text);
}
