/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucakmak <mucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:46:28 by mucakmak          #+#    #+#             */
/*   Updated: 2023/04/13 12:41:49 by mucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*yer_varmi;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	yer_varmi = (char *) malloc(sizeof(char) * (i + 1));
	if (yer_varmi == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		yer_varmi[i] = src[i];
		i++;
	}
	yer_varmi[i] = '\0';
	return (yer_varmi);
}
