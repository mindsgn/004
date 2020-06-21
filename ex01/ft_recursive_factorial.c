/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 16:50:39 by stembe            #+#    #+#             */
/*   Updated: 2020/06/21 16:53:22 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12){
		return 0;
	}
	else if (nb == 0 || nb == 1){
		return 1;
	}
	else{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

