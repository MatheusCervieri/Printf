/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:10:23 by mvieira-          #+#    #+#             */
/*   Updated: 2022/07/06 20:10:43 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*newstr;
	char	*newstrp;

	newstr = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (newstr == NULL)
		return (NULL);
	newstrp = newstr;
	while (*s != '\0')
	{
		*newstr = *s;
		newstr++;
		s++;
	}
	*newstr = '\0';
	return (newstrp);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
