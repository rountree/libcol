/* col.h
 * Author:  Barry Rountree (rountree@llnl.gov)
 * Copyright Lawrence Livermore National Laboratory (2022).
 * Released into the public domain.
 *
 * A tiny library for printing nicer-looking tables in C.
 */

#include <stdint.h>

uint64_t
cprintf( const char * const restrict fmt, ... );
