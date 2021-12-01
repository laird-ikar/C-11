/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:23:51 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 12:23:54 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_string_tab(char **tab);
void	ft_bubble(char **tab, int (*cmp)(char *, char *));
void	ft_swapstr(char **a, char **b);
int		ft_tablen(char **tab);
int		ft_strcmp(char *s1, char *s2);

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	tab_size;

	tab_size = ft_tablen(tab);
	i = 0;
	while (i++ < tab_size)
		ft_bubble(tab, &ft_strcmp);
}

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_bubble(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
			ft_swapstr(&tab[i], &tab[i + 1]);
		i++;
	}
}

void	ft_swapstr(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
