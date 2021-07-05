#ifndef __GLOBAL_MACRO_HANDLER_H__
#define __GLOBAL_MACRO_HANDLER_H__ 1
#include <stdint.h>



typedef void (*handler_t)(void);



void init_handlers(void);



void register_handler(uint8_t k,handler_t h);



void start_handlers(void);



void deinit_handlers(void);



#endif
