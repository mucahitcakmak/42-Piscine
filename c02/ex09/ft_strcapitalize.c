/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:59:01 by mucakmak          #+#    #+#             */
/*   Updated: 2023/03/30 15:24:27 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strupcase(str);
	if (str[0] > 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i + 1] >= 'a' && str[i + 1] <= 'z')
				&& !(str[i] >= '0' && str[i] <= '9'))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
