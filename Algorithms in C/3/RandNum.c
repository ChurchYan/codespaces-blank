#include <stdlib.h>
#include "RandNum.h"

Number RandNum(int r) {
    return rand() % r;
}