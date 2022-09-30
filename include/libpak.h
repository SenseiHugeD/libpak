#ifndef LIBPAK_H
#define LIBPAK_H

#include <stdint.h>
#include <unistd.h>
#include "header.h"




extern int pkg_open(int fd, char *n);
extern int pkg_close(int fd);
extern int pkg_add(struct __pkg_obj *obj, char f[], int count);


#endif
