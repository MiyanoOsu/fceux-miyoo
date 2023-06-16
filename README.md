# FCEUX for miyoo base on fceux 2.6.5 - 07 Feb 2023

An update of fceux which exist on MiyooCFW v1.3.3

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
- Update core from Fceux 2.2.3 to 2.6.5

*Note: Fceux 2.5.6 have overclocking, but i see nothing effect for performance on miyoo device, so i don't add option to menu to enable/disable. Maybe in MiyooCFW 2.0 it will useful ?

Please report problem exist on this build, i will improve.

# How to build
You will need linux base on debian, toolchain for miyoo

```
cd /where/source/place
make

```
