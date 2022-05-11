#include "chaff.h"
#include <cstring>

void setChaff(chaff & ch, char * name, int slag){
    strcpy(ch.dross, name);
    ch.slag = slag;
}