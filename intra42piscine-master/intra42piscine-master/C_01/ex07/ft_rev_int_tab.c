/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgulsen <tgulsen@student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:42:13 by tgulsen           #+#    #+#             */
/*   Updated: 2021/10/20 17:42:17 by tgulsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
