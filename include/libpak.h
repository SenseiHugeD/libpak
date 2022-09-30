#ifndef LIBPAK_H1
#define LIBPAK_H

#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "header.h"




extern int pkg_open(FILE *fd, char *n);
extern int pkg_close(FILE *fd);
extern int pkg_create(FILE *fd, char *n);
extern int pkg_add(struct __pkg_obj *obj, char f[], int count);


#endif
