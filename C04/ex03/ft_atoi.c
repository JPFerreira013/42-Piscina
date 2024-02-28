/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramalho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:10:21 by jramalho          #+#    #+#             */
/*   Updated: 2024/02/28 11:48:02 by jramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	resultado;
	int	sinal;

	resultado = 0;
	sinal = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sinal = sinal * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultado = resultado *10 + (*str - '0');
		str++;
	}
	return (resultado * sinal);
}
/*
int main(void)
{
	char	str[] = "  ---+--+1234ab567";
	int	num = ft_atoi(str);
	printf("%d\n", num);
	return (0);
}
*/
