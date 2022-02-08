/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgulsen <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:13:15 by tgulsen           #+#    #+#             */
/*   Updated: 2021/11/12 16:45:18 by tgulsen          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb > 12 || nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void) {
    int n;

    n = -2;
    while (n < 14) {
        printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
        n++;
    }
}*/
