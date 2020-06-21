/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:11:29 by stembe            #+#    #+#             */
/*   Updated: 2020/06/21 17:14:20 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index){
	if (index < 0){
		return -1;
	} else if (index <= 1){
		return index;
	} else if (index > 46){
		return 0;
	} else {
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
}
