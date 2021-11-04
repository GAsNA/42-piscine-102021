int     ft_strlen(char *str)
{
        int     len;

        len = 0;
        while (str[len])
                len++;
        return (len);
}

int     main(void)
{
        char    *str;

        str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
        ft_print_memory(str, ft_strlen(str));
        return (0);
}

/*int           main(void)
{
        char str[] = "Ceci est un test d'affichage de print memory!\nSegFault";
        ft_print_memory(str, 54);
}*/
