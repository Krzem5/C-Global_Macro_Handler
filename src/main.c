#include <global_macro_handler.h>
#include <stdio.h>



void func(void){
	printf("Ctrl+Alt+Shift+T pressed!\n");
}



int main(int argc,const char** argv){
	init_handlers();
	register_handler('T',func);
	start_handlers();
	return 0;
}
