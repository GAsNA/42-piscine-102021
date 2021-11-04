#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char	*find_nb(char *dico, char *to_find);
char	*ft_get_dico(char *path);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*extract_str(char *start, char *end);
int		display_digits(char *digits);
char	*get_thousands(char *thousand, int group_n);
char	*ft_strcat(char *dest, char *src);
char	*translate_nb(char *str, char *dic, int group_n);
char	*add_zero(char digit);
int		ft_puterror(void);
char	*ft_get_in_form(char *nbr);
int		nb_groups(char *nbr);
int     ft_put_dico_error(void);

#endif
