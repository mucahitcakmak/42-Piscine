/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:30:53 by mucakmak           #+#    #+#             */
/*   Updated: 2023/04/18 15:17:58 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	ciftekontrol(int tab[4][4], int konum, int j);
int	goruskontrol(int tab[4][4], int konum, int girilendeger[16]);
int	*numaragir(char *str);
int	yazdir(int tab[4][4]);
int	ft_putstr(char *str);

int	girilendegerkontrol(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 31)
		return (0);
	return (1);
}

int	coz(int tab[4][4], int girilendeger[16], int konum)
{
	int	i;

	i = 0;
	if (konum == 16)
		return (1);
	while (i < 4)
	{
		i++;
		if (ciftekontrol (tab, konum, i) == 0)
		{
			tab[konum / 4][konum % 4] = i;
			if (goruskontrol(tab, konum, girilendeger) == 0)
			{
				if (coz (tab, girilendeger, konum +1) == 1)
					return (1);
			}
			else
				tab[konum / 4][konum % 4] = 0;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	*girilendeger;
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
		tab[i][j] = 0;
		j++;
		}
	i++;
	}
	if (girilendegerkontrol(argc, argv) == 0)
		return (0);
	girilendeger = numaragir(argv[1]);
	if (coz(tab, girilendeger, 0) == 1)
		yazdir(tab);
	else
		ft_putstr("Girdiğiniz değerlerde sonuç bulunamadı.\n");
	return (0);
}
