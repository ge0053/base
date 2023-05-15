#ifndef globalConstantsDefinition_h
#define  globalConstantsDefinition_h
#include<inttypes.h>

  struct __attribute__((packed)) uint8_bitField{
        uint8_t b0:1;
        uint8_t b1:1;
        uint8_t b2:1;
        uint8_t b3:1;
        uint8_t b4:1;
        uint8_t b5:1;
        uint8_t b6:1;
        uint8_t b7:1;
    };
    union __attribute__((packed)) uint8_union{
        uint8_t byte;
        struct uint8_bitField bit;
    };
/*definition*/
 struct    outer{
    int a;
    int b;
    int c;
    union uint8_union set;
    char f;
    struct inner {
        int value;
        float num;
    }inner;  
};


#endif
