/*
	1	валидация названия файла
	2	открыть файл
	3	прочитать файл записать в строку
	4	проверить на количество екситов и плэйеров
	5	засплитиь строку выплюнуть двумерный
	6	проверить длины строк в двумерном
	7	првоерить стены
	8	сделать флудфил для проверки стен и тупиков
			1 Найдите точку, где находится игрок.
			2 Запустите алгоритм заливки (flood fill) из этой точки.
			3 Во время заливки, если алгоритм встречает препятствие, он должен пропустить эту клетку.
			4 Если алгоритм достигает выхода, значит выход не заблокирован препятствиями.

*/

#include "so_long.h"


void check_name_file(char *av)
{
	size_t len;
	char *tmp;

	tmp = av;
	len = ft_strlen(tmp);
	
	if (ft_strncmp(&tmp[len - 4], ".ber", len))
		print_error(1);
}

int main(int ac, char **av)
{
	t_game map;

	if (ac != 2)
		print_error(1);
	check_name_file(av[1]);
	init_map(&map);
	parsing_file(av[1], &map);
	//init_window_with_map(&map);


}