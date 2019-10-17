/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:41:34 by mahmidi           #+#    #+#             */
/*   Updated: 2019/10/17 09:15:52 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef _LIBFT_H
#define _LIBFT_H
#include <string.h>
typedef struct	s_list
{
	void	*content;
	struct	s_list	*next;

}




int	ft_toupper(int a);
int ft_tolower(int a);
void	ft_putchar(char a);
void	ft_putstr(char *a);
void	ft_putchar_fd(char a,int fd);
int	ft_isdigit(int a);
void	ft_putnbr(int a);
void	ft_putnbr_fd(int n,	int fd);
char	*ft_strnstr(const char *s1,const char *s2,size_t n);
int 	ft_strncmp(const char *s1,const char *s2);
long	ft_atoi(const char *str);
#endif
