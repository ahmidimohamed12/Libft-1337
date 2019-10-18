/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:34:18 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/18 10:05:48 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char *src, int n, int len)
{
	char *ssrc;
	int i;

	if (!src)
		return (NULL);
	ssrc = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!ssrc)
		return (NULL);
	while (len--)
	{
		ssrc[i] = src[n];	
		len--;
		n++;
	}
	return (ssrc);
}
