#ifndef __INCLUDE_ARCUS_BOOTLOADER_INODE
#define __INCLUDE_ARCUS_BOOTLOADER_INODE
#include"types.h"
#define INODE_PER_GROUP 8192

#define USER_READ 1
#define USER_WRITE 2
#define USER_EXEC 4
#define GROUP_READ 8
#define GROUP_WRITE 16
#define GROUP_EXEC 32
#define OTHER_READ 64
#define OTHER_WRITE 128
#define OTHER_EXEC 256

#define REGUALR_FILE 0x1
#define DIRECTORY 0x2

struct inode {  // inode start at 1
    uint64 bytes;
    uint64 tot_size;
    uint64 pt_direct[12];   // points to inode num;
    uint64 pt1;
    uint64 pt2;
    uint64 pt3;
    uint64 atime;
    uint64 ctime;
    uint64 mtime;
    uint32 gid;
    uint32 uid;
    uint32 file_type;
    uint32 checksum;
    uint16 link_count;
    uint16 mode;
    uint8 padding[76];

};  //  total 256 bytes
#endif