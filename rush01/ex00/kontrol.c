/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kontrol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:30:57 by mucakmak           #+#    #+#             */
/*   Updated: 2023/04/18 15:18:00 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	kontrol_col_up(int tab[4][4], int konum, int girilendeger[16])
{
	int	i;
	int	max;
	int	sayac;

	i = 0;
	max = 0;
	sayac = 0;
	if (konum / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][konum % 4] > max)
			{
				max = tab[i][konum % 4];
				sayac++;
			}
			i++;
		}
		if (girilendeger[konum % 4] != sayac)
			return (1);
	}
	return (0);
}

int	kontrol_row_r(int tab[4][4], int konum, int girilendeger[16])
{
	int	i;
	int	maxsize;
	int	gorulenbina;

	i = 4;
	maxsize = 0;
	gorulenbina = 0;
	if (konum % 4 == 3)
	{
		while (i > 0)
		{
			i--;
			if (tab[konum / 4][i] > maxsize)
			{
				maxsize = tab[konum / 4][i];
				gorulenbina++;
			}
		}
		if (girilendeger[12 + konum / 4] != gorulenbina)
			return (1);
	}
	return (0);
}

int	kontrol_col_down(int tab[4][4], int konum, int girilendeger[16])
{
	int	i;
	int	max;
	int	sayac;

	i = 3;
	max = 0;
	sayac = 0;
	if (konum / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][konum % 4] > max)
			{
				max = tab[i][konum % 4];
				sayac++;
			}
			i--;
		}
		if (girilendeger[4 + konum % 4] != sayac)
			return (1);
	}
	return (0);
}

int	kontrol_row_l(int tab[4][4], int konum, int girilendeger[16])
{
	int	i;
	int	max;
	int	sayac;

	i = 0;
	max = 0;
	sayac = 0;
	if (konum % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[konum / 4][i] > max)
			{
				max = tab[konum / 4][i];
				sayac++;
			}
			i++;
		}
		if (girilendeger[8 + konum / 4] != sayac)
			return (1);
	}
	return (0);
}

int	goruskontrol(int tab[4][4], int konum, int girilendeger[16])
{
	if (kontrol_row_l(tab, konum, girilendeger) == 1)
		return (1);
	if (kontrol_row_r(tab, konum, girilendeger) == 1)
		return (1);
	if (kontrol_col_down(tab, konum, girilendeger) == 1)
		return (1);
	if (kontrol_col_up(tab, konum, girilendeger) == 1)
		return (1);
	return (0);
}
