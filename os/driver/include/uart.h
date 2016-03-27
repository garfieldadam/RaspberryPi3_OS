#ifndef _uart_h_
#define _uart_h_


void uart_init (void);

unsigned int uart_lcr (void);

unsigned int uart_recv(void);

void uart_send (unsigned int c);

void uart_flush(void);


#endif /* _uart_h_ */