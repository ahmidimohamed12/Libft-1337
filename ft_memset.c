/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 08:41:33 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/18 11:00:51 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *pb;

	pb = b;
	while (len--)
		*pb++ = (unsigned char)c;
	return (b);
}
