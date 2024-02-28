/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramalho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:50:41 by jramalho          #+#    #+#             */
/*   Updated: 2024/02/20 18:08:23 by jramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_lowercase("hola"));
	printf("%d\n", ft_str_is_lowercase("HOLA"));
	printf("%d\n", ft_str_is_lowercase("hOla"));
	printf("%d\n", ft_str_is_lowercase(""));
}
*/
