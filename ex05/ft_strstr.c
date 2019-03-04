/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:49:58 by asantiag          #+#    #+#             */
/*   Updated: 2019/03/05 00:19:44 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int amount;
	int tr;
	int when;

	i = 0;
	amount = -1;
	while(to_find[i] != '\0')
	{	amount++;
		i++;
	}
		i = 0;
	while(str[i] != '\0')
	{
		tr = 0;
		j = i;
		while (str[j] == to_find[tr] && to_find[tr] != '\0')
		{
			j++;
			if (tr == amount)
			{
				when = 0;
				while (str[i] != '\0' && tr == amount)
				{
					to_find[when] = str[i];
					i++;
					when++;
				}
				return (to_find);
			}
			tr++;
		}
		i++;
	}
	return (0);
}

int	main()
{
	char str1[] = "zaebebuebumbaebuebu";
	char str2[] = "ebu";
	
	printf("%s", ft_strstr(str1, str2));
	return 0;
}

