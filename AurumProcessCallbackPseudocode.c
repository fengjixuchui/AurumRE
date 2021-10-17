
void UndefinedFunction_140014060(char *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_3 == 0) {
    pcVar2 = *(char **)(DAT_140033a38 + 8);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0x764b00dcd21ffe8;
      uVar4 = 0xdd6bdb01af7b1da0;
LAB_1400140a3:
      do {
        uVar3 = uVar3 * uVar4;
        uVar1 = uVar3 >> 0x20;
        if (uVar1 < 0x7bd902ed) {
          if (uVar1 == 0x7bd902ec) {
            uVar3 = uVar3 ^ 0x10e26fbb4ebbbd51;
            uVar4 = uVar4 ^ 0x2dfd74a65d3db070;
            pcVar2 = IMAGE_DOS_HEADER_140000000.e_magic + (longlong)pcVar2;
          }
          else {
            if (uVar1 == 0x15ada54e) {
              uVar4 = uVar4 ^ 0x90b63036b1ff9830;
              pcVar2 = (char *)((longlong)pcVar2 * -0x5825a6e154a3713b ^
                               (ulonglong)((longlong)pcVar2 * -0x5825a6e154a3713b) >> 7);
              uVar3 = uVar3 ^ 0x91cefa3e77b24337;
              uVar1 = (ulonglong)pcVar2 >> 0xe;
            }
            else {
              if (uVar1 == 0x2dc0de0a) {
                uVar4 = uVar4 ^ 0xbbaefbc1dae28ff2;
                uVar1 = (longlong)pcVar2 * *(longlong *)(DAT_140029024 + 9) + 0xa9659e4ab5032db0;
                pcVar2 = (char *)(uVar1 ^ uVar1 >> 0x16 ^ uVar1 >> 0x2c);
                uVar1 = 0xf05f2251e30332bc;
LAB_14001412a:
                uVar3 = uVar3 ^ uVar1;
                goto LAB_1400140a3;
              }
              if (uVar1 == 0x2e017652) {
                uVar3 = uVar3 ^ 0x581c5a11d6e456d8;
                uVar4 = uVar4 ^ 0xa257a27f1fdae773;
                uVar1 = (ulonglong)pcVar2 >> 0x38;
              }
              else {
                if (uVar1 == 0x3225ef6a) {
                  pcVar2 = pcVar2 + -0x5b7d22fd9d34fad7;
                  uVar4 = uVar4 ^ 0x5ae0fb43662fbc29;
                  uVar3 = uVar3 ^ 0xef568673d016503f;
                  uVar1 = (ulonglong)pcVar2 >> 0x34;
                }
                else {
                  if (uVar1 == 0x4ec984c5) {
                    uVar4 = uVar4 ^ 0x5ec8090740dbe88;
                    uVar3 = uVar3 ^ 0x421e74fdf3683449;
                    uVar1 = (ulonglong)pcVar2 >> 0x3e;
                  }
                  else {
                    if (uVar1 != 0x74e9ac19) {
                      if (uVar1 == 0x7a3cf8c6) {
                        pcVar2 = (char *)((ulonglong)pcVar2 ^ (ulonglong)pcVar2 >> 0x1a);
                        uVar4 = uVar4 ^ 0xba71a1ca63e88ea7;
                        uVar1 = 0x8405bb926c678f09;
                        goto LAB_14001412a;
                      }
                      break;
                    }
                    uVar4 = uVar4 ^ 0x55f90debccfcd106;
                    uVar3 = uVar3 ^ 0x2abb9b2d574ccdb7;
                    uVar1 = (ulonglong)pcVar2 >> 0xd;
                  }
                }
              }
            }
            pcVar2 = (char *)((ulonglong)pcVar2 ^ uVar1);
          }
          goto LAB_1400140a3;
        }
        if (uVar1 == 0xba869539) {
          pcVar2 = (char *)((ulonglong)pcVar2 ^ (ulonglong)pcVar2 >> 0x1c);
          uVar3 = uVar3 ^ 0xa5b810c69ee2691f;
          uVar1 = 0x5df3f14001ca060;
        }
        else {
          if (uVar1 == 0xc8c4d3bc) {
            pcVar2 = (char *)((longlong)pcVar2 * *(longlong *)(DAT_140029024 + 0x11));
            uVar3 = uVar3 ^ 0x36e2cd68f0bc1a44;
            uVar1 = 0x8dcea67a29a9e9e2;
          }
          else {
            if (uVar1 != 0xc99be339) {
              if (uVar1 == 0xd4edab0c) {
                uVar4 = uVar4 ^ 0xd68b1e893b33811a;
                uVar3 = uVar3 ^ 0x269a12add6d92d7e;
                goto LAB_1400140a3;
              }
              if (uVar1 == 0xeb1dcc20) {
                uVar3 = uVar3 ^ 0xfb06ee87d4dc33d9;
                uVar4 = uVar4 ^ 0xe55ba3afd0c267f6;
                goto LAB_1400140a3;
              }
              if (uVar1 == 0xf3e6dd1d) {
                uVar4 = uVar4 ^ 0xe50b6eeb7ee5d9a1;
                pcVar2 = (char *)((ulonglong)pcVar2 ^ (ulonglong)pcVar2 >> 0x1f);
                uVar1 = 0x9a38ffeeaa33b4ed;
                goto LAB_14001412a;
              }
              break;
            }
            pcVar2 = (char *)((longlong)pcVar2 * 0x3d17c99a1c186399);
            uVar3 = uVar3 ^ 0x5856f0edfa42987b;
            uVar1 = 0xf2d8f7f875b30;
          }
        }
        uVar4 = uVar4 ^ uVar1;
      } while( true );
    }
    if (pcVar2 == param_1) {
      *(undefined8 *)(DAT_140033a38 + 8) = 0;
      *(undefined8 *)(DAT_140033a38 + 0x10) = 0;
    }
  }
  return;
}
