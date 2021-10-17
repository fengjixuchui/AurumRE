
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140012d43(ulonglong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  code *pcVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined *puVar17;
  ushort *puVar18;
  ulonglong uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  undefined auStack424 [32];
  undefined4 local_188;
  undefined local_180;
  undefined8 *local_178;
  undefined8 local_168;
  uint local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 uStack272;
  undefined8 local_108;
  code *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack212;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 local_c8;
  undefined4 uStack196;
  undefined4 uStack192;
  undefined4 uStack188;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack172;
  undefined4 uStack168;
  undefined4 uStack164;
  undefined8 local_a0;
  code **local_98;
  ushort local_90;
  ushort local_8e;
  ushort local_8c;
  ushort local_8a;
  ushort local_88;
  ushort local_86;
  ushort local_84;
  ushort local_82;
  ushort local_80;
  ushort local_7e;
  ushort local_78;
  ushort local_76;
  ushort local_74;
  ushort local_72;
  ushort local_70;
  ushort local_6e;
  ushort local_6c;
  ushort local_6a;
  ushort local_68;
  ushort local_66;
  ushort local_64;
  ushort local_62;
  ushort local_60;
  ushort local_5e;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  ushort local_4e;
  ushort local_4c;
  ushort local_4a;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  ushort local_42;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  ulonglong local_30;
  
  local_30 = DAT_1400339d0 ^ (ulonglong)auStack424;
  local_118 = param_1;
  DAT_140033a38 = (ulonglong *)ExAllocatePoolWithTag(0,0x18);
  DAT_140033a80 = (undefined8 *)ExAllocatePoolWithTag();
  if ((DAT_140033a38 == (ulonglong *)0x0) || (DAT_140033a80 == (undefined8 *)0x0))
  goto LAB_1400146ed;
  *DAT_140033a80 = 1;
  DAT_140033a80[1] = 0x3a3be7de9124ef3;
  DAT_140033a80[2] = 0x3d08b0e26228dc5e;
  KeInitializeSpinLock(&gAutuhSpinLock);
  if (DAT_140033a40 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)ExAllocatePoolWithTag(0);
    DAT_140033a40 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      if (DAT_140033a40 != (undefined8 *)0x0) goto LAB_14001d78b;
    }
    ExFreePoolWithTag(DAT_140033a38,0);
    ExFreePoolWithTag(DAT_140033a80,0);
    DAT_140033a38 = (ulonglong *)0x0;
    goto LAB_1400146ed;
  }
