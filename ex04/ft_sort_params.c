/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:07:00 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/16 09:45:21 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c){
	write(1, &c ,1);
}
int main(int argc, char** argv){
	if(argc == 0)
		return (1);

	int i = 1;
	while(i < argc){

		int size = 0;
		while((argv[i])[size])
			size++;

		int j = 0;
		while(j < size - 1){
			int k = 0;
			while(k < size - 1){
				if((argv[i])[k] > (argv[i])[k + 1]){
					char hold = (argv[i])[k + 1];
					(argv[i])[k + 1] = (argv[i])[k];
					(argv[i])[k] = hold;
				}k++;
			}j++;
		}i++;
	}
	int index = 1;
	while(index < argc){
		while(*argv[index])
			ft_putchar(*argv[index]++);
		ft_putchar('\n'); index++;
	}
	return (0);
}
