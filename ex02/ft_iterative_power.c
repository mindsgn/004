/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stembe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 16:57:26 by stembe            #+#    #+#             */
/*   Updated: 2020/06/21 16:59:48 by stembe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int count;

	count = 1;
	
	if (power < 0 || (nb == 0 && power != 0)){
		return 0;
	}

	else if (power == 0){
		return 1;
	}else{
		while (power > 0)
		{
			count = count * nb;
			power--;
		}
		return (count);
	}
}

