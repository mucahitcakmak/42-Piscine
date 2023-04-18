/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 02:26:03 by mucakmak          #+#    #+#             */
/*   Updated: 2023/04/13 12:41:43 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != '\0')
			len++;
		j = 0;
		if (i != size - 1)
			while (sep[j++] != '\0')
				len++;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	int		sayac;
	char	*result;

	i = 0;
	j = 0;
	sayac = 0;
	len = str_len(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (len + 1));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[sayac++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
			while (sep[j] != '\0')
				result[sayac++] = sep[j++];
		i++;
	}
	result[sayac] = '\0';
	return (result);
}
