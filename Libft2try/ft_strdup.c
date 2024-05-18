/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:06:39 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/05/07 19:08:07 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char	*dest, const char *src)
{
	int	test;

	test = 0;
	while (src[test] != '\0')
	{
		dest[test] = src[test];
		test++;
	}
	dest[test] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	length;

	length = ft_strlen(s1);
	ptr = (char *) malloc((length + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strcpy(ptr, s1);
	return (ptr);
}
