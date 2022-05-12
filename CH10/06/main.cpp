#include "move.h"
#include <iostream>

int main(){
    Move mov;
    Move mov2(2.1, 3.1);
    mov.showmove();
    mov2.showmove();
    mov = mov.add(mov2);
    mov.showmove();
    mov.reset();
    mov.showmove();
    return 0;
}