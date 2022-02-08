/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgulsen <tgulsen@student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:42:13 by tgulsen           #+#    #+#             */
/*   Updated: 2021/10/20 17:42:17 by tgulsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pozitif;
	char	negatif;

	pozitif = 'P';
	negatif = 'N';
	if (n < 0)
	{
		write(1, &negatif, 1);
	}
	else
	{
		write(1, &pozitif, 1);
	}
}
