int        main(int argc, char *argv[])
{
    int file;
    char *str;
    char *firstline;
    int index;
    if (argc > 1)
    {
        file = open(argv[1], O_RDONLY);
        if (file == -1)
            return (0);
        firstline = (recupfirstline(file));
        recupinfofirstline(firstline);
        printf("CHAR THE GRID MUST CONTAIN : \n\
               EMPTY : %c \n \
               OBSTACLE : %c \n \
               FILLED : %c \n", g_info[0], g_info[1], g_info[2]);
        printf("LINE NUMBER : %d \n", g_nbrligne);
        if(!(g_nbrligne))
            ft_putstr("pas de ligne donc map error");
        str = recupgrid(file);
        g_nbrcol = ft_calc_col(str);
        printf("COL NUMBER : %d \n", g_nbrcol);
        str[g_nbrcol*g_nbrligne + 8] = '\0';
        ft_putchar('\n');
        grid = ft_split_whitespaces(str);
        index = 0;
        while(grid[index])
        {
            if(ft_strlen(grid[index]) != g_nbrcol)
            {
                ft_putstr("map error");
                break ;
            }
            index++;
        }
        printf("grille valide");
        close(file);
    }
    return (0);
}
