/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:06:48 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/15 16:19:35 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}
int main(int argc, char** argv){
	if(argc > 0){
		int i = argc - 1;
		while(i > 0){
			while(*argv[i]){
				ft_putchar(*argv[i]++);
			} ft_putchar('\n'); i--;
		} 
	}	
	return (0);
}
