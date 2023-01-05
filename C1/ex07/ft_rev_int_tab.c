/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:01:47 by miozkan           #+#    #+#             */
/*   Updated: 2022/07/25 16:02:15 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	a;
	int	b;

	a = 0;
	index = size - 1;
	while (a < size / 2)
	{
		b = tab[a];
		tab[a] = tab[index - a];
		tab[index - a] = b;
		++a;
	}
}
