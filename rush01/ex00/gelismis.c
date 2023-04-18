/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gelismis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:30:59 by mucakmak           #+#    #+#             */
/*   Updated: 2023/04/18 15:17:25 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

int	*numaragir(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (tab == NULL)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = ft_atoi(str + i);
			j++;
		}
		i++;
	}
	return (tab);
}

int	ciftekontrol(int tab[4][4], int konum, int j)
{
	int	i;

	i = 0;
	while (i < konum / 4)
	{
		if (tab[i][konum % 4] == j)
			return (1);
		i++;
	}
	i = 0;
	while (i < konum % 4)
	{
		if (tab[konum / 4][i] == j)
			return (1);
		i++;
	}
	return (0);
}
