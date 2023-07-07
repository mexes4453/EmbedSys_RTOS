/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ #
 * UART DRIVER                                                    #  
 *                                                                #
 *  |bits |  7   |  6   |  5   |  4   |  3   |  2  |  1  |  0  |  #
 *  |desc | TXFE | RXFF | TXFF | RXFE | BUSY |  -  |  -  |  -  |  #
 *                                                                #
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

#define TXFE 0x80
#define RXFF 0x40
#define TXFF 0x20
#define RXFE 0x10
#define BUSY 0x08

#define UDR 0x00
#define UFR 0x18

typedef volatile struct uart
{
    char    *base;  // device base address
    int     n;      // uart number 0-3
}           UART;

UART uart[4];       // 4 uart struct



int    uart_init(void)  // uart initialization function
{
    int     i;
    UART    *up;

    for (i=0; i<4; i++)
    {
        up = &uart[i];
        up->base = (char *)(0x101F1000) + (i * 0x1000);
        up->n = i;
    }
    uart[3].base = (char *)(0x10009000);    // uart 3 is at 0x10009000
    return (0);
}

