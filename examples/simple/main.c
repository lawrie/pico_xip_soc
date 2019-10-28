#include <stdint.h>
#include <stdbool.h>
#include <uart/uart.h>

#define reg_uart_clkdiv (*(volatile uint32_t*)0x02000004)
#define reg_uart_data (*(volatile uint32_t*)0x02000008)

extern uint32_t sram;

uint32_t set_irq_mask(uint32_t mask); asm (
    ".global set_irq_mask\n"
    "set_irq_mask:\n"
    ".word 0x0605650b\n"
    "ret\n"
);

void irq_handler(uint32_t irqs, uint32_t* regs) {
}

void main() {
    reg_uart_clkdiv = 217; // 25000000 / 115200
    set_irq_mask(0);

    print("Hello World!\n");
}
