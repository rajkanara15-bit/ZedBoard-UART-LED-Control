#include "xparameters.h"
#include "xil_printf.h"
#include "xil_io.h"
#include "xil_types.h"

#define GPIO_BASEADDR XPAR_AXI_GPIO_0_BASEADDR

#define GPIO_DATA_OFFSET 0x00
#define GPIO_TRI_OFFSET  0x04

int main()
{
    char command;

    // Configure GPIO pins as outputs
    Xil_Out32(GPIO_BASEADDR + GPIO_TRI_OFFSET, 0x0);

    // LED initially OFF
    Xil_Out32(GPIO_BASEADDR + GPIO_DATA_OFFSET, 0x0);

    xil_printf("\r\nUART LED CONTROL READY\r\n");
    xil_printf("Send 1 = LED ON\r\n");
    xil_printf("Send 0 = LED OFF\r\n");

    while (1)
    {
        command = inbyte();

        if (command == '1')
        {
            Xil_Out32(GPIO_BASEADDR + GPIO_DATA_OFFSET, 0x1);
            xil_printf("LED ON\r\n");
        }

        else if (command == '0')
        {
            Xil_Out32(GPIO_BASEADDR + GPIO_DATA_OFFSET, 0x0);
            xil_printf("LED OFF\r\n");
        }
    }

    return 0;
}