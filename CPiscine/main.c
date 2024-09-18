#include <unistd.h>
#include <stdio.h>

int str_len(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}
int main(int ac, char **args)
{
	int i;
	i = str_len(args[1]);
	int x;
	i = i-1;
	while (args[1][i]){
		if (args[1][i] >= 33 && args[1][i] <= 126){
			
			x = 1;
		}
		if (args[1][i] == 32 && x == 1 ){
			i += 1;
			while (args[1][i]){
				if (args[1][i] == 32){
					break;
				}
				write(1, &args[1][i], 1);
				i++;
			}
			break;
		}
		i--;
	}
}
