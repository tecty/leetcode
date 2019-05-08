#include <stdio.h>
#include <stdlib.h>

int numJewelsInStones(char * J, char * S){
    // printf("%s\n", J );
    // printf("%s\n", S );
    int ret = 0;
    for (size_t i = 0; J[i] != '\0'; i++)
    {
        for (size_t j = 0; S[j] != '\0'; j++)
        {
            if (S[j] == J[i]) ret ++;    
        }
        
    }
    return ret;
}


int main(int argc, char  *argv[])
{
    int d = numJewelsInStones(argv[1], argv[2]);
    printf("%d\n",d);


    return 0;
}
