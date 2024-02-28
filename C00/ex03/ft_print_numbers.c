/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramalho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:14:33 by jramalho          #+#    #+#             */
/*   Updated: 2024/02/14 12:46:05 by jramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digitos;

	digitos = 48;
	while (digitos < 58)
	{
		write(1, &digitos, 1);
		digitos++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
