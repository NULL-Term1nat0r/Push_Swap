/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:21:27 by estruckm          #+#    #+#             */
/*   Updated: 2022/12/23 19:50:38 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	free_memory(char **array)
{
	int	i;

	i = 0;
	if (array == NULL)
	{
		while (array[i] != NULL)
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
}

int	ft_countchr(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			i++;
		while (*s != c && *s != '\0')
				s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_countchr(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
			free_memory(ret);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}

// int main ()
// {

// 	char src_1[] = "lorem ipsum dolor sit amet,consectetur
//adipiscing elit. Sed non risus. Suspendisse";
// 	printf("ergebnis: %d", ft_countchr(src_1, ' '));

// 	char **arr = ft_split(src_1, ' ');
// 	int i = 0;
// 	int j = 0;

// 	while(i < 12)
// 	{
// 		j = 0;
// 		while(arr[i][j])
// 		{
// 			printf("%c", arr[i][j]);

// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// 	while (i != 0)
// 		free(arr[i--]);
// 	free(arr);
// sleep(1000000);
// return (0);

// }
