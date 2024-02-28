/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramalho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:52:41 by jramalho          #+#    #+#             */
/*   Updated: 2024/02/21 15:50:33 by jramalho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||  (str[i] >= 'A' && str[i] <= 'Z'))
			if (word_start)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				word_start = 0;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		else
		{
			word_start = 1;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "oi, t7udo bem ? me chamo joao Pedro";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
