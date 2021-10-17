
/* WARNING: Could not reconcile some variable overlaps */

void UndefinedFunction_140025360(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort *puVar12;
  ulonglong uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined auStack216 [32];
  undefined8 uStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined8 uStack136;
  undefined8 uStack128;
  undefined8 uStack120;
  undefined4 uStack104;
  undefined4 uStack100;
  undefined4 uStack96;
  undefined4 uStack92;
  ushort uStack88;
  ushort uStack86;
  ushort uStack84;
  uint uStack82;
  ushort uStack78;
  ushort uStack76;
  ushort uStack74;
  ushort uStack72;
  ushort uStack70;
  ushort uStack68;
  ushort uStack66;
  ushort uStack64;
  ushort uStack62;
  ushort uStack60;
  ushort uStack58;
  ushort uStack56;
  ushort uStack54;
  ulonglong uStack48;
  
  uStack48 = DAT_1400339d0 ^ (ulonglong)auStack216;
  uStack120 = param_1;
  PsSetCreateProcessNotifyRoutineEx(&LAB_140014060);
  if (DAT_140033a38 != (ulonglong *)0x0) {
    uVar6 = *DAT_140033a38;
    if (uVar6 != 0) {
      uStack128 = 0x810360b0;
      uVar8 = 0xe8771e154c640dfa;
      uVar13 = 0xe672244445351653;
      uStack136 = 0x9c1bb969;
      uStack144 = 0xa23a01ae;
      uStack152 = 0xc5133c5b;
      uStack160 = 0xd81c49d5;
      uStack168 = 0xf7d87696;
LAB_140017797:
      uVar8 = uVar8 * uVar13;
      uVar2 = uVar8 >> 0x20;
      if (0x51de30d3 < uVar2) {
        if (uVar2 == 0x5bb4d17c) {
          uVar13 = uVar13 ^ 0x2a4b5db12c5f626c;
          uVar8 = uVar8 ^ 0x44fbdf578767dc29;
          uVar6 = uVar6 * *(longlong *)(DAT_14002903b + 7);
          uVar6 = uVar6 ^ uVar6 >> 0x19;
          goto LAB_140017797;
        }
        if (uVar2 == 0x810360b0) {
          uVar6 = uVar6 * 0x140000000;
          uVar8 = uVar8 ^ 0xa5e7ed2fd9999928;
          uVar2 = 0xc6bb870059a90a57;
        }
        else {
          if (uVar2 != 0x9c1bb969) {
            if (uVar2 == 0xa23a01ae) {
              uVar13 = uVar13 ^ 0xae090ffc056af8df;
              uVar6 = uVar6 ^ uVar6 >> 0x20;
              uVar2 = 0x69f9067514d7ac03;
            }
            else {
              if (uVar2 != 0xc5133c5b) {
                if (uVar2 == 0xd81c49d5) {
                  uStack184 = CONCAT44(uStack184._4_4_,0x3b1c8ee1);
                  uVar6 = uVar6 * -0x4e0593e00239cd71 ^ uVar6 * -0x4e0593e00239cd71 >> 1;
                  uVar6 = uVar6 ^ uVar6 >> 2;
                  uVar8 = uVar8 ^ 0xc56221c259c00386;
                  uVar6 = uVar6 ^ uVar6 >> 4;
                  uVar2 = 0x1449db77b240702b;
                  goto LAB_140011f9b;
                }
                if (uVar2 != 0xf7d87696) goto LAB_1400199fc;
                uVar13 = uVar13 ^ 0x419036fa5f372cae;
                uVar8 = uVar8 ^ 0x6fb8a2372741bd03;
                uVar6 = uVar6 ^ 0x140000000;
                goto LAB_140017797;
              }
              uStack184 = CONCAT44(uStack184._4_4_,0xf044b342);
              uVar13 = uVar13 ^ 0xfdd12451b89bcf8d;
              uVar6 = uVar6 ^ 0x140000000 ^ uVar6 >> 0x25;
              uVar2 = 0x71366801cec3205f;
            }
            goto LAB_14001ed27;
          }
          uVar6 = uVar6 * 0x140000000;
          uVar8 = uVar8 ^ 0xbf9c50b86ef16d1a;
          uVar2 = 0xbb5b3c9b54c80a1c;
        }
LAB_140011f9b:
        uVar13 = uVar13 ^ uVar2;
        goto LAB_140017797;
      }
      if (uVar2 == 0x51de30d3) {
        uVar13 = uVar13 ^ 0x846c7d70f4f37fdf;
        uStack184 = CONCAT44(uStack184._4_4_,0xe1402562);
        uVar8 = uVar8 ^ 0x8089ed2e1786a777;
        goto LAB_140017797;
      }
      if (uVar2 == 0xc26f225) {
        uVar8 = uVar8 ^ 0x802262f2f7f6b7d6;
        uStack184 = CONCAT44(uStack184._4_4_,0xe6c32932);
        uVar13 = uVar13 ^ 0xc3ebe04c86cfa87;
        goto LAB_140017797;
      }
      if (uVar2 == 0xeab0163) {
        uStack184 = CONCAT44(uStack184._4_4_,0xb18ea8d4);
        uVar8 = uVar8 ^ 0x4035c700a357c4a1;
        uVar13 = uVar13 ^ 0x5279b661f177655e;
        uVar6 = (uVar6 ^ uVar6 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
        goto LAB_140017797;
      }
      if (uVar2 == 0x13848c57) {
        uStack184 = 0x3d8b3e4a950dc18c;
        uVar13 = uVar13 ^ 0xbf881c02b60c544e;
        uVar2 = 0xc9fc45a202d50e39;
LAB_14001ed27:
        uVar8 = uVar8 ^ uVar2;
        goto LAB_140017797;
      }
      if (uVar2 == 0x1e4fead0) {
        uVar6 = uVar6 ^ uVar6 >> 8;
        uVar13 = uVar13 ^ 0x9e9485da4b6a2f63;
        uVar6 = uVar6 ^ uVar6 >> 0x10;
        uVar2 = 0xe4fa16fd6e3641b8;
        goto LAB_14001ed27;
      }
      if (uVar2 == 0x2f13b533) {
        uVar8 = uVar8 ^ 0x4995639dbdda3ea2;
        uVar6 = uVar6 ^ uVar6 >> 0x32;
        uVar2 = 0x28edf07d592418c4;
        goto LAB_140011f9b;
      }
      if (uVar2 == 0x3c29a67a) {
        uVar13 = uVar13 ^ 0x47162c33a6e660de;
        uVar6 = uVar6 * -0x36849056a20af79f;
        uVar2 = 0xfe37ea63c2b46731;
        goto LAB_14001ed27;
      }
      if (uVar2 == 0x3c98729b) {
        uVar13 = uVar13 ^ 0xb8196c271a2d6752;
        uVar8 = uVar8 ^ 0xdcb3cd90c92f9903;
        uStack184 = 0xb7fb3845be9ae9db;
        goto LAB_140017797;
      }
      if (uVar2 == 0x3e518e3f) {
        uVar13 = uVar13 ^ 0xe922574bfc8a24b3;
        uStack184 = CONCAT44(uStack184._4_4_,0xd7ea1e5c);
        uVar8 = uVar8 ^ 0xcfd3748942aee600;
        goto LAB_140017797;
      }
LAB_1400199fc:
      uVar8 = 0xe8771e154c640dfa;
      uVar13 = 0xe672244445351653;
      if (uVar6 != 0) {
        uVar6 = *DAT_140033a38;
        if (uVar6 != 0) {
LAB_140024b6c:
          uVar8 = uVar8 * uVar13;
          uVar2 = uVar8 >> 0x20;
          if (uVar2 < 0x51de30d4) {
            if (uVar2 == 0x51de30d3) {
              uVar13 = uVar13 ^ 0x846c7d70f4f37fdf;
              uStack184 = CONCAT44(uStack184._4_4_,0xe1402562);
              uVar8 = uVar8 ^ 0x8089ed2e1786a777;
              goto LAB_140024b6c;
            }
            if (uVar2 == 0xc26f225) {
              uStack184 = CONCAT44(uStack184._4_4_,0xe6c32932);
              uVar8 = uVar8 ^ 0x802262f2f7f6b7d6;
              uVar13 = uVar13 ^ 0xc3ebe04c86cfa87;
              goto LAB_140024b6c;
            }
            if (uVar2 == 0xeab0163) {
              uStack184 = CONCAT44(uStack184._4_4_,0xb18ea8d4);
              uVar8 = uVar8 ^ 0x4035c700a357c4a1;
              uVar13 = uVar13 ^ 0x5279b661f177655e;
              uVar6 = (uVar6 ^ uVar6 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
              goto LAB_140024b6c;
            }
            if (uVar2 == 0x13848c57) {
              uStack184 = 0x3d8b3e4a950dc18c;
              uVar13 = uVar13 ^ 0xbf881c02b60c544e;
              uVar2 = 0xc9fc45a202d50e39;
            }
            else {
              if (uVar2 == 0x1e4fead0) {
                uVar6 = uVar6 ^ uVar6 >> 8;
                uVar13 = uVar13 ^ 0x9e9485da4b6a2f63;
                uVar6 = uVar6 ^ uVar6 >> 0x10;
                uVar2 = 0xe4fa16fd6e3641b8;
              }
              else {
                if (uVar2 == 0x2f13b533) {
                  uVar8 = uVar8 ^ 0x4995639dbdda3ea2;
                  uVar6 = uVar6 ^ uVar6 >> 0x32;
                  uVar2 = 0x28edf07d592418c4;
                  goto LAB_14001ee66;
                }
                if (uVar2 != 0x3c29a67a) {
                  if (uVar2 == 0x3c98729b) {
                    uVar13 = uVar13 ^ 0xb8196c271a2d6752;
                    uVar8 = uVar8 ^ 0xdcb3cd90c92f9903;
                    uStack184 = 0xb7fb3845be9ae9db;
                    goto LAB_140024b6c;
                  }
                  if (uVar2 == 0x3e518e3f) {
                    uVar13 = uVar13 ^ 0xe922574bfc8a24b3;
                    uStack184 = CONCAT44(uStack184._4_4_,0xd7ea1e5c);
                    uVar2 = 0xcfd3748942aee600;
                    goto LAB_14001ef0a;
                  }
                  goto LAB_140025b42;
                }
                uVar13 = uVar13 ^ 0x47162c33a6e660de;
                uVar6 = uVar6 * -0x36849056a20af79f;
                uVar2 = 0xfe37ea63c2b46731;
              }
            }
LAB_14001ef0a:
            uVar8 = uVar8 ^ uVar2;
            goto LAB_140024b6c;
          }
          if (uVar2 == 0x5bb4d17c) {
            uVar13 = uVar13 ^ 0x2a4b5db12c5f626c;
            uVar8 = uVar8 ^ 0x44fbdf578767dc29;
            uVar6 = uVar6 * *(longlong *)(DAT_14002903b + 7);
            uVar6 = uVar6 ^ uVar6 >> 0x19;
            goto LAB_140024b6c;
          }
          if (uVar2 == 0x810360b0) {
            uVar6 = uVar6 * 0x140000000;
            uVar8 = uVar8 ^ 0xa5e7ed2fd9999928;
            uVar2 = 0xc6bb870059a90a57;
          }
          else {
            if (uVar2 != 0x9c1bb969) {
              if (uVar2 == 0xa23a01ae) {
                uVar13 = uVar13 ^ 0xae090ffc056af8df;
                uVar6 = uVar6 ^ uVar6 >> 0x20;
                uVar2 = 0x69f9067514d7ac03;
              }
              else {
                if (uVar2 != 0xc5133c5b) {
                  if (uVar2 == 0xd81c49d5) {
                    uStack184 = CONCAT44(uStack184._4_4_,0x3b1c8ee1);
                    uVar6 = uVar6 * -0x4e0593e00239cd71 ^ uVar6 * -0x4e0593e00239cd71 >> 1;
                    uVar6 = uVar6 ^ uVar6 >> 2;
                    uVar8 = uVar8 ^ 0xc56221c259c00386;
                    uVar6 = uVar6 ^ uVar6 >> 4;
                    uVar2 = 0x1449db77b240702b;
                    goto LAB_14001ee66;
                  }
                  if (uVar2 != 0xf7d87696) goto LAB_140025b42;
                  uVar13 = uVar13 ^ 0x419036fa5f372cae;
                  uVar8 = uVar8 ^ 0x6fb8a2372741bd03;
                  uVar6 = uVar6 ^ 0x140000000;
                  goto LAB_140024b6c;
                }
                uStack184 = CONCAT44(uStack184._4_4_,0xf044b342);
                uVar13 = uVar13 ^ 0xfdd12451b89bcf8d;
                uVar6 = uVar6 ^ 0x140000000 ^ uVar6 >> 0x25;
                uVar2 = 0x71366801cec3205f;
              }
              goto LAB_14001ef0a;
            }
            uVar6 = uVar6 * 0x140000000;
            uVar8 = uVar8 ^ 0xbf9c50b86ef16d1a;
            uVar2 = 0xbb5b3c9b54c80a1c;
          }
LAB_14001ee66:
          uVar13 = uVar13 ^ uVar2;
          goto LAB_140024b6c;
        }
LAB_140025b42:
        ObUnRegisterCallbacks(uVar6);
        *DAT_140033a38 = 0;
        DAT_140033a38[1] = 0;
      }
    }
    ExFreePoolWithTag(DAT_140033a38);
    DAT_140033a38 = (ulonglong *)0x0;
  }
  if (DAT_140033a28 != 0) {
    ExFreePoolWithTag();
    DAT_140033a28 = 0;
  }
  if (DAT_140033a40 != 0) {
    ExFreePoolWithTag();
    DAT_140033a40 = 0;
  }
  if (DAT_140033a80 != 0) {
    ExFreePoolWithTag();
    DAT_140033a80 = 0;
  }
  uVar1 = 0xaefabdc0;
  uVar4 = 0xd5986ac8;
  uStack160 = uStack160 & 0xffffffff00000000 | (ulonglong)uStack58;
  uStack168 = uStack168 & 0xffffffff00000000 | (ulonglong)uStack62;
  uStack184 = uStack184 & 0xffffffff00000000;
  uStack128 = uStack128 & 0xffffffff00000000 | (ulonglong)uStack72;
  uStack136 = uStack136 & 0xffffffff00000000 | (ulonglong)uStack86;
  uStack152 = uStack152 & 0xffffffff00000000 | (ulonglong)(uStack82 >> 0x10);
  uStack144 = uStack144 & 0xffffffff00000000 | (ulonglong)uStack88;
  uVar17 = uStack76;
  uVar16 = uStack70;
  uVar19 = uStack56;
  uVar18 = uStack60;
  uVar20 = uStack66;
  uVar9 = uStack78;
  uVar11 = uStack84;
  uVar7 = uStack54;
  uVar15 = uStack64;
  uVar14 = uStack68;
  uVar10 = uStack74;
  do {
    if (uVar1 < 0x98942018) {
      if (uVar1 == 0x98942017) {
        uVar11 = 0x8652;
        uVar18 = 0x272f;
        uStack84 = 0x8652;
        uVar4 = 0xaa994532;
        uStack60 = 0x272f;
      }
      else {
        if (uVar1 < 0x3732efe4) {
          if (uVar1 == 0x3732efe3) {
            uStack58 = (ushort)uStack160 ^ 0x683c;
            uStack160 = uStack160 & 0xffffffff00000000 | (ulonglong)uStack58;
            uStack86 = (ushort)uStack136 ^ 0xee25;
            uStack136 = uStack136 & 0xffffffff00000000 | (ulonglong)uStack86;
            uStack184 = CONCAT44(uStack184._4_4_,0xd47b);
            uStack88 = (ushort)uStack144 ^ 0xd47b;
            uStack144 = uStack144 & 0xffffffff00000000 | (ulonglong)uStack88;
            uVar4 = 0x1a2ebb80;
          }
          else {
            if (uVar1 == 0x75641ba) {
              uVar16 = 0xd25;
              uVar4 = 0x8f1196c6;
              uStack70 = 0xd25;
            }
            else {
              if (uVar1 == 0xcd65246) {
                uVar20 = 0xdd8b;
                uVar4 = 0x265a3de0;
                uStack66 = 0xdd8b;
              }
              else {
                if (uVar1 == 0x2a8c6fa6) {
                  uVar17 = 0x1638;
                  uVar4 = 0xb92cada2;
                  uStack76 = 0x1638;
                }
                else {
                  if (uVar1 == 0x2d1c5463) {
                    uVar9 = uVar9 ^ 0xc26;
                    uStack82 = (uStack82 & 0xffff0000 | (uint)(ushort)uStack82) ^ 0xb8e2;
                    uVar4 = 0xc55ecaff;
                    uStack82._0_2_ = (ushort)uStack82 ^ 0xb8e2;
                    uStack78 = uVar9;
                  }
                  else {
                    if (uVar1 == 0x320d6525) {
                      uVar4 = 0x82078f59;
                      uStack64 = 0xa30;
                      uVar15 = 0xa30;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar1 == 0x54ba941f) {
            uVar7 = 0xaa24;
            uVar4 = 0x53ecd5a5;
            uStack54 = 0xaa24;
          }
          else {
            if (uVar1 == 0x6b00524d) {
              uVar20 = uVar20 ^ 0xddd7;
              uStack72 = (ushort)uStack128 ^ 0x2e30;
              uStack128 = uStack128 & 0xffffffff00000000 | (ulonglong)uStack72;
              uStack184 = uStack184 & 0xffffffff00000000;
              uStack62 = (ushort)uStack168 ^ 0xcdc5;
              uStack168 = uStack168 & 0xffffffff00000000 | (ulonglong)uStack62;
              uVar4 = 0x88a56d84;
              uStack66 = uVar20;
            }
            else {
              if (uVar1 == 0x8847d77c) {
                uVar19 = 0x3a43;
                uStack136 = CONCAT44(uStack136._4_4_,0xee61);
                uStack86 = 0xee61;
                uStack128 = CONCAT44(uStack128._4_4_,0x2e53);
                uStack72 = 0x2e53;
                uVar4 = 0x128ec922;
                uStack56 = 0x3a43;
              }
              else {
                if (uVar1 == 0x93a0c204) {
                  uVar9 = 0xc43;
                  uVar4 = 0x6eee7d2b;
                  uStack78 = 0xc43;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar1 == 0x9a0ce384) {
        uStack68 = uVar14 ^ 0x54ec;
        uStack54 = uVar7 ^ 0xaa24;
        uStack84 = uVar11 ^ 0x863d;
        break;
      }
      if (uVar1 == 0x9ac91e5e) {
        uStack74 = 0xb94a;
        uVar4 = 0x25d3e49;
        uVar10 = uStack74;
      }
      else {
        if (uVar1 == 0xaefabdc0) {
          uStack82 = 0x971db891;
          uStack152 = CONCAT44(uStack152._4_4_,0x971d);
          uStack82._0_2_ = 0xb891;
          uStack144 = CONCAT44(uStack144._4_4_,0xd427);
          uStack88 = 0xd427;
          uVar4 = 0xfa4029df;
        }
        else {
          if (uVar1 == 0xb00aea7c) {
            uStack168 = CONCAT44(uStack168._4_4_,0xcdb0);
            uStack62 = 0xcdb0;
            uStack160 = CONCAT44(uStack160._4_4_,0x6849);
            uStack58 = 0x6849;
            uVar4 = 0xbcdcb83a;
          }
          else {
            if (uVar1 == 0xca7017a8) {
              uVar19 = uVar19 ^ 0x3a2e;
              uVar4 = 0xa17045e5;
              uStack56 = uVar19;
            }
            else {
              if (uVar1 == 0xe3a53fc9) {
                uVar16 = uVar16 ^ 0xd40;
                uVar4 = 0x9d6a44a;
                uStack70 = uVar16;
              }
              else {
                if (uVar1 == 0xe8429e9c) {
                  uStack74 = uVar10 ^ 0xb923;
                  uVar17 = uVar17 ^ 0x164e;
                  uVar4 = 0x724e7d18;
                  uStack76 = uVar17;
                  uVar10 = uStack74;
                }
                else {
                  if (uVar1 == 0xea739b83) {
                    uStack64 = uVar15 ^ 0xa71;
                    uVar4 = 0xdd417460;
                    uVar15 = uStack64;
                  }
                  else {
                    if (uVar1 == 0xfd4ebf2f) {
                      uStack184 = CONCAT44(uStack184._4_4_,0x9759);
                      uVar18 = uVar18 ^ 0x275d;
                      uVar14 = 0x549f;
                      uVar3 = (ushort)uStack152 ^ 0x9759;
                      uStack152 = uStack152 & 0xffffffff00000000 | (ulonglong)uVar3;
                      uStack82 = uStack82 & 0xffff | (uint)uVar3 << 0x10;
                      uVar4 = 0x373ea887;
                      uStack68 = 0x549f;
                      uStack60 = uVar18;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = uVar1 ^ uVar4;
  } while (uVar1 != 0xe9ea3d44);
  uStack176 = &uStack88;
  uStack184 = CONCAT44(uStack184._4_4_,0x220022);
  uStack176._4_4_ = (undefined4)((ulonglong)uStack176 >> 0x20);
  uStack104 = 0x220022;
  uStack100 = uStack184._4_4_;
  uStack96 = (undefined4)uStack176;
  uStack92 = uStack176._4_4_;
  IoDeleteSymbolicLink(&uStack104);
  IoDeleteDevice();
  puVar12 = &uStack88;
  for (lVar5 = 0x22; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined *)puVar12 = 0;
    puVar12 = (ushort *)((longlong)puVar12 + 1);
  }
  thunk_FUN_1400164f0(uStack48 ^ (ulonglong)auStack216);
  return;
}

