#include "Fee.h"
#include "Fee_Cbk.h"
const uint8 data_buffer[] = {0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,
          
                             0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB };
uint8 read_data[32];
int main(void)
{ 
 Fee_Init();
}

void Fee_JobEndNotification(void)
{
}
void Fee_JobErrorNotification(void)
{
}