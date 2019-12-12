#ifndef __SMALL_STANDART_C_LIB_H_INC
#define __SMALL_STANDART_C_LIB_H_INC

//#define __FULL_STD_LIB_ALSO

#define _stdcall   __attribute__((__stdcall__))
#define _cdecl     __attribute__((__cdecl__))
#define _pascal    __attribute__((__pascal__))
#define _fastcall  __attribute__((__fastcall__))

int   __strlen(const char *);
void  __printstr(const char *);
int   __printf(const char *, ...);

#ifndef __FULL_STD_LIB_ALSO
     #define bool unsigned char
     #define true 1
     #define false 0

     #define tak __tak
     #define strlen __strlen
     #define printstr __printstr
#endif



#endif /*__SMALL_STANDART_C_LIB_H_INC */
