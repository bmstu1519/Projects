/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:02:09 by kkarlene          #+#    #+#             */
/*   Updated: 2019/09/22 06:33:49 by kkarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	j = 0;
	if (*s1 && !(*s2) && n == 0)
		return ((char *)&s1[j]);
	if (s2[j] == '\0')
		return ((char *)&s1[j]);
	while (s1[j] && n != 0)
	{
		i = 0;
		while (s1[j + i] == s2[i])
		{
			if (n == 0)
				return (NULL);
			i++;
			n--;
			if (s2[i] == '\0')
				return ((char *)&s1[j]);
		}
		j++;
		n--;
	}
	return (NULL);
}
