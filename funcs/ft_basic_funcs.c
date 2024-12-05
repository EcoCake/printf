/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_funcs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:00:53 by amezoe            #+#    #+#             */
/*   Updated: 2024/12/05 13:48:35 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf/ft_printf.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_putstr(char *str)
{
	int len;
	
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
int ft_putnumb(int n)
{
	int len;
	char *str;
	
	str = ft_itoa(n);
	len = ft_putstr(str);
	free(str);
	return (len);
}
