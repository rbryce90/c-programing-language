#include <stdio.h>
// this did not work 
int main(int argc, char* argv[]){ 
    
//    long nc; 
    double nc; 
    nc = 0; 
    //while (getchar() != EOF)
     //   ++nc;
       // printf("%ld\n", nc);
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f", nc);
    return 0;
}
