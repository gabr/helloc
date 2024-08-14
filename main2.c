///usr/bin/env cc "$0" -g -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch -o 'Hello World' && './Hello World' -- "$@"; exit
void main(int argc, char** argv) {
    for(argv[0]+=1;*argv[0]++;putchar(*argv[0]));
}
