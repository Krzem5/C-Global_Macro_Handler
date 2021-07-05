#include <global_macro_handler.h>
#include <stdio.h>



#define VK_F2 0x71



void func1(void){
	printf("Ctrl+Alt+Shift+T pressed!\n");
}



void func2(void){
	printf("Ctrl+Alt+Shift+F2 pressed!\n");
}



int main(int argc,const char** argv){
	init_handlers();
	register_handler('T',func1);
	register_handler(VK_F2,func2);
	start_handlers();
	return 0;
}
