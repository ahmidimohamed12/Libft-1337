/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:25:01 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/17 14:17:54 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*rdest;
	char	*rsrc;

	rdest = (char *)dest;
	rsrc = (char *)src;
	while (n--)
		*rdest++ = *rsrc++;
	return (dest);
}