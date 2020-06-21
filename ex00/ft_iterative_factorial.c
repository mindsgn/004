/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:49:01 by stembe            #+#    #+#             */
/*   Updated: 2020/06/21 16:46:18 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb){
	int i;
	int result;

	count = 1;
	result = 1;

	if (nb < 0 || nb > 12){
		return 0;
	}
	while (i <= nb)
	{
		result *= count;
		++count;
	}
	return (result);
}
