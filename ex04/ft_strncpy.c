/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 18:47:42 by asantiag          #+#    #+#             */
/*   Updated: 2019/03/04 19:04:43 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char str1[] = "Heil";
	char str2[] = "Hitler";
	printf("%s", ft_strncpy(str2, str1, 3));
	return 0;
}
