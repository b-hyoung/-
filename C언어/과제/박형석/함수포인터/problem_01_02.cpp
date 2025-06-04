#include <stdio.h>
#include <string.h>

void ranking(char *n, int *result)
{
    for (int i = 0; i < 5; i++){
        result[i]=1;
        for (int j = 0; j < 5; j++){
            if (n[i] < n[j]){
                result[i]++;
            }
        }
        printf("%3d", n[i]);
    }
}

int main()
{
    char n[5] = {40, 50, 80, 60, 20};
    int result[5] = {0};

    ranking(n,result);

    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%3d", result[i]);
    }

    return 0;
}