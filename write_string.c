/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:22:51 by mvieira-          #+#    #+#             */
/*   Updated: 2022/07/06 20:23:37 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_string(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		str = ft_strdup("(null)");
		while (str[len] != '\0')
			len += ft_putchar(str[len]);
		free(str);
	}
	else
	{
		while (str[len] != '\0')
		len += ft_putchar(str[len]);
	}
	return (len);
}
