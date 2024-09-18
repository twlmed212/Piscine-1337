#include<unistd.h>
int main(int ac,char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])//gdgdfg
		{
			write(1,av[1][i],1);
			i++;
		}
		write(1,"\n",1);
	}
	else
	{
		write(1,"\n",1);
	}
	
	// 		write(1,"\n",1);

		
}
/*
1- Check String and display first  'a\n' - +++++
2- if there is no a display '\n' ++++++
3- if args more than 1 'a\n' ++++++++ 


*/