///usr/bin/env cc "$0" -g -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch -o a.out && ./a.out -- "$@"; exit
void main(void) {
    unsigned long o=0,a=0x03c;
    while(putchar((a&7)+'a'+o),o+=a&7,(a>>=3));
}


/*
   H : 72    - 65 = 7
   W : 87    - 65 = 22
     : 32    - 97 = -65

                          o xxx   o + 1
   h : 104   - 97 = 7     0 111 7 o = 0          0111
   e : 101   - 97 = 4     1 100 4 o = 5          0100
   l : 108   - 97 = 11    0 110 6 o = 5          1011
   l : 108   - 97 = 11    1 110 6 o = 11         1011
   o : 111   - 97 = 14    1 100 4 o = 15         1110

   w : 119   - 97 = 22    0 110 
   o : 111   - 97 = 14
   r : 114   - 97 = 17
   l : 108   - 97 = 11
   d : 100   - 97 = 3

1110 1011 1011 0100 0111
*/