LAB_14001d78b:
  if ((DAT_140029024 == 0) || (DAT_140029006 == 0)) {
    uVar1 = rdtsc();
    uVar2 = (uint)(byte)uVar1 * 0x1b05;
    if (uVar2 < 0xd8281) {
      if (uVar2 == 0xd8280) {
        pcVar9 = FUN_1400080c0;
      }
      else {
        if (uVar2 < 0x6c141) {
          if (uVar2 == 0x6c140) {
            pcVar9 = FUN_14000d324;
          }
          else {
            if (uVar2 < 0x360a1) {
              if (uVar2 == 0x360a0) {
                pcVar9 = (code *)&DAT_1400097bc;
              }
              else {
                if (uVar2 < 0x1b051) {
                  if (uVar2 == 0x1b050) {
                    pcVar9 = FUN_140009570;
                  }
                  else {
                    if (uVar2 < 0xd829) {
                      if (uVar2 == 0xd828) {
                        pcVar9 = FUN_14000950b;
                      }
                      else {
                        if (uVar2 == 0) {
                          pcVar9 = FUN_14000ce7e;
                        }
                        else {
                          if (uVar2 == 0x1b05) {
                            pcVar9 = FUN_14000890c;
                          }
                          else {
                            if (uVar2 == 0x360a) {
                              pcVar9 = FUN_14000c509;
                            }
                            else {
                              if (uVar2 == 0x510f) {
                                pcVar9 = FUN_1400085ce;
                              }
                              else {
                                if (uVar2 == 0x6c14) {
                                  pcVar9 = FUN_14000856d;
                                }
                                else {
                                  if (uVar2 == 0x8719) {
                                    pcVar9 = FUN_14000d53a;
                                  }
                                  else {
                                    if (uVar2 == 0xa21e) {
                                      pcVar9 = FUN_140008806;
                                    }
                                    else {
                                      if (uVar2 != 0xbd23) goto LAB_14001be86;
                                      pcVar9 = FUN_14000ae87;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (uVar2 == 0xf32d) {
                        pcVar9 = (code *)&DAT_14000d7ad;
                      }
                      else {
                        if (uVar2 == 0x10e32) {
                          pcVar9 = FUN_140009fad;
                        }
                        else {
                          if (uVar2 == 0x12937) {
                            pcVar9 = FUN_14000b907;
                          }
                          else {
                            if (uVar2 == 0x1443c) {
                              pcVar9 = FUN_14000baaf;
                            }
                            else {
                              if (uVar2 == 0x15f41) {
                                pcVar9 = FUN_140009059;
                              }
                              else {
                                if (uVar2 == 0x17a46) {
                                  pcVar9 = FUN_140007e74;
                                }
                                else {
                                  if (uVar2 != 0x1954b) goto LAB_14001be86;
                                  pcVar9 = FUN_14000b577;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 < 0x28879) {
                    if (uVar2 == 0x28878) {
                      pcVar9 = FUN_14000d475;
                    }
                    else {
                      if (uVar2 == 0x1cb55) {
                        pcVar9 = FUN_14000a68c;
                      }
                      else {
                        if (uVar2 == 0x1e65a) {
                          pcVar9 = FUN_14000c620;
                        }
                        else {
                          if (uVar2 == 0x2015f) {
                            pcVar9 = FUN_14000c732;
                          }
                          else {
                            if (uVar2 == 0x21c64) {
                              pcVar9 = FUN_140009767;
                            }
                            else {
                              if (uVar2 == 0x23769) {
                                pcVar9 = FUN_14000c567;
                              }
                              else {
                                if (uVar2 == 0x2526e) {
                                  pcVar9 = FUN_14000afed;
                                }
                                else {
                                  if (uVar2 != 0x26d73) goto LAB_14001be86;
                                  pcVar9 = FUN_14000d18b;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x2a37d) {
                      pcVar9 = FUN_1400096a1;
                    }
                    else {
                      if (uVar2 == 0x2be82) {
                        pcVar9 = (code *)&DAT_14000bcfa;
                      }
                      else {
                        if (uVar2 == 0x2d987) {
                          pcVar9 = FUN_14000c0ac;
                        }
                        else {
                          if (uVar2 == 0x2f48c) {
                            pcVar9 = FUN_14000cbd0;
                          }
                          else {
                            if (uVar2 == 0x30f91) {
                              pcVar9 = FUN_140008ee8;
                            }
                            else {
                              if (uVar2 == 0x32a96) {
                                pcVar9 = FUN_140009647;
                              }
                              else {
                                if (uVar2 != 0x3459b) goto LAB_14001be86;
                                pcVar9 = (code *)&DAT_140007d68;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x510f1) {
                if (uVar2 == 0x510f0) {
                  pcVar9 = FUN_14000a6fd;
                }
                else {
                  if (uVar2 < 0x438c9) {
                    if (uVar2 == 0x438c8) {
                      pcVar9 = FUN_140007fdd;
                    }
                    else {
                      if (uVar2 == 0x37ba5) {
                        pcVar9 = FUN_140007a01;
                      }
                      else {
                        if (uVar2 == 0x396aa) {
                          pcVar9 = FUN_14000c4aa;
                        }
                        else {
                          if (uVar2 == 0x3b1af) {
                            pcVar9 = FUN_14000d2bf;
                          }
                          else {
                            if (uVar2 == 0x3ccb4) {
                              pcVar9 = FUN_14000cb75;
                            }
                            else {
                              if (uVar2 == 0x3e7b9) {
                                pcVar9 = FUN_14000ce29;
                              }
                              else {
                                if (uVar2 == 0x402be) {
                                  pcVar9 = FUN_140009103;
                                }
                                else {
                                  if (uVar2 != 0x41dc3) goto LAB_14001be86;
                                  pcVar9 = (code *)&DAT_14000b34b;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x453cd) {
                      pcVar9 = FUN_14000b5df;
                    }
                    else {
                      if (uVar2 == 0x46ed2) {
                        pcVar9 = FUN_140007936;
                      }
                      else {
                        if (uVar2 == 0x489d7) {
                          pcVar9 = FUN_14000c6e5;
                        }
                        else {
                          if (uVar2 == 0x4a4dc) {
                            pcVar9 = FUN_14000bff4;
                          }
                          else {
                            if (uVar2 == 0x4bfe1) {
                              pcVar9 = FUN_1400084fc;
                            }
                            else {
                              if (uVar2 == 0x4dae6) {
                                pcVar9 = FUN_14000c68c;
                              }
                              else {
                                if (uVar2 != 0x4f5eb) goto LAB_14001be86;
                                pcVar9 = FUN_14000d767;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x5e919) {
                  if (uVar2 == 0x5e918) {
                    pcVar9 = (code *)&DAT_14000a00f;
                  }
                  else {
                    if (uVar2 == 0x52bf5) {
                      pcVar9 = FUN_140008c6f;
                    }
                    else {
                      if (uVar2 == 0x546fa) {
                        pcVar9 = FUN_14000900c;
                      }
                      else {
                        if (uVar2 == 0x561ff) {
                          pcVar9 = FUN_14000d661;
                        }
                        else {
                          if (uVar2 == 0x57d04) {
                            pcVar9 = FUN_14000aad8;
                          }
                          else {
                            if (uVar2 == 0x59809) {
                              pcVar9 = FUN_1400078c6;
                            }
                            else {
                              if (uVar2 == 0x5b30e) {
                                pcVar9 = (code *)&LAB_14000a5c6;
                              }
                              else {
                                if (uVar2 != 0x5ce13) goto LAB_14001be86;
                                pcVar9 = FUN_140009e39;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x6041d) {
                    pcVar9 = FUN_14000b2e0;
                  }
                  else {
                    if (uVar2 == 0x61f22) {
                      pcVar9 = FUN_14000d70b;
                    }
                    else {
                      if (uVar2 == 0x63a27) {
                        pcVar9 = FUN_1400093a0;
                      }
                      else {
                        if (uVar2 == 0x6552c) {
                          pcVar9 = FUN_14000d116;
                        }
                        else {
                          if (uVar2 == 0x67031) {
                            pcVar9 = FUN_14000c29c;
                          }
                          else {
                            if (uVar2 == 0x68b36) {
                              pcVar9 = FUN_14000b0bc;
                            }
                            else {
                              if (uVar2 != 0x6a63b) goto LAB_14001be86;
                              pcVar9 = FUN_14000998a;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0xa21e1) {
            if (uVar2 == 0xa21e0) {
              pcVar9 = FUN_140008117;
            }
            else {
              if (uVar2 < 0x87191) {
                if (uVar2 == 0x87190) {
                  pcVar9 = FUN_14000abf3;
                }
                else {
                  if (uVar2 < 0x79969) {
                    if (uVar2 == 0x79968) {
                      pcVar9 = FUN_14000b280;
                    }
                    else {
                      if (uVar2 == 0x6dc45) {
                        pcVar9 = FUN_1400095d6;
                      }
                      else {
                        if (uVar2 == 0x6f74a) {
                          pcVar9 = FUN_140009cba;
                        }
                        else {
                          if (uVar2 == 0x7124f) {
                            pcVar9 = FUN_14000922f;
                          }
                          else {
                            if (uVar2 == 0x72d54) {
                              pcVar9 = FUN_14000d873;
                            }
                            else {
                              if (uVar2 == 0x74859) {
                                pcVar9 = FUN_140009f4b;
                              }
                              else {
                                if (uVar2 == 0x7635e) {
                                  pcVar9 = FUN_14000bd6f;
                                }
                                else {
                                  if (uVar2 != 0x77e63) goto LAB_14001be86;
                                  pcVar9 = FUN_14000b73d;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x7b46d) {
                      pcVar9 = FUN_14000b4b8;
                    }
                    else {
                      if (uVar2 == 0x7cf72) {
                        pcVar9 = FUN_14000b97a;
                      }
                      else {
                        if (uVar2 == 0x7ea77) {
                          pcVar9 = FUN_14000b05e;
                        }
                        else {
                          if (uVar2 == 0x8057c) {
                            pcVar9 = FUN_14000b175;
                          }
                          else {
                            if (uVar2 == 0x82081) {
                              pcVar9 = FUN_14000b517;
                            }
                            else {
                              if (uVar2 == 0x83b86) {
                                pcVar9 = FUN_14000a9ae;
                              }
                              else {
                                if (uVar2 != 0x8568b) goto LAB_14001be86;
                                pcVar9 = (code *)0x140007c94;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x949b9) {
                  if (uVar2 == 0x949b8) {
                    pcVar9 = FUN_14000b233;
                  }
                  else {
                    if (uVar2 == 0x88c95) {
                      pcVar9 = FUN_14000bc4e;
                    }
                    else {
                      if (uVar2 == 0x8a79a) {
                        pcVar9 = FUN_14000d252;
                      }
                      else {
                        if (uVar2 == 0x8c29f) {
                          pcVar9 = FUN_14000be6f;
                        }
                        else {
                          if (uVar2 == 0x8dda4) {
                            pcVar9 = FUN_14000acff;
                          }
                          else {
                            if (uVar2 == 0x8f8a9) {
                              pcVar9 = FUN_14000c42e;
                            }
                            else {
                              if (uVar2 == 0x913ae) {
                                pcVar9 = FUN_1400093ee;
                              }
                              else {
                                if (uVar2 != 0x92eb3) goto LAB_14001be86;
                                pcVar9 = FUN_140009917;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x964bd) {
                    pcVar9 = FUN_14000817b;
                  }
                  else {
                    if (uVar2 == 0x97fc2) {
                      pcVar9 = FUN_14000a193;
                    }
                    else {
                      if (uVar2 == 0x99ac7) {
                        pcVar9 = FUN_1400098aa;
                      }
                      else {
                        if (uVar2 == 0x9b5cc) {
                          pcVar9 = FUN_140008972;
                        }
                        else {
                          if (uVar2 == 0x9d0d1) {
                            pcVar9 = FUN_14000aa7b;
                          }
                          else {
                            if (uVar2 == 0x9ebd6) {
                              pcVar9 = FUN_140009d06;
                            }
                            else {
                              if (uVar2 != 0xa06db) goto LAB_14001be86;
                              pcVar9 = FUN_14000c053;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0xbd231) {
              if (uVar2 == 0xbd230) {
                pcVar9 = FUN_140009dd0;
              }
              else {
                if (uVar2 < 0xafa09) {
                  if (uVar2 == 0xafa08) {
                    pcVar9 = FUN_14000d1fc;
                  }
                  else {
                    if (uVar2 == 0xa3ce5) {
                      pcVar9 = FUN_140008a89;
                    }
                    else {
                      if (uVar2 == 0xa57ea) {
                        pcVar9 = FUN_14000b8b3;
                      }
                      else {
                        if (uVar2 == 0xa72ef) {
                          pcVar9 = FUN_14000a200;
                        }
                        else {
                          if (uVar2 == 0xa8df4) {
                            pcVar9 = FUN_14000ccf3;
                          }
                          else {
                            if (uVar2 == 0xaa8f9) {
                              pcVar9 = FUN_14000adc5;
                            }
                            else {
                              if (uVar2 == 0xac3fe) {
                                pcVar9 = FUN_14000836b;
                              }
                              else {
                                if (uVar2 != 0xadf03) goto LAB_14001be86;
                                pcVar9 = FUN_14000c3b8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0xb150d) {
                    pcVar9 = FUN_14000bb78;
                  }
                  else {
                    if (uVar2 == 0xb3012) {
                      pcVar9 = FUN_140009169;
                    }
                    else {
                      if (uVar2 == 0xb4b17) {
                        pcVar9 = FUN_14000b6c6;
                      }
                      else {
                        if (uVar2 == 0xb661c) {
                          pcVar9 = FUN_140007a61;
                        }
                        else {
                          if (uVar2 == 0xb8121) {
                            pcVar9 = FUN_14000b79c;
                          }
                          else {
                            if (uVar2 == 0xb9c26) {
                              pcVar9 = (code *)&LAB_140008b4e;
                            }
                            else {
                              if (uVar2 != 0xbb72b) goto LAB_14001be86;
                              pcVar9 = FUN_14000b461;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0xcaa59) {
                if (uVar2 == 0xcaa58) {
                  pcVar9 = FUN_14000a7cd;
                }
                else {
                  if (uVar2 == 0xbed35) {
                    pcVar9 = FUN_14000869d;
                  }
                  else {
                    if (uVar2 == 0xc083a) {
                      pcVar9 = FUN_14000aa21;
                    }
                    else {
                      if (uVar2 == 0xc233f) {
                        pcVar9 = FUN_14000bbdb;
                      }
                      else {
                        if (uVar2 == 0xc3e44) {
                          pcVar9 = FUN_14000c858;
                        }
                        else {
                          if (uVar2 == 0xc5949) {
                            pcVar9 = FUN_14000cb16;
                          }
                          else {
                            if (uVar2 == 0xc744e) {
                              pcVar9 = FUN_14000c9f5;
                            }
                            else {
                              if (uVar2 != 0xc8f53) goto LAB_14001be86;
                              pcVar9 = FUN_14000cdcc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0xcc55d) {
                  pcVar9 = FUN_14000ac4b;
                }
                else {
                  if (uVar2 == 0xce062) {
                    pcVar9 = FUN_14000a507;
                  }
                  else {
                    if (uVar2 == 0xcfb67) {
                      pcVar9 = FUN_14000b1cb;
                    }
                    else {
                      if (uVar2 == 0xd166c) {
                        pcVar9 = FUN_1400094b4;
                      }
                      else {
                        if (uVar2 == 0xd3171) {
                          pcVar9 = FUN_14000be16;
                        }
                        else {
                          if (uVar2 == 0xd4c76) {
                            pcVar9 = FUN_14000a38a;
                          }
                          else {
                            if (uVar2 != 0xd677b) goto LAB_14001be86;
                            pcVar9 = FUN_14000a444;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar2 < 0x1443c1) {
        if (uVar2 == 0x1443c0) {
          pcVar9 = FUN_140009464;
        }
        else {
          if (uVar2 < 0x10e321) {
            if (uVar2 == 0x10e320) {
              pcVar9 = FUN_140007f77;
            }
            else {
              if (uVar2 < 0xf32d1) {
                if (uVar2 == 0xf32d0) {
                  pcVar9 = FUN_14000a758;
                }
                else {
                  if (uVar2 < 0xe5aa9) {
                    if (uVar2 == 0xe5aa8) {
                      pcVar9 = FUN_14000cc7f;
                    }
                    else {
                      if (uVar2 == 0xd9d85) {
                        pcVar9 = FUN_14000c79b;
                      }
                      else {
                        if (uVar2 == 0xdb88a) {
                          pcVar9 = FUN_14000c1d3;
                        }
                        else {
                          if (uVar2 == 0xdd38f) {
                            pcVar9 = FUN_14000ad60;
                          }
                          else {
                            if (uVar2 == 0xdee94) {
                              pcVar9 = FUN_14000863c;
                            }
                            else {
                              if (uVar2 == 0xe0999) {
                                pcVar9 = FUN_140007aba;
                              }
                              else {
                                if (uVar2 == 0xe249e) {
                                  pcVar9 = FUN_140007c41;
                                }
                                else {
                                  if (uVar2 != 0xe3fa3) goto LAB_14001be86;
                                  pcVar9 = FUN_1400091d1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0xe75ad) {
                      pcVar9 = FUN_140008d93;
                    }
                    else {
                      if (uVar2 == 0xe90b2) {
                        pcVar9 = FUN_14000d5ee;
                      }
                      else {
                        if (uVar2 == 0xeabb7) {
                          pcVar9 = FUN_140008d26;
                        }
                        else {
                          if (uVar2 == 0xec6bc) {
                            pcVar9 = FUN_140009bef;
                          }
                          else {
                            if (uVar2 == 0xee1c1) {
                              pcVar9 = FUN_1400081f3;
                            }
                            else {
                              if (uVar2 == 0xefcc6) {
                                pcVar9 = (code *)&DAT_1400088a1;
                              }
                              else {
                                if (uVar2 != 0xf17cb) goto LAB_14001be86;
                                pcVar9 = (code *)&DAT_14000d913;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x100af9) {
                  if (uVar2 == 0x100af8) {
                    pcVar9 = FUN_14000b110;
                  }
                  else {
                    if (uVar2 == 0xf4dd5) {
                      pcVar9 = FUN_1400087a5;
                    }
                    else {
                      if (uVar2 == 0xf68da) {
                        pcVar9 = FUN_14000c174;
                      }
                      else {
                        if (uVar2 == 0xf83df) {
                          pcVar9 = FUN_140008b9b;
                        }
                        else {
                          if (uVar2 == 0xf9ee4) {
                            pcVar9 = FUN_14000cc2d;
                          }
                          else {
                            if (uVar2 == 0xfb9e9) {
                              pcVar9 = FUN_14000799e;
                            }
                            else {
                              if (uVar2 == 0xfd4ee) {
                                pcVar9 = FUN_14000830a;
                              }
                              else {
                                if (uVar2 != 0xfeff3) goto LAB_14001be86;
                                pcVar9 = FUN_140008e9d;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x1025fd) {
                    pcVar9 = FUN_14000c5c2;
                  }
                  else {
                    if (uVar2 == 0x104102) {
                      pcVar9 = FUN_140007bd3;
                    }
                    else {
                      if (uVar2 == 0x105c07) {
                        pcVar9 = FUN_140009835;
                      }
                      else {
                        if (uVar2 == 0x10770c) {
                          pcVar9 = FUN_14000c34a;
                        }
                        else {
                          if (uVar2 == 0x109211) {
                            pcVar9 = FUN_140009abb;
                          }
                          else {
                            if (uVar2 == 0x10ad16) {
                              pcVar9 = FUN_140007d06;
                            }
                            else {
                              if (uVar2 != 0x10c81b) goto LAB_14001be86;
                              pcVar9 = FUN_140008757;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x129371) {
              if (uVar2 == 0x129370) {
                pcVar9 = FUN_140007b7c;
              }
              else {
                if (uVar2 < 0x11bb49) {
                  if (uVar2 == 0x11bb48) {
                    pcVar9 = FUN_140008ae2;
                  }
                  else {
                    if (uVar2 == 0x10fe25) {
                      pcVar9 = FUN_14000a274;
                    }
                    else {
                      if (uVar2 == 0x11192a) {
                        pcVar9 = FUN_140008a2c;
                      }
                      else {
                        if (uVar2 == 0x11342f) {
                          pcVar9 = FUN_140009ef8;
                        }
                        else {
                          if (uVar2 == 0x114f34) {
                            pcVar9 = FUN_14000ab26;
                          }
                          else {
                            if (uVar2 == 0x116a39) {
                              pcVar9 = FUN_1400082a8;
                            }
                            else {
                              if (uVar2 == 0x11853e) {
                                pcVar9 = FUN_14000cd6b;
                              }
                              else {
                                if (uVar2 != 0x11a043) goto LAB_14001be86;
                                pcVar9 = FUN_140009b24;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x11d64d) {
                    pcVar9 = FUN_14000aee4;
                  }
                  else {
                    if (uVar2 == 0x11f152) {
                      pcVar9 = FUN_14000c2ee;
                    }
                    else {
                      if (uVar2 == 0x120c57) {
                        pcVar9 = FUN_14000843a;
                      }
                      else {
                        if (uVar2 == 0x12275c) {
                          pcVar9 = FUN_14000b9ee;
                        }
                        else {
                          if (uVar2 == 0x124261) {
                            pcVar9 = FUN_140009b7e;
                          }
                          else {
                            if (uVar2 == 0x125d66) {
                              pcVar9 = FUN_140008497;
                            }
                            else {
                              if (uVar2 != 0x12786b) goto LAB_14001be86;
                              pcVar9 = FUN_14000a0d4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x136b99) {
                if (uVar2 == 0x136b98) {
                  pcVar9 = FUN_14000a827;
                }
                else {
                  if (uVar2 == 0x12ae75) {
                    pcVar9 = FUN_14000ba52;
                  }
                  else {
                    if (uVar2 == 0x12c97a) {
                      pcVar9 = FUN_14000bb03;
                    }
                    else {
                      if (uVar2 == 0x12e47f) {
                        pcVar9 = FUN_14000d59e;
                      }
                      else {
                        if (uVar2 == 0x12ff84) {
                          pcVar9 = FUN_14000a141;
                        }
                        else {
                          if (uVar2 == 0x131a89) {
                            pcVar9 = FUN_1400083c8;
                          }
                          else {
                            if (uVar2 == 0x13358e) {
                              pcVar9 = FUN_14000824d;
                            }
                            else {
                              if (uVar2 != 0x135093) goto LAB_14001be86;
                              pcVar9 = FUN_14000ae33;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x13869d) {
                  pcVar9 = FUN_14000d8c4;
                }
                else {
                  if (uVar2 == 0x13a1a2) {
                    pcVar9 = FUN_14000cf51;
                  }
                  else {
                    if (uVar2 == 0x13bca7) {
                      pcVar9 = FUN_140007e27;
                    }
                    else {
                      if (uVar2 == 0x13d7ac) {
                        pcVar9 = FUN_14000b652;
                      }
                      else {
                        if (uVar2 == 0x13f2b1) {
                          pcVar9 = FUN_140008dfc;
                        }
                        else {
                          if (uVar2 == 0x140db6) {
                            pcVar9 = FUN_14000bf86;
                          }
                          else {
                            if (uVar2 != 0x1428bb) goto LAB_14001be86;
                            pcVar9 = FUN_140008cc9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (uVar2 < 0x17a461) {
          if (uVar2 == 0x17a460) {
            pcVar9 = FUN_14000c7fe;
          }
          else {
            if (uVar2 < 0x15f411) {
              if (uVar2 == 0x15f410) {
                pcVar9 = (code *)&DAT_14000d6b2;
              }
              else {
                if (uVar2 < 0x151be9) {
                  if (uVar2 == 0x151be8) {
                    pcVar9 = FUN_14000cff4;
                  }
                  else {
                    if (uVar2 == 0x145ec5) {
                      pcVar9 = FUN_14000af94;
                    }
                    else {
                      if (uVar2 == 0x1479ca) {
                        pcVar9 = FUN_14000a563;
                      }
                      else {
                        if (uVar2 == 0x1494cf) {
                          pcVar9 = FUN_1400096fe;
                        }
                        else {
                          if (uVar2 == 0x14afd4) {
                            pcVar9 = FUN_14000ab7b;
                          }
                          else {
                            if (uVar2 == 0x14cad9) {
                              pcVar9 = FUN_140007b07;
                            }
                            else {
                              if (uVar2 == 0x14e5de) {
                                pcVar9 = FUN_14000a4a8;
                              }
                              else {
                                if (uVar2 != 0x1500e3) goto LAB_14001be86;
                                pcVar9 = FUN_14000a2c7;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x1536ed) {
                    pcVar9 = (code *)&DAT_14000a615;
                  }
                  else {
                    if (uVar2 == 0x1551f2) {
                      pcVar9 = FUN_14000b7ea;
                    }
                    else {
                      if (uVar2 == 0x156cf7) {
                        pcVar9 = FUN_14000bec2;
                      }
                      else {
                        if (uVar2 == 0x1587fc) {
                          pcVar9 = FUN_14000d4c9;
                        }
                        else {
                          if (uVar2 == 0x15a301) {
                            pcVar9 = FUN_14000cfa7;
                          }
                          else {
                            if (uVar2 == 0x15be06) {
                              pcVar9 = FUN_14000c10b;
                            }
                            else {
                              if (uVar2 != 0x15d90b) goto LAB_14001be86;
                              pcVar9 = FUN_14000bcb3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x16cc39) {
                if (uVar2 == 0x16cc38) {
                  pcVar9 = FUN_14000aca2;
                }
                else {
                  if (uVar2 == 0x160f15) {
                    pcVar9 = FUN_14000b3a6;
                  }
                  else {
                    if (uVar2 == 0x162a1a) {
                      pcVar9 = FUN_140009290;
                    }
                    else {
                      if (uVar2 == 0x16451f) {
                        pcVar9 = (code *)&LAB_14000bdbd;
                      }
                      else {
                        if (uVar2 == 0x166024) {
                          pcVar9 = FUN_140009a4e;
                        }
                        else {
                          if (uVar2 == 0x167b29) {
                            pcVar9 = FUN_14000b842;
                          }
                          else {
                            if (uVar2 == 0x16962e) {
                              pcVar9 = FUN_140007ed3;
                            }
                            else {
                              if (uVar2 != 0x16b133) goto LAB_14001be86;
                              pcVar9 = FUN_140007f27;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x16e73d) {
                  pcVar9 = FUN_14000a936;
                }
                else {
                  if (uVar2 == 0x170242) {
                    pcVar9 = (code *)&LAB_14000cedf;
                  }
                  else {
                    if (uVar2 == 0x171d47) {
                      pcVar9 = (code *)&LAB_14000bf13;
                    }
                    else {
                      if (uVar2 == 0x17384c) {
                        pcVar9 = FUN_140009c57;
                      }
                      else {
                        if (uVar2 == 0x175351) {
                          pcVar9 = FUN_1400092e9;
                        }
                        else {
                          if (uVar2 == 0x176e56) {
                            pcVar9 = (code *)&DAT_14000d0c6;
                          }
                          else {
                            if (uVar2 != 0x17895b) goto LAB_14001be86;
                            pcVar9 = FUN_1400090ae;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0x1954b1) {
            if (uVar2 == 0x1954b0) {
              pcVar9 = FUN_14000d062;
            }
            else {
              if (uVar2 < 0x187c89) {
                if (uVar2 == 0x187c88) {
                  pcVar9 = FUN_14000a3e5;
                }
                else {
                  if (uVar2 == 0x17bf65) {
                    pcVar9 = FUN_14000a07c;
                  }
                  else {
                    if (uVar2 == 0x17da6a) {
                      pcVar9 = FUN_140008f39;
                    }
                    else {
                      if (uVar2 == 0x17f56f) {
                        pcVar9 = FUN_14000a336;
                      }
                      else {
                        if (uVar2 == 0x181074) {
                          pcVar9 = (code *)&DAT_140008852;
                        }
                        else {
                          if (uVar2 == 0x182b79) {
                            pcVar9 = FUN_14000933e;
                          }
                          else {
                            if (uVar2 == 0x18467e) {
                              pcVar9 = FUN_14000c90f;
                            }
                            else {
                              if (uVar2 != 0x186183) goto LAB_14001be86;
                              pcVar9 = FUN_14000a882;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x18978d) {
                  pcVar9 = FUN_140007ddf;
                }
                else {
                  if (uVar2 == 0x18b292) {
                    pcVar9 = FUN_14000af43;
                  }
                  else {
                    if (uVar2 == 0x18cd97) {
                      pcVar9 = (code *)&DAT_140008045;
                    }
                    else {
                      if (uVar2 == 0x18e89c) {
                        pcVar9 = (code *)&DAT_14000c8a5;
                      }
                      else {
                        if (uVar2 == 0x1903a1) {
                          pcVar9 = FUN_1400099f9;
                        }
                        else {
                          if (uVar2 == 0x191ea6) {
                            pcVar9 = FUN_140009e8d;
                          }
                          else {
                            if (uVar2 != 0x1939ab) goto LAB_14001be86;
                            pcVar9 = FUN_140008708;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x1a2cd9) {
              if (uVar2 == 0x1a2cd8) {
LAB_14001be86:
                pcVar9 = FUN_14000d3a1;
              }
              else {
                if (uVar2 == 0x196fb5) {
                  pcVar9 = FUN_140008fa0;
                }
                else {
                  if (uVar2 == 0x198aba) {
                    pcVar9 = FUN_140008c01;
                  }
                  else {
                    if (uVar2 == 0x19a5bf) {
                      pcVar9 = FUN_14000d40c;
                    }
                    else {
                      if (uVar2 == 0x19c0c4) {
                        pcVar9 = FUN_14000d803;
                      }
                      else {
                        if (uVar2 == 0x19dbc9) {
                          pcVar9 = FUN_14000c23e;
                        }
                        else {
                          if (uVar2 == 0x19f6ce) {
                            pcVar9 = FUN_14000ca6b;
                          }
                          else {
                            if (uVar2 != 0x1a11d3) goto LAB_14001be86;
                            pcVar9 = FUN_1400089c5;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 == 0x1a47dd) {
                pcVar9 = FUN_14000b404;
              }
              else {
                if (uVar2 == 0x1a62e2) {
                  pcVar9 = FUN_14000d97b;
                }
                else {
                  if (uVar2 == 0x1a7de7) {
                    pcVar9 = FUN_14000c981;
                  }
                  else {
                    if (uVar2 == 0x1a98ec) {
                      pcVar9 = FUN_14000cabf;
                    }
                    else {
                      if (uVar2 == 0x1ab3f1) {
                        pcVar9 = FUN_140009d76;
                      }
                      else {
                        if (uVar2 == 0x1acef6) {
                          pcVar9 = FUN_140008e49;
                        }
                        else {
                          if (uVar2 != 0x1ae9fb) goto LAB_14001be86;
                          pcVar9 = FUN_14000a8da;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    LOCK();
    DAT_140029024 =
         DAT_140029024 ^ (ulonglong)(DAT_140029024 == 0) * (DAT_140029024 ^ (ulonglong)pcVar9);
    uVar2 = (uint)(byte)uVar1 * 0x1a93;
    if (uVar2 < 0xd4981) {
      if (uVar2 == 0xd4980) {
        pcVar9 = FUN_140008083;
      }
      else {
        if (uVar2 < 0x6a4c1) {
          if (uVar2 == 0x6a4c0) {
            pcVar9 = FUN_14000d2f2;
          }
          else {
            if (uVar2 < 0x35261) {
              if (uVar2 == 0x35260) {
                pcVar9 = (code *)&DAT_140009786;
              }
              else {
                if (uVar2 < 0x1a931) {
                  if (uVar2 == 0x1a930) {
                    pcVar9 = FUN_140009538;
                  }
                  else {
                    if (uVar2 < 0xd499) {
                      if (uVar2 == 0xd498) {
                        pcVar9 = FUN_1400094d2;
                      }
                      else {
                        if (uVar2 == 0) {
                          pcVar9 = FUN_14000ce48;
                        }
                        else {
                          if (uVar2 == 0x1a93) {
                            pcVar9 = FUN_1400088d7;
                          }
                          else {
                            if (uVar2 == 0x3526) {
                              pcVar9 = (code *)&DAT_14000c4ca;
                            }
                            else {
                              if (uVar2 == 0x4fb9) {
                                pcVar9 = FUN_140008594;
                              }
                              else {
                                if (uVar2 == 0x6a4c) {
                                  pcVar9 = FUN_140008533;
                                }
                                else {
                                  if (uVar2 == 0x84df) {
                                    pcVar9 = FUN_14000d4ff;
                                  }
                                  else {
                                    if (uVar2 == 0x9f72) {
                                      pcVar9 = (code *)&DAT_1400087c8;
                                    }
                                    else {
                                      if (uVar2 != 0xba05) goto LAB_14000f09c;
                                      pcVar9 = (code *)&LAB_14000ae53;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (uVar2 == 0xef2b) {
                        pcVar9 = FUN_14000d785;
                      }
                      else {
                        if (uVar2 == 0x109be) {
                          pcVar9 = FUN_140009f73;
                        }
                        else {
                          if (uVar2 == 0x12451) {
                            pcVar9 = (code *)&DAT_14000b8d2;
                          }
                          else {
                            if (uVar2 == 0x13ee4) {
                              pcVar9 = FUN_14000ba78;
                            }
                            else {
                              if (uVar2 == 0x15977) {
                                pcVar9 = (code *)&DAT_140009028;
                              }
                              else {
                                if (uVar2 == 0x1740a) {
                                  pcVar9 = (code *)&DAT_140007e47;
                                }
                                else {
                                  if (uVar2 != 0x18e9d) goto LAB_14000f09c;
                                  pcVar9 = (code *)&LAB_14000b537;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 < 0x27dc9) {
                    if (uVar2 == 0x27dc8) {
                      pcVar9 = FUN_14000d43f;
                    }
                    else {
                      if (uVar2 == 0x1c3c3) {
                        pcVar9 = FUN_14000a655;
                      }
                      else {
                        if (uVar2 == 0x1de56) {
                          pcVar9 = FUN_14000c5ee;
                        }
                        else {
                          if (uVar2 == 0x1f8e9) {
                            pcVar9 = FUN_14000c705;
                          }
                          else {
                            if (uVar2 == 0x2137c) {
                              pcVar9 = FUN_14000972a;
                            }
                            else {
                              if (uVar2 == 0x22e0f) {
                                pcVar9 = (code *)&DAT_14000c529;
                              }
                              else {
                                if (uVar2 == 0x248a2) {
                                  pcVar9 = (code *)&DAT_14000afb3;
                                }
                                else {
                                  if (uVar2 != 0x26335) goto LAB_14000f09c;
                                  pcVar9 = FUN_14000d150;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x2985b) {
                      pcVar9 = (code *)&LAB_140009663;
                    }
                    else {
                      if (uVar2 == 0x2b2ee) {
                        pcVar9 = FUN_14000bcd2;
                      }
                      else {
                        if (uVar2 == 0x2cd81) {
                          pcVar9 = (code *)&LAB_14000c073;
                        }
                        else {
                          if (uVar2 == 0x2e814) {
                            pcVar9 = FUN_14000cb95;
                          }
                          else {
                            if (uVar2 == 0x302a7) {
                              pcVar9 = (code *)&LAB_140008eba;
                            }
                            else {
                              if (uVar2 == 0x31d3a) {
                                pcVar9 = FUN_140009613;
                              }
                              else {
                                if (uVar2 != 0x337cd) goto LAB_14000f09c;
                                pcVar9 = FUN_140007d37;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x4fb91) {
                if (uVar2 == 0x4fb90) {
                  pcVar9 = FUN_14000a6c6;
                }
                else {
                  if (uVar2 < 0x426f9) {
                    if (uVar2 == 0x426f8) {
                      pcVar9 = FUN_140007fad;
                    }
                    else {
                      if (uVar2 == 0x36cf3) {
                        pcVar9 = FUN_1400079ca;
                      }
                      else {
                        if (uVar2 == 0x38786) {
                          pcVar9 = FUN_14000c46b;
                        }
                        else {
                          if (uVar2 == 0x3a219) {
                            pcVar9 = FUN_14000d280;
                          }
                          else {
                            if (uVar2 == 0x3bcac) {
                              pcVar9 = (code *)&DAT_14000cb3b;
                            }
                            else {
                              if (uVar2 == 0x3d73f) {
                                pcVar9 = FUN_14000cdea;
                              }
                              else {
                                if (uVar2 == 0x3f1d2) {
                                  pcVar9 = (code *)&DAT_1400090cd;
                                }
                                else {
                                  if (uVar2 != 0x40c65) goto LAB_14000f09c;
                                  pcVar9 = FUN_14000b31d;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x4418b) {
                      pcVar9 = FUN_14000b5a9;
                    }
                    else {
                      if (uVar2 == 0x45c1e) {
                        pcVar9 = FUN_1400078fe;
                      }
                      else {
                        if (uVar2 == 0x476b1) {
                          pcVar9 = (code *)&DAT_14000c6ac;
                        }
                        else {
                          if (uVar2 == 0x49144) {
                            pcVar9 = FUN_14000bfb5;
                          }
                          else {
                            if (uVar2 == 0x4abd7) {
                              pcVar9 = FUN_1400084c4;
                            }
                            else {
                              if (uVar2 == 0x4c66a) {
                                pcVar9 = FUN_14000c652;
                              }
                              else {
                                if (uVar2 != 0x4e0fd) goto LAB_14000f09c;
                                pcVar9 = FUN_14000d72b;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x5d029) {
                  if (uVar2 == 0x5d028) {
                    pcVar9 = FUN_140009fd9;
                  }
                  else {
                    if (uVar2 == 0x51623) {
                      pcVar9 = FUN_140008c3f;
                    }
                    else {
                      if (uVar2 == 0x530b6) {
                        pcVar9 = FUN_140008fd3;
                      }
                      else {
                        if (uVar2 == 0x54b49) {
                          pcVar9 = FUN_14000d628;
                        }
                        else {
                          if (uVar2 == 0x565dc) {
                            pcVar9 = (code *)&DAT_14000aa9b;
                          }
                          else {
                            if (uVar2 == 0x5806f) {
                              pcVar9 = FUN_14000788f;
                            }
                            else {
                              if (uVar2 == 0x59b02) {
                                pcVar9 = FUN_14000a5a0;
                              }
                              else {
                                if (uVar2 != 0x5b595) goto LAB_14000f09c;
                                pcVar9 = FUN_140009e04;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x5eabb) {
                    pcVar9 = (code *)&LAB_14000b2a0;
                  }
                  else {
                    if (uVar2 == 0x6054e) {
                      pcVar9 = (code *)&DAT_14000d6d2;
                    }
                    else {
                      if (uVar2 == 0x61fe1) {
                        pcVar9 = FUN_140009365;
                      }
                      else {
                        if (uVar2 == 0x63a74) {
                          pcVar9 = FUN_14000d0e2;
                        }
                        else {
                          if (uVar2 == 0x65507) {
                            pcVar9 = (code *)&DAT_14000c25e;
                          }
                          else {
                            if (uVar2 == 0x66f9a) {
                              pcVar9 = (code *)&DAT_14000b083;
                            }
                            else {
                              if (uVar2 != 0x68a2d) goto LAB_14000f09c;
                              pcVar9 = FUN_14000994d;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0x9f721) {
            if (uVar2 == 0x9f720) {
              pcVar9 = FUN_1400080df;
            }
            else {
              if (uVar2 < 0x84df1) {
                if (uVar2 == 0x84df0) {
                  pcVar9 = FUN_14000abb6;
                }
                else {
                  if (uVar2 < 0x77959) {
                    if (uVar2 == 0x77958) {
                      pcVar9 = (code *)&LAB_14000b250;
                    }
                    else {
                      if (uVar2 == 0x6bf53) {
                        pcVar9 = FUN_1400095a0;
                      }
                      else {
                        if (uVar2 == 0x6d9e6) {
                          pcVar9 = FUN_140009c80;
                        }
                        else {
                          if (uVar2 == 0x6f479) {
                            pcVar9 = FUN_1400091f1;
                          }
                          else {
                            if (uVar2 == 0x70f0c) {
                              pcVar9 = FUN_14000d83a;
                            }
                            else {
                              if (uVar2 == 0x7299f) {
                                pcVar9 = (code *)&LAB_140009f18;
                              }
                              else {
                                if (uVar2 == 0x74432) {
                                  pcVar9 = FUN_14000bd38;
                                }
                                else {
                                  if (uVar2 != 0x75ec5) goto LAB_14000f09c;
                                  pcVar9 = FUN_14000b6fd;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x793eb) {
                      pcVar9 = (code *)&LAB_14000b481;
                    }
                    else {
                      if (uVar2 == 0x7ae7e) {
                        pcVar9 = FUN_14000b943;
                      }
                      else {
                        if (uVar2 == 0x7c911) {
                          pcVar9 = FUN_14000b028;
                        }
                        else {
                          if (uVar2 == 0x7e3a4) {
                            pcVar9 = FUN_14000b139;
                          }
                          else {
                            if (uVar2 == 0x7fe37) {
                              pcVar9 = (code *)&DAT_14000b4db;
                            }
                            else {
                              if (uVar2 == 0x818ca) {
                                pcVar9 = FUN_14000a96f;
                              }
                              else {
                                if (uVar2 != 0x8335d) goto LAB_14000f09c;
                                pcVar9 = FUN_140007c61;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x92289) {
                  if (uVar2 == 0x92288) {
                    pcVar9 = FUN_14000b200;
                  }
                  else {
                    if (uVar2 == 0x86883) {
                      pcVar9 = FUN_14000bc10;
                    }
                    else {
                      if (uVar2 == 0x88316) {
                        pcVar9 = (code *)&DAT_14000d21c;
                      }
                      else {
                        if (uVar2 == 0x89da9) {
                          pcVar9 = FUN_14000be33;
                        }
                        else {
                          if (uVar2 == 0x8b83c) {
                            pcVar9 = (code *)&DAT_14000acc2;
                          }
                          else {
                            if (uVar2 == 0x8d2cf) {
                              pcVar9 = FUN_14000c3f8;
                            }
                            else {
                              if (uVar2 == 0x8ed62) {
                                pcVar9 = (code *)&LAB_1400093bd;
                              }
                              else {
                                if (uVar2 != 0x907f5) goto LAB_14000f09c;
                                pcVar9 = FUN_1400098d9;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x93d1b) {
                    pcVar9 = FUN_14000813d;
                  }
                  else {
                    if (uVar2 == 0x957ae) {
                      pcVar9 = (code *)&LAB_14000a161;
                    }
                    else {
                      if (uVar2 == 0x97241) {
                        pcVar9 = FUN_14000986e;
                      }
                      else {
                        if (uVar2 == 0x98cd4) {
                          pcVar9 = FUN_14000893e;
                        }
                        else {
                          if (uVar2 == 0x9a767) {
                            pcVar9 = (code *)0x14000aa3c;
                          }
                          else {
                            if (uVar2 == 0x9c1fa) {
                              pcVar9 = (code *)&DAT_140009cda;
                            }
                            else {
                              if (uVar2 != 0x9dc8d) goto LAB_14000f09c;
                              pcVar9 = FUN_14000c013;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0xba051) {
              if (uVar2 == 0xba050) {
                pcVar9 = FUN_140009d96;
              }
              else {
                if (uVar2 < 0xacbb9) {
                  if (uVar2 == 0xacbb8) {
                    pcVar9 = FUN_14000d1c1;
                  }
                  else {
                    if (uVar2 == 0xa11b3) {
                      pcVar9 = FUN_140008a55;
                    }
                    else {
                      if (uVar2 == 0xa2c46) {
                        pcVar9 = FUN_14000b87e;
                      }
                      else {
                        if (uVar2 == 0xa46d9) {
                          pcVar9 = FUN_14000a1c8;
                        }
                        else {
                          if (uVar2 == 0xa616c) {
                            pcVar9 = FUN_14000ccb9;
                          }
                          else {
                            if (uVar2 == 0xa7bff) {
                              pcVar9 = FUN_14000ad88;
                            }
                            else {
                              if (uVar2 == 0xa9692) {
                                pcVar9 = (code *)&LAB_140008330;
                              }
                              else {
                                if (uVar2 != 0xab125) goto LAB_14000f09c;
                                pcVar9 = FUN_14000c384;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0xae64b) {
                    pcVar9 = FUN_14000bb3f;
                  }
                  else {
                    if (uVar2 == 0xb00de) {
                      pcVar9 = FUN_14000912d;
                    }
                    else {
                      if (uVar2 == 0xb1b71) {
                        pcVar9 = FUN_14000b68c;
                      }
                      else {
                        if (uVar2 == 0xb3604) {
                          pcVar9 = FUN_140007a33;
                        }
                        else {
                          if (uVar2 == 0xb5097) {
                            pcVar9 = FUN_14000b76a;
                          }
                          else {
                            if (uVar2 == 0xb6b2a) {
                              pcVar9 = FUN_140008b19;
                            }
                            else {
                              if (uVar2 != 0xb85bd) goto LAB_14000f09c;
                              pcVar9 = (code *)&LAB_14000b422;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0xc74e9) {
                if (uVar2 == 0xc74e8) {
                  pcVar9 = FUN_14000a795;
                }
                else {
                  if (uVar2 == 0xbbae3) {
                    pcVar9 = FUN_14000866f;
                  }
                  else {
                    if (uVar2 == 0xbd576) {
                      pcVar9 = FUN_14000a9e4;
                    }
                    else {
                      if (uVar2 == 0xbf009) {
                        pcVar9 = (code *)&LAB_14000bb9f;
                      }
                      else {
                        if (uVar2 == 0xc0a9c) {
                          pcVar9 = (code *)&LAB_14000c81b;
                        }
                        else {
                          if (uVar2 == 0xc252f) {
                            pcVar9 = (code *)&LAB_14000cadf;
                          }
                          else {
                            if (uVar2 == 0xc3fc2) {
                              pcVar9 = FUN_14000c9be;
                            }
                            else {
                              if (uVar2 != 0xc5a55) goto LAB_14000f09c;
                              pcVar9 = FUN_14000cd95;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0xc8f7b) {
                  pcVar9 = (code *)&LAB_14000ac1a;
                }
                else {
                  if (uVar2 == 0xcaa0e) {
                    pcVar9 = (code *)&DAT_14000a4cb;
                  }
                  else {
                    if (uVar2 == 0xcc4a1) {
                      pcVar9 = FUN_14000b191;
                    }
                    else {
                      if (uVar2 == 0xcdf34) {
                        pcVar9 = (code *)&LAB_14000947d;
                      }
                      else {
                        if (uVar2 == 0xcf9c7) {
                          pcVar9 = (code *)&LAB_14000bdda;
                        }
                        else {
                          if (uVar2 == 0xd145a) {
                            pcVar9 = (code *)&DAT_14000a356;
                          }
                          else {
                            if (uVar2 != 0xd2eed) goto LAB_14000f09c;
                            pcVar9 = (code *)&LAB_14000a40a;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar2 < 0x13ee41) {
        if (uVar2 == 0x13ee40) {
          pcVar9 = FUN_140009426;
        }
        else {
          if (uVar2 < 0x109be1) {
            if (uVar2 == 0x109be0) {
              pcVar9 = FUN_140007f47;
            }
            else {
              if (uVar2 < 0xef2b1) {
                if (uVar2 == 0xef2b0) {
                  pcVar9 = (code *)&DAT_14000a71a;
                }
                else {
                  if (uVar2 < 0xe1e19) {
                    if (uVar2 == 0xe1e18) {
                      pcVar9 = (code *)&LAB_14000cc4d;
                    }
                    else {
                      if (uVar2 == 0xd6413) {
                        pcVar9 = (code *)&DAT_14000c75b;
                      }
                      else {
                        if (uVar2 == 0xd7ea6) {
                          pcVar9 = FUN_14000c19e;
                        }
                        else {
                          if (uVar2 == 0xd9939) {
                            pcVar9 = FUN_14000ad2f;
                          }
                          else {
                            if (uVar2 == 0xdb3cc) {
                              pcVar9 = FUN_140008607;
                            }
                            else {
                              if (uVar2 == 0xdce5f) {
                                pcVar9 = (code *)&DAT_140007a81;
                              }
                              else {
                                if (uVar2 == 0xde8f2) {
                                  pcVar9 = FUN_140007c08;
                                }
                                else {
                                  if (uVar2 != 0xe0385) goto LAB_14000f09c;
                                  pcVar9 = FUN_14000919c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0xe38ab) {
LAB_14000f09c:
                      pcVar9 = FUN_140008d57;
                    }
                    else {
                      if (uVar2 == 0xe533e) {
                        pcVar9 = (code *)&LAB_14000d5bb;
                      }
                      else {
                        if (uVar2 == 0xe6dd1) {
                          pcVar9 = (code *)&LAB_140008ce9;
                        }
                        else {
                          if (uVar2 == 0xe8864) {
                            pcVar9 = FUN_140009bbb;
                          }
                          else {
                            if (uVar2 == 0xea2f7) {
                              pcVar9 = FUN_1400081b5;
                            }
                            else {
                              if (uVar2 == 0xebd8a) {
                                pcVar9 = (code *)&DAT_14000886c;
                              }
                              else {
                                if (uVar2 != 0xed81d) goto LAB_14000f09c;
                                pcVar9 = FUN_14000d8e2;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0xfc749) {
                  if (uVar2 == 0xfc748) {
                    pcVar9 = FUN_14000b0e2;
                  }
                  else {
                    if (uVar2 == 0xf0d43) {
                      pcVar9 = FUN_140008776;
                    }
                    else {
                      if (uVar2 == 0xf27d6) {
                        pcVar9 = FUN_14000c13a;
                      }
                      else {
                        if (uVar2 == 0xf4269) {
                          pcVar9 = (code *)&DAT_140008b6c;
                        }
                        else {
                          if (uVar2 == 0xf5cfc) {
                            pcVar9 = FUN_14000cbf6;
                          }
                          else {
                            if (uVar2 == 0xf778f) {
                              pcVar9 = FUN_140007968;
                            }
                            else {
                              if (uVar2 == 0xf9222) {
                                pcVar9 = (code *)&DAT_1400082ce;
                              }
                              else {
                                if (uVar2 != 0xfacb5) goto LAB_14000f09c;
                                pcVar9 = (code *)&DAT_140008e63;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0xfe1db) {
                    pcVar9 = FUN_14000c591;
                  }
                  else {
                    if (uVar2 == 0xffc6e) {
                      pcVar9 = (code *)&LAB_140007b9b;
                    }
                    else {
                      if (uVar2 == 0x101701) {
                        pcVar9 = FUN_1400097f8;
                      }
                      else {
                        if (uVar2 == 0x103194) {
                          pcVar9 = (code *)&DAT_14000c30d;
                        }
                        else {
                          if (uVar2 == 0x104c27) {
                            pcVar9 = FUN_140009a88;
                          }
                          else {
                            if (uVar2 == 0x1066ba) {
                              pcVar9 = FUN_140007cd4;
                            }
                            else {
                              if (uVar2 != 0x10814d) goto LAB_14000f09c;
                              pcVar9 = (code *)&DAT_140008724;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x124511) {
              if (uVar2 == 0x124510) {
                pcVar9 = FUN_140007b42;
              }
              else {
                if (uVar2 < 0x117079) {
                  if (uVar2 == 0x117078) {
                    pcVar9 = FUN_140008aa8;
                  }
                  else {
                    if (uVar2 == 0x10b673) {
                      pcVar9 = FUN_14000a23e;
                    }
                    else {
                      if (uVar2 == 0x10d106) {
                        pcVar9 = FUN_1400089f1;
                      }
                      else {
                        if (uVar2 == 0x10eb99) {
                          pcVar9 = FUN_140009ebc;
                        }
                        else {
                          if (uVar2 == 0x11062c) {
                            pcVar9 = FUN_14000aaf6;
                          }
                          else {
                            if (uVar2 == 0x1120bf) {
                              pcVar9 = (code *)&DAT_14000826b;
                            }
                            else {
                              if (uVar2 == 0x113b52) {
                                pcVar9 = FUN_14000cd2f;
                              }
                              else {
                                if (uVar2 != 0x1155e5) goto LAB_14000f09c;
                                pcVar9 = FUN_140009ae8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x118b0b) {
                    pcVar9 = (code *)&DAT_14000aea7;
                  }
                  else {
                    if (uVar2 == 0x11a59e) {
                      pcVar9 = (code *)&LAB_14000c2bc;
                    }
                    else {
                      if (uVar2 == 0x11c031) {
                        pcVar9 = FUN_140008404;
                      }
                      else {
                        if (uVar2 == 0x11dac4) {
                          pcVar9 = FUN_14000b9b2;
                        }
                        else {
                          if (uVar2 == 0x11f557) {
                            pcVar9 = FUN_140009b4e;
                          }
                          else {
                            if (uVar2 == 0x120fea) {
                              pcVar9 = (code *)&DAT_14000845e;
                            }
                            else {
                              if (uVar2 != 0x122a7d) goto LAB_14000f09c;
                              pcVar9 = (code *)&LAB_14000a09b;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x1319a9) {
                if (uVar2 == 0x1319a8) {
                  pcVar9 = FUN_14000a7ed;
                }
                else {
                  if (uVar2 == 0x125fa3) {
                    pcVar9 = FUN_14000ba24;
                  }
                  else {
                    if (uVar2 == 0x127a36) {
                      pcVar9 = (code *)&DAT_14000bac8;
                    }
                    else {
                      if (uVar2 == 0x1294c9) {
                        pcVar9 = FUN_14000d569;
                      }
                      else {
                        if (uVar2 == 0x12af5c) {
                          pcVar9 = FUN_14000a105;
                        }
                        else {
                          if (uVar2 == 0x12c9ef) {
                            pcVar9 = (code *)&LAB_14000838b;
                          }
                          else {
                            if (uVar2 == 0x12e482) {
                              pcVar9 = (code *)&DAT_14000820e;
                            }
                            else {
                              if (uVar2 != 0x12ff15) goto LAB_14000f09c;
                              pcVar9 = FUN_14000ae01;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x13343b) {
                  pcVar9 = (code *)&LAB_14000d892;
                }
                else {
                  if (uVar2 == 0x134ece) {
                    pcVar9 = FUN_14000cf14;
                  }
                  else {
                    if (uVar2 == 0x136961) {
                      pcVar9 = (code *)&DAT_140007dfc;
                    }
                    else {
                      if (uVar2 == 0x1383f4) {
                        pcVar9 = FUN_14000b61e;
                      }
                      else {
                        if (uVar2 == 0x139e87) {
                          pcVar9 = FUN_140008dc7;
                        }
                        else {
                          if (uVar2 == 0x13b91a) {
                            pcVar9 = FUN_14000bf4a;
                          }
                          else {
                            if (uVar2 != 0x13d3ad) goto LAB_14000f09c;
                            pcVar9 = (code *)&LAB_140008c8f;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (uVar2 < 0x1740a1) {
          if (uVar2 == 0x1740a0) {
            pcVar9 = FUN_14000c7c8;
          }
          else {
            if (uVar2 < 0x159771) {
              if (uVar2 == 0x159770) {
                pcVar9 = FUN_14000d687;
              }
              else {
                if (uVar2 < 0x14c2d9) {
                  if (uVar2 == 0x14c2d8) {
                    pcVar9 = (code *)&LAB_14000cfc6;
                  }
                  else {
                    if (uVar2 == 0x1408d3) {
                      pcVar9 = (code *)&LAB_14000af5f;
                    }
                    else {
                      if (uVar2 == 0x142366) {
                        pcVar9 = (code *)&LAB_14000a527;
                      }
                      else {
                        if (uVar2 == 0x143df9) {
                          pcVar9 = (code *)&LAB_1400096be;
                        }
                        else {
                          if (uVar2 == 0x14588c) {
                            pcVar9 = FUN_14000ab46;
                          }
                          else {
                            if (uVar2 == 0x14731f) {
                              pcVar9 = (code *)&DAT_140007ada;
                            }
                            else {
                              if (uVar2 == 0x148db2) {
                                pcVar9 = FUN_14000a471;
                              }
                              else {
                                if (uVar2 != 0x14a845) goto LAB_14000f09c;
                                pcVar9 = FUN_14000a294;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x14dd6b) {
                    pcVar9 = (code *)&LAB_14000a5e5;
                  }
                  else {
                    if (uVar2 == 0x14f7fe) {
                      pcVar9 = (code *)&DAT_14000b7bc;
                    }
                    else {
                      if (uVar2 == 0x151291) {
                        pcVar9 = (code *)&DAT_14000be8f;
                      }
                      else {
                        if (uVar2 == 0x152d24) {
                          pcVar9 = FUN_14000d495;
                        }
                        else {
                          if (uVar2 == 0x1547b7) {
                            pcVar9 = FUN_14000cf76;
                          }
                          else {
                            if (uVar2 == 0x15624a) {
                              pcVar9 = FUN_14000c0da;
                            }
                            else {
                              if (uVar2 != 0x157cdd) goto LAB_14000f09c;
                              pcVar9 = FUN_14000bc80;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x166c09) {
                if (uVar2 == 0x166c08) {
                  pcVar9 = FUN_14000ac6b;
                }
                else {
                  if (uVar2 == 0x15b203) {
                    pcVar9 = (code *)&DAT_14000b36f;
                  }
                  else {
                    if (uVar2 == 0x15cc96) {
                      pcVar9 = FUN_14000925e;
                    }
                    else {
                      if (uVar2 == 0x15e729) {
                        pcVar9 = (code *)&DAT_14000bd8f;
                      }
                      else {
                        if (uVar2 == 0x1601bc) {
                          pcVar9 = (code *)&LAB_140009a19;
                        }
                        else {
                          if (uVar2 == 0x161c4f) {
                            pcVar9 = (code *)&LAB_14000b80a;
                          }
                          else {
                            if (uVar2 == 0x1636e2) {
                              pcVar9 = (code *)&LAB_140007e94;
                            }
                            else {
                              if (uVar2 != 0x165175) goto LAB_14000f09c;
                              pcVar9 = (code *)&DAT_140007ef3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x16869b) {
                  pcVar9 = FUN_14000a8fa;
                }
                else {
                  if (uVar2 == 0x16a12e) {
                    pcVar9 = FUN_14000ceb4;
                  }
                  else {
                    if (uVar2 == 0x16bbc1) {
                      pcVar9 = (code *)&DAT_14000bee0;
                    }
                    else {
                      if (uVar2 == 0x16d654) {
                        pcVar9 = FUN_140009c25;
                      }
                      else {
                        if (uVar2 == 0x16f0e7) {
                          pcVar9 = FUN_1400092b8;
                        }
                        else {
                          if (uVar2 == 0x170b7a) {
                            pcVar9 = FUN_14000d09e;
                          }
                          else {
                            if (uVar2 != 0x17260d) goto LAB_14000f09c;
                            pcVar9 = (code *)&DAT_140009078;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0x18e9d1) {
            if (uVar2 == 0x18e9d0) {
              pcVar9 = FUN_14000d023;
            }
            else {
              if (uVar2 < 0x181539) {
                if (uVar2 == 0x181538) {
                  pcVar9 = (code *)&DAT_14000a3aa;
                }
                else {
                  if (uVar2 == 0x175b33) {
                    pcVar9 = FUN_14000a045;
                  }
                  else {
                    if (uVar2 == 0x1775c6) {
                      pcVar9 = (code *)&DAT_140008f05;
                    }
                    else {
                      if (uVar2 == 0x179059) {
                        pcVar9 = FUN_14000a2fe;
                      }
                      else {
                        if (uVar2 == 0x17aaec) {
                          pcVar9 = (code *)&DAT_140008824;
                        }
                        else {
                          if (uVar2 == 0x17c57f) {
                            pcVar9 = (code *)&DAT_140009309;
                          }
                          else {
                            if (uVar2 == 0x17e012) {
                              pcVar9 = FUN_14000c8dc;
                            }
                            else {
                              if (uVar2 != 0x17faa5) goto LAB_14000f09c;
                              pcVar9 = FUN_14000a847;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x182fcb) {
                  pcVar9 = FUN_140007da0;
                }
                else {
                  if (uVar2 == 0x184a5e) {
                    pcVar9 = FUN_14000af04;
                  }
                  else {
                    if (uVar2 == 0x1864f1) {
                      pcVar9 = FUN_14000801d;
                    }
                    else {
                      if (uVar2 == 0x187f84) {
                        pcVar9 = (code *)&DAT_14000c878;
                      }
                      else {
                        if (uVar2 == 0x189a17) {
                          pcVar9 = FUN_1400099c6;
                        }
                        else {
                          if (uVar2 == 0x18b4aa) {
                            pcVar9 = FUN_140009e57;
                          }
                          else {
                            if (uVar2 != 0x18cf3d) goto LAB_14000f09c;
                            pcVar9 = FUN_1400086cc;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x19be69) {
              if (uVar2 == 0x19be68) {
                pcVar9 = FUN_14000d362;
              }
              else {
                if (uVar2 == 0x190463) {
                  pcVar9 = FUN_140008f64;
                }
                else {
                  if (uVar2 == 0x191ef6) {
                    pcVar9 = FUN_140008bce;
                  }
                  else {
                    if (uVar2 == 0x193989) {
                      pcVar9 = FUN_14000d3d5;
                    }
                    else {
                      if (uVar2 == 0x19541c) {
                        pcVar9 = (code *)&LAB_14000d7cd;
                      }
                      else {
                        if (uVar2 == 0x196eaf) {
                          pcVar9 = FUN_14000c20e;
                        }
                        else {
                          if (uVar2 == 0x198942) {
                            pcVar9 = FUN_14000ca2f;
                          }
                          else {
                            if (uVar2 != 0x19a3d5) goto LAB_14000f09c;
                            pcVar9 = (code *)&DAT_140008992;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 == 0x19d8fb) {
                pcVar9 = (code *)&LAB_14000b3c6;
              }
              else {
                if (uVar2 == 0x19f38e) {
                  pcVar9 = FUN_14000d944;
                }
                else {
                  if (uVar2 == 0x1a0e21) {
                    pcVar9 = FUN_14000c946;
                  }
                  else {
                    if (uVar2 == 0x1a28b4) {
                      pcVar9 = FUN_14000ca8b;
                    }
                    else {
                      if (uVar2 == 0x1a4347) {
                        pcVar9 = FUN_140009d40;
                      }
                      else {
                        if (uVar2 == 0x1a5dda) {
                          pcVar9 = (code *)&DAT_140008e1c;
                        }
                        else {
                          if (uVar2 != 0x1a786d) goto LAB_14000f09c;
                          pcVar9 = (code *)&DAT_14000a8a1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    LOCK();
    DAT_140029006 =
         DAT_140029006 ^ (ulonglong)(DAT_140029006 == 0) * (DAT_140029006 ^ (ulonglong)pcVar9);
  }
  DAT_140033a38[1] = 0;
  if ((DAT_140029015 == 0) || (DAT_14002903b == 0)) {
    uVar1 = rdtsc();
    uVar2 = (uint)(byte)uVar1 * 0x24cd;
    if (uVar2 < 0x126681) {
      if (uVar2 == 0x126680) {
        pcVar9 = FUN_140003473;
      }
      else {
        if (uVar2 < 0x93341) {
          if (uVar2 == 0x93340) {
            pcVar9 = FUN_140006b80;
          }
          else {
            if (uVar2 < 0x499a1) {
              if (uVar2 == 0x499a0) {
                pcVar9 = (code *)&DAT_1400019cc;
              }
              else {
                if (uVar2 < 0x24cd1) {
                  if (uVar2 == 0x24cd0) {
                    pcVar9 = FUN_140005d45;
                  }
                  else {
                    if (uVar2 < 0x12669) {
                      if (uVar2 == 0x12668) {
                        pcVar9 = FUN_1400070b9;
                      }
                      else {
                        if (uVar2 == 0) {
                          pcVar9 = FUN_1400046a4;
                        }
                        else {
                          if (uVar2 == 0x24cd) {
                            pcVar9 = (code *)&DAT_14000783b;
                          }
                          else {
                            if (uVar2 == 0x499a) {
                              pcVar9 = FUN_140005039;
                            }
                            else {
                              if (uVar2 == 0x6e67) {
                                pcVar9 = FUN_14000444c;
                              }
                              else {
                                if (uVar2 == 0x9334) {
                                  pcVar9 = FUN_140005c7c;
                                }
                                else {
                                  if (uVar2 == 0xb801) {
                                    pcVar9 = (code *)&DAT_140002844;
                                  }
                                  else {
                                    if (uVar2 == 0xdcce) {
                                      pcVar9 = FUN_1400049e2;
                                    }
                                    else {
                                      if (uVar2 != 0x1019b) goto LAB_140016ae6;
                                      pcVar9 = FUN_140006278;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (uVar2 == 0x14b35) {
                        pcVar9 = FUN_1400068be;
                      }
                      else {
                        if (uVar2 == 0x17002) {
                          pcVar9 = FUN_140005a65;
                        }
                        else {
                          if (uVar2 == 0x194cf) {
                            pcVar9 = FUN_140006ebd;
                          }
                          else {
                            if (uVar2 == 0x1b99c) {
                              pcVar9 = FUN_140004f4e;
                            }
                            else {
                              if (uVar2 == 0x1de69) {
                                pcVar9 = FUN_140007606;
                              }
                              else {
                                if (uVar2 == 0x20336) {
                                  pcVar9 = FUN_140004cd3;
                                }
                                else {
                                  if (uVar2 != 0x22803) goto LAB_140016ae6;
                                  pcVar9 = FUN_140004303;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 < 0x37339) {
                    if (uVar2 == 0x37338) {
                      pcVar9 = FUN_140002d2f;
                    }
                    else {
                      if (uVar2 == 0x2719d) {
                        pcVar9 = FUN_14000598a;
                      }
                      else {
                        if (uVar2 == 0x2966a) {
                          pcVar9 = FUN_1400051a1;
                        }
                        else {
                          if (uVar2 == 0x2bb37) {
                            pcVar9 = FUN_140003e9d;
                          }
                          else {
                            if (uVar2 == 0x2e004) {
                              pcVar9 = FUN_140001910;
                            }
                            else {
                              if (uVar2 == 0x304d1) {
                                pcVar9 = FUN_14000606d;
                              }
                              else {
                                if (uVar2 == 0x3299e) {
                                  pcVar9 = FUN_140006ab0;
                                }
                                else {
                                  if (uVar2 != 0x34e6b) goto LAB_140016ae6;
                                  pcVar9 = FUN_140005da1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x39805) {
                      pcVar9 = (code *)&DAT_140003e2e;
                    }
                    else {
                      if (uVar2 == 0x3bcd2) {
                        pcVar9 = FUN_1400052dd;
                      }
                      else {
                        if (uVar2 == 0x3e19f) {
                          pcVar9 = FUN_14000297c;
                        }
                        else {
                          if (uVar2 == 0x4066c) {
                            pcVar9 = FUN_14000316b;
                          }
                          else {
                            if (uVar2 == 0x42b39) {
                              pcVar9 = FUN_14000645e;
                            }
                            else {
                              if (uVar2 == 0x45006) {
                                pcVar9 = FUN_140007434;
                              }
                              else {
                                if (uVar2 != 0x474d3) goto LAB_140016ae6;
                                pcVar9 = (code *)&DAT_14000561e;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x6e671) {
                if (uVar2 == 0x6e670) {
                  pcVar9 = (code *)&DAT_140003ced;
                }
                else {
                  if (uVar2 < 0x5c009) {
                    if (uVar2 == 0x5c008) {
                      pcVar9 = FUN_140005fa8;
                    }
                    else {
                      if (uVar2 == 0x4be6d) {
                        pcVar9 = FUN_140002cba;
                      }
                      else {
                        if (uVar2 == 0x4e33a) {
                          pcVar9 = FUN_1400018b1;
                        }
                        else {
                          if (uVar2 == 0x50807) {
                            pcVar9 = FUN_140003605;
                          }
                          else {
                            if (uVar2 == 0x52cd4) {
                              pcVar9 = FUN_14000685d;
                            }
                            else {
                              if (uVar2 == 0x551a1) {
                                pcVar9 = FUN_14000534f;
                              }
                              else {
                                if (uVar2 == 0x5766e) {
                                  pcVar9 = FUN_14000724c;
                                }
                                else {
                                  if (uVar2 != 0x59b3b) goto LAB_140016ae6;
                                  pcVar9 = FUN_14000542c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x5e4d5) {
                      pcVar9 = FUN_1400015d4;
                    }
                    else {
                      if (uVar2 == 0x609a2) {
                        pcVar9 = FUN_140005771;
                      }
                      else {
                        if (uVar2 == 0x62e6f) {
                          pcVar9 = (code *)&DAT_14000612d;
                        }
                        else {
                          if (uVar2 == 0x6533c) {
                            pcVar9 = FUN_140005ad1;
                          }
                          else {
                            if (uVar2 == 0x67809) {
                              pcVar9 = FUN_140005099;
                            }
                            else {
                              if (uVar2 == 0x69cd6) {
                                pcVar9 = FUN_140004836;
                              }
                              else {
                                if (uVar2 != 0x6c1a3) goto LAB_140016ae6;
                                pcVar9 = FUN_1400013bc;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x80cd9) {
                  if (uVar2 == 0x80cd8) {
                    pcVar9 = (code *)&LAB_140002fb0;
                  }
                  else {
                    if (uVar2 == 0x70b3d) {
                      pcVar9 = FUN_140002a67;
                    }
                    else {
                      if (uVar2 == 0x7300a) {
                        pcVar9 = FUN_140003751;
                      }
                      else {
                        if (uVar2 == 0x754d7) {
                          pcVar9 = FUN_140006407;
                        }
                        else {
                          if (uVar2 == 0x779a4) {
                            pcVar9 = FUN_140005f41;
                          }
                          else {
                            if (uVar2 == 0x79e71) {
                              pcVar9 = FUN_1400073d0;
                            }
                            else {
                              if (uVar2 == 0x7c33e) {
                                pcVar9 = FUN_14000142c;
                              }
                              else {
                                if (uVar2 != 0x7e80b) goto LAB_140016ae6;
                                pcVar9 = FUN_140002ef5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x831a5) {
                    pcVar9 = FUN_140004709;
                  }
                  else {
                    if (uVar2 == 0x85672) {
                      pcVar9 = FUN_1400034d3;
                    }
                    else {
                      if (uVar2 == 0x87b3f) {
                        pcVar9 = FUN_140003246;
                      }
                      else {
                        if (uVar2 == 0x8a00c) {
                          pcVar9 = FUN_14000657b;
                        }
                        else {
                          if (uVar2 == 0x8c4d9) {
                            pcVar9 = FUN_1400058b7;
                          }
                          else {
                            if (uVar2 == 0x8e9a6) {
                              pcVar9 = FUN_140003d52;
                            }
                            else {
                              if (uVar2 != 0x90e73) goto LAB_140016ae6;
                              pcVar9 = FUN_140004775;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0xdcce1) {
            if (uVar2 == 0xdcce0) {
              pcVar9 = (code *)&DAT_140006d29;
            }
            else {
              if (uVar2 < 0xb8011) {
                if (uVar2 == 0xb8010) {
                  pcVar9 = FUN_1400041cd;
                }
                else {
                  if (uVar2 < 0xa59a9) {
                    if (uVar2 == 0xa59a8) {
                      pcVar9 = FUN_140003efd;
                    }
                    else {
                      if (uVar2 == 0x9580d) {
                        pcVar9 = FUN_1400066c8;
                      }
                      else {
                        if (uVar2 == 0x97cda) {
                          pcVar9 = FUN_140001145;
                        }
                        else {
                          if (uVar2 == 0x9a1a7) {
                            pcVar9 = FUN_140002da2;
                          }
                          else {
                            if (uVar2 == 0x9c674) {
                              pcVar9 = FUN_1400076f2;
                            }
                            else {
                              if (uVar2 == 0x9eb41) {
                                pcVar9 = (code *)&LAB_140004e7d;
                              }
                              else {
                                if (uVar2 == 0xa100e) {
                                  pcVar9 = FUN_140006340;
                                }
                                else {
                                  if (uVar2 != 0xa34db) goto LAB_140016ae6;
                                  pcVar9 = FUN_140007592;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0xa7e75) {
                      pcVar9 = FUN_140002507;
                    }
                    else {
                      if (uVar2 == 0xaa342) {
                        pcVar9 = FUN_14000415c;
                      }
                      else {
                        if (uVar2 == 0xac80f) {
                          pcVar9 = FUN_140001b72;
                        }
                        else {
                          if (uVar2 == 0xaecdc) {
                            pcVar9 = FUN_1400059eb;
                          }
                          else {
                            if (uVar2 == 0xb11a9) {
                              pcVar9 = FUN_140002e7f;
                            }
                            else {
                              if (uVar2 == 0xb3676) {
                                pcVar9 = FUN_140005ed2;
                              }
                              else {
                                if (uVar2 != 0xb5b43) goto LAB_140016ae6;
                                pcVar9 = FUN_14000767d;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0xca679) {
                  if (uVar2 == 0xca678) {
                    pcVar9 = FUN_140005494;
                  }
                  else {
                    if (uVar2 == 0xba4dd) {
                      pcVar9 = (code *)&DAT_140002b26;
                    }
                    else {
                      if (uVar2 == 0xbc9aa) {
                        pcVar9 = FUN_140006f7f;
                      }
                      else {
                        if (uVar2 == 0xbee77) {
                          pcVar9 = (code *)&LAB_140001a9f;
                        }
                        else {
                          if (uVar2 == 0xc1344) {
                            pcVar9 = FUN_1400043e6;
                          }
                          else {
                            if (uVar2 == 0xc3811) {
                              pcVar9 = FUN_140005cd7;
                            }
                            else {
                              if (uVar2 == 0xc5cde) {
                                pcVar9 = FUN_140006e54;
                              }
                              else {
                                if (uVar2 != 0xc81ab) goto LAB_140016ae6;
                                pcVar9 = (code *)&DAT_140001973;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0xccb45) {
                    pcVar9 = FUN_1400017e1;
                  }
                  else {
                    if (uVar2 == 0xcf012) {
                      pcVar9 = FUN_140001c52;
                    }
                    else {
                      if (uVar2 == 0xd14df) {
                        pcVar9 = FUN_140007521;
                      }
                      else {
                        if (uVar2 == 0xd39ac) {
                          pcVar9 = FUN_14000521d;
                        }
                        else {
                          if (uVar2 == 0xd5e79) {
                            pcVar9 = FUN_14000528c;
                          }
                          else {
                            if (uVar2 == 0xd8346) {
                              pcVar9 = FUN_140001565;
                            }
                            else {
                              if (uVar2 != 0xda813) goto LAB_140016ae6;
                              pcVar9 = FUN_140001e44;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x1019b1) {
              if (uVar2 == 0x1019b0) {
                pcVar9 = FUN_140002f49;
              }
              else {
                if (uVar2 < 0xef349) {
                  if (uVar2 == 0xef348) {
                    pcVar9 = FUN_14000692f;
                  }
                  else {
                    if (uVar2 == 0xdf1ad) {
                      pcVar9 = FUN_140004c5d;
                    }
                    else {
                      if (uVar2 == 0xe167a) {
                        pcVar9 = FUN_14000711b;
                      }
                      else {
                        if (uVar2 == 0xe3b47) {
                          pcVar9 = FUN_140005baf;
                        }
                        else {
                          if (uVar2 == 0xe6014) {
                            pcVar9 = (code *)&DAT_14000264b;
                          }
                          else {
                            if (uVar2 == 0xe84e1) {
                              pcVar9 = FUN_1400032b2;
                            }
                            else {
                              if (uVar2 == 0xea9ae) {
                                pcVar9 = FUN_140005b47;
                              }
                              else {
                                if (uVar2 != 0xece7b) goto LAB_140016ae6;
                                pcVar9 = (code *)&LAB_140004bf2;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0xf1815) {
                    pcVar9 = FUN_140002150;
                  }
                  else {
                    if (uVar2 == 0xf3ce2) {
                      pcVar9 = FUN_1400055c5;
                    }
                    else {
                      if (uVar2 == 0xf61af) {
                        pcVar9 = FUN_140005146;
                      }
                      else {
                        if (uVar2 == 0xf867c) {
                          pcVar9 = FUN_14000704b;
                        }
                        else {
                          if (uVar2 == 0xfab49) {
                            pcVar9 = FUN_140002792;
                          }
                          else {
                            if (uVar2 == 0xfd016) {
                              pcVar9 = (code *)&DAT_140001d0d;
                            }
                            else {
                              if (uVar2 != 0xff4e3) goto LAB_140016ae6;
                              pcVar9 = FUN_1400067f3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x114019) {
                if (uVar2 == 0x114018) {
                  pcVar9 = FUN_140002231;
                }
                else {
                  if (uVar2 == 0x103e7d) {
                    pcVar9 = FUN_14000353b;
                  }
                  else {
                    if (uVar2 == 0x10634a) {
                      pcVar9 = FUN_1400031dc;
                    }
                    else {
                      if (uVar2 == 0x108817) {
                        pcVar9 = FUN_1400077dc;
                      }
                      else {
                        if (uVar2 == 0x10ace4) {
                          pcVar9 = FUN_1400014fa;
                        }
                        else {
                          if (uVar2 == 0x10d1b1) {
                            pcVar9 = FUN_14000340b;
                          }
                          else {
                            if (uVar2 == 0x10f67e) {
                              pcVar9 = FUN_14000429d;
                            }
                            else {
                              if (uVar2 != 0x111b4b) goto LAB_140016ae6;
                              pcVar9 = (code *)&DAT_140004b85;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x1164e5) {
                  pcVar9 = FUN_140006996;
                }
                else {
                  if (uVar2 == 0x1189b2) {
                    pcVar9 = FUN_140002e15;
                  }
                  else {
                    if (uVar2 == 0x11ae7f) {
                      pcVar9 = FUN_140001072;
                    }
                    else {
                      if (uVar2 == 0x11d34c) {
                        pcVar9 = FUN_14000135a;
                      }
                      else {
                        if (uVar2 == 0x11f819) {
                          pcVar9 = (code *)&LAB_140001000;
                        }
                        else {
                          if (uVar2 == 0x121ce6) {
                            pcVar9 = (code *)&DAT_140001634;
                          }
                          else {
                            if (uVar2 != 0x1241b3) goto LAB_140016ae6;
                            pcVar9 = FUN_140004367;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar2 < 0x1b99c1) {
        if (uVar2 == 0x1b99c0) {
          pcVar9 = FUN_140004649;
        }
        else {
          if (uVar2 < 0x170021) {
            if (uVar2 == 0x170020) {
              pcVar9 = FUN_1400050ea;
            }
            else {
              if (uVar2 < 0x14b351) {
                if (uVar2 == 0x14b350) {
                  pcVar9 = FUN_140004511;
                }
                else {
                  if (uVar2 < 0x138ce9) {
                    if (uVar2 == 0x138ce8) {
                      pcVar9 = FUN_1400063ab;
                    }
                    else {
                      if (uVar2 == 0x128b4d) {
                        pcVar9 = FUN_1400033a4;
                      }
                      else {
                        if (uVar2 == 0x12b01a) {
                          pcVar9 = FUN_140001304;
                        }
                        else {
                          if (uVar2 == 0x12d4e7) {
                            pcVar9 = FUN_14000129b;
                          }
                          else {
                            if (uVar2 == 0x12f9b4) {
                              pcVar9 = FUN_140003b7c;
                            }
                            else {
                              if (uVar2 == 0x131e81) {
                                pcVar9 = FUN_140002c5c;
                              }
                              else {
                                if (uVar2 == 0x13434e) {
                                  pcVar9 = (code *)&DAT_140006a55;
                                }
                                else {
                                  if (uVar2 != 0x13681b) goto LAB_140016ae6;
                                  pcVar9 = FUN_140001849;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x13b1b5) {
                      pcVar9 = FUN_14000332b;
                    }
                    else {
                      if (uVar2 == 0x13d682) {
                        pcVar9 = FUN_140005c06;
                      }
                      else {
                        if (uVar2 == 0x13fb4f) {
                          pcVar9 = FUN_140003c38;
                        }
                        else {
                          if (uVar2 == 0x14201c) {
                            pcVar9 = FUN_140004abf;
                          }
                          else {
                            if (uVar2 == 0x1444e9) {
                              pcVar9 = FUN_1400060df;
                            }
                            else {
                              if (uVar2 == 0x1469b6) {
                                pcVar9 = FUN_140002915;
                              }
                              else {
                                if (uVar2 != 0x148e83) goto LAB_140016ae6;
                                pcVar9 = FUN_140003dc5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x15d9b9) {
                  if (uVar2 == 0x15d9b8) {
                    pcVar9 = FUN_140004903;
                  }
                  else {
                    if (uVar2 == 0x14d81d) {
                      pcVar9 = FUN_140002bef;
                    }
                    else {
                      if (uVar2 == 0x14fcea) {
                        pcVar9 = FUN_1400022f5;
                      }
                      else {
                        if (uVar2 == 0x1521b7) {
                          pcVar9 = FUN_140003bd8;
                        }
                        else {
                          if (uVar2 == 0x154684) {
                            pcVar9 = FUN_14000395a;
                          }
                          else {
                            if (uVar2 == 0x156b51) {
                              pcVar9 = FUN_140006f0d;
                            }
                            else {
                              if (uVar2 == 0x15901e) {
                                pcVar9 = FUN_140001767;
                              }
                              else {
                                if (uVar2 != 0x15b4eb) goto LAB_140016ae6;
                                pcVar9 = FUN_1400047dd;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x15fe85) {
                    pcVar9 = FUN_140004b19;
                  }
                  else {
                    if (uVar2 == 0x162352) {
                      pcVar9 = FUN_140005e01;
                    }
                    else {
                      if (uVar2 == 0x16481f) {
                        pcVar9 = FUN_140003f6f;
                      }
                      else {
                        if (uVar2 == 0x166cec) {
                          pcVar9 = FUN_14000718d;
                        }
                        else {
                          if (uVar2 == 0x1691b9) {
                            pcVar9 = FUN_1400044ab;
                          }
                          else {
                            if (uVar2 == 0x16b686) {
                              pcVar9 = FUN_1400069fc;
                            }
                            else {
                              if (uVar2 != 0x16db53) goto LAB_140016ae6;
                              pcVar9 = FUN_1400053b7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x194cf1) {
              if (uVar2 == 0x194cf0) {
                pcVar9 = FUN_1400021be;
              }
              else {
                if (uVar2 < 0x182689) {
                  if (uVar2 == 0x182688) {
                    pcVar9 = FUN_1400036de;
                  }
                  else {
                    if (uVar2 == 0x1724ed) {
                      pcVar9 = FUN_1400074aa;
                    }
                    else {
                      if (uVar2 == 0x1749ba) {
                        pcVar9 = FUN_1400054fa;
                      }
                      else {
                        if (uVar2 == 0x176e87) {
                          pcVar9 = FUN_14000408f;
                        }
                        else {
                          if (uVar2 == 0x179354) {
                            pcVar9 = FUN_1400016a1;
                          }
                          else {
                            if (uVar2 == 0x17b821) {
                              pcVar9 = FUN_140001eab;
                            }
                            else {
                              if (uVar2 == 0x17dcee) {
                                pcVar9 = (code *)&DAT_140004ede;
                              }
                              else {
                                if (uVar2 != 0x1801bb) goto LAB_140016ae6;
                                pcVar9 = FUN_140005700;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x184b55) {
                    pcVar9 = FUN_14000302b;
                  }
                  else {
                    if (uVar2 == 0x187022) {
                      pcVar9 = FUN_140006fe5;
                    }
                    else {
                      if (uVar2 == 0x1894ef) {
                        pcVar9 = FUN_140005562;
                      }
                      else {
                        if (uVar2 == 0x18b9bc) {
                          pcVar9 = FUN_140001dda;
                        }
                        else {
                          if (uVar2 == 0x18de89) {
                            pcVar9 = FUN_1400064b5;
                          }
                          else {
                            if (uVar2 == 0x190356) {
                              pcVar9 = FUN_140001cac;
                            }
                            else {
                              if (uVar2 != 0x192823) goto LAB_140016ae6;
                              pcVar9 = FUN_14000170e;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x1a7359) {
                if (uVar2 == 0x1a7358) {
                  pcVar9 = (code *)&DAT_140001f12;
                }
                else {
                  if (uVar2 == 0x1971bd) {
                    pcVar9 = (code *)&DAT_140002b7b;
                  }
                  else {
                    if (uVar2 == 0x19968a) {
                      pcVar9 = FUN_1400045e2;
                    }
                    else {
                      if (uVar2 == 0x19bb57) {
                        pcVar9 = FUN_140003aa0;
                      }
                      else {
                        if (uVar2 == 0x19e024) {
                          pcVar9 = FUN_140006650;
                        }
                        else {
                          if (uVar2 == 0x1a04f1) {
                            pcVar9 = FUN_140005e71;
                          }
                          else {
                            if (uVar2 == 0x1a29be) {
                              pcVar9 = (code *)&DAT_1400010d3;
                            }
                            else {
                              if (uVar2 != 0x1a4e8b) goto LAB_140016ae6;
                              pcVar9 = FUN_1400025ec;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x1a9825) {
                  pcVar9 = FUN_14000359e;
                }
                else {
                  if (uVar2 == 0x1abcf2) {
                    pcVar9 = FUN_140007311;
                  }
                  else {
                    if (uVar2 == 0x1ae1bf) {
                      pcVar9 = FUN_140003665;
                    }
                    else {
                      if (uVar2 == 0x1b068c) {
                        pcVar9 = FUN_1400026c1;
                      }
                      else {
                        if (uVar2 == 0x1b2b59) {
                          pcVar9 = FUN_1400040ef;
                        }
                        else {
                          if (uVar2 == 0x1b5026) {
                            pcVar9 = FUN_140003821;
                          }
                          else {
                            if (uVar2 != 0x1b74f3) goto LAB_140016ae6;
                            pcVar9 = (code *)&LAB_140001d75;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (uVar2 < 0x203361) {
          if (uVar2 == 0x203360) {
            pcVar9 = (code *)&DAT_1400027dc;
          }
          else {
            if (uVar2 < 0x1de691) {
              if (uVar2 == 0x1de690) {
                pcVar9 = FUN_140002424;
              }
              else {
                if (uVar2 < 0x1cc029) {
                  if (uVar2 == 0x1cc028) {
                    pcVar9 = FUN_14000206d;
                  }
                  else {
                    if (uVar2 == 0x1bbe8d) {
                      pcVar9 = FUN_14000234c;
                    }
                    else {
                      if (uVar2 == 0x1be35a) {
                        pcVar9 = FUN_140002ac6;
                      }
                      else {
                        if (uVar2 == 0x1c0827) {
                          pcVar9 = FUN_14000568a;
                        }
                        else {
                          if (uVar2 == 0x1c2cf4) {
                            pcVar9 = FUN_140003fc5;
                          }
                          else {
                            if (uVar2 == 0x1c51c1) {
LAB_140016ae6:
                              pcVar9 = FUN_1400038f6;
                            }
                            else {
                              if (uVar2 == 0x1c768e) {
                                pcVar9 = FUN_14000456e;
                              }
                              else {
                                if (uVar2 != 0x1c9b5b) goto LAB_140016ae6;
                                pcVar9 = FUN_1400029f8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x1ce4f5) {
                    pcVar9 = FUN_1400028ac;
                  }
                  else {
                    if (uVar2 == 0x1d09c2) {
                      pcVar9 = FUN_140006d88;
                    }
                    else {
                      if (uVar2 == 0x1d2e8f) {
                        pcVar9 = FUN_1400071f2;
                      }
                      else {
                        if (uVar2 == 0x1d535c) {
                          pcVar9 = FUN_140004e0f;
                        }
                        else {
                          if (uVar2 == 0x1d7829) {
                            pcVar9 = (code *)&LAB_1400037b9;
                          }
                          else {
                            if (uVar2 == 0x1d9cf6) {
                              pcVar9 = FUN_14000257e;
                            }
                            else {
                              if (uVar2 != 0x1dc1c3) goto LAB_140016ae6;
                              pcVar9 = FUN_14000775d;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x1f0cf9) {
                if (uVar2 == 0x1f0cf8) {
                  pcVar9 = FUN_1400023b9;
                }
                else {
                  if (uVar2 == 0x1e0b5d) {
                    pcVar9 = FUN_1400030fa;
                  }
                  else {
                    if (uVar2 == 0x1e302a) {
                      pcVar9 = (code *)&DAT_140001f7b;
                    }
                    else {
                      if (uVar2 == 0x1e54f7) {
                        pcVar9 = FUN_140004243;
                      }
                      else {
                        if (uVar2 == 0x1e79c4) {
                          pcVar9 = FUN_14000309a;
                        }
                        else {
                          if (uVar2 == 0x1e9e91) {
                            pcVar9 = FUN_140004a58;
                          }
                          else {
                            if (uVar2 == 0x1ec35e) {
                              pcVar9 = FUN_14000672f;
                            }
                            else {
                              if (uVar2 != 0x1ee82b) goto LAB_140016ae6;
                              pcVar9 = FUN_1400039d0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x1f31c5) {
                  pcVar9 = FUN_1400065f0;
                }
                else {
                  if (uVar2 == 0x1f5692) {
                    pcVar9 = FUN_140002722;
                  }
                  else {
                    if (uVar2 == 0x1f7b5f) {
                      pcVar9 = FUN_140004980;
                    }
                    else {
                      if (uVar2 == 0x1fa02c) {
                        pcVar9 = FUN_1400020da;
                      }
                      else {
                        if (uVar2 == 0x1fc4f9) {
                          pcVar9 = FUN_1400057cf;
                        }
                        else {
                          if (uVar2 == 0x1fe9c6) {
                            pcVar9 = FUN_140006bf0;
                          }
                          else {
                            if (uVar2 != 0x200e93) goto LAB_140016ae6;
                            pcVar9 = FUN_140002299;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0x228031) {
            if (uVar2 == 0x228030) {
              pcVar9 = FUN_140006207;
            }
            else {
              if (uVar2 < 0x2159c9) {
                if (uVar2 == 0x2159c8) {
                  pcVar9 = FUN_1400011c4;
                }
                else {
                  if (uVar2 == 0x20582d) {
                    pcVar9 = FUN_140004d23;
                  }
                  else {
                    if (uVar2 == 0x207cfa) {
                      pcVar9 = FUN_14000387e;
                    }
                    else {
                      if (uVar2 == 0x20a1c7) {
                        pcVar9 = FUN_140006b22;
                      }
                      else {
                        if (uVar2 == 0x20c694) {
                          pcVar9 = (code *)&LAB_140007371;
                        }
                        else {
                          if (uVar2 == 0x20eb61) {
                            pcVar9 = FUN_140001ff7;
                          }
                          else {
                            if (uVar2 == 0x21102e) {
                              pcVar9 = FUN_1400062dd;
                            }
                            else {
                              if (uVar2 != 0x2134fb) goto LAB_140016ae6;
                              pcVar9 = FUN_140006cbc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x217e95) {
                  pcVar9 = FUN_14000679b;
                }
                else {
                  if (uVar2 == 0x21a362) {
                    pcVar9 = FUN_14000618f;
                  }
                  else {
                    if (uVar2 == 0x21c82f) {
                      pcVar9 = FUN_14000592b;
                    }
                    else {
                      if (uVar2 == 0x21ecfc) {
                        pcVar9 = FUN_14000402d;
                      }
                      else {
                        if (uVar2 == 0x2211c9) {
                          pcVar9 = FUN_14000489e;
                        }
                        else {
                          if (uVar2 == 0x223696) {
                            pcVar9 = FUN_1400072a3;
                          }
                          else {
                            if (uVar2 != 0x225b63) goto LAB_140016ae6;
                            pcVar9 = FUN_140004fca;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x23a699) {
              if (uVar2 == 0x23a698) {
                pcVar9 = FUN_140006c5f;
              }
              else {
                if (uVar2 == 0x22a4fd) {
                  pcVar9 = FUN_140001484;
                }
                else {
                  if (uVar2 == 0x22c9ca) {
                    pcVar9 = FUN_140003a2c;
                  }
                  else {
                    if (uVar2 == 0x22ee97) {
                      pcVar9 = FUN_140002491;
                    }
                    else {
                      if (uVar2 == 0x231364) {
                        pcVar9 = FUN_140004d93;
                      }
                      else {
                        if (uVar2 == 0x233831) {
                          pcVar9 = FUN_140006006;
                        }
                        else {
                          if (uVar2 == 0x235cfe) {
                            pcVar9 = (code *)&DAT_140006de4;
                          }
                          else {
                            if (uVar2 != 0x2381cb) goto LAB_140016ae6;
                            pcVar9 = FUN_140001afd;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 == 0x23cb65) {
                pcVar9 = FUN_140005842;
              }
              else {
                if (uVar2 == 0x23f032) {
                  pcVar9 = FUN_140001be1;
                }
                else {
                  if (uVar2 == 0x2414ff) {
                    pcVar9 = FUN_140003b1b;
                  }
                  else {
                    if (uVar2 == 0x2439cc) {
                      pcVar9 = FUN_140006514;
                    }
                    else {
                      if (uVar2 == 0x245e99) {
                        pcVar9 = FUN_140003c94;
                      }
                      else {
                        if (uVar2 == 0x248366) {
                          pcVar9 = FUN_14000122f;
                        }
                        else {
                          if (uVar2 != 0x24a833) goto LAB_140016ae6;
                          pcVar9 = FUN_140001a38;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    LOCK();
    DAT_140029015 =
         DAT_140029015 ^ (ulonglong)(DAT_140029015 == 0) * (DAT_140029015 ^ (ulonglong)pcVar9);
    uVar2 = (uint)(byte)uVar1 * 0x1f9d;
    if (uVar2 < 0xfce81) {
      if (uVar2 == 0xfce80) {
        pcVar9 = FUN_14000349b;
      }
      else {
        if (uVar2 < 0x7e741) {
          if (uVar2 == 0x7e740) {
            pcVar9 = FUN_140006bb7;
          }
          else {
            if (uVar2 < 0x3f3a1) {
              if (uVar2 == 0x3f3a0) {
                pcVar9 = FUN_140001a06;
              }
              else {
                if (uVar2 < 0x1f9d1) {
                  if (uVar2 == 0x1f9d0) {
                    pcVar9 = (code *)&LAB_140005d65;
                  }
                  else {
                    if (uVar2 < 0xfce9) {
                      if (uVar2 == 0xfce8) {
                        pcVar9 = (code *)&DAT_1400070dd;
                      }
                      else {
                        if (uVar2 == 0) {
                          pcVar9 = FUN_1400046d1;
                        }
                        else {
                          if (uVar2 == 0x1f9d) {
                            pcVar9 = (code *)&DAT_14000785b;
                          }
                          else {
                            if (uVar2 == 0x3f3a) {
                              pcVar9 = FUN_140005068;
                            }
                            else {
                              if (uVar2 == 0x5ed7) {
                                pcVar9 = (code *)&LAB_14000446c;
                              }
                              else {
                                if (uVar2 == 0x7e74) {
                                  pcVar9 = FUN_140005ca7;
                                }
                                else {
                                  if (uVar2 == 0x9e11) {
                                    pcVar9 = FUN_14000286f;
                                  }
                                  else {
                                    if (uVar2 == 0xbdae) {
                                      pcVar9 = FUN_140004a1b;
                                    }
                                    else {
                                      if (uVar2 != 0xdd4b) goto LAB_140023c95;
                                      pcVar9 = (code *)&DAT_1400062a1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (uVar2 == 0x11c85) {
                        pcVar9 = FUN_1400068f7;
                      }
                      else {
                        if (uVar2 == 0x13c22) {
                          pcVar9 = FUN_140005a9c;
                        }
                        else {
                          if (uVar2 == 0x15bbf) {
                            pcVar9 = (code *)&LAB_140006edd;
                          }
                          else {
                            if (uVar2 == 0x17b5c) {
                              pcVar9 = FUN_140004f8c;
                            }
                            else {
                              if (uVar2 == 0x19af9) {
                                pcVar9 = FUN_140007640;
                              }
                              else {
                                if (uVar2 == 0x1ba96) {
                                  pcVar9 = (code *)&DAT_140004cf1;
                                }
                                else {
                                  if (uVar2 != 0x1da33) goto LAB_140023c95;
                                  pcVar9 = FUN_140004336;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 < 0x2f6b9) {
                    if (uVar2 == 0x2f6b8) {
                      pcVar9 = FUN_140002d6e;
                    }
                    else {
                      if (uVar2 == 0x2196d) {
                        pcVar9 = FUN_1400059b4;
                      }
                      else {
                        if (uVar2 == 0x2390a) {
                          pcVar9 = FUN_1400051de;
                        }
                        else {
                          if (uVar2 == 0x258a7) {
                            pcVar9 = FUN_140003ec8;
                          }
                          else {
                            if (uVar2 == 0x27844) {
                              pcVar9 = FUN_140001943;
                            }
                            else {
                              if (uVar2 == 0x297e1) {
                                pcVar9 = FUN_1400060a0;
                              }
                              else {
                                if (uVar2 == 0x2b77e) {
                                  pcVar9 = FUN_140006af0;
                                }
                                else {
                                  if (uVar2 != 0x2d71b) goto LAB_140023c95;
                                  pcVar9 = FUN_140005dcc;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x31655) {
                      pcVar9 = FUN_140003e5e;
                    }
                    else {
                      if (uVar2 == 0x335f2) {
                        pcVar9 = FUN_140005313;
                      }
                      else {
                        if (uVar2 == 0x3558f) {
                          pcVar9 = FUN_1400029bb;
                        }
                        else {
                          if (uVar2 == 0x3752c) {
                            pcVar9 = FUN_14000319d;
                          }
                          else {
                            if (uVar2 == 0x394c9) {
                              pcVar9 = (code *)&DAT_14000647e;
                            }
                            else {
                              if (uVar2 == 0x3b466) {
                                pcVar9 = FUN_140007473;
                              }
                              else {
                                if (uVar2 != 0x3d403) goto LAB_140023c95;
                                pcVar9 = FUN_140005657;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x5ed71) {
                if (uVar2 == 0x5ed70) {
                  pcVar9 = FUN_140003d14;
                }
                else {
                  if (uVar2 < 0x4f089) {
                    if (uVar2 == 0x4f088) {
                      pcVar9 = FUN_140005fd3;
                    }
                    else {
                      if (uVar2 == 0x4133d) {
                        pcVar9 = FUN_140002cf8;
                      }
                      else {
                        if (uVar2 == 0x432da) {
                          pcVar9 = (code *)&LAB_1400018d5;
                        }
                        else {
                          if (uVar2 == 0x45277) {
                            pcVar9 = (code *)&DAT_140003625;
                          }
                          else {
                            if (uVar2 == 0x47214) {
                              pcVar9 = (code *)&DAT_140006883;
                            }
                            else {
                              if (uVar2 == 0x491b1) {
                                pcVar9 = FUN_140005386;
                              }
                              else {
                                if (uVar2 == 0x4b14e) {
                                  pcVar9 = (code *)&DAT_14000726a;
                                }
                                else {
                                  if (uVar2 != 0x4d0eb) goto LAB_140023c95;
                                  pcVar9 = FUN_140005461;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x51025) {
                      pcVar9 = FUN_140001603;
                    }
                    else {
                      if (uVar2 == 0x52fc2) {
                        pcVar9 = (code *)&LAB_140005791;
                      }
                      else {
                        if (uVar2 == 0x54f5f) {
                          pcVar9 = (code *)&DAT_140006153;
                        }
                        else {
                          if (uVar2 == 0x56efc) {
                            pcVar9 = FUN_140005b0b;
                          }
                          else {
                            if (uVar2 == 0x58e99) {
                              pcVar9 = (code *)&DAT_1400050b8;
                            }
                            else {
                              if (uVar2 == 0x5ae36) {
                                pcVar9 = FUN_14000486b;
                              }
                              else {
                                if (uVar2 != 0x5cdd3) goto LAB_140023c95;
                                pcVar9 = FUN_1400013f7;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x6ea59) {
                  if (uVar2 == 0x6ea58) {
                    pcVar9 = FUN_140002ff0;
                  }
                  else {
                    if (uVar2 == 0x60d0d) {
                      pcVar9 = FUN_140002a87;
                    }
                    else {
                      if (uVar2 == 0x62caa) {
                        pcVar9 = FUN_140003790;
                      }
                      else {
                        if (uVar2 == 0x64c47) {
                          pcVar9 = (code *)&LAB_140006427;
                        }
                        else {
                          if (uVar2 == 0x66be4) {
                            pcVar9 = FUN_140005f77;
                          }
                          else {
                            if (uVar2 == 0x68b81) {
                              pcVar9 = FUN_14000740c;
                            }
                            else {
                              if (uVar2 == 0x6ab1e) {
                                pcVar9 = (code *)&DAT_14000144c;
                              }
                              else {
                                if (uVar2 != 0x6cabb) goto LAB_140023c95;
                                pcVar9 = (code *)&DAT_140002f15;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x709f5) {
                    pcVar9 = FUN_14000473b;
                  }
                  else {
                    if (uVar2 == 0x72992) {
                      pcVar9 = FUN_14000350c;
                    }
                    else {
                      if (uVar2 == 0x7492f) {
                        pcVar9 = FUN_14000327f;
                      }
                      else {
                        if (uVar2 == 0x768cc) {
                          pcVar9 = FUN_1400065b8;
                        }
                        else {
                          if (uVar2 == 0x78869) {
                            pcVar9 = FUN_1400058f0;
                          }
                          else {
                            if (uVar2 == 0x7a806) {
                              pcVar9 = FUN_140003d86;
                            }
                            else {
                              if (uVar2 != 0x7c7a3) goto LAB_140023c95;
                              pcVar9 = FUN_1400047a1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0xbdae1) {
            if (uVar2 == 0xbdae0) {
              pcVar9 = FUN_140006d57;
            }
            else {
              if (uVar2 < 0x9e111) {
                if (uVar2 == 0x9e110) {
                  pcVar9 = FUN_14000420c;
                }
                else {
                  if (uVar2 < 0x8e429) {
                    if (uVar2 == 0x8e428) {
                      pcVar9 = FUN_140003f34;
                    }
                    else {
                      if (uVar2 == 0x806dd) {
                        pcVar9 = FUN_140006702;
                      }
                      else {
                        if (uVar2 == 0x8267a) {
                          pcVar9 = FUN_140001185;
                        }
                        else {
                          if (uVar2 == 0x84617) {
                            pcVar9 = FUN_140002dda;
                          }
                          else {
                            if (uVar2 == 0x865b4) {
                              pcVar9 = FUN_140007722;
                            }
                            else {
                              if (uVar2 == 0x88551) {
                                pcVar9 = FUN_140004eac;
                              }
                              else {
                                if (uVar2 == 0x8a4ee) {
                                  pcVar9 = (code *)&DAT_14000636c;
                                }
                                else {
                                  if (uVar2 != 0x8c48b) goto LAB_140023c95;
                                  pcVar9 = FUN_1400075d1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x903c5) {
                      pcVar9 = FUN_14000253f;
                    }
                    else {
                      if (uVar2 == 0x92362) {
                        pcVar9 = FUN_140004192;
                      }
                      else {
                        if (uVar2 == 0x942ff) {
                          pcVar9 = FUN_140001bb2;
                        }
                        else {
                          if (uVar2 == 0x9629c) {
                            pcVar9 = FUN_140005a2a;
                          }
                          else {
                            if (uVar2 == 0x98239) {
                              pcVar9 = FUN_140002eb6;
                            }
                            else {
                              if (uVar2 == 0x9a1d6) {
                                pcVar9 = FUN_140005f0d;
                              }
                              else {
                                if (uVar2 != 0x9c173) goto LAB_140023c95;
                                pcVar9 = FUN_1400076b3;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0xaddf9) {
                  if (uVar2 == 0xaddf8) {
                    pcVar9 = (code *)&LAB_1400054be;
                  }
                  else {
                    if (uVar2 == 0xa00ad) {
                      pcVar9 = (code *)&LAB_140002b49;
                    }
                    else {
                      if (uVar2 == 0xa204a) {
                        pcVar9 = FUN_140006fb2;
                      }
                      else {
                        if (uVar2 == 0xa3fe7) {
                          pcVar9 = FUN_140001ac7;
                        }
                        else {
                          if (uVar2 == 0xa5f84) {
                            pcVar9 = FUN_14000440f;
                          }
                          else {
                            if (uVar2 == 0xa7f21) {
                              pcVar9 = FUN_140005d0c;
                            }
                            else {
                              if (uVar2 == 0xa9ebe) {
                                pcVar9 = FUN_140006e87;
                              }
                              else {
                                if (uVar2 != 0xabe5b) goto LAB_140023c95;
                                pcVar9 = FUN_1400019a1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0xafd95) {
                    pcVar9 = FUN_14000181a;
                  }
                  else {
                    if (uVar2 == 0xb1d32) {
                      pcVar9 = (code *)&DAT_140001c71;
                    }
                    else {
                      if (uVar2 == 0xb3ccf) {
                        pcVar9 = FUN_140007561;
                      }
                      else {
                        if (uVar2 == 0xb5c6c) {
                          pcVar9 = FUN_140005255;
                        }
                        else {
                          if (uVar2 == 0xb7c09) {
                            pcVar9 = (code *)&LAB_1400052ac;
                          }
                          else {
                            if (uVar2 == 0xb9ba6) {
                              pcVar9 = FUN_14000159e;
                            }
                            else {
                              if (uVar2 != 0xbbb43) goto LAB_140023c95;
                              pcVar9 = FUN_140001e72;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0xdd4b1) {
              if (uVar2 == 0xdd4b0) {
                pcVar9 = FUN_140002f7c;
              }
              else {
                if (uVar2 < 0xcd7c9) {
                  if (uVar2 == 0xcd7c8) {
                    pcVar9 = FUN_140006964;
                  }
                  else {
                    if (uVar2 == 0xbfa7d) {
                      pcVar9 = FUN_140004c97;
                    }
                    else {
                      if (uVar2 == 0xc1a1a) {
                        pcVar9 = FUN_140007154;
                      }
                      else {
                        if (uVar2 == 0xc39b7) {
                          pcVar9 = (code *)&DAT_140005bcf;
                        }
                        else {
                          if (uVar2 == 0xc5954) {
                            pcVar9 = FUN_140002684;
                          }
                          else {
                            if (uVar2 == 0xc78f1) {
                              pcVar9 = FUN_1400032ef;
                            }
                            else {
                              if (uVar2 == 0xc988e) {
                                pcVar9 = FUN_140005b78;
                              }
                              else {
                                if (uVar2 != 0xcb82b) goto LAB_140023c95;
                                pcVar9 = FUN_140004c2b;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0xcf765) {
                    pcVar9 = FUN_140002186;
                  }
                  else {
                    if (uVar2 == 0xd1702) {
                      pcVar9 = FUN_1400055ea;
                    }
                    else {
                      if (uVar2 == 0xd369f) {
                        pcVar9 = FUN_14000516d;
                      }
                      else {
                        if (uVar2 == 0xd563c) {
                          pcVar9 = FUN_14000707f;
                        }
                        else {
                          if (uVar2 == 0xd75d9) {
                            pcVar9 = (code *)&DAT_1400027b2;
                          }
                          else {
                            if (uVar2 == 0xd9576) {
                              pcVar9 = FUN_140001d46;
                            }
                            else {
                              if (uVar2 != 0xdb513) goto LAB_140023c95;
                              pcVar9 = FUN_140006832;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0xed199) {
                if (uVar2 == 0xed198) {
                  pcVar9 = FUN_14000225f;
                }
                else {
                  if (uVar2 == 0xdf44d) {
                    pcVar9 = FUN_140003565;
                  }
                  else {
                    if (uVar2 == 0xe13ea) {
                      pcVar9 = FUN_14000320b;
                    }
                    else {
                      if (uVar2 == 0xe3387) {
                        pcVar9 = FUN_14000780c;
                      }
                      else {
                        if (uVar2 == 0xe5324) {
                          pcVar9 = FUN_140001526;
                        }
                        else {
                          if (uVar2 == 0xe72c1) {
                            pcVar9 = FUN_140003438;
                          }
                          else {
                            if (uVar2 == 0xe925e) {
                              pcVar9 = FUN_1400042cd;
                            }
                            else {
                              if (uVar2 != 0xeb1fb) goto LAB_140023c95;
                              pcVar9 = FUN_140004bbd;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0xef135) {
                  pcVar9 = FUN_1400069c3;
                }
                else {
                  if (uVar2 == 0xf10d2) {
                    pcVar9 = FUN_140002e44;
                  }
                  else {
                    if (uVar2 == 0xf306f) {
                      pcVar9 = FUN_1400010a3;
                    }
                    else {
                      if (uVar2 == 0xf500c) {
                        pcVar9 = FUN_140001389;
                      }
                      else {
                        if (uVar2 == 0xf6fa9) {
LAB_140023c95:
                          pcVar9 = FUN_140001035;
                        }
                        else {
                          if (uVar2 == 0xf8f46) {
                            pcVar9 = FUN_140001664;
                          }
                          else {
                            if (uVar2 != 0xfaee3) goto LAB_140023c95;
                            pcVar9 = FUN_1400043a7;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar2 < 0x17b5c1) {
        if (uVar2 == 0x17b5c0) {
          pcVar9 = FUN_140004674;
        }
        else {
          if (uVar2 < 0x13c221) {
            if (uVar2 == 0x13c220) {
              pcVar9 = FUN_140005110;
            }
            else {
              if (uVar2 < 0x11c851) {
                if (uVar2 == 0x11c850) {
                  pcVar9 = (code *)&DAT_140004531;
                }
                else {
                  if (uVar2 < 0x10cb69) {
                    if (uVar2 == 0x10cb68) {
                      pcVar9 = FUN_1400063cb;
                    }
                    else {
                      if (uVar2 == 0xfee1d) {
                        pcVar9 = FUN_1400033d8;
                      }
                      else {
                        if (uVar2 == 0x100dba) {
                          pcVar9 = (code *)&DAT_140001324;
                        }
                        else {
                          if (uVar2 == 0x102d57) {
                            pcVar9 = FUN_1400012cd;
                          }
                          else {
                            if (uVar2 == 0x104cf4) {
                              pcVar9 = (code *)&DAT_140003b9c;
                            }
                            else {
                              if (uVar2 == 0x106c91) {
                                pcVar9 = FUN_140002c7c;
                              }
                              else {
                                if (uVar2 == 0x108c2e) {
                                  pcVar9 = FUN_140006a86;
                                }
                                else {
                                  if (uVar2 != 0x10abcb) goto LAB_140023c95;
                                  pcVar9 = FUN_140001874;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (uVar2 == 0x10eb05) {
                      pcVar9 = FUN_14000336b;
                    }
                    else {
                      if (uVar2 == 0x110aa2) {
                        pcVar9 = FUN_140005c45;
                      }
                      else {
                        if (uVar2 == 0x112a3f) {
                          pcVar9 = (code *)&DAT_140003c57;
                        }
                        else {
                          if (uVar2 == 0x1149dc) {
                            pcVar9 = (code *)&DAT_140004ae3;
                          }
                          else {
                            if (uVar2 == 0x116979) {
                              pcVar9 = (code *)&DAT_1400060fe;
                            }
                            else {
                              if (uVar2 == 0x118916) {
                                pcVar9 = FUN_140002940;
                              }
                              else {
                                if (uVar2 != 0x11a8b3) goto LAB_140023c95;
                                pcVar9 = FUN_140003dfd;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 < 0x12c539) {
                  if (uVar2 == 0x12c538) {
                    pcVar9 = FUN_140004942;
                  }
                  else {
                    if (uVar2 == 0x11e7ed) {
                      pcVar9 = FUN_140002c1e;
                    }
                    else {
                      if (uVar2 == 0x12078a) {
                        pcVar9 = (code *)&DAT_140002313;
                      }
                      else {
                        if (uVar2 == 0x122727) {
                          pcVar9 = (code *)&DAT_140003bf8;
                        }
                        else {
                          if (uVar2 == 0x1246c4) {
                            pcVar9 = FUN_140003991;
                          }
                          else {
                            if (uVar2 == 0x126661) {
                              pcVar9 = FUN_140006f4a;
                            }
                            else {
                              if (uVar2 == 0x1285fe) {
                                pcVar9 = FUN_1400017a5;
                              }
                              else {
                                if (uVar2 != 0x12a59b) goto LAB_140023c95;
                                pcVar9 = (code *)&LAB_1400047fd;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x12e4d5) {
                    pcVar9 = FUN_140004b4e;
                  }
                  else {
                    if (uVar2 == 0x130472) {
                      pcVar9 = FUN_140005e3d;
                    }
                    else {
                      if (uVar2 == 0x13240f) {
                        pcVar9 = FUN_140003f98;
                      }
                      else {
                        if (uVar2 == 0x1343ac) {
                          pcVar9 = FUN_1400071b8;
                        }
                        else {
                          if (uVar2 == 0x136349) {
                            pcVar9 = FUN_1400044dc;
                          }
                          else {
                            if (uVar2 == 0x1382e6) {
                              pcVar9 = FUN_140006a2a;
                            }
                            else {
                              if (uVar2 != 0x13a283) goto LAB_140023c95;
                              pcVar9 = FUN_1400053ef;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x15bbf1) {
              if (uVar2 == 0x15bbf0) {
                pcVar9 = FUN_1400021f4;
              }
              else {
                if (uVar2 < 0x14bf09) {
                  if (uVar2 == 0x14bf08) {
                    pcVar9 = FUN_140003718;
                  }
                  else {
                    if (uVar2 == 0x13e1bd) {
                      pcVar9 = FUN_1400074e9;
                    }
                    else {
                      if (uVar2 == 0x14015a) {
                        pcVar9 = FUN_140005536;
                      }
                      else {
                        if (uVar2 == 0x1420f7) {
                          pcVar9 = FUN_1400040b9;
                        }
                        else {
                          if (uVar2 == 0x144094) {
                            pcVar9 = FUN_1400016d9;
                          }
                          else {
                            if (uVar2 == 0x146031) {
                              pcVar9 = FUN_140001ee6;
                            }
                            else {
                              if (uVar2 == 0x147fce) {
                                pcVar9 = FUN_140004f1c;
                              }
                              else {
                                if (uVar2 != 0x149f6b) goto LAB_140023c95;
                                pcVar9 = FUN_140005736;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x14dea5) {
                    pcVar9 = FUN_140003065;
                  }
                  else {
                    if (uVar2 == 0x14fe42) {
                      pcVar9 = FUN_140007011;
                    }
                    else {
                      if (uVar2 == 0x151ddf) {
                        pcVar9 = (code *)&DAT_14000558a;
                      }
                      else {
                        if (uVar2 == 0x153d7c) {
                          pcVar9 = FUN_140001e0b;
                        }
                        else {
                          if (uVar2 == 0x155d19) {
                            pcVar9 = (code *)&DAT_1400064de;
                          }
                          else {
                            if (uVar2 == 0x157cb6) {
                              pcVar9 = FUN_140001cdc;
                            }
                            else {
                              if (uVar2 != 0x159c53) goto LAB_140023c95;
                              pcVar9 = (code *)&DAT_14000172e;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x16b8d9) {
                if (uVar2 == 0x16b8d8) {
                  pcVar9 = FUN_140001f4d;
                }
                else {
                  if (uVar2 == 0x15db8d) {
                    pcVar9 = FUN_140002bb2;
                  }
                  else {
                    if (uVar2 == 0x15fb2a) {
                      pcVar9 = FUN_140004612;
                    }
                    else {
                      if (uVar2 == 0x161ac7) {
                        pcVar9 = FUN_140003adb;
                      }
                      else {
                        if (uVar2 == 0x163a64) {
                          pcVar9 = FUN_140006689;
                        }
                        else {
                          if (uVar2 == 0x165a01) {
                            pcVar9 = (code *)&LAB_140005e95;
                          }
                          else {
                            if (uVar2 == 0x16799e) {
                              pcVar9 = FUN_140001109;
                            }
                            else {
                              if (uVar2 != 0x16993b) goto LAB_140023c95;
                              pcVar9 = FUN_14000261a;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x16d875) {
                  pcVar9 = FUN_1400035d0;
                }
                else {
                  if (uVar2 == 0x16f812) {
                    pcVar9 = FUN_140007346;
                  }
                  else {
                    if (uVar2 == 0x1717af) {
                      pcVar9 = FUN_1400036a5;
                    }
                    else {
                      if (uVar2 == 0x17374c) {
                        pcVar9 = FUN_1400026ec;
                      }
                      else {
                        if (uVar2 == 0x1756e9) {
                          pcVar9 = FUN_140004122;
                        }
                        else {
                          if (uVar2 == 0x177686) {
                            pcVar9 = (code *)&DAT_140003841;
                          }
                          else {
                            if (uVar2 != 0x179623) goto LAB_140023c95;
                            pcVar9 = FUN_140001da8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (uVar2 < 0x1ba961) {
          if (uVar2 == 0x1ba960) {
            pcVar9 = FUN_140002819;
          }
          else {
            if (uVar2 < 0x19af91) {
              if (uVar2 == 0x19af90) {
                pcVar9 = FUN_14000245a;
              }
              else {
                if (uVar2 < 0x18b2a9) {
                  if (uVar2 == 0x18b2a8) {
                    pcVar9 = FUN_1400020a7;
                  }
                  else {
                    if (uVar2 == 0x17d55d) {
                      pcVar9 = FUN_140002380;
                    }
                    else {
                      if (uVar2 == 0x17f4fa) {
                        pcVar9 = FUN_140002b01;
                      }
                      else {
                        if (uVar2 == 0x181497) {
                          pcVar9 = FUN_1400056c7;
                        }
                        else {
                          if (uVar2 == 0x183434) {
                            pcVar9 = FUN_140003ff2;
                          }
                          else {
                            if (uVar2 == 0x1853d1) {
                              pcVar9 = (code *)&LAB_14000391d;
                            }
                            else {
                              if (uVar2 == 0x18736e) {
                                pcVar9 = FUN_1400045a3;
                              }
                              else {
                                if (uVar2 != 0x18930b) goto LAB_140023c95;
                                pcVar9 = FUN_140002a2b;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (uVar2 == 0x18d245) {
                    pcVar9 = (code *)&LAB_1400028d9;
                  }
                  else {
                    if (uVar2 == 0x18f1e2) {
                      pcVar9 = FUN_140006db8;
                    }
                    else {
                      if (uVar2 == 0x19117f) {
                        pcVar9 = (code *)&LAB_140007212;
                      }
                      else {
                        if (uVar2 == 0x19311c) {
                          pcVar9 = FUN_140004e4c;
                        }
                        else {
                          if (uVar2 == 0x1950b9) {
                            pcVar9 = FUN_1400037f4;
                          }
                          else {
                            if (uVar2 == 0x197056) {
                              pcVar9 = FUN_1400025b3;
                            }
                            else {
                              if (uVar2 != 0x198ff3) goto LAB_140023c95;
                              pcVar9 = FUN_14000779d;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 < 0x1aac79) {
                if (uVar2 == 0x1aac78) {
                  pcVar9 = FUN_1400023ef;
                }
                else {
                  if (uVar2 == 0x19cf2d) {
                    pcVar9 = FUN_14000312c;
                  }
                  else {
                    if (uVar2 == 0x19eeca) {
                      pcVar9 = FUN_140001fbb;
                    }
                    else {
                      if (uVar2 == 0x1a0e67) {
                        pcVar9 = (code *)0x140004263;
                      }
                      else {
                        if (uVar2 == 0x1a2e04) {
                          pcVar9 = FUN_1400030c6;
                        }
                        else {
                          if (uVar2 == 0x1a4da1) {
                            pcVar9 = FUN_140004a7f;
                          }
                          else {
                            if (uVar2 == 0x1a6d3e) {
                              pcVar9 = FUN_140006768;
                            }
                            else {
                              if (uVar2 != 0x1a8cdb) goto LAB_140023c95;
                              pcVar9 = (code *)&LAB_1400039f0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x1acc15) {
                  pcVar9 = FUN_140006618;
                }
                else {
                  if (uVar2 == 0x1aebb2) {
                    pcVar9 = FUN_140002752;
                  }
                  else {
                    if (uVar2 == 0x1b0b4f) {
                      pcVar9 = (code *)&LAB_1400049a7;
                    }
                    else {
                      if (uVar2 == 0x1b2aec) {
                        pcVar9 = FUN_140002111;
                      }
                      else {
                        if (uVar2 == 0x1b4a89) {
                          pcVar9 = FUN_140005802;
                        }
                        else {
                          if (uVar2 == 0x1b6a26) {
                            pcVar9 = FUN_140006c25;
                          }
                          else {
                            if (uVar2 != 0x1b89c3) goto LAB_140023c95;
                            pcVar9 = (code *)&LAB_1400022b7;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (uVar2 < 0x1da331) {
            if (uVar2 == 0x1da330) {
              pcVar9 = FUN_14000623e;
            }
            else {
              if (uVar2 < 0x1ca649) {
                if (uVar2 == 0x1ca648) {
                  pcVar9 = FUN_140001202;
                }
                else {
                  if (uVar2 == 0x1bc8fd) {
                    pcVar9 = FUN_140004d5f;
                  }
                  else {
                    if (uVar2 == 0x1be89a) {
                      pcVar9 = FUN_1400038b6;
                    }
                    else {
                      if (uVar2 == 0x1c0837) {
                        pcVar9 = FUN_140006b49;
                      }
                      else {
                        if (uVar2 == 0x1c27d4) {
                          pcVar9 = (code *)&DAT_140007399;
                        }
                        else {
                          if (uVar2 == 0x1c4771) {
                            pcVar9 = FUN_140002031;
                          }
                          else {
                            if (uVar2 == 0x1c670e) {
                              pcVar9 = (code *)&LAB_140006303;
                            }
                            else {
                              if (uVar2 != 0x1c86ab) goto LAB_140023c95;
                              pcVar9 = FUN_140006cf6;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                if (uVar2 == 0x1cc5e5) {
                  pcVar9 = (code *)&LAB_1400067bb;
                }
                else {
                  if (uVar2 == 0x1ce582) {
                    pcVar9 = FUN_1400061c8;
                  }
                  else {
                    if (uVar2 == 0x1d051f) {
                      pcVar9 = FUN_140005957;
                    }
                    else {
                      if (uVar2 == 0x1d24bc) {
                        pcVar9 = FUN_14000405d;
                      }
                      else {
                        if (uVar2 == 0x1d4459) {
                          pcVar9 = FUN_1400048c4;
                        }
                        else {
                          if (uVar2 == 0x1d63f6) {
                            pcVar9 = FUN_1400072da;
                          }
                          else {
                            if (uVar2 != 0x1d8393) goto LAB_140023c95;
                            pcVar9 = FUN_140005006;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 < 0x1ea019) {
              if (uVar2 == 0x1ea018) {
                pcVar9 = FUN_140006c89;
              }
              else {
                if (uVar2 == 0x1dc2cd) {
                  pcVar9 = FUN_1400014bd;
                }
                else {
                  if (uVar2 == 0x1de26a) {
                    pcVar9 = FUN_140003a69;
                  }
                  else {
                    if (uVar2 == 0x1e0207) {
                      pcVar9 = FUN_1400024cc;
                    }
                    else {
                      if (uVar2 == 0x1e21a4) {
                        pcVar9 = FUN_140004dd3;
                      }
                      else {
                        if (uVar2 == 0x1e4141) {
                          pcVar9 = FUN_14000603e;
                        }
                        else {
                          if (uVar2 == 0x1e60de) {
                            pcVar9 = FUN_140006e1b;
                          }
                          else {
                            if (uVar2 != 0x1e807b) goto LAB_140023c95;
                            pcVar9 = FUN_140001b35;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              if (uVar2 == 0x1ebfb5) {
                pcVar9 = FUN_14000587c;
              }
              else {
                if (uVar2 == 0x1edf52) {
                  pcVar9 = FUN_140001c19;
                }
                else {
                  if (uVar2 == 0x1efeef) {
                    pcVar9 = FUN_140003b43;
                  }
                  else {
                    if (uVar2 == 0x1f1e8c) {
                      pcVar9 = FUN_140006541;
                    }
                    else {
                      if (uVar2 == 0x1f3e29) {
                        pcVar9 = FUN_140003cc0;
                      }
                      else {
                        if (uVar2 == 0x1f5dc6) {
                          pcVar9 = FUN_14000126b;
                        }
                        else {
                          if (uVar2 != 0x1f7d63) goto LAB_140023c95;
                          pcVar9 = FUN_140001a73;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    LOCK();
    DAT_14002903b =
         DAT_14002903b ^ (ulonglong)(DAT_14002903b == 0) * (DAT_14002903b ^ (ulonglong)pcVar9);
  }
  *DAT_140033a38 = 0;
  puVar4 = (undefined *)ExAllocatePoolWithTag(0,0x11d00);
  if (puVar4 == (undefined *)0x0) {
    ExFreePoolWithTag(DAT_140033a38);
    ExFreePoolWithTag(DAT_140033a80,0);
    DAT_140033a38 = (ulonglong *)0x0;
    ExFreePoolWithTag(DAT_140033a40,0);
    DAT_140033a40 = (undefined8 *)0x0;
    goto LAB_1400146ed;
  }
  puVar17 = puVar4;
  for (lVar8 = 0x11d00; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  DAT_140033a18 = 0;
  _DAT_140033a20 = 0x80;
  DAT_140033a28 = puVar4;
  KeInitializeGuardedMutex(&DAT_1400339e0);
  KeInitializeGuardedMutex(&DAT_140033a48);
  uVar10 = local_118;
  uVar2 = 0xcb86fc9a;
  uVar7 = 0x243e3949;
  local_150 = CONCAT44(local_150._4_4_,(uint)local_70);
  local_160 = (uint)local_74;
  local_108 = 0;
  uVar25 = local_64;
  uVar20 = local_60;
  uVar26 = local_62;
  uVar22 = local_5e;
  uVar24 = local_6c;
  uVar14 = local_6e;
  uVar15 = local_76;
  uVar21 = local_72;
  uVar23 = local_78;
  uVar13 = local_6a;
  uVar11 = local_66;
  uVar16 = local_68;
  do {
    if (uVar2 < 0xaabd8d3f) {
      if (uVar2 == 0xaabd8d3e) {
        local_78 = uVar23 ^ 0x7277;
        local_72 = uVar21 ^ 0xe273;
        local_6a = uVar13 ^ 0x932e;
        local_6e = uVar14 ^ 0x5a5;
        local_68 = uVar16 ^ 0x805d;
        local_66 = uVar11 ^ 0xcf48;
        local_5e = uVar22 ^ 0x10e0;
        break;
      }
      if (uVar2 == 0x19868108) {
        uVar15 = 0xdd52;
        uVar7 = 0xfae20515;
        local_76 = 0xdd52;
      }
      else {
        if (uVar2 == 0x319f5498) {
          uVar25 = 0x42ca;
          uVar7 = 0x97d36ae1;
          local_64 = 0x42ca;
        }
        else {
          if (uVar2 == 0x37ea293c) {
            uVar26 = uVar26 ^ 0x90f0;
            uVar7 = 0xa0b99026;
            local_62 = uVar26;
          }
          else {
            if (uVar2 == 0x610ef09d) {
              uVar26 = 0x9085;
              uVar20 = 0x2744;
              local_62 = 0x9085;
              uVar7 = 0x56e4d9a1;
              local_60 = 0x2744;
            }
            else {
              if (uVar2 == 0x69b441fe) {
                uVar25 = uVar25 ^ 0x42b8;
                uVar20 = uVar20 ^ 0x2729;
                uVar7 = 0xb6bb4de8;
                local_64 = uVar25;
                local_60 = uVar20;
              }
              else {
                if (uVar2 == 0x9753b91a) {
                  local_70 = (ushort)local_150 ^ 0x5bfb;
                  local_150 = local_150 & 0xffffffff00000000 | (ulonglong)local_70;
                  uVar15 = uVar15 ^ 0xdd16;
                  local_158 = local_158 & 0xffffffff00000000 | 0xb872;
                  local_74 = (ushort)local_160 ^ 0xb872;
                  local_160 = (uint)local_74;
                  uVar7 = 0xfee7f8e4;
                  local_76 = uVar15;
                }
                else {
                  if (uVar2 == 0xa64c3e79) {
                    uVar14 = 0x5c6;
                    uVar21 = 0xe205;
                    local_6e = 0x5c6;
                    uVar7 = 0x6c371f6d;
                    local_72 = 0xe205;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (uVar2 == 0xc41046d9) {
        uVar22 = 0x10e0;
        uVar7 = 0xe298f4f;
        local_5e = 0x10e0;
      }
      else {
        if (uVar2 == 0xca39c996) {
          uVar16 = 0x801c;
          uVar7 = 0xfba69d0e;
          local_68 = 0x801c;
        }
        else {
          if (uVar2 == 0xca7b2114) {
            uVar11 = 0xcf3d;
            uVar7 = 0xd3fda01c;
            local_66 = 0xcf3d;
          }
          else {
            if (uVar2 == 0xcb86fc9a) {
              uVar13 = 0x9372;
              uVar24 = 0xfa50;
              local_150 = CONCAT44(local_150._4_4_,0x5b92);
              local_70 = 0x5b92;
              uVar7 = 0xf96ba43;
              local_6a = 0x9372;
              local_6c = 0xfa50;
            }
            else {
              if (uVar2 == 0xdf0f0c16) {
                uVar24 = uVar24 ^ 0xfa35;
                uVar7 = 0x75b28128;
                local_6c = uVar24;
              }
              else {
                if (uVar2 == 0xe364841d) {
                  uVar23 = 0x722b;
                  local_160 = 0xb817;
                  local_74 = 0xb817;
                  uVar7 = 0x826a7480;
                  local_78 = 0x722b;
                }
              }
            }
          }
        }
      }
    }
    uVar2 = uVar2 ^ uVar7;
  } while (uVar2 != 0x136860ce);
  local_128 = local_128 & 0xffffffff00000000 | 0x1a001a;
  uStack288 = &local_78;
  uStack288._4_4_ = (undefined4)((ulonglong)uStack288 >> 0x20);
  local_178 = &local_108;
  local_180 = 0;
  local_188 = 0x100;
  local_d8 = 0x1a001a;
  uStack212 = local_128._4_4_;
  uStack208 = (undefined4)uStack288;
  uStack204 = uStack288._4_4_;
  local_160 = IoCreateDevice(local_118);
  if ((int)local_160 < 0) {
    PsSetCreateProcessNotifyRoutineEx(&LAB_140014060,1);
    if (DAT_140033a38 != (ulonglong *)0x0) {
      uVar10 = *DAT_140033a38;
      if (uVar10 != 0) {
        local_150 = 0x810360b0;
        uVar12 = 0xe8771e154c640dfa;
        uVar19 = 0xe672244445351653;
        local_128 = 0x9c1bb969;
        local_158 = 0xa23a01ae;
        local_138 = 0xc5133c5b;
        local_140 = 0xd81c49d5;
        local_148 = 0xf7d87696;
LAB_1400231c2:
        uVar12 = uVar12 * uVar19;
        uVar5 = uVar12 >> 0x20;
        if (0x51de30d3 < uVar5) {
          if (uVar5 == 0x5bb4d17c) {
            uVar19 = uVar19 ^ 0x2a4b5db12c5f626c;
            uVar12 = uVar12 ^ 0x44fbdf578767dc29;
            uVar10 = uVar10 * *(longlong *)(DAT_14002903b + 7);
            uVar10 = uVar10 ^ uVar10 >> 0x19;
            goto LAB_1400231c2;
          }
          if (uVar5 == 0x810360b0) {
            uVar10 = uVar10 * 0x140000000;
            uVar12 = uVar12 ^ 0xa5e7ed2fd9999928;
            uVar5 = 0xc6bb870059a90a57;
          }
          else {
            if (uVar5 != 0x9c1bb969) {
              if (uVar5 == 0xa23a01ae) {
                uVar19 = uVar19 ^ 0xae090ffc056af8df;
                uVar10 = uVar10 ^ uVar10 >> 0x20;
                uVar5 = 0x69f9067514d7ac03;
              }
              else {
                if (uVar5 != 0xc5133c5b) {
                  if (uVar5 == 0xd81c49d5) {
                    local_168 = CONCAT44(local_168._4_4_,0x3b1c8ee1);
                    uVar10 = uVar10 * -0x4e0593e00239cd71 ^ uVar10 * -0x4e0593e00239cd71 >> 1;
                    uVar10 = uVar10 ^ uVar10 >> 2;
                    uVar12 = uVar12 ^ 0xc56221c259c00386;
                    uVar10 = uVar10 ^ uVar10 >> 4;
                    uVar5 = 0x1449db77b240702b;
                    goto LAB_14001e4ff;
                  }
                  if (uVar5 != 0xf7d87696) goto LAB_14003c815;
                  uVar19 = uVar19 ^ 0x419036fa5f372cae;
                  uVar12 = uVar12 ^ 0x6fb8a2372741bd03;
                  uVar10 = uVar10 ^ 0x140000000;
                  goto LAB_1400231c2;
                }
                local_168 = CONCAT44(local_168._4_4_,0xf044b342);
                uVar19 = uVar19 ^ 0xfdd12451b89bcf8d;
                uVar10 = uVar10 ^ 0x140000000 ^ uVar10 >> 0x25;
                uVar5 = 0x71366801cec3205f;
              }
              goto LAB_14001d955;
            }
            uVar10 = uVar10 * 0x140000000;
            uVar12 = uVar12 ^ 0xbf9c50b86ef16d1a;
            uVar5 = 0xbb5b3c9b54c80a1c;
          }
LAB_14001e4ff:
          uVar19 = uVar19 ^ uVar5;
          goto LAB_1400231c2;
        }
        if (uVar5 == 0x51de30d3) {
          uVar19 = uVar19 ^ 0x846c7d70f4f37fdf;
          local_168 = CONCAT44(local_168._4_4_,0xe1402562);
          uVar12 = uVar12 ^ 0x8089ed2e1786a777;
          goto LAB_1400231c2;
        }
        if (uVar5 == 0xc26f225) {
          uVar12 = uVar12 ^ 0x802262f2f7f6b7d6;
          local_168 = CONCAT44(local_168._4_4_,0xe6c32932);
          uVar19 = uVar19 ^ 0xc3ebe04c86cfa87;
          goto LAB_1400231c2;
        }
        if (uVar5 == 0xeab0163) {
          local_168 = CONCAT44(local_168._4_4_,0xb18ea8d4);
          uVar12 = uVar12 ^ 0x4035c700a357c4a1;
          uVar19 = uVar19 ^ 0x5279b661f177655e;
          uVar10 = (uVar10 ^ uVar10 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
          goto LAB_1400231c2;
        }
        if (uVar5 == 0x13848c57) {
          local_168 = 0x3d8b3e4a950dc18c;
          uVar19 = uVar19 ^ 0xbf881c02b60c544e;
          uVar5 = 0xc9fc45a202d50e39;
LAB_14001d955:
          uVar12 = uVar12 ^ uVar5;
          goto LAB_1400231c2;
        }
        if (uVar5 == 0x1e4fead0) {
          uVar10 = uVar10 ^ uVar10 >> 8;
          uVar19 = uVar19 ^ 0x9e9485da4b6a2f63;
          uVar10 = uVar10 ^ uVar10 >> 0x10;
          uVar5 = 0xe4fa16fd6e3641b8;
          goto LAB_14001d955;
        }
        if (uVar5 == 0x2f13b533) {
          uVar12 = uVar12 ^ 0x4995639dbdda3ea2;
          uVar10 = uVar10 ^ uVar10 >> 0x32;
          uVar5 = 0x28edf07d592418c4;
          goto LAB_14001e4ff;
        }
        if (uVar5 == 0x3c29a67a) {
          uVar19 = uVar19 ^ 0x47162c33a6e660de;
          uVar10 = uVar10 * -0x36849056a20af79f;
          uVar5 = 0xfe37ea63c2b46731;
          goto LAB_14001d955;
        }
        if (uVar5 == 0x3c98729b) {
          uVar19 = uVar19 ^ 0xb8196c271a2d6752;
          uVar12 = uVar12 ^ 0xdcb3cd90c92f9903;
          local_168 = 0xb7fb3845be9ae9db;
          goto LAB_1400231c2;
        }
        if (uVar5 == 0x3e518e3f) {
          uVar19 = uVar19 ^ 0xe922574bfc8a24b3;
          local_168 = CONCAT44(local_168._4_4_,0xd7ea1e5c);
          uVar12 = uVar12 ^ 0xcfd3748942aee600;
          goto LAB_1400231c2;
        }
LAB_14003c815:
        uVar12 = 0xe8771e154c640dfa;
        uVar19 = 0xe672244445351653;
        if (uVar10 != 0) {
          uVar10 = *DAT_140033a38;
          if (uVar10 != 0) {
LAB_140023569:
            uVar12 = uVar12 * uVar19;
            uVar5 = uVar12 >> 0x20;
            if (uVar5 < 0x51de30d4) {
              if (uVar5 == 0x51de30d3) {
                uVar19 = uVar19 ^ 0x846c7d70f4f37fdf;
                local_168 = CONCAT44(local_168._4_4_,0xe1402562);
                uVar12 = uVar12 ^ 0x8089ed2e1786a777;
                goto LAB_140023569;
              }
              if (uVar5 == 0xc26f225) {
                local_168 = CONCAT44(local_168._4_4_,0xe6c32932);
                uVar12 = uVar12 ^ 0x802262f2f7f6b7d6;
                uVar19 = uVar19 ^ 0xc3ebe04c86cfa87;
                goto LAB_140023569;
              }
              if (uVar5 == 0xeab0163) {
                local_168 = CONCAT44(local_168._4_4_,0xb18ea8d4);
                uVar12 = uVar12 ^ 0x4035c700a357c4a1;
                uVar19 = uVar19 ^ 0x5279b661f177655e;
                uVar10 = (uVar10 ^ uVar10 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
                goto LAB_140023569;
              }
              if (uVar5 == 0x13848c57) {
                local_128 = 0x3d8b3e4a950dc18c;
                uVar19 = uVar19 ^ 0xbf881c02b60c544e;
                uVar5 = 0xc9fc45a202d50e39;
              }
              else {
                if (uVar5 == 0x1e4fead0) {
                  uVar10 = uVar10 ^ uVar10 >> 8;
                  uVar19 = uVar19 ^ 0x9e9485da4b6a2f63;
                  uVar10 = uVar10 ^ uVar10 >> 0x10;
                  uVar5 = 0xe4fa16fd6e3641b8;
                }
                else {
                  if (uVar5 == 0x2f13b533) {
                    uVar12 = uVar12 ^ 0x4995639dbdda3ea2;
                    uVar10 = uVar10 ^ uVar10 >> 0x32;
                    uVar5 = 0x28edf07d592418c4;
                    goto LAB_14001f280;
                  }
                  if (uVar5 != 0x3c29a67a) {
                    if (uVar5 == 0x3c98729b) {
                      local_168 = CONCAT44(local_168._4_4_,0xee96c8f);
                      uVar19 = uVar19 ^ 0xb8196c271a2d6752;
                      uVar12 = uVar12 ^ 0xdcb3cd90c92f9903;
                      local_128 = 0xb7fb3845be9ae9db;
                      goto LAB_140023569;
                    }
                    if (uVar5 == 0x3e518e3f) {
                      uVar19 = uVar19 ^ 0xe922574bfc8a24b3;
                      local_168 = CONCAT44(local_168._4_4_,0xd7ea1e5c);
                      uVar5 = 0xcfd3748942aee600;
                      goto LAB_14001a570;
                    }
                    goto LAB_140023468;
                  }
                  uVar19 = uVar19 ^ 0x47162c33a6e660de;
                  uVar10 = uVar10 * -0x36849056a20af79f;
                  uVar5 = 0xfe37ea63c2b46731;
                }
              }
LAB_14001a570:
              uVar12 = uVar12 ^ uVar5;
              goto LAB_140023569;
            }
            if (uVar5 == 0x5bb4d17c) {
              uVar19 = uVar19 ^ 0x2a4b5db12c5f626c;
              uVar12 = uVar12 ^ 0x44fbdf578767dc29;
              uVar10 = uVar10 * *(longlong *)(DAT_14002903b + 7);
              uVar10 = uVar10 ^ uVar10 >> 0x19;
              goto LAB_140023569;
            }
            if (uVar5 == 0x810360b0) {
              uVar10 = uVar10 * 0x140000000;
              uVar12 = uVar12 ^ 0xa5e7ed2fd9999928;
              uVar5 = 0xc6bb870059a90a57;
            }
            else {
              if (uVar5 != 0x9c1bb969) {
                if (uVar5 == 0xa23a01ae) {
                  uVar19 = uVar19 ^ 0xae090ffc056af8df;
                  uVar10 = uVar10 ^ uVar10 >> 0x20;
                  uVar5 = 0x69f9067514d7ac03;
                }
                else {
                  if (uVar5 != 0xc5133c5b) {
                    if (uVar5 == 0xd81c49d5) {
                      local_168 = CONCAT44(local_168._4_4_,0x3b1c8ee1);
                      uVar10 = uVar10 * -0x4e0593e00239cd71 ^ uVar10 * -0x4e0593e00239cd71 >> 1;
                      uVar10 = uVar10 ^ uVar10 >> 2;
                      uVar12 = uVar12 ^ 0xc56221c259c00386;
                      uVar10 = uVar10 ^ uVar10 >> 4;
                      uVar5 = 0x1449db77b240702b;
                      goto LAB_14001f280;
                    }
                    if (uVar5 != 0xf7d87696) goto LAB_140023468;
                    uVar19 = uVar19 ^ 0x419036fa5f372cae;
                    uVar12 = uVar12 ^ 0x6fb8a2372741bd03;
                    uVar10 = uVar10 ^ 0x140000000;
                    goto LAB_140023569;
                  }
                  local_168 = CONCAT44(local_168._4_4_,0xf044b342);
                  uVar19 = uVar19 ^ 0xfdd12451b89bcf8d;
                  uVar10 = uVar10 ^ 0x140000000 ^ uVar10 >> 0x25;
                  uVar5 = 0x71366801cec3205f;
                }
                goto LAB_14001a570;
              }
              uVar10 = uVar10 * 0x140000000;
              uVar12 = uVar12 ^ 0xbf9c50b86ef16d1a;
              uVar5 = 0xbb5b3c9b54c80a1c;
            }
LAB_14001f280:
            uVar19 = uVar19 ^ uVar5;
            goto LAB_140023569;
          }
LAB_140023468:
          ObUnRegisterCallbacks(uVar10);
          *DAT_140033a38 = 0;
          DAT_140033a38[1] = 0;
        }
      }
      ExFreePoolWithTag(DAT_140033a38,0);
      DAT_140033a38 = (ulonglong *)0x0;
    }
    if (DAT_140033a28 != (undefined *)0x0) {
      ExFreePoolWithTag(DAT_140033a28,0);
      DAT_140033a28 = (undefined *)0x0;
    }
    if (DAT_140033a40 != (undefined8 *)0x0) {
      ExFreePoolWithTag(DAT_140033a40,0);
      DAT_140033a40 = (undefined8 *)0x0;
    }
    if (DAT_140033a80 != (undefined8 *)0x0) {
      ExFreePoolWithTag(DAT_140033a80,0);
      DAT_140033a80 = (undefined8 *)0x0;
    }
  }
  else {
    puVar3 = (undefined8 *)(uVar10 + 0x70);
    for (lVar8 = 0x1b; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar3 = &LAB_140014450;
      puVar3 = puVar3 + 1;
    }
    *(undefined **)(uVar10 + 0x68) = &LAB_140025360;
    uVar7 = 0xd5986ac8;
    uVar2 = 0xaefabdc0;
    local_140 = local_140 & 0xffffffff00000000 | (ulonglong)local_3a;
    local_148 = local_148 & 0xffffffff00000000 | (ulonglong)local_3e;
    local_160 = (uint)local_48;
    local_168 = local_168 & 0xffffffff00000000 | (ulonglong)local_4a;
    local_150 = local_150 & 0xffffffff00000000 | (ulonglong)local_56;
    local_138 = local_138 & 0xffffffff00000000 | (ulonglong)local_50;
    local_158 = local_158 & 0xffffffff00000000 | (ulonglong)local_58;
    uVar25 = local_38;
    uVar20 = local_42;
    uVar26 = local_54;
    uVar22 = local_46;
    uVar24 = local_4c;
    uVar14 = local_4e;
    uVar15 = local_52;
    uVar21 = local_36;
    uVar23 = local_40;
    uVar13 = local_44;
    uVar11 = local_3c;
    uVar16 = local_4a;
    do {
      if (uVar2 < 0x98942018) {
        if (uVar2 == 0x98942017) {
          uVar26 = 0x8652;
          local_54 = 0x8652;
          uVar7 = 0xaa994532;
          local_3c = 0x272f;
          uVar11 = 0x272f;
        }
        else {
          if (uVar2 < 0x3732efe4) {
            if (uVar2 == 0x3732efe3) {
              local_3a = (ushort)local_140 ^ 0x683c;
              local_140 = local_140 & 0xffffffff00000000 | (ulonglong)local_3a;
              local_56 = (ushort)local_150 ^ 0xee25;
              local_150 = local_150 & 0xffffffff00000000 | (ulonglong)local_56;
              local_168 = CONCAT44(local_168._4_4_,0xd47b);
              local_58 = (ushort)local_158 ^ 0xd47b;
              local_158 = local_158 & 0xffffffff00000000 | (ulonglong)local_58;
              uVar7 = 0x1a2ebb80;
            }
            else {
              if (uVar2 == 0x75641ba) {
                uVar22 = 0xd25;
                uVar7 = 0x8f1196c6;
                local_46 = 0xd25;
              }
              else {
                if (uVar2 == 0xcd65246) {
                  uVar20 = 0xdd8b;
                  uVar7 = 0x265a3de0;
                  local_42 = 0xdd8b;
                }
                else {
                  if (uVar2 == 0x2a8c6fa6) {
                    uVar24 = 0x1638;
                    uVar7 = 0xb92cada2;
                    local_4c = 0x1638;
                  }
                  else {
                    if (uVar2 == 0x2d1c5463) {
                      uVar14 = uVar14 ^ 0xc26;
                      uVar15 = uVar15 ^ 0xb8e2;
                      uVar7 = 0xc55ecaff;
                      local_52 = uVar15;
                      local_4e = uVar14;
                    }
                    else {
                      if (uVar2 == 0x320d6525) {
                        uVar7 = 0x82078f59;
                        local_40 = 0xa30;
                        uVar23 = 0xa30;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar2 == 0x54ba941f) {
              uVar21 = 0xaa24;
              uVar7 = 0x53ecd5a5;
              local_36 = 0xaa24;
            }
            else {
              if (uVar2 == 0x6b00524d) {
                uVar20 = uVar20 ^ 0xddd7;
                local_48 = (ushort)local_160 ^ 0x2e30;
                local_160 = (uint)local_48;
                local_168 = local_168 & 0xffffffff00000000 | 0xcdc5;
                local_3e = (ushort)local_148 ^ 0xcdc5;
                local_148 = local_148 & 0xffffffff00000000 | (ulonglong)local_3e;
                uVar7 = 0x88a56d84;
                local_42 = uVar20;
              }
              else {
                if (uVar2 == 0x8847d77c) {
                  uVar25 = 0x3a43;
                  local_150 = CONCAT44(local_150._4_4_,0xee61);
                  local_56 = 0xee61;
                  local_160 = 0x2e53;
                  local_48 = 0x2e53;
                  uVar7 = 0x128ec922;
                  local_38 = 0x3a43;
                }
                else {
                  if (uVar2 == 0x93a0c204) {
                    uVar14 = 0xc43;
                    uVar7 = 0x6eee7d2b;
                    local_4e = 0xc43;
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (uVar2 == 0x9a0ce384) {
          local_44 = uVar13 ^ 0x54ec;
          local_36 = uVar21 ^ 0xaa24;
          local_54 = uVar26 ^ 0x863d;
          break;
        }
        if (uVar2 == 0x9ac91e5e) {
          local_4a = 0xb94a;
          uVar7 = 0x25d3e49;
          uVar16 = local_4a;
        }
        else {
          if (uVar2 == 0xaefabdc0) {
            uVar15 = 0xb891;
            local_138 = CONCAT44(local_138._4_4_,0x971d);
            local_50 = 0x971d;
            local_158 = CONCAT44(local_158._4_4_,0xd427);
            local_58 = 0xd427;
            uVar7 = 0xfa4029df;
            local_52 = 0xb891;
          }
          else {
            if (uVar2 == 0xb00aea7c) {
              local_148 = CONCAT44(local_148._4_4_,0xcdb0);
              local_3e = 0xcdb0;
              local_140 = CONCAT44(local_140._4_4_,0x6849);
              local_3a = 0x6849;
              uVar7 = 0xbcdcb83a;
            }
            else {
              if (uVar2 == 0xca7017a8) {
                uVar25 = uVar25 ^ 0x3a2e;
                uVar7 = 0xa17045e5;
                local_38 = uVar25;
              }
              else {
                if (uVar2 == 0xe3a53fc9) {
                  uVar22 = uVar22 ^ 0xd40;
                  uVar7 = 0x9d6a44a;
                  local_46 = uVar22;
                }
                else {
                  if (uVar2 == 0xe8429e9c) {
                    local_4a = uVar16 ^ 0xb923;
                    uVar24 = uVar24 ^ 0x164e;
                    uVar7 = 0x724e7d18;
                    local_4c = uVar24;
                    uVar16 = local_4a;
                  }
                  else {
                    if (uVar2 == 0xea739b83) {
                      local_40 = uVar23 ^ 0xa71;
                      uVar7 = 0xdd417460;
                      uVar23 = local_40;
                    }
                    else {
                      if (uVar2 == 0xfd4ebf2f) {
                        local_168 = CONCAT44(local_168._4_4_,0x9759);
                        local_3c = uVar11 ^ 0x275d;
                        uVar13 = 0x549f;
                        local_50 = (ushort)local_138 ^ 0x9759;
                        local_138 = local_138 & 0xffffffff00000000 | (ulonglong)local_50;
                        uVar7 = 0x373ea887;
                        local_44 = 0x549f;
                        uVar11 = local_3c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar2 = uVar2 ^ uVar7;
    } while (uVar2 != 0xe9ea3d44);
    local_128 = local_128 & 0xffffffff00000000 | 0x220022;
    uStack288 = &local_58;
    uStack288._4_4_ = (undefined4)((ulonglong)uStack288 >> 0x20);
    local_c8 = 0x220022;
    uStack196 = local_128._4_4_;
    uStack192 = (undefined4)uStack288;
    uStack188 = uStack288._4_4_;
    local_160 = IoCreateSymbolicLink(&local_c8);
    if ((int)local_160 < 0) {
      IoDeleteDevice(local_108);
      PsSetCreateProcessNotifyRoutineEx(&LAB_140014060,1);
      if (DAT_140033a38 != (ulonglong *)0x0) {
        uVar10 = *DAT_140033a38;
        if (uVar10 != 0) {
          uVar12 = 0xe8771e154c640dfa;
          uVar19 = 0xe672244445351653;
          local_128 = 0x9c1bb969;
LAB_14001b585:
          uVar12 = uVar12 * uVar19;
          uVar5 = uVar12 >> 0x20;
          if (0x51de30d3 < uVar5) {
            if (uVar5 == 0x5bb4d17c) {
              uVar19 = uVar19 ^ 0x2a4b5db12c5f626c;
              uVar12 = uVar12 ^ 0x44fbdf578767dc29;
              uVar10 = uVar10 * *(longlong *)(DAT_14002903b + 7);
              uVar10 = uVar10 ^ uVar10 >> 0x19;
              goto LAB_14001b585;
            }
            if (uVar5 == 0x810360b0) {
              uVar10 = uVar10 * 0x140000000;
              uVar12 = uVar12 ^ 0xa5e7ed2fd9999928;
              uVar5 = 0xc6bb870059a90a57;
            }
            else {
              if (uVar5 != 0x9c1bb969) {
                if (uVar5 == 0xa23a01ae) {
                  uVar19 = uVar19 ^ 0xae090ffc056af8df;
                  uVar10 = uVar10 ^ uVar10 >> 0x20;
                  uVar5 = 0x69f9067514d7ac03;
                }
                else {
                  if (uVar5 != 0xc5133c5b) {
                    if (uVar5 == 0xd81c49d5) {
                      local_168 = CONCAT44(local_168._4_4_,0x3b1c8ee1);
                      uVar10 = uVar10 * -0x4e0593e00239cd71 ^ uVar10 * -0x4e0593e00239cd71 >> 1;
                      uVar10 = uVar10 ^ uVar10 >> 2;
                      uVar12 = uVar12 ^ 0xc56221c259c00386;
                      uVar10 = uVar10 ^ uVar10 >> 4;
                      uVar5 = 0x1449db77b240702b;
                      goto LAB_14001dfcd;
                    }
                    if (uVar5 != 0xf7d87696) goto LAB_140012481;
                    uVar19 = uVar19 ^ 0x419036fa5f372cae;
                    uVar12 = uVar12 ^ 0x6fb8a2372741bd03;
                    uVar10 = uVar10 ^ 0x140000000;
                    goto LAB_14001b585;
                  }
                  local_168 = CONCAT44(local_168._4_4_,0xf044b342);
                  uVar19 = uVar19 ^ 0xfdd12451b89bcf8d;
                  uVar10 = uVar10 ^ 0x140000000 ^ uVar10 >> 0x25;
                  uVar5 = 0x71366801cec3205f;
                }
                goto LAB_14001ebc3;
              }
              uVar10 = uVar10 * 0x140000000;
              uVar12 = uVar12 ^ 0xbf9c50b86ef16d1a;
              uVar5 = 0xbb5b3c9b54c80a1c;
            }
LAB_14001dfcd:
            uVar19 = uVar19 ^ uVar5;
            goto LAB_14001b585;
          }
          if (uVar5 == 0x51de30d3) {
            uVar19 = uVar19 ^ 0x846c7d70f4f37fdf;
            local_168 = CONCAT44(local_168._4_4_,0xe1402562);
            uVar12 = uVar12 ^ 0x8089ed2e1786a777;
            goto LAB_14001b585;
          }
          if (uVar5 == 0xc26f225) {
            uVar12 = uVar12 ^ 0x802262f2f7f6b7d6;
            local_168 = CONCAT44(local_168._4_4_,0xe6c32932);
            uVar19 = uVar19 ^ 0xc3ebe04c86cfa87;
            goto LAB_14001b585;
          }
          if (uVar5 == 0xeab0163) {
            local_168 = CONCAT44(local_168._4_4_,0xb18ea8d4);
            uVar12 = uVar12 ^ 0x4035c700a357c4a1;
            uVar19 = uVar19 ^ 0x5279b661f177655e;
            uVar10 = (uVar10 ^ uVar10 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
            goto LAB_14001b585;
          }
          if (uVar5 == 0x13848c57) {
            local_168 = 0x3d8b3e4a950dc18c;
            uVar19 = uVar19 ^ 0xbf881c02b60c544e;
            uVar5 = 0xc9fc45a202d50e39;
LAB_14001ebc3:
            uVar12 = uVar12 ^ uVar5;
            goto LAB_14001b585;
          }
          if (uVar5 == 0x1e4fead0) {
            uVar10 = uVar10 ^ uVar10 >> 8;
            uVar19 = uVar19 ^ 0x9e9485da4b6a2f63;
            uVar10 = uVar10 ^ uVar10 >> 0x10;
            uVar5 = 0xe4fa16fd6e3641b8;
            goto LAB_14001ebc3;
          }
          if (uVar5 == 0x2f13b533) {
            uVar12 = uVar12 ^ 0x4995639dbdda3ea2;
            uVar10 = uVar10 ^ uVar10 >> 0x32;
            uVar5 = 0x28edf07d592418c4;
            goto LAB_14001dfcd;
          }
          if (uVar5 == 0x3c29a67a) {
            uVar19 = uVar19 ^ 0x47162c33a6e660de;
            uVar10 = uVar10 * -0x36849056a20af79f;
            uVar5 = 0xfe37ea63c2b46731;
            goto LAB_14001ebc3;
          }
          if (uVar5 == 0x3c98729b) {
            uVar19 = uVar19 ^ 0xb8196c271a2d6752;
            uVar12 = uVar12 ^ 0xdcb3cd90c92f9903;
            local_168 = 0xb7fb3845be9ae9db;
            goto LAB_14001b585;
          }
          if (uVar5 == 0x3e518e3f) {
            uVar19 = uVar19 ^ 0xe922574bfc8a24b3;
            local_168 = CONCAT44(local_168._4_4_,0xd7ea1e5c);
            uVar12 = uVar12 ^ 0xcfd3748942aee600;
            goto LAB_14001b585;
          }
LAB_140012481:
          uVar12 = 0xe8771e154c640dfa;
          uVar19 = 0xe672244445351653;
          if (uVar10 == 0) goto LAB_14001f324;
          uVar10 = *DAT_140033a38;
          if (uVar10 != 0) {
LAB_140024232:
            uVar12 = uVar12 * uVar19;
            uVar5 = uVar12 >> 0x20;
            if (uVar5 < 0x51de30d4) {
              if (uVar5 == 0x51de30d3) {
                uVar19 = uVar19 ^ 0x846c7d70f4f37fdf;
                local_168 = CONCAT44(local_168._4_4_,0xe1402562);
                uVar12 = uVar12 ^ 0x8089ed2e1786a777;
                goto LAB_140024232;
              }
              if (uVar5 == 0xc26f225) {
                local_168 = CONCAT44(local_168._4_4_,0xe6c32932);
                uVar12 = uVar12 ^ 0x802262f2f7f6b7d6;
                uVar19 = uVar19 ^ 0xc3ebe04c86cfa87;
                goto LAB_140024232;
              }
              if (uVar5 == 0xeab0163) {
                local_168 = CONCAT44(local_168._4_4_,0xb18ea8d4);
                uVar12 = uVar12 ^ 0x4035c700a357c4a1;
                uVar19 = uVar19 ^ 0x5279b661f177655e;
                uVar10 = (uVar10 ^ uVar10 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
                goto LAB_140024232;
              }
              if (uVar5 == 0x13848c57) {
                local_128 = 0x3d8b3e4a950dc18c;
                uVar19 = uVar19 ^ 0xbf881c02b60c544e;
                uVar5 = 0xc9fc45a202d50e39;
              }
              else {
                if (uVar5 == 0x1e4fead0) {
                  uVar10 = uVar10 ^ uVar10 >> 8;
                  uVar19 = uVar19 ^ 0x9e9485da4b6a2f63;
                  uVar10 = uVar10 ^ uVar10 >> 0x10;
                  uVar5 = 0xe4fa16fd6e3641b8;
                }
                else {
                  if (uVar5 == 0x2f13b533) {
                    uVar12 = uVar12 ^ 0x4995639dbdda3ea2;
                    uVar10 = uVar10 ^ uVar10 >> 0x32;
                    uVar5 = 0x28edf07d592418c4;
                    goto LAB_14001f521;
                  }
                  if (uVar5 != 0x3c29a67a) {
                    if (uVar5 == 0x3c98729b) {
                      local_168 = CONCAT44(local_168._4_4_,0xee96c8f);
                      uVar19 = uVar19 ^ 0xb8196c271a2d6752;
                      uVar12 = uVar12 ^ 0xdcb3cd90c92f9903;
                      local_128 = 0xb7fb3845be9ae9db;
                      goto LAB_140024232;
                    }
                    if (uVar5 == 0x3e518e3f) {
                      uVar19 = uVar19 ^ 0xe922574bfc8a24b3;
                      local_168 = CONCAT44(local_168._4_4_,0xd7ea1e5c);
                      uVar5 = 0xcfd3748942aee600;
                      goto LAB_14001f314;
                    }
                    goto LAB_140010d02;
                  }
                  uVar19 = uVar19 ^ 0x47162c33a6e660de;
                  uVar10 = uVar10 * -0x36849056a20af79f;
                  uVar5 = 0xfe37ea63c2b46731;
                }
              }
LAB_14001f314:
              uVar12 = uVar12 ^ uVar5;
              goto LAB_140024232;
            }
            if (uVar5 == 0x5bb4d17c) {
              uVar19 = uVar19 ^ 0x2a4b5db12c5f626c;
              uVar12 = uVar12 ^ 0x44fbdf578767dc29;
              uVar10 = uVar10 * *(longlong *)(DAT_14002903b + 7);
              uVar10 = uVar10 ^ uVar10 >> 0x19;
              goto LAB_140024232;
            }
            if (uVar5 == 0x810360b0) {
              uVar10 = uVar10 * 0x140000000;
              uVar12 = uVar12 ^ 0xa5e7ed2fd9999928;
              uVar5 = 0xc6bb870059a90a57;
            }
            else {
              if (uVar5 != 0x9c1bb969) {
                if (uVar5 == 0xa23a01ae) {
                  uVar19 = uVar19 ^ 0xae090ffc056af8df;
                  uVar10 = uVar10 ^ uVar10 >> 0x20;
                  uVar5 = 0x69f9067514d7ac03;
                }
                else {
                  if (uVar5 != 0xc5133c5b) {
                    if (uVar5 == 0xd81c49d5) {
                      local_168 = CONCAT44(local_168._4_4_,0x3b1c8ee1);
                      uVar10 = uVar10 * -0x4e0593e00239cd71 ^ uVar10 * -0x4e0593e00239cd71 >> 1;
                      uVar10 = uVar10 ^ uVar10 >> 2;
                      uVar12 = uVar12 ^ 0xc56221c259c00386;
                      uVar10 = uVar10 ^ uVar10 >> 4;
                      uVar5 = 0x1449db77b240702b;
                      goto LAB_14001f521;
                    }
                    if (uVar5 != 0xf7d87696) goto LAB_140010d02;
                    uVar19 = uVar19 ^ 0x419036fa5f372cae;
                    uVar12 = uVar12 ^ 0x6fb8a2372741bd03;
                    uVar10 = uVar10 ^ 0x140000000;
                    goto LAB_140024232;
                  }
                  local_168 = CONCAT44(local_168._4_4_,0xf044b342);
                  uVar19 = uVar19 ^ 0xfdd12451b89bcf8d;
                  uVar10 = uVar10 ^ 0x140000000 ^ uVar10 >> 0x25;
                  uVar5 = 0x71366801cec3205f;
                }
                goto LAB_14001f314;
              }
              uVar10 = uVar10 * 0x140000000;
              uVar12 = uVar12 ^ 0xbf9c50b86ef16d1a;
              uVar5 = 0xbb5b3c9b54c80a1c;
            }
LAB_14001f521:
            uVar19 = uVar19 ^ uVar5;
            goto LAB_140024232;
          }
LAB_140010d02:
          local_138 = 0xc5133c5b;
          local_140 = 0xd81c49d5;
          local_148 = 0xf7d87696;
          local_150 = 0x810360b0;
          local_158 = 0xa23a01ae;
          ObUnRegisterCallbacks(uVar10);
          *DAT_140033a38 = 0;
          DAT_140033a38[1] = 0;
        }
LAB_140010b01:
        ExFreePoolWithTag(DAT_140033a38,0);
        DAT_140033a38 = (ulonglong *)0x0;
      }
LAB_14001b794:
      if (DAT_140033a28 != (undefined *)0x0) {
        ExFreePoolWithTag(DAT_140033a28,0);
        DAT_140033a28 = (undefined *)0x0;
      }
      if (DAT_140033a40 != (undefined8 *)0x0) {
        ExFreePoolWithTag(DAT_140033a40,0);
        DAT_140033a40 = (undefined8 *)0x0;
      }
      if (DAT_140033a80 != (undefined8 *)0x0) {
        ExFreePoolWithTag(DAT_140033a80,0);
        DAT_140033a80 = (undefined8 *)0x0;
      }
    }
    else {
      uVar10 = 0;
      local_160 = PsSetCreateProcessNotifyRoutineEx(&LAB_140014060);
      if ((int)local_160 < 0) {
LAB_14000e725:
        IoDeleteSymbolicLink(&local_c8);
        IoDeleteDevice(local_108);
        PsSetCreateProcessNotifyRoutineEx(&LAB_140014060,uVar10 & 0xffffffffffffff00 | 1);
        if (DAT_140033a38 != (ulonglong *)0x0) {
          uVar10 = *DAT_140033a38;
          if (uVar10 != 0) {
            uVar12 = 0xe8771e154c640dfa;
            uVar19 = 0xe672244445351653;
            local_128 = 0x9c1bb969;
LAB_140012ee2:
            uVar12 = uVar12 * uVar19;
            uVar5 = uVar12 >> 0x20;
            if (0x51de30d3 < uVar5) {
              if (uVar5 == 0x5bb4d17c) {
                uVar19 = uVar19 ^ 0x2a4b5db12c5f626c;
                uVar12 = uVar12 ^ 0x44fbdf578767dc29;
                uVar10 = uVar10 * *(longlong *)(DAT_14002903b + 7);
                uVar10 = uVar10 ^ uVar10 >> 0x19;
                goto LAB_140012ee2;
              }
              if (uVar5 == 0x810360b0) {
                uVar10 = uVar10 * 0x140000000;
                uVar12 = uVar12 ^ 0xa5e7ed2fd9999928;
                uVar5 = 0xc6bb870059a90a57;
              }
              else {
                if (uVar5 != 0x9c1bb969) {
                  if (uVar5 == 0xa23a01ae) {
                    uVar19 = uVar19 ^ 0xae090ffc056af8df;
                    uVar10 = uVar10 ^ uVar10 >> 0x20;
                    uVar5 = 0x69f9067514d7ac03;
                  }
                  else {
                    if (uVar5 != 0xc5133c5b) {
                      if (uVar5 == 0xd81c49d5) {
                        local_168 = CONCAT44(local_168._4_4_,0x3b1c8ee1);
                        uVar10 = uVar10 * -0x4e0593e00239cd71 ^ uVar10 * -0x4e0593e00239cd71 >> 1;
                        uVar10 = uVar10 ^ uVar10 >> 2;
                        uVar12 = uVar12 ^ 0xc56221c259c00386;
                        uVar10 = uVar10 ^ uVar10 >> 4;
                        uVar5 = 0x1449db77b240702b;
                        goto LAB_14001513d;
                      }
                      if (uVar5 != 0xf7d87696) goto LAB_140018e5e;
                      uVar19 = uVar19 ^ 0x419036fa5f372cae;
                      uVar12 = uVar12 ^ 0x6fb8a2372741bd03;
                      uVar10 = uVar10 ^ 0x140000000;
                      goto LAB_140012ee2;
                    }
                    local_168 = CONCAT44(local_168._4_4_,0xf044b342);
                    uVar19 = uVar19 ^ 0xfdd12451b89bcf8d;
                    uVar10 = uVar10 ^ 0x140000000 ^ uVar10 >> 0x25;
                    uVar5 = 0x71366801cec3205f;
                  }
                  goto LAB_14001ae61;
                }
                uVar10 = uVar10 * 0x140000000;
                uVar12 = uVar12 ^ 0xbf9c50b86ef16d1a;
                uVar5 = 0xbb5b3c9b54c80a1c;
              }
LAB_14001513d:
              uVar19 = uVar19 ^ uVar5;
              goto LAB_140012ee2;
            }
            if (uVar5 == 0x51de30d3) {
              uVar19 = uVar19 ^ 0x846c7d70f4f37fdf;
              local_168 = CONCAT44(local_168._4_4_,0xe1402562);
              uVar12 = uVar12 ^ 0x8089ed2e1786a777;
              goto LAB_140012ee2;
            }
            if (uVar5 == 0xc26f225) {
              uVar12 = uVar12 ^ 0x802262f2f7f6b7d6;
              local_168 = CONCAT44(local_168._4_4_,0xe6c32932);
              uVar19 = uVar19 ^ 0xc3ebe04c86cfa87;
              goto LAB_140012ee2;
            }
            if (uVar5 == 0xeab0163) {
              local_168 = CONCAT44(local_168._4_4_,0xb18ea8d4);
              uVar12 = uVar12 ^ 0x4035c700a357c4a1;
              uVar19 = uVar19 ^ 0x5279b661f177655e;
              uVar10 = (uVar10 ^ uVar10 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
              goto LAB_140012ee2;
            }
            if (uVar5 == 0x13848c57) {
              local_168 = 0x3d8b3e4a950dc18c;
              uVar19 = uVar19 ^ 0xbf881c02b60c544e;
              uVar5 = 0xc9fc45a202d50e39;
LAB_14001ae61:
              uVar12 = uVar12 ^ uVar5;
              goto LAB_140012ee2;
            }
            if (uVar5 == 0x1e4fead0) {
              uVar10 = uVar10 ^ uVar10 >> 8;
              uVar19 = uVar19 ^ 0x9e9485da4b6a2f63;
              uVar10 = uVar10 ^ uVar10 >> 0x10;
              uVar5 = 0xe4fa16fd6e3641b8;
              goto LAB_14001ae61;
            }
            if (uVar5 == 0x2f13b533) {
              uVar12 = uVar12 ^ 0x4995639dbdda3ea2;
              uVar10 = uVar10 ^ uVar10 >> 0x32;
              uVar5 = 0x28edf07d592418c4;
              goto LAB_14001513d;
            }
            if (uVar5 == 0x3c29a67a) {
              uVar19 = uVar19 ^ 0x47162c33a6e660de;
              uVar10 = uVar10 * -0x36849056a20af79f;
              uVar5 = 0xfe37ea63c2b46731;
              goto LAB_14001ae61;
            }
            if (uVar5 == 0x3c98729b) {
              uVar19 = uVar19 ^ 0xb8196c271a2d6752;
              uVar12 = uVar12 ^ 0xdcb3cd90c92f9903;
              local_168 = 0xb7fb3845be9ae9db;
              goto LAB_140012ee2;
            }
            if (uVar5 == 0x3e518e3f) {
              uVar19 = uVar19 ^ 0xe922574bfc8a24b3;
              local_168 = CONCAT44(local_168._4_4_,0xd7ea1e5c);
              uVar12 = uVar12 ^ 0xcfd3748942aee600;
              goto LAB_140012ee2;
            }
LAB_140018e5e:
            uVar12 = 0xe8771e154c640dfa;
            uVar19 = 0xe672244445351653;
            if (uVar10 != 0) {
              uVar10 = *DAT_140033a38;
              if (uVar10 != 0) {
LAB_14001948c:
                uVar12 = uVar12 * uVar19;
                uVar5 = uVar12 >> 0x20;
                if (uVar5 < 0x51de30d4) {
                  if (uVar5 == 0x51de30d3) {
                    uVar19 = uVar19 ^ 0x846c7d70f4f37fdf;
                    local_168 = CONCAT44(local_168._4_4_,0xe1402562);
                    uVar12 = uVar12 ^ 0x8089ed2e1786a777;
                    goto LAB_14001948c;
                  }
                  if (uVar5 == 0xc26f225) {
                    local_168 = CONCAT44(local_168._4_4_,0xe6c32932);
                    uVar12 = uVar12 ^ 0x802262f2f7f6b7d6;
                    uVar19 = uVar19 ^ 0xc3ebe04c86cfa87;
                    goto LAB_14001948c;
                  }
                  if (uVar5 == 0xeab0163) {
                    local_168 = CONCAT44(local_168._4_4_,0xb18ea8d4);
                    uVar12 = uVar12 ^ 0x4035c700a357c4a1;
                    uVar19 = uVar19 ^ 0x5279b661f177655e;
                    uVar10 = (uVar10 ^ uVar10 >> 0x20) * *(longlong *)(DAT_14002903b + 0x15);
                    goto LAB_14001948c;
                  }
                  if (uVar5 == 0x13848c57) {
                    local_128 = 0x3d8b3e4a950dc18c;
                    uVar19 = uVar19 ^ 0xbf881c02b60c544e;
                    uVar5 = 0xc9fc45a202d50e39;
                  }
                  else {
                    if (uVar5 == 0x1e4fead0) {
                      uVar10 = uVar10 ^ uVar10 >> 8;
                      uVar19 = uVar19 ^ 0x9e9485da4b6a2f63;
                      uVar10 = uVar10 ^ uVar10 >> 0x10;
                      uVar5 = 0xe4fa16fd6e3641b8;
                    }
                    else {
                      if (uVar5 == 0x2f13b533) {
                        uVar12 = uVar12 ^ 0x4995639dbdda3ea2;
                        uVar10 = uVar10 ^ uVar10 >> 0x32;
                        uVar5 = 0x28edf07d592418c4;
                        goto LAB_14001ee48;
                      }
                      if (uVar5 == 0x3c29a67a) {
                        uVar19 = uVar19 ^ 0x47162c33a6e660de;
                        uVar10 = uVar10 * -0x36849056a20af79f;
                        uVar5 = 0xfe37ea63c2b46731;
                        goto LAB_14001dd1f;
                      }
                      if (uVar5 == 0x3c98729b) {
                        local_168 = CONCAT44(local_168._4_4_,0xee96c8f);
                        uVar19 = uVar19 ^ 0xb8196c271a2d6752;
                        uVar12 = uVar12 ^ 0xdcb3cd90c92f9903;
                        local_128 = 0xb7fb3845be9ae9db;
                        goto LAB_14001948c;
                      }
                      if (uVar5 != 0x3e518e3f) goto LAB_140010d02;
                      uVar19 = uVar19 ^ 0xe922574bfc8a24b3;
                      local_168 = CONCAT44(local_168._4_4_,0xd7ea1e5c);
                      uVar5 = 0xcfd3748942aee600;
                    }
                  }
LAB_14001dd1f:
                  uVar12 = uVar12 ^ uVar5;
                  goto LAB_14001948c;
                }
                if (uVar5 == 0x5bb4d17c) {
                  uVar19 = uVar19 ^ 0x2a4b5db12c5f626c;
                  uVar12 = uVar12 ^ 0x44fbdf578767dc29;
                  uVar10 = uVar10 * *(longlong *)(DAT_14002903b + 7);
                  uVar10 = uVar10 ^ uVar10 >> 0x19;
                  goto LAB_14001948c;
                }
                if (uVar5 == 0x810360b0) {
                  uVar10 = uVar10 * 0x140000000;
                  uVar12 = uVar12 ^ 0xa5e7ed2fd9999928;
                  uVar5 = 0xc6bb870059a90a57;
                }
                else {
                  if (uVar5 != 0x9c1bb969) {
                    if (uVar5 == 0xa23a01ae) {
                      uVar19 = uVar19 ^ 0xae090ffc056af8df;
                      uVar10 = uVar10 ^ uVar10 >> 0x20;
                      uVar5 = 0x69f9067514d7ac03;
                    }
                    else {
                      if (uVar5 != 0xc5133c5b) {
                        if (uVar5 == 0xd81c49d5) {
                          local_168 = CONCAT44(local_168._4_4_,0x3b1c8ee1);
                          uVar10 = uVar10 * -0x4e0593e00239cd71 ^ uVar10 * -0x4e0593e00239cd71 >> 1;
                          uVar10 = uVar10 ^ uVar10 >> 2;
                          uVar12 = uVar12 ^ 0xc56221c259c00386;
                          uVar10 = uVar10 ^ uVar10 >> 4;
                          uVar5 = 0x1449db77b240702b;
                          goto LAB_14001ee48;
                        }
                        if (uVar5 != 0xf7d87696) goto LAB_140010d02;
                        uVar19 = uVar19 ^ 0x419036fa5f372cae;
                        uVar12 = uVar12 ^ 0x6fb8a2372741bd03;
                        uVar10 = uVar10 ^ 0x140000000;
                        goto LAB_14001948c;
                      }
                      local_168 = CONCAT44(local_168._4_4_,0xf044b342);
                      uVar19 = uVar19 ^ 0xfdd12451b89bcf8d;
                      uVar10 = uVar10 ^ 0x140000000 ^ uVar10 >> 0x25;
                      uVar5 = 0x71366801cec3205f;
                    }
                    goto LAB_14001dd1f;
                  }
                  uVar10 = uVar10 * 0x140000000;
                  uVar12 = uVar12 ^ 0xbf9c50b86ef16d1a;
                  uVar5 = 0xbb5b3c9b54c80a1c;
                }
LAB_14001ee48:
                uVar19 = uVar19 ^ uVar5;
                goto LAB_14001948c;
              }
              goto LAB_140010d02;
            }
LAB_14001f324:
            local_128 = 0x9c1bb969;
            local_138 = 0xc5133c5b;
            local_140 = 0xd81c49d5;
            local_148 = 0xf7d87696;
            local_150 = 0x810360b0;
            local_158 = 0xa23a01ae;
          }
          goto LAB_140010b01;
        }
        goto LAB_14001b794;
      }
      uVar7 = 0xecdeb9b3;
      local_f0 = &DAT_14000d9a0;
      local_100 = PsProcessType_exref;
      uVar2 = 0x173afd78;
      local_f8 = 3;
      local_b4 = 0;
      local_a0 = 0;
      local_e8 = 0;
      uVar25 = local_82;
      uVar20 = local_8a;
      uVar26 = local_86;
      uVar22 = local_80;
      uVar24 = local_7e;
      uVar14 = local_8c;
      uVar15 = local_8e;
      uVar21 = local_90;
      uVar23 = local_84;
      uVar13 = local_88;
      do {
        if (uVar2 == 0x15ef28e) {
          uVar20 = uVar20 ^ 0x1fc1;
          uVar25 = uVar25 ^ 0xa7b8;
          uVar7 = 0x119186e6;
          local_8a = uVar20;
          local_82 = uVar25;
        }
        else {
          if (uVar2 == 0x10cf7468) {
            local_84 = uVar23 ^ 0xa3c2;
            local_88 = uVar13 ^ 0x7d8a;
            local_7e = uVar24 ^ 0x4336;
            local_90 = uVar21 ^ 0x9c3;
            break;
          }
          if (uVar2 == 0x173afd78) {
            uVar20 = 0x1ff0;
            uVar22 = 0x731d;
            local_8a = 0x1ff0;
            uVar7 = 0xbeb467ed;
            local_80 = 0x731d;
          }
          else {
            if (uVar2 == 0x2df6bc5a) {
              uVar24 = 0x4336;
              uVar7 = 0xd32d63f7;
              local_7e = 0x4336;
            }
            else {
              if (uVar2 == 0x42034d4e) {
                uVar21 = 0x9f2;
                uVar14 = uVar14 ^ 0x9216;
                local_90 = 0x9f2;
                uVar15 = uVar15 ^ 0x6177;
                uVar7 = 0x1407c7be;
                local_8e = uVar15;
                local_8c = uVar14;
              }
              else {
                if (uVar2 == 0x56048af0) {
                  uVar26 = uVar26 ^ 0x9c97;
                  uVar22 = uVar22 ^ 0x7329;
                  uVar7 = 0x575a787e;
                  local_86 = uVar26;
                  local_80 = uVar22;
                }
                else {
                  if (uVar2 == 0xa98e9a95) {
                    uVar14 = 0x9226;
                    uVar15 = 0x6147;
                    local_8c = 0x9226;
                    uVar7 = 0x847826cf;
                    local_8e = 0x6147;
                  }
                  else {
                    if (uVar2 == 0xfedbdfad) {
                      uVar13 = 0x7da4;
                      uVar26 = 0x9cae;
                      uVar23 = 0xa3fa;
                      local_88 = 0x7da4;
                      local_86 = 0x9cae;
                      uVar25 = 0xa78b;
                      local_84 = 0xa3fa;
                      uVar7 = 0xbcd892e3;
                      local_82 = uVar25;
                    }
                  }
                }
              }
            }
          }
        }
        uVar2 = uVar2 ^ uVar7;
      } while (uVar2 != 0xf0d9c3ad);
      uStack272 = &local_90;
      local_b0 = 0x120012;
      uStack172 = local_118._4_4_;
      uStack168 = (undefined4)uStack272;
      uStack272._4_4_ = (undefined4)((ulonglong)uStack272 >> 0x20);
      uStack164 = uStack272._4_4_;
      local_b8 = 0x100;
      local_98 = &local_100;
      local_b6 = 1;
      local_118 = 0;
      local_160 = ObRegisterCallbacks(&local_b8,&local_118);
      uVar10 = local_118;
      if (local_118 != 0) {
        uVar12 = 0x61e3035372d63b1f;
        uVar19 = 0x247ee6512c902806;
LAB_14002481a:
        uVar12 = uVar12 * uVar19;
        uVar5 = uVar12 >> 0x20;
        if (uVar5 < 0x7b3a5d44) {
          if (uVar5 == 0x7b3a5d43) {
            uVar5 = 0x5aada45e6baec967;
            local_168 = CONCAT44(local_168._4_4_,0x690d3d0c);
            uVar6 = 0xa1d0af08984743e7;
LAB_14001e10f:
            uVar12 = uVar12 ^ uVar5;
            uVar19 = uVar19 ^ uVar6;
            goto LAB_14002481a;
          }
          if (uVar5 == 0xbdf1cd3) {
            uVar10 = uVar10 ^ uVar10 >> 0x1b;
            uVar5 = 0xdf7b45e405953821;
            uVar6 = 0x154c724c49f916dc;
            goto LAB_14001e10f;
          }
          if (uVar5 != 0x13b139d7) {
            if (uVar5 == 0x2345cda0) {
              uVar19 = uVar19 ^ 0x38bd1b24c38d7cf1;
              uVar10 = uVar10 ^ 0x140000000 ^ uVar10 >> 0x25;
              uVar5 = 0xbf8225d9a5c25838;
              goto LAB_14001ee5e;
            }
            if (uVar5 == 0x3ead175f) {
              local_128 = 0x96667c8db9982a97;
              uVar10 = uVar10 * *(longlong *)(DAT_140029015 + 0xd);
              local_168 = CONCAT44(local_168._4_4_,0x8550575d);
              uVar10 = uVar10 ^ uVar10 >> 1;
              uVar19 = uVar19 ^ 0x240e1120f9eb3f5c;
              uVar5 = 0xfce35a0769bb4bf9;
              goto LAB_14001ee5e;
            }
            if (uVar5 != 0x7057a654) goto LAB_140024aaf;
            local_128 = 0xc8847c4a18a8cfe2;
            uVar19 = uVar19 ^ 0xc623d9a0e4c5f04;
            uVar12 = uVar12 ^ 0xee09129deb8c3864;
            uVar10 = uVar10 * 0x140000000 ^ uVar10 * 0x140000000 >> 0x26;
            goto LAB_14002481a;
          }
          local_168 = CONCAT44(local_168._4_4_,0x480309b7);
          uVar19 = uVar19 ^ 0x4657fc8b767b098b;
          uVar5 = 0x32528d11e5868c27;
        }
        else {
          if (uVar5 == 0x81d660a1) {
            uVar19 = uVar19 ^ 0x5e31ce8cac3ed66a;
            uVar5 = 0x87de9ca566d15e65;
            uVar10 = uVar10 ^ 0x140000000;
            goto LAB_14001ee5e;
          }
          if (uVar5 != 0x89f9baf8) {
            if (uVar5 == 0x900181cf) {
              uVar19 = uVar19 ^ 0x630a5fa4cd8b8334;
              uVar12 = uVar12 ^ 0x2c653a918111179d;
              lVar8 = -0x5aae229f2975391;
            }
            else {
              if (uVar5 != 0xb5727f7c) {
                if (uVar5 == 0xceb507ff) {
                  local_168 = CONCAT44(local_168._4_4_,0xde5b8926);
                  uVar19 = uVar19 ^ 0xef0940267169fd29;
                  uVar12 = uVar12 ^ 0xb7c2ae11eb0f0aa7;
                  goto LAB_14002481a;
                }
                goto LAB_140024aaf;
              }
              uVar19 = uVar19 ^ 0x332289761f28066d;
              local_168 = CONCAT44(local_168._4_4_,0x22f2e1bc);
              uVar10 = uVar10 * *(longlong *)(DAT_140029015 + 0xb) * 0x140000000;
              uVar12 = uVar12 ^ 0xead305e568552bb7;
              lVar8 = -0x5a439f9f4e1b207f;
            }
            uVar10 = uVar10 * lVar8;
            goto LAB_14002481a;
          }
          local_168 = CONCAT44(local_168._4_4_,0x630e8b07);
          uVar19 = uVar19 ^ 0xdc879bc3a6a01a6f;
          uVar5 = 0x1148c78c424bcf0f;
        }
LAB_14001ee5e:
        uVar12 = uVar12 ^ uVar5;
        goto LAB_14002481a;
      }
LAB_140024aaf:
      *DAT_140033a38 = uVar10;
      puVar18 = &local_90;
      for (lVar8 = 0x12; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined *)puVar18 = 0;
        puVar18 = (ushort *)((longlong)puVar18 + 1);
      }
      if ((int)local_160 < 0) goto LAB_14000e725;
    }
    puVar18 = &local_58;
    for (lVar8 = 0x22; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined *)puVar18 = 0;
      puVar18 = (ushort *)((longlong)puVar18 + 1);
    }
  }
  puVar18 = &local_78;
  for (lVar8 = 0x1a; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined *)puVar18 = 0;
    puVar18 = (ushort *)((longlong)puVar18 + 1);
  }
LAB_1400146ed:
  thunk_FUN_1400164f0(local_30 ^ (ulonglong)auStack424);
  return;
}

