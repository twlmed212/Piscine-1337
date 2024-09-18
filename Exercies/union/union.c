// Online C compiler to run C program online
#include <unistd.h>
void get_and_sort(char *x, int *dup)
{
    int i = 0;
    while(x[i])
    {
        dup[x[i]] = 1;
        i++;
    }
}
void get_and_print(char *x, int *dup)
{
    int i = 0;
    while(x[i])
    {
        if (dup[x[i]] == 1)
        {
          write(1, &x[i], 1);
          dup[x[i]] = 0;
        }
        i++;
    }
}
int main() {
    char x[] = "zpadinton";
    char y[] =  "paqefwtdjetyiytjneytjoeyjnejeyj";
    int dup[256] = {0};

    get_and_sort(x, dup);
    get_and_sort(y, dup);
    get_and_print(x, dup);
    get_and_print(y, dup);
    // Write C code here

    return 0;
}