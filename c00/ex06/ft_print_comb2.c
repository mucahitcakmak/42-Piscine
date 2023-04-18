/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:15:19 by mucakmak          #+#    #+#             */
/*   Updated: 2023/03/24 10:44:39 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int deger)
{
	char	c;

	c = deger / 10 + '0';
	write(1, &c, 1);
	c = deger % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	ilk1;
	int	ilk2;

	ilk1 = 0;
	while (ilk1 < 99)
	{
		ilk2 = ilk1 + 1;
		while (ilk2 <= 99)
		{
			ft_write(ilk1);
			write(1, " ", 1);
			ft_write(ilk2);
			if (ilk1 != 98 || ilk2 != 99)
			{
				write(1, ", ", 2);
			}
			ilk2++;
		}
		ilk1++;
	}
}
