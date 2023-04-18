/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:50:54 by mucakmak          #+#    #+#             */
/*   Updated: 2023/04/13 12:41:41 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	fark;
	int	*deneme;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	fark = max - min;
	deneme = (int *)malloc(sizeof(int) * fark);
	if (deneme == NULL)
		return (-1);
	*range = deneme;
	i = 0;
	while (i < fark)
	{
		deneme[i] = min + i;
		i++;
	}
	return (fark);
}
