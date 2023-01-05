/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:02:47 by miozkan           #+#    #+#             */
/*   Updated: 2022/07/25 16:03:33 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}

void	quicksort(int arr[], int l, int r)
{
	int	piv;
	int	j;
	int	i;

	if (l >= r)
		return ;
	piv = arr[r];
	j = l;
	i = l;
	while (i <= r)
	{
		if (arr[i] <= piv)
		{
			ft_swap(&arr[j], &arr[i]);
			j++;
		}
		i++;
	}
	quicksort(arr, l, j - 2);
	quicksort(arr, j, r);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	r;

	l = 0;
	r = size - 1;
	quicksort(tab, l, r);
}
