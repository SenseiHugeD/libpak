#include <fcntl.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>




int pkg_open(int fd, char *n) {
   struct stat st;
   DIR *d;

   /* Check if directory or file */
   if (stat(n, &st) < 0) {
      return -1;
   }

   switch(st.st_mode & S_IFMT) {
      case S_IFDIR:
         d = opendir(n);
	 fd = d;
	 break;
      case S_IFREG:
         fd = open(n, O_RDWR);
	 break;
      default:
	 break;
   }

   return fd;
}