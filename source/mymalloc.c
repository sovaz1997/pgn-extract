/*
 *  Program: pgn-extract: a Portable Game Notation (PGN) extractor.
 *  Copyright (C) 1994-2017 David Barnes
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 1, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *  David Barnes may be contacted as D.J.Barnes@kent.ac.uk
 *  https://www.cs.kent.ac.uk/people/staff/djb/
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "mymalloc.h"

/* Allocate the required space or abort the program. */
void *
malloc_or_die(size_t nbytes)
{
    void *result;

    result = malloc(nbytes);
    if (result == NULL) {
        perror("malloc or die");
        abort();
    }
    return result;
}

/* Allocate the required space or abort the program. */
void *
realloc_or_die(void *space, size_t nbytes)
{
    void *result;

    result = realloc(space, nbytes);
    if (result == NULL) {
        perror("realloc or die");
        abort();
    }
    return result;
}
