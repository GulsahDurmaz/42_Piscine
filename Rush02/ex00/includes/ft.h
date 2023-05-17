/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemetz <ldemetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:42:35 by ldemetz           #+#    #+#             */
/*   Updated: 2023/04/02 19:45:41 by ldemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_list
{
	long long	nb;
	char		*val;
}		t_list;

long long	ft_atoi(const char *str);
char		*ft_strdup(char *src);
void		ft_putstr(char *str);
char		*read_number(long long fd);
char		*read_value(long long fd, char *c);
t_list		*read_dict(char *file);
int			largest_multiple(long long nb);
long long	is_valid_argument(long long nbr);
void		print_space_if_needed(long long *first_space_printed);
void		print_value_for_multiple(long long multiple, t_list *dict);
void		print_remaining_number(long long nbr, t_list *dict, long long \
														*first_space_printed);
void		print_number(long long nbr, t_list *dict, long long \
													*first_space_printed);
void		skip_spaces(long long fd, char *c);
void		skip_newlines(long long fd, char *c);
void		skip_spaces_and_colon(long long fd, char *c);
int			largest_tens(long long nb);
int			largest_multiple(long long nb);
int			is_entry(long long key);
long long	number_exists_in_dict(long long number, t_list *dict, \
														long long dict_size);
void		go_to_next_line(long long fd, char *c);
void		create_array(long long *numbers);
t_list		*init_dict(int fd);
void		update_dict_entry(int fd, t_list *dict, int i);

#endif
