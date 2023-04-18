/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:01:05 by mucakmak          #+#    #+#             */
/*   Updated: 2023/04/13 12:41:46 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*sayilar;

	if (min >= max)
		return (NULL);
	range = max - min;
	sayilar = (int *)malloc(sizeof(int) * range);
	if (sayilar == NULL)
		return (0);
	i = 0;
	while (i < range)
	{
		sayilar[i] = min + i;
		i++;
	}
	return (sayilar);
}
