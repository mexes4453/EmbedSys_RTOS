/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ #
 * UART DRIVER                                                    #  
 *                                                                #
 *  |bits |  7   |  6   |  5   |  4   |  3   |  2  |  1  |  0  |  #
 *  |desc | TXFE | RXFF | TXFF | RXFE | BUSY |  -  |  -  |  -  |  #
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

#define TXFE 0x80
#define RXFF 0x40
#define TXFF 0x20
#define RXFE 0x10
#define BUSY 0x08
