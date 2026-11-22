# Sailfish OS native kernel for Xiaomi Pad 5 (nabu)

This repository carries the kernel source used by
[sfos-nabu-native](https://github.com/sailfish-on-nabu/sfos-nabu-native).
The Sailfish changes are on the `native` branch, based on
[`Kumar-Jy/linux`, `sm8150/7.3.y`](https://github.com/Kumar-Jy/linux/tree/sm8150/7.3.y)
at commit `760d136f9c23a4935d62bbdc3721181e1ffdd1ed`.

The native branch includes the current nabu device tree, panel/touch
coordination, NT36523 gesture decoding and camera CCI/OV8856 recovery
changes from the local Sailfish port. The double-tap wake implementation
is experimental: the latest physical tests did not wake the device.
Normal touchscreen operation has been confirmed with the test kernel.
See `source/nabu-doubletap/README.md` in the adaptation repository for
the test history and remaining limitations.

Build through the adaptation repository, which provides
`config/kernel-nabu.config`, `scripts/build-kernel.sh`, Android boot
image packaging and the matching native RPM. The base configuration is
`sm8150_defconfig`; the target is ARM64 with
`CROSS_COMPILE=aarch64-linux-gnu-`.

The upstream Linux README and licensing files are preserved.
