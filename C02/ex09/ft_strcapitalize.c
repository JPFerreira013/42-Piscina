/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramalho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:44:55 by jramalho          #+#    #+#             */
/*   Updated: 2024/02/23 15:15:30 by jramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_capitalize(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str [i] <= 'z')
		{
			if (word_start == 1)
				str[i] -= 32;
			word_start = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			word_start = 0;
		else
			word_start = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots";

	printf("%s\n", ft_capitalize(str));
	return (0);
}
*/
