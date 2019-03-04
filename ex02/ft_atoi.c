/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:12:37 by asantiag          #+#    #+#             */
/*   Updated: 2019/03/04 19:45:03 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int ind;
	int i;
	int neg;
	
	neg = 1;
	ind = 0;
	i = 0;
	if (str[0] == '-')
	{
		neg = -1;
		while (str[ind + 1] > 47 && str[ind + 1] < 58)
		{
			i = i * 10 + str[ind + 1] - '0';
			ind++;
		}
	}
	else
		while (str[ind] > 47 && str[ind] < 58)
		{
			i = i * 10 + str[ind] - '0';
			ind++;
		}
	return (i * neg);
}

int	main()
{
	char nbrs[]= "12";
	int a;

	a = ft_atoi(nbrs);
	printf("%d", a);
	return 0;

}
