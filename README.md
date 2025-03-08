# FCEUX for miyoo base on fceux 2.6.5 - 07 Feb 2023

A build of fceux version 2.6.5 port for miyoo devices

# Changes log
- Keymap for Q90/V90
- Remove hotkey on L1 and R1
- Now can select beetween NTSC, PAL, Dendy mode timing
- Fullscreen mode better, sharp (thanks to Steward-Fu).
- Fix some glitch audio on fds roms
- Improve performance for fds roms
- New mapper support
- Add cheats menu
- Add integer frame rate
- Add sound buffer per miliseconds
- Add force grayscale
- Add de-emphasis bit swap
- Rewrite fps throttle code

Please report problem exist on this build, i will improve.

Because fceux sometimes laggy and glitch so i add downgrade version, check source code on branchs, the binary on releases section "082324" 

# How to build
You will need linux base on debian or arch linux, docker

```
# run below command if first time use docker
docker pull miyoocfw/toolchain-shared-uclibc:latest

# command to use toolchain
docker run --volume ./:/src/ -it miyoocfw/toolchain-shared-uclibc:latest
cd src
make -j $(nproc)

```
