#include <stdio.h>
#include <stdlib.h>
struct jogo
{
    int time;
    int res;
} *j;

int main()
{
    // char time2[8];
    // int vet[] = {4, 1, 1, 0, 0, 4, 3, 1, 2, 3, 1, 2, 2, 0, 0, 2, 1, 2, 4, 3, 0, 1, 3, 2, 3, 4, 1, 4, 1, 0};
    //4 1 1 0 0 4 3 1 2 3 1 2 2 0 0 2 1 2 4 3 0 1 3 2 3 4 1 4 1 0
        // int aux;

    int i;
    j = malloc (31*sizeof(struct jogo));

    for (int i = 0; i < 30; i++)
    {
        scanf("%d", &j[i].res);
    }

    for(int i=0; i<30; i++){
        if(j[i].res > j[i+1].res){
            j[i+8].time = i;
            i++;
        } else {
            j[i+8].time = i + 1;
            i++;
        }
    }
    return 0;
}