/* col.c
 * Author:  Barry Rountree (rountree@llnl.gov)
 * Copyright Lawrence Livermore National Laboratory (2022).
 * Released into the public domain.
 *
 * A tiny library for printing nicer-looking tables in C.
 */

#include <stdio.h>
#include <inttypes.h>
#include "col.h"

uint64_t
cprintf( const char * const restrict fmt, ... ){
    printf("%s::%d fmt=%s\n", 
            __FILE__, __LINE__, fmt);
    return 0;
}
