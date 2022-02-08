/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet(.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgulsen <tgulsen@student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:42:13 by tgulsen           #+#    #+#             */
/*   Updated: 2021/10/20 17:42:17 by tgulsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(char alp)
{
	alp = 'a';
	while (alp <= 'z')
	{
		ft_putchar(alp);
		alp++;
	}
}
