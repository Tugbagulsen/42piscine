/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgulsen <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:28:58 by tgulsen           #+#    #+#             */
/*   Updated: 2021/11/12 16:45:48 by tgulsen          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int n;

	n = -2;
	while (n < 14)
	{
		printf("fact(%d) = %d\n", n, ft_recursive_factorial(n));
		n++;
	}
}*/
