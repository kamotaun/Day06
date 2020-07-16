/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:28:22 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/15 16:17:22 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);
int main(int argc, char** argv){

	int i = 1;
	while(i < argc ){
		while(*argv[i]){
			ft_putchar(*argv[i]++);
		}
	ft_putchar('\n');	
		i++;
	}
	return (0);
}
void ft_putchar(char c){
	write(1, &c ,1);
}
