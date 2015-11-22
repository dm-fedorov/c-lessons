/***
мл.адреса

сегмент text
сегмент data
сегмент bss

сегмент heap 
(растет в направлении ст.адресов)

(растет в направлении мл.адресов)
сегмент stack

ст.адреса
***/

#include <stdio.h>

int global_var;
int global_initialized_var = 5;

void function() {  // This is just a demo function
   int stack_var; // notice this variable has the same name as the one in main()

   printf("the function's stack_var is at address 0x%08x\n", &stack_var);
}


int main() {
   int stack_var; // same name as the variable in function()
   static int static_initialized_var = 5;
   static int static_var;
   int *heap_var_ptr;

   heap_var_ptr = (int *) malloc(4);

   // These variables are in the data segment
   printf("global_initialized_var is at address 0x%08x\n", &global_initialized_var);
   printf("static_initialized_var is at address 0x%08x\n\n", &static_initialized_var);

   // These variables are in the bss segment
   printf("static_var is at address 0x%08x\n", &static_var);
   printf("global_var is at address 0x%08x\n\n", &global_var);

   // This variable is in the heap segment
   printf("heap_var is at address 0x%08x\n\n", heap_var_ptr);

   // These variables are in the stack segment
   printf("stack_var is at address 0x%08x\n", &stack_var);
   function();
}  

/***

global_initialized_var is at address 0x080498c4
static_initialized_var is at address 0x080498c8

static_var is at address 0x080498d0
global_var is at address 0x080498d4

heap_var is at address 0x0807f008

stack_var is at address 0xbf859d98
the function's stack_var is at address 0xbf859d7c

***/


