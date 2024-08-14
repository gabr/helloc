///usr/bin/env cc "$0" -lm -g -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch -o a.out && ./a.out -- "$@"; exit
#include <math.h>
#define LEN(a) (sizeof(a)/sizeof(*a))
int f(int x) {
    static double c[]={
         1.4284494210500802e+003,
        -3.7548503621103482e+003,
         4.0959353022078490e+003,
        -2.3422458280661986e+003,
         7.8969993625198811e+002,
        -1.6487245748211205e+002,
         2.1516049653014271e+001,
        -1.7056257479409493e+000,
         7.5028958899358428e-002,
        -1.4035613252733707e-003,
    };
    double res=0;
    for (int i=0;i<LEN(c);i++) res+=c[i]*pow(x,i);
    return llround(res);
}
void main(void) {
    int i=1,v; while((v=f(i++))>0) putchar(v==93?' ':v);
}


