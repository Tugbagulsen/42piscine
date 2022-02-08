/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgulsen <tgulsen@student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:42:13 by tgulsen           #+#    #+#             */
/*   Updated: 2021/10/20 17:42:17 by tgulsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		sayac;
	int		swap;

	sayac = 0;
	while (sayac < size - 1)
	{
		if (tab[sayac] > tab[sayac + 1])
		{
			swap = tab[sayac];
			tab[sayac] = tab[sayac + 1];
			tab[sayac + 1] = swap;
			sayac = 0;
		}
		else
			sayac ++;
	}
}
