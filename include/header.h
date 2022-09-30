#ifndef _HEADER_H
#define _HEADER_H

#include <stdint.h>
#include <unistd.h>


#define BLOCK_SIZE 512

#define MAX_NAME_LEN 256
#define MAX_PATH_LEN 1024

#define MAX_STRUCT_ENTS 15


typedef struct __pkg_obj {
   struct {
      char magic[11];
      char version[8];
   };

   struct {
      char name[MAX_NAME_LEN];
      char path[MAX_PATH_LEN];
      char type[12];
      char size[12];
      char mode[8];
      char uid[8];
      char gid[8];
      char link_name[MAX_NAME_LEN];
      char link_path[MAX_PATH_LEN];
   };

   struct {
      /* Extended */
      char major[8];
      char minor[8];
      char inode[8];
      char blkcnt[12];
   };
} __pkg_obj __attribute__((packed));

#endif
