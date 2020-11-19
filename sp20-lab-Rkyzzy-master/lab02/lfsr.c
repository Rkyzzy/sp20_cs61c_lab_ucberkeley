#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t temp= *reg;
    uint16_t v = (((temp&1)^((temp>>2)&1))^((temp>>3)&1))^((temp>>5)&1); 
    *reg = temp>>1;
    *reg |= (v<<15);
    *reg &= ~((v^1)<<15);
}

