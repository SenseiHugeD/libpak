#include "libpak.h"
#include <stdio.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdlib.h>



int pkg_close(FILE *fd) {
   if (fd != -1) {
      close(fd);
      return 0;
   }

   return -1;
}
