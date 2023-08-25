#ifndef _SYSCALL_H_
#define _SYSCALL_H_

#include <stdint.h>

#define MMK_SYSCALL_ECHO 0x400
#define MMK_SYSCALL_MEASURE 0x401
#define MMK_SYSCALL_PKCS 0x402

int64_t mmk_syscall_echo(uint64_t value);
int64_t mmk_syscall_measure();
int64_t mmk_syscall_pkcs(uint64_t func_id, uint64_t *params);

int64_t open(char *path, uint32_t flags);
int64_t close(uint64_t fd);
int64_t pipe(uint64_t *pipe);
int64_t read(uint64_t rd, char *buf, uint64_t len);
int64_t write(uint64_t fd, char *buf, uint64_t len);
int64_t exit(int exit_code);
int64_t yield();
int64_t set_priority(int64_t prio);
int64_t get_time();
int64_t sleep(uint64_t period_ms);
int64_t getpid();
int64_t munmap(uint64_t start, uint64_t len);
int64_t fork();
int64_t exec(char *path);
int64_t mmap(uint64_t start, uint64_t len, uint64_t prot);
int64_t wait(int *exit_code);
int64_t waitpid(int64_t pid, int *exit_code);
int64_t spawn(char *path);
int64_t mailread(char *buf, uint64_t len);
int64_t mailwrite(int64_t pid, char *buf, uint64_t len);

#endif // _SYSCALL_H_
