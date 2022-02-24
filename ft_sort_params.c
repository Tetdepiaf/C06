/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdufour <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:23:48 by qdufour           #+#    #+#             */
/*   Updated: 2022/02/14 19:23:50 by qdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

void	ft_swap(char *tab1, char *tab2)
{
	char	temp[100];
	int		i;

	i = 0;
	*temp = *tab1;
	*tab1 = *tab2;
	*tab2 = *temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2++;
		s1++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	int		min;
	char	temp[100];

	(void)ac;
	i = 1;
	j = 1;
	min = 1;
	while (av[i])
	{
		while (av[j])
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				min = j;
			j++;
		}
		ft_swap(av[i],av[min]);
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
		j = i;
		min = i;
	}
	return (0);
}
