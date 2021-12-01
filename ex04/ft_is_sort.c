/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:23:40 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/01 12:23:41 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_doubt
{
	int	i1;
	int	i2;
}	t_doubt;

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	t_doubt	ii;

	ii.i1 = 1;
	ii.i2 = 1;
	i = -1;
	while (++i + 1 < length)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			ii.i1 = 0;
			break ;
		}
	}
	i = -1;
	while (++i + 1 < length)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
		{
			ii.i2 = 0;
			break ;
		}
	}
	return (ii.i1 || ii.i2);
}
