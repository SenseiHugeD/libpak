#include "libpak.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>




int main(int argc, char *argv[]) {
   int fd;
   pkg_open(&fd, argv[1]);

   if (fd == -1) {
      printf("Failed\n");
      return -1;
   }

   printf("Success\n");
   pkg_close(&fd);
   return 0;
}
