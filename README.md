# Linux Custom Syscall

A custom Linux kernel module and system call implemented on ARM64, demonstrating kernel-space development including loadable modules with parameters and low-level syscall registration.

## Contents

- `kernel_module/` — loadable kernel module (`my_name.c`, `Makefile`) with module parameters
- `kernel_syscall/` — custom system call source added to the kernel tree (`my_syscall.c`, `Makefile`)
- `userspace/` — userspace test program invoking the custom syscall via `syscall()`
- `screenshots/` — proof-of-execution screenshots

## What this demonstrates

**Kernel Module**
- Loadable/unloadable kernel module using `module_init()` / `module_exit()`
- Runtime-configurable parameters via `module_param()`
- Logging to the kernel ring buffer via `printk()`

**Custom System Call**
- A new syscall (`__arm64_sys_my_syscall`) added directly into the Linux kernel source tree
- Registered in the ARM64 syscall table and `unistd.h` syscall number definitions
- Full kernel rebuild and reboot to compile the syscall in permanently
- Userspace program invoking the syscall directly via `syscall(463)`
