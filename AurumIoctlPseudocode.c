
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UndefinedFunction_140014450(undefined8 param_1,longlong param_2)

{
  undefined auVar1 [16];
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  char *pcVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  undefined *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined auStack648 [32];
  ulonglong uStack616;
  ulonglong uStack608;
  ulonglong *puStack600;
  ulonglong *puStack592;
  longlong lStack584;
  ulonglong *puStack576;
  ulonglong *puStack568;
  uint uStack560;
  uint uStack556;
  undefined8 uStack552;
  undefined auStack544 [16];
  undefined uStack528;
  char cStack527;
  uint uStack524;
  byte bStack520;
  char *pcStack512;
  ulonglong uStack504;
  byte *pbStack496;
  ulonglong uStack488;
  uint uStack480;
  ulonglong uStack472;
  ulonglong uStack464;
  uint uStack456;
  ulonglong uStack448;
  ulonglong *puStack440;
  uint uStack432;
  uint uStack428;
  longlong lStack424;
  longlong lStack416;
  longlong lStack408;
  longlong lStack400;
  longlong lStack392;
  longlong lStack384;
  longlong lStack376;
  longlong lStack368;
  longlong lStack360;
  longlong lStack352;
  longlong lStack344;
  longlong lStack336;
  longlong lStack328;
  longlong lStack320;
  longlong lStack312;
  longlong lStack304;
  longlong lStack296;
  longlong lStack288;
  longlong lStack280;
  longlong lStack272;
  longlong lStack264;
  longlong lStack256;
  longlong lStack248;
  longlong lStack240;
  longlong lStack232;
  longlong lStack224;
  longlong lStack216;
  ulonglong *puStack208;
  ulonglong *puStack200;
  ulonglong *puStack192;
  ulonglong *puStack184;
  longlong lStack176;
  ulonglong *puStack168;
  longlong lStack160;
  longlong lStack152;
  ulonglong *puStack144;
  longlong lStack136;
  uint *puStack128;
  ulonglong uStack120;
  ulonglong *puStack112;
  ulonglong uStack104;
  ulonglong *puStack96;
  longlong lStack88;
  ulonglong uStack80;
  undefined auStack72 [9];
  undefined uStack63;
  undefined uStack62;
  undefined uStack61;
  undefined uStack60;
  undefined uStack59;
  undefined uStack58;
  undefined uStack57;
  ulonglong uStack56;
  
  uStack56 = DAT_1400339d0 ^ (ulonglong)auStack648;
  lVar11 = 0;
  uStack480 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  pbStack496 = *(byte **)(param_2 + 0xb8); // Irp->Tail.Overlay.CurrentStackLocation
  bVar9 = *pbStack496;
  if (bVar9 < 0xf) {
    if (bVar9 == 0xe) {
      if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
        puStack600 = (ulonglong *)0xaa2d145923ec7f30;
        lStack336 = lVar11;
        while( true ) {
          uVar12 = lStack336 * 2000;
          lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
          uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) % 0x1107;
          lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
          uVar12 = ((((ulonglong)
                      *(ushort *)
                       ((longlong)&DAT_140029050 +
                       ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) * -0x33 +
                       uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
          puStack592 = (ulonglong *)
                       (&DAT_14002b760 +
                       uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
          uVar12 = *puStack592;
          uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
          puStack576 = (ulonglong *)(ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x7d2d664a);
          uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x7d2d664a) - (longlong)puStack576;
          if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
          if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x7d2d664a00000000) -
               ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar12 & uVar22) << 0x20)
          goto LAB_1400127c3;
          puStack600 = (ulonglong *)
                       ((uVar12 - 1) +
                       (((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12)) -
                       (longlong)puStack600));
          lStack336 = lStack336 + 1;
        }
        goto LAB_14001474a;
      }
    }
    else {
      if (bVar9 < 8) {
        if (bVar9 == 7) {
          if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
            puStack600 = (ulonglong *)0xaa2d145923ec7f30;
            puStack568 = (ulonglong *)0xc8e41653;
            lStack392 = lVar11;
            while( true ) {
              uVar12 = lStack392 * 2000;
              lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                       0x1107;
              lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((((ulonglong)
                          *(ushort *)
                           ((longlong)&DAT_140029050 +
                           ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) * -0x33
                           + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
              puStack592 = (ulonglong *)
                           (&DAT_14002b760 +
                           uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
              uVar12 = *puStack592;
              uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
              puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xc8e41653);
              uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xc8e41653) - (longlong)puStack576;
              if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
              if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xc8e4165300000000) -
                   ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20)
              goto LAB_1400127c3;
              puStack600 = (ulonglong *)
                           ((uVar12 - 1) +
                           (((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12))
                           - (longlong)puStack600));
              lStack392 = lStack392 + 1;
            }
            goto LAB_140014f99;
          }
        }
        else {
          if (bVar9 == 0) {
            if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
              puStack600 = (ulonglong *)0xaa2d145923ec7f30;
              puStack568 = (ulonglong *)0xa961f610;
              lStack400 = lVar11;
              while( true ) {
                uVar12 = lStack400 * 2000;
                lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                         0x1107;
                lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((((ulonglong)
                            *(ushort *)
                             ((longlong)&DAT_140029050 +
                             ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                              -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                puStack592 = (ulonglong *)
                             (&DAT_14002b760 +
                             uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                uVar12 = *puStack592;
                uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xa961f610);
                uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xa961f610) - (longlong)puStack576;
                if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xa961f61000000000) -
                     ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20)
                goto LAB_1400127c3;
                puStack600 = (ulonglong *)
                             ((((~uVar12 & (ulonglong)puStack600) -
                               (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600) + -1 +
                             uVar12);
                lStack400 = lStack400 + 1;
              }
              goto LAB_140014f99;
            }
          }
          else {
            if (bVar9 == 1) {
              if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                lStack408 = lVar11;
                while( true ) {
                  uVar12 = lStack408 * 2000;
                  lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 +
                               ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                  puStack592 = (ulonglong *)
                               (&DAT_14002b760 +
                               uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                  uVar12 = *puStack592;
                  uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                  puStack576 = (ulonglong *)
                               (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x568f71bd);
                  uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x568f71bd) - (longlong)puStack576;
                  if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                  if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x568f71bd00000000) -
                       ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20
                     ) goto LAB_1400127c3;
                  puStack600 = (ulonglong *)
                               ((((~uVar12 & (ulonglong)puStack600) -
                                 (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600) + -1 +
                               uVar12);
                  lStack408 = lStack408 + 1;
                }
                goto LAB_140014f99;
              }
            }
            else {
              if (bVar9 == 2) {
                if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                  puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                  lStack416 = lVar11;
                  while( true ) {
                    uVar12 = lStack416 * 2000;
                    lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b)
                             % 0x1107;
                    lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((((ulonglong)
                                *(ushort *)
                                 ((longlong)&DAT_140029050 +
                                 ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                  -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                    puStack592 = (ulonglong *)
                                 (&DAT_14002b760 +
                                 uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                    uVar12 = *puStack592;
                    uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                    puStack576 = (ulonglong *)
                                 (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x50a70b50);
                    uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x50a70b50) - (longlong)puStack576;
                    if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                    if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x50a70b5000000000) -
                         ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                        (uVar22 & uVar12) << 0x20) goto LAB_1400127c3;
                    puStack600 = (ulonglong *)
                                 ((((~uVar12 & (ulonglong)puStack600) -
                                   (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600) + -1 +
                                 uVar12);
                    lStack416 = lStack416 + 1;
                  }
                  goto LAB_140014f99;
                }
              }
              else {
                if (bVar9 == 3) {
                  if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                    puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                    puStack568 = (ulonglong *)0xe2a99c94;
                    lStack424 = lVar11;
                    while( true ) {
                      uVar12 = lStack424 * 2000;
                      lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b
                               ) % 0x1107;
                      lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((((ulonglong)
                                  *(ushort *)
                                   ((longlong)&DAT_140029050 +
                                   ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33)
                                    * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                      puStack592 = (ulonglong *)
                                   (&DAT_14002b760 +
                                   uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88)
                      ;
                      uVar12 = *puStack592;
                      uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                      puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xe2a99c94);
                      uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xe2a99c94) - (longlong)puStack576;
                      if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                      if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xe2a99c9400000000) -
                           ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                          (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                      puStack600 = (ulonglong *)
                                   ((uVar12 - 1) +
                                   (((~uVar12 & (ulonglong)puStack600) -
                                    (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                      lStack424 = lStack424 + 1;
                    }
                    goto LAB_14001474a;
                  }
                }
                else {
                  if (bVar9 == 4) {
                    if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                      puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                      lStack152 = lVar11;
                      while( true ) {
                        uVar12 = lStack152 * 2000;
                        lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                        uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) *
                                 0xe1b) % 0x1107;
                        lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                        uVar12 = ((((ulonglong)
                                    *(ushort *)
                                     ((longlong)&DAT_140029050 +
                                     ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33
                                      ) * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) %
                                 0xc9d;
                        puStack592 = (ulonglong *)
                                     (&DAT_14002b760 +
                                     uVar12 * 0x90 +
                                     ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                        uVar12 = *puStack592;
                        uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                        puStack576 = (ulonglong *)
                                     (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x6573c2d0)
                        ;
                        uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x6573c2d0) - (longlong)puStack576
                        ;
                        if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                        if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x6573c2d000000000) -
                             ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                            (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                        puStack600 = (ulonglong *)
                                     ((uVar12 - 1) +
                                     (((~uVar12 & (ulonglong)puStack600) -
                                      (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                        lStack152 = lStack152 + 1;
                      }
                      goto LAB_14001474a;
                    }
                  }
                  else {
                    if (bVar9 == 5) {
                      if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                        puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                        lStack176 = lVar11;
                        while( true ) {
                          uVar12 = lStack176 * 2000;
                          lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                          uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) *
                                   0xe1b) % 0x1107;
                          lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                          uVar12 = ((((ulonglong)
                                      *(ushort *)
                                       ((longlong)&DAT_140029050 +
                                       ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 +
                                        uVar12 / 0x33) * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d
                                    ) * 0xe35) % 0xc9d;
                          puStack592 = (ulonglong *)
                                       (&DAT_14002b760 +
                                       uVar12 * 0x90 +
                                       ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                          uVar12 = *puStack592;
                          uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                          puStack576 = (ulonglong *)
                                       (ulonglong)
                                       ((uint)((ulonglong)puStack600 >> 0x20) & 0x43f83d14);
                          uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x43f83d14) -
                                   (longlong)puStack576;
                          if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                          if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x43f83d1400000000) -
                               ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                              (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                          puStack600 = (ulonglong *)
                                       ((uVar12 - 1) +
                                       (((~uVar12 & (ulonglong)puStack600) -
                                        (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                          lStack176 = lStack176 + 1;
                        }
                        goto LAB_14001474a;
                      }
                    }
                    else {
                      if (((bVar9 == 6) && (DAT_140033a40 != (uint *)0x0)) &&
                         (*DAT_140033a40 < 2000)) {
                        puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                        lStack216 = lVar11;
                        while( true ) {
                          uVar12 = lStack216 * 2000;
                          lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                          uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) *
                                   0xe1b) % 0x1107;
                          lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                          uVar12 = ((((ulonglong)
                                      *(ushort *)
                                       ((longlong)&DAT_140029050 +
                                       ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 +
                                        uVar12 / 0x33) * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d
                                    ) * 0xe35) % 0xc9d;
                          puStack592 = (ulonglong *)
                                       (&DAT_14002b760 +
                                       uVar12 * 0x90 +
                                       ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                          uVar12 = *puStack592;
                          uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                          puStack576 = (ulonglong *)
                                       (ulonglong)
                                       ((uint)((ulonglong)puStack600 >> 0x20) & 0x43706c31);
                          uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x43706c31) -
                                   (longlong)puStack576;
                          if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                          if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x43706c3100000000) -
                               ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                              (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                          puStack600 = (ulonglong *)
                                       ((((~uVar12 & (ulonglong)puStack600) -
                                         (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600)
                                        + -1 + uVar12);
                          lStack216 = lStack216 + 1;
                        }
                        goto LAB_14001474a;
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
        if (bVar9 == 8) {
          if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
            puStack600 = (ulonglong *)0xaa2d145923ec7f30;
            puStack568 = (ulonglong *)0xf9736436;
            lStack344 = lVar11;
            while( true ) {
              uVar12 = lStack344 * 2000;
              lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                       0x1107;
              lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((((ulonglong)
                          *(ushort *)
                           ((longlong)&DAT_140029050 +
                           ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) * -0x33
                           + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
              puStack592 = (ulonglong *)
                           (&DAT_14002b760 +
                           uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
              uVar12 = *puStack592;
              uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
              puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xf9736436);
              uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xf9736436) - (longlong)puStack576;
              if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
              if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xf973643600000000) -
                   ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar12 & uVar22) << 0x20)
              goto LAB_1400127c3;
              puStack600 = (ulonglong *)
                           ((((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12))
                            - (longlong)puStack600) + -1 + uVar12);
              lStack344 = lStack344 + 1;
            }
            goto LAB_14001474a;
          }
        }
        else {
          if (bVar9 == 9) {
            if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
              puStack600 = (ulonglong *)0xaa2d145923ec7f30;
              puStack568 = (ulonglong *)0xe6f6b898;
              lStack352 = lVar11;
              while( true ) {
                uVar12 = lStack352 * 2000;
                lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                         0x1107;
                lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((((ulonglong)
                            *(ushort *)
                             ((longlong)&DAT_140029050 +
                             ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                              -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                puStack592 = (ulonglong *)
                             (&DAT_14002b760 +
                             uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                uVar12 = *puStack592;
                uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xe6f6b898);
                uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xe6f6b898) - (longlong)puStack576;
                if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xe6f6b89800000000) -
                     ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar12 & uVar22) << 0x20)
                goto LAB_1400127c3;
                puStack600 = (ulonglong *)
                             ((((~uVar12 & (ulonglong)puStack600) -
                               (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600) + -1 +
                             uVar12);
                lStack352 = lStack352 + 1;
              }
              goto LAB_14001474a;
            }
          }
          else {
            if (bVar9 == 10) {
              if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                puStack568 = (ulonglong *)0x9f97637a;
                lStack360 = lVar11;
                while( true ) {
                  uVar12 = lStack360 * 2000;
                  lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 +
                               ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                  puStack592 = (ulonglong *)
                               (&DAT_14002b760 +
                               uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                  uVar12 = *puStack592;
                  uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                  puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0x9f97637a);
                  uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x9f97637a) - (longlong)puStack576;
                  if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                  if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x9f97637a00000000) -
                       ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar12 & uVar22) << 0x20
                     ) goto LAB_1400127c3;
                  puStack600 = (ulonglong *)
                               ((((~uVar12 & (ulonglong)puStack600) -
                                 (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600) + -1 +
                               uVar12);
                  lStack360 = lStack360 + 1;
                }
                goto LAB_14001474a;
              }
            }
            else {
              if (bVar9 == 0xb) {
                if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                  puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                  lStack368 = lVar11;
                  while( true ) {
                    uVar12 = lStack368 * 2000;
                    lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b)
                             % 0x1107;
                    lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((((ulonglong)
                                *(ushort *)
                                 ((longlong)&DAT_140029050 +
                                 ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                  -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                    puStack592 = (ulonglong *)
                                 (&DAT_14002b760 +
                                 uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                    uVar12 = *puStack592;
                    uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                    puStack576 = (ulonglong *)
                                 (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x57b98901);
                    uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x57b98901) - (longlong)puStack576;
                    if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                    if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x57b9890100000000) -
                         ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                        (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                    puStack600 = (ulonglong *)
                                 ((uVar12 - 1) +
                                 (((~uVar12 & (ulonglong)puStack600) -
                                  (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                    lStack368 = lStack368 + 1;
                  }
                  goto LAB_14001474a;
                }
              }
              else {
                if (bVar9 == 0xc) {
                  if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                    puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                    lStack376 = lVar11;
                    while( true ) {
                      uVar12 = lStack376 * 2000;
                      lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b
                               ) % 0x1107;
                      lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((((ulonglong)
                                  *(ushort *)
                                   ((longlong)&DAT_140029050 +
                                   ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33)
                                    * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                      puStack592 = (ulonglong *)
                                   (&DAT_14002b760 +
                                   uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88)
                      ;
                      uVar12 = *puStack592;
                      uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                      puStack576 = (ulonglong *)
                                   (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x5257c4c4);
                      uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x5257c4c4) - (longlong)puStack576;
                      if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                      if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x5257c4c400000000) -
                           ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                          (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                      puStack600 = (ulonglong *)
                                   ((uVar12 - 1) +
                                   (((~uVar12 & (ulonglong)puStack600) -
                                    (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                      lStack376 = lStack376 + 1;
                    }
                    goto LAB_14001474a;
                  }
                }
                else {
                  if (((bVar9 == 0xd) && (DAT_140033a40 != (uint *)0x0)) && (*DAT_140033a40 < 2000))
                  {
                    puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                    puStack568 = (ulonglong *)0xa7db1bfb;
                    lStack384 = lVar11;
                    while( true ) {
                      uVar12 = lStack384 * 2000;
                      lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b
                               ) % 0x1107;
                      lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((((ulonglong)
                                  *(ushort *)
                                   ((longlong)&DAT_140029050 +
                                   ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33)
                                    * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                      puStack592 = (ulonglong *)
                                   (&DAT_14002b760 +
                                   uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88)
                      ;
                      uVar12 = *puStack592;
                      uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                      puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xa7db1bfb);
                      uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xa7db1bfb) - (longlong)puStack576;
                      if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                      if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xa7db1bfb00000000) -
                           ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                          (uVar22 & uVar12) << 0x20) goto LAB_1400127c3;
                      puStack600 = (ulonglong *)
                                   ((uVar12 - 1) +
                                   (((~uVar12 & (ulonglong)puStack600) -
                                    (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                      lStack384 = lStack384 + 1;
                    }
                    goto LAB_140014f99;
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
    if (bVar9 < 0x16) {
      if (bVar9 == 0x15) {
        if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
          puStack600 = (ulonglong *)0xaa2d145923ec7f30;
          lStack280 = lVar11;
          while( true ) {
            uVar12 = lStack280 * 2000;
            lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
            uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) % 0x1107
            ;
            lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
            uVar12 = ((((ulonglong)
                        *(ushort *)
                         ((longlong)&DAT_140029050 +
                         ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) * -0x33 +
                         uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
            puStack592 = (ulonglong *)
                         (&DAT_14002b760 +
                         uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
            uVar12 = *puStack592;
            uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
            puStack576 = (ulonglong *)
                         (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x48263782);
            uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x48263782) - (longlong)puStack576;
            if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
            if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x4826378200000000) -
                 ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar12 & uVar22) << 0x20)
            goto LAB_1400127c3;
            puStack600 = (ulonglong *)
                         ((((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12)) -
                          (longlong)puStack600) + -1 + uVar12);
            lStack280 = lStack280 + 1;
          }
          goto LAB_14001474a;
        }
      }
      else {
        if (bVar9 == 0xf) {
          if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
            puStack600 = (ulonglong *)0xaa2d145923ec7f30;
            puStack568 = (ulonglong *)0xed538de2;
            lStack288 = lVar11;
            while( true ) {
              uVar12 = lStack288 * 2000;
              lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                       0x1107;
              lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((((ulonglong)
                          *(ushort *)
                           ((longlong)&DAT_140029050 +
                           ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) * -0x33
                           + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
              puStack592 = (ulonglong *)
                           (&DAT_14002b760 +
                           uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
              uVar12 = *puStack592;
              uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
              puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xed538de2);
              uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xed538de2) - (longlong)puStack576;
              if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
              if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xed538de200000000) -
                   ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar12 & uVar22) << 0x20)
              goto LAB_1400127c3;
              puStack600 = (ulonglong *)
                           ((((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12))
                            - (longlong)puStack600) + -1 + uVar12);
              lStack288 = lStack288 + 1;
            }
            goto LAB_14001474a;
          }
        }
        else {
          if (bVar9 == 0x10) {
            if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
              puStack600 = (ulonglong *)0xaa2d145923ec7f30;
              lStack296 = lVar11;
              while( true ) {
                uVar12 = lStack296 * 2000;
                lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                         0x1107;
                lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((((ulonglong)
                            *(ushort *)
                             ((longlong)&DAT_140029050 +
                             ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                              -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                puStack592 = (ulonglong *)
                             (&DAT_14002b760 +
                             uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                uVar12 = *puStack592;
                uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                puStack576 = (ulonglong *)
                             (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x5fc2efb3);
                uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x5fc2efb3) - (longlong)puStack576;
                if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x5fc2efb300000000) -
                     ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20)
                goto LAB_1400127c3;
                puStack600 = (ulonglong *)
                             ((uVar12 - 1) +
                             (((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12)
                              ) - (longlong)puStack600));
                lStack296 = lStack296 + 1;
              }
              uVar12 = (~uVar12 | 0xffffffff00000000) + 0x1000000000000001 +
                       (uVar12 & 0xefffffffffffffff);
              uVar12 = (uVar22 | uVar12) - (uVar22 & uVar12);
              goto LAB_14001477c;
            }
          }
          else {
            if (bVar9 == 0x11) {
              if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                puStack568 = (ulonglong *)0xb2c41b84;
                lStack304 = lVar11;
                while( true ) {
                  uVar12 = lStack304 * 2000;
                  lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 +
                               ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                  puStack592 = (ulonglong *)
                               (&DAT_14002b760 +
                               uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                  uVar12 = *puStack592;
                  uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                  puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xb2c41b84);
                  uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xb2c41b84) - (longlong)puStack576;
                  if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                  if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xb2c41b8400000000) -
                       ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20
                     ) goto LAB_1400127c3;
                  puStack600 = (ulonglong *)
                               ((((~uVar12 & (ulonglong)puStack600) -
                                 (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600) + -1 +
                               uVar12);
                  lStack304 = lStack304 + 1;
                }
                goto LAB_140014f99;
              }
            }
            else {
              if (bVar9 == 0x12) {
                if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                  puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                  puStack568 = (ulonglong *)0xd00daa9f;
                  lStack312 = lVar11;
                  while( true ) {
                    uVar12 = lStack312 * 2000;
                    lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b)
                             % 0x1107;
                    lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((((ulonglong)
                                *(ushort *)
                                 ((longlong)&DAT_140029050 +
                                 ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                  -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                    puStack592 = (ulonglong *)
                                 (&DAT_14002b760 +
                                 uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                    uVar12 = *puStack592;
                    uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                    puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xd00daa9f);
                    uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xd00daa9f) - (longlong)puStack576;
                    if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                    if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xd00daa9f00000000) -
                         ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                        (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                    puStack600 = (ulonglong *)
                                 ((((~uVar12 & (ulonglong)puStack600) -
                                   (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600) + -1 +
                                 uVar12);
                    lStack312 = lStack312 + 1;
                  }
                  goto LAB_14001474a;
                }
              }
              else {
                if (bVar9 == 0x13) {
                  if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                    puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                    lStack320 = lVar11;
                    while( true ) {
                      uVar12 = lStack320 * 2000;
                      lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b
                               ) % 0x1107;
                      lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((((ulonglong)
                                  *(ushort *)
                                   ((longlong)&DAT_140029050 +
                                   ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33)
                                    * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                      puStack592 = (ulonglong *)
                                   (&DAT_14002b760 +
                                   uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88)
                      ;
                      uVar12 = *puStack592;
                      uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                      puStack576 = (ulonglong *)
                                   (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x2d93783);
                      uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x2d93783) - (longlong)puStack576;
                      if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                      if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x2d9378300000000) -
                           ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                          (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                      puStack600 = (ulonglong *)
                                   ((uVar12 - 1) +
                                   (((~uVar12 & (ulonglong)puStack600) -
                                    (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                      lStack320 = lStack320 + 1;
                    }
                    goto LAB_14001474a;
                  }
                }
                else {
                  if (((bVar9 == 0x14) && (DAT_140033a40 != (uint *)0x0)) && (*DAT_140033a40 < 2000)
                     ) {
                    puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                    lStack328 = lVar11;
                    while( true ) {
                      uVar12 = lStack328 * 2000;
                      lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b
                               ) % 0x1107;
                      lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                      uVar12 = ((((ulonglong)
                                  *(ushort *)
                                   ((longlong)&DAT_140029050 +
                                   ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33)
                                    * -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                      puStack592 = (ulonglong *)
                                   (&DAT_14002b760 +
                                   uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88)
                      ;
                      uVar12 = *puStack592;
                      uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                      puStack576 = (ulonglong *)
                                   (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x5e7f69b8);
                      uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x5e7f69b8) - (longlong)puStack576;
                      if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                      if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x5e7f69b800000000) -
                           ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                          (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                      puStack600 = (ulonglong *)
                                   ((uVar12 - 1) +
                                   (((~uVar12 & (ulonglong)puStack600) -
                                    (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                      lStack328 = lStack328 + 1;
                    }
                    goto LAB_14001474a;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (bVar9 == 0x16) {
        if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
          puStack600 = (ulonglong *)0xaa2d145923ec7f30;
          lStack232 = lVar11;
          while( true ) {
            uVar12 = lStack232 * 2000;
            lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
            uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) % 0x1107
            ;
            lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
            uVar12 = ((((ulonglong)
                        *(ushort *)
                         ((longlong)&DAT_140029050 +
                         ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) * -0x33 +
                         uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
            puStack592 = (ulonglong *)
                         (&DAT_14002b760 +
                         uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
            uVar12 = *puStack592;
            uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
            puStack576 = (ulonglong *)
                         (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x17326a2e);
            uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x17326a2e) - (longlong)puStack576;
            if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
            if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x17326a2e00000000) -
                 ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20)
            goto LAB_1400127c3;
            puStack600 = (ulonglong *)
                         ((((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12)) -
                          (longlong)puStack600) + -1 + uVar12);
            lStack232 = lStack232 + 1;
          }
LAB_140014f99:
          uVar13 = (~uVar12 | 0xffffffff00000000) + 0x1000000000000001 +
                   (uVar12 & 0xefffffffffffffff);
          uVar12 = uVar13 | uVar22;
          uVar13 = uVar13 & uVar22;
LAB_14000de49:
          uVar12 = uVar12 - uVar13;
LAB_14001477c:
          *puStack592 = uVar12;
          *DAT_140033a40 = *DAT_140033a40 + 1;
        }
      }
      else {
        if (bVar9 == 0x17) {
          if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
            puStack600 = (ulonglong *)0xaa2d145923ec7f30;
            lStack240 = lVar11;
            while( true ) {
              uVar12 = lStack240 * 2000;
              lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                       0x1107;
              lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
              uVar12 = ((((ulonglong)
                          *(ushort *)
                           ((longlong)&DAT_140029050 +
                           ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) * -0x33
                           + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
              puStack592 = (ulonglong *)
                           (&DAT_14002b760 +
                           uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
              uVar12 = *puStack592;
              uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
              puStack576 = (ulonglong *)
                           (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x16b0524d);
              uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x16b0524d) - (longlong)puStack576;
              if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
              if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x16b0524d00000000) -
                   ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20)
              goto LAB_1400127c3;
              puStack600 = (ulonglong *)
                           ((((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12))
                            - (longlong)puStack600) + -1 + uVar12);
              lStack240 = lStack240 + 1;
            }
            goto LAB_140014f99;
          }
        }
        else {
          if (bVar9 == 0x18) {
            if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
              puStack600 = (ulonglong *)0xaa2d145923ec7f30;
              puStack568 = (ulonglong *)0xd84e2215;
              lStack248 = lVar11;
              while( true ) {
                uVar12 = lStack248 * 2000;
                lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                         0x1107;
                lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                uVar12 = ((((ulonglong)
                            *(ushort *)
                             ((longlong)&DAT_140029050 +
                             ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                              -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                puStack592 = (ulonglong *)
                             (&DAT_14002b760 +
                             uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                uVar12 = *puStack592;
                uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0xd84e2215);
                uVar22 = ((ulonglong)puStack600 >> 0x20 | 0xd84e2215) - (longlong)puStack576;
                if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0xd84e221500000000) -
                     ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20)
                goto LAB_1400127c3;
                puStack600 = (ulonglong *)
                             ((uVar12 - 1) +
                             (((~uVar12 & (ulonglong)puStack600) - (~(ulonglong)puStack600 | uVar12)
                              ) - (longlong)puStack600));
                lStack248 = lStack248 + 1;
              }
              goto LAB_140014f99;
            }
          }
          else {
            if (bVar9 == 0x19) {
              if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                lStack256 = lVar11;
                while( true ) {
                  uVar12 = lStack256 * 2000;
                  lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 +
                               ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                  puStack592 = (ulonglong *)
                               (&DAT_14002b760 +
                               uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                  uVar12 = *puStack592;
                  uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                  puStack576 = (ulonglong *)
                               (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x4021bab6);
                  uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x4021bab6) - (longlong)puStack576;
                  if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                  if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x4021bab600000000) -
                       ((longlong)puStack576 << 0x20) | uVar12 << 0x20) == (uVar22 & uVar12) << 0x20
                     ) goto LAB_1400127c3;
                  puStack600 = (ulonglong *)
                               ((uVar12 - 1) +
                               (((~uVar12 & (ulonglong)puStack600) -
                                (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                  lStack256 = lStack256 + 1;
                }
                goto LAB_140014f99;
              }
            }
            else {
              if (bVar9 == 0x1a) {
                if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                  puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                  lStack264 = lVar11;
                  while( true ) {
                    uVar12 = lStack264 * 2000;
                    lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b)
                             % 0x1107;
                    lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((((ulonglong)
                                *(ushort *)
                                 ((longlong)&DAT_140029050 +
                                 ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                  -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                    puStack592 = (ulonglong *)
                                 (&DAT_14002b760 +
                                 uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                    uVar12 = *puStack592;
                    uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                    puStack576 = (ulonglong *)
                                 (ulonglong)((uint)((ulonglong)puStack600 >> 0x20) & 0x7b9b1527);
                    uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x7b9b1527) - (longlong)puStack576;
                    if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                    if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x7b9b152700000000) -
                         ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                        (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                    puStack600 = (ulonglong *)
                                 ((uVar12 - 1) +
                                 (((~uVar12 & (ulonglong)puStack600) -
                                  (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                    lStack264 = lStack264 + 1;
                  }
                  goto LAB_14001474a;
                }
              }
              else {
                if (((bVar9 == 0x1b) && (DAT_140033a40 != (uint *)0x0)) && (*DAT_140033a40 < 2000))
                {
                  puStack600 = (ulonglong *)0xaa2d145923ec7f30;
                  puStack568 = (ulonglong *)0x99e15c84;
                  lStack272 = lVar11;
                  while( true ) {
                    uVar12 = lStack272 * 2000;
                    lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((uVar12 + ((uVar12 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b)
                             % 0x1107;
                    lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                    uVar12 = ((((ulonglong)
                                *(ushort *)
                                 ((longlong)&DAT_140029050 +
                                 ((((uVar12 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar12 / 0x33) *
                                  -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                    puStack592 = (ulonglong *)
                                 (&DAT_14002b760 +
                                 uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                    uVar12 = *puStack592;
                    uVar13 = uVar12 << 4 | uVar12 >> 0x3c;
                    puStack576 = (ulonglong *)((ulonglong)puStack600 >> 0x20 & 0x99e15c84);
                    uVar22 = ((ulonglong)puStack600 >> 0x20 | 0x99e15c84) - (longlong)puStack576;
                    if ((~uVar13 & 0xfffffffffffffffe) + 2 + uVar13 == 0) break;
                    if ((((ulonglong)puStack600 & 0xffffffff00000000 | 0x99e15c8400000000) -
                         ((longlong)puStack576 << 0x20) | uVar12 << 0x20) ==
                        (uVar12 & uVar22) << 0x20) goto LAB_1400127c3;
                    puStack600 = (ulonglong *)
                                 ((uVar12 - 1) +
                                 (((~uVar12 & (ulonglong)puStack600) -
                                  (~(ulonglong)puStack600 | uVar12)) - (longlong)puStack600));
                    lStack272 = lStack272 + 1;
                  }
LAB_14001474a:
                  uVar13 = (~uVar12 | 0xffffffff00000000) + 0x1000000000000001 +
                           (uVar12 & 0xefffffffffffffff);
                  uVar12 = uVar13 | uVar22;
                  uVar13 = uVar13 & uVar22;
                  goto LAB_14000de49;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1400127c3:
  uVar12 = 0xaa2d145923ec7f30;
  lStack584 = param_2;
  lStack88 = param_2;
  if (*pbStack496 != 0xe) goto LAB_14001a24a;
  uStack560 = 0xe0000001;
  uStack556 = 0xe0000001;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puStack576 = *(ulonglong **)(param_2 + 0xb8);
  uStack524 = *(uint *)(puStack576 + 2);
  if (uStack524 < 0x14) {
    if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
      while( true ) {
        uVar13 = lVar11 * 2000;
        lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar13) >> 0x40,0);
        uVar13 = ((uVar13 + ((uVar13 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) % 0x1107;
        lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar13) >> 0x40,0);
        uVar13 = ((((ulonglong)
                    *(ushort *)
                     ((longlong)&DAT_140029050 +
                     ((((uVar13 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar13 / 0x33) * -0x33 +
                     uVar13 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
        puStack592 = (ulonglong *)
                     (&DAT_14002b760 +
                     uVar13 * 0x90 + ((uVar13 / 0xf5) * 0xf5 + uVar13 / 0x11) * -0x88);
        uVar13 = *puStack592;
        uVar22 = uVar13 << 4 | uVar13 >> 0x3c;
        puStack576 = (ulonglong *)(ulonglong)((uint)(uVar12 >> 0x20) & 0x25b416cf);
        uVar14 = (uVar12 >> 0x20 | 0x25b416cf) - (longlong)puStack576;
        lStack224 = lVar11;
        if ((~uVar22 & 0xfffffffffffffffe) + 2 + uVar22 == 0) break;
        if (((uVar12 & 0xffffffff00000000 | 0x25b416cf00000000) - ((longlong)puStack576 << 0x20) |
            uVar13 << 0x20) == (uVar14 & uVar13) << 0x20) goto LAB_140018470;
        uVar12 = (uVar13 - 1) + (((~uVar13 & uVar12) - (~uVar12 | uVar13)) - uVar12);
        lVar11 = lVar11 + 1;
      }
      uVar12 = (~uVar13 | 0xffffffff00000000) + 0x1000000000000001 + (uVar13 & 0xefffffffffffffff);
      *puStack592 = (uVar12 | uVar14) - (uVar12 & uVar14);
      *DAT_140033a40 = *DAT_140033a40 + 1;
    }
LAB_140018470:
    uStack480 = 0xe0000001;
    goto LAB_14001a24a;
  }
  if (*(int *)(puStack576 + 3) == -0x7ffedffc) {
    puStack440 = *(ulonglong **)(param_2 + 0x18);
    _auStack72 = ZEXT816(0);
    auStack544 = ZEXT816(0);
    puVar23 = auStack72;
    for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar23 = 0;
      puVar23 = puVar23 + 1;
    }
    puStack600 = puStack440;
    IoGetCurrentProcess();
    uVar13 = PsGetProcessPeb();
    auVar1 = _auStack72;
    _auStack72 = CONCAT88(stack0xffffffffffffffc0,uVar13);
    puStack592 = _DAT_fffff78000000320;
    uVar12 = (uVar13 >> 8) *
             (SUB168((ZEXT416(_DAT_fffff78000000004) << 0x20) *
                     ZEXT816(((ulonglong)_DAT_fffff78000000320 & 0xffffffff) << 8) >> 0x40,0) -
              0x3ffU >> 0xb);
    uVar22 = ~uVar13 ^ uVar12;
    auStack544 = CONCAT88(uVar22,uVar12);
    uStack448 = (ulonglong)uStack524;
    pbStack496 = (byte *)((((((((uVar12 & 0xff) << 8 | uVar12 >> 8 & 0xff) << 8 |
                              uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18 & 0xff) << 8 |
                            uVar12 >> 0x20 & 0xff) << 8 | uVar12 >> 0x28 & 0xff) << 8 |
                          uVar12 >> 0x30 & 0xff) << 8 | uVar12 >> 0x38);
    puStack568 = (ulonglong *)
                 ((((((((uVar22 & 0xff) << 8 | uVar22 >> 8 & 0xff) << 8 | uVar22 >> 0x10 & 0xff) <<
                      8 | uVar22 >> 0x18 & 0xff) << 8 | uVar22 >> 0x20 & 0xff) << 8 |
                   uVar22 >> 0x28 & 0xff) << 8 | uVar22 >> 0x30 & 0xff) << 8 | uVar22 >> 0x38);
    uVar12 = (((((((uVar13 & 0xff) << 8 | uVar13 >> 8 & 0xff) << 8 | uVar13 >> 0x10 & 0xff) << 8 |
                uVar13 >> 0x18 & 0xff) << 8 | uVar13 >> 0x20 & 0xff) << 8 | uVar13 >> 0x28 & 0xff)
              << 8 | uVar13 >> 0x30 & 0xff) << 8 | uVar13 >> 0x38;
    auStack72[8] = SUB161(auVar1,8);
    uStack63 = SUB161(auVar1,9);
    uStack62 = SUB161(auVar1,10);
    uStack61 = SUB161(auVar1,0xb);
    uStack60 = SUB161(auVar1,0xc);
    uStack59 = SUB161(auVar1,0xd);
    uStack58 = SUB161(auVar1,0xe);
    uStack57 = SUB161(auVar1,0xf);
    uVar13 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(auStack72[8],uStack63),
                                                                   uStack62),uStack61),uStack60),
                                        uStack59),uStack58),uStack57);
    if (uStack448 < 0x10) {
      uStack552 = 0;
      iVar10 = 1;
      puVar18 = puStack440;
    }
    else {
      uVar14 = uVar13 ^ 0x80400c0600000000;
      uVar22 = (ulonglong)puStack568 ^ (ulonglong)pbStack496 ^ 0xf0;
      uVar13 = uVar13 ^ uVar12;
      uVar26 = uVar14 ^ ~(ulonglong)pbStack496 & uVar22;
      uVar27 = ~uVar12 & uVar13 ^ uVar22;
      uVar24 = ~uVar14 & (ulonglong)pbStack496 ^ uVar13;
      uVar25 = ~uVar22 & uVar12 ^ uVar26 ^ (ulonglong)pbStack496;
      uVar22 = uVar25 >> 0x27 | uVar25 << 0x19;
      uVar12 = ~uVar13 & uVar14 ^ uVar27 ^ uVar12;
      uVar13 = uVar27 >> 1 | (ulonglong)((uVar27 & 1) != 0) << 0x3f;
      uVar14 = uVar12 >> 10 | uVar12 << 0x36;
      uVar26 = uVar26 ^ uVar24;
      uVar15 = uVar24 >> 7 | uVar24 << 0x39;
      uVar14 = uVar14 ^ (uVar14 >> 7 | (uVar12 >> 10) << 0x39) ^ uVar12;
      uVar22 = (uVar22 >> 0x16 | (uVar25 >> 0x27) << 0x2a) ^ uVar25 ^ uVar22;
      uVar12 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar15 = uVar15 ^ (uVar15 >> 0x22 | (uVar24 >> 7) << 0x1e) ^ uVar24;
      uVar29 = (uVar12 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar12 ^ uVar15;
      uVar12 = (uVar13 >> 5 | (uVar27 >> 1) << 0x3b) ^ uVar22 ^ uVar27 ^ uVar13 ^ 0xffffffffffffff1e
      ;
      uVar15 = uVar15 ^ uVar14;
      uVar28 = uVar29 ^ ~uVar22 & uVar12;
      uVar26 = ~uVar14 & uVar15 ^ uVar12;
      uVar24 = ~uVar29 & uVar22 ^ uVar15;
      uVar25 = ~uVar12 & uVar14 ^ uVar22 ^ uVar28;
      uVar12 = uVar25 >> 0x27 | uVar25 << 0x19;
      uVar14 = ~uVar15 & uVar29 ^ uVar14 ^ uVar26;
      uVar13 = uVar26 >> 1 | (ulonglong)((uVar26 & 1) != 0) << 0x3f;
      uVar22 = uVar14 >> 10 | uVar14 << 0x36;
      uVar28 = uVar28 ^ uVar24;
      uVar27 = uVar24 >> 7 | uVar24 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar14 >> 10) << 0x39) ^ uVar14;
      uVar12 = (uVar12 >> 0x16 | (uVar25 >> 0x27) << 0x2a) ^ uVar25 ^ uVar12;
      uVar14 = uVar28 >> 0x13 | uVar28 << 0x2d;
      uVar27 = uVar27 ^ (uVar27 >> 0x22 | (uVar24 >> 7) << 0x1e) ^ uVar24;
      uVar14 = (uVar14 >> 9 | (uVar28 >> 0x13) << 0x37) ^ uVar28 ^ uVar14 ^ uVar27;
      uVar13 = (uVar13 >> 5 | (uVar26 >> 1) << 0x3b) ^ uVar12 ^ uVar26 ^ uVar13 ^ 0xffffffffffffff2d
      ;
      uVar27 = uVar27 ^ uVar22;
      uVar26 = uVar14 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar27 ^ uVar13;
      uVar15 = ~uVar14 & uVar12 ^ uVar27;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar27 = ~uVar27 & uVar14 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar27 >> 10 | uVar27 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar14 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar27 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar14;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffff3c
      ;
      uVar14 = uVar14 ^ uVar22;
      uVar26 = uVar27 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar14 ^ uVar13;
      uVar15 = ~uVar27 & uVar12 ^ uVar14;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar14 = ~uVar14 & uVar27 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar14 >> 10 | uVar14 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar27 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar14 >> 10) << 0x39) ^ uVar14;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar14 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar27 = uVar27 ^ (uVar27 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar14 = (uVar14 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar14 ^ uVar27;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffff4b
      ;
      uVar27 = uVar27 ^ uVar22;
      uVar26 = uVar14 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar27 ^ uVar13;
      uVar15 = ~uVar14 & uVar12 ^ uVar27;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar27 = ~uVar27 & uVar14 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar27 >> 10 | uVar27 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar14 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar27 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar14;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffff5a
      ;
      uVar14 = uVar14 ^ uVar22;
      uVar26 = uVar27 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar14 ^ uVar13;
      uVar15 = ~uVar27 & uVar12 ^ uVar14;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar14 = ~uVar14 & uVar27 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar14 >> 10 | uVar14 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar27 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar14 >> 10) << 0x39) ^ uVar14;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar14 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar27 = uVar27 ^ (uVar27 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar14 = (uVar14 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar14 ^ uVar27;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffff69
      ;
      uVar27 = uVar27 ^ uVar22;
      uVar26 = uVar14 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar27 ^ uVar13;
      uVar15 = ~uVar14 & uVar12 ^ uVar27;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar27 = ~uVar27 & uVar14 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar27 >> 10 | uVar27 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar14 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar26 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar14;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffff78
      ;
      uVar14 = uVar14 ^ uVar22;
      uVar28 = uVar26 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar14 ^ uVar13;
      uVar15 = ~uVar26 & uVar12 ^ uVar14;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar28;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar14 = ~uVar14 & uVar26 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar14 >> 10 | uVar14 << 0x36;
      uVar28 = uVar28 ^ uVar15;
      uVar27 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar14 >> 10) << 0x39) ^ uVar14;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar14 = uVar28 >> 0x13 | uVar28 << 0x2d;
      uVar27 = uVar27 ^ (uVar27 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar14 = (uVar14 >> 9 | (uVar28 >> 0x13) << 0x37) ^ uVar28 ^ uVar14 ^ uVar27;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffff87
      ;
      uVar27 = uVar27 ^ uVar22;
      uVar26 = uVar14 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar27 ^ uVar13;
      uVar15 = ~uVar14 & uVar12 ^ uVar27;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar27 = ~uVar27 & uVar14 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar27 >> 10 | uVar27 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar14 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar27 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar14;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffff96
      ;
      uVar14 = uVar14 ^ uVar22;
      uVar26 = uVar27 ^ ~uVar12 & uVar13;
      uVar25 = ~uVar22 & uVar14 ^ uVar13;
      uVar15 = ~uVar27 & uVar12 ^ uVar14;
      uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar14 = ~uVar14 & uVar27 ^ uVar22 ^ uVar25;
      uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar14 >> 10 | uVar14 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar28 = uVar15 >> 7 | uVar15 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar14 >> 10) << 0x39) ^ uVar14;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar14 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar14 = (uVar14 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar14 ^ uVar28;
      uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^ 0xffffffffffffffa5
      ;
      uVar28 = uVar28 ^ uVar22;
      uVar15 = uVar14 ^ ~uVar12 & uVar13;
      uVar27 = ~uVar22 & uVar28 ^ uVar13;
      uVar24 = ~uVar14 & uVar12 ^ uVar28;
      uVar26 = ~uVar13 & uVar22 ^ uVar12 ^ uVar15;
      uVar13 = uVar26 >> 0x27 | uVar26 << 0x19;
      uVar22 = ~uVar28 & uVar14 ^ uVar22 ^ uVar27;
      uVar12 = uVar27 >> 1 | (ulonglong)((uVar27 & 1) != 0) << 0x3f;
      uVar25 = uVar22 >> 10 | uVar22 << 0x36;
      uVar15 = uVar15 ^ uVar24;
      uVar14 = uVar24 >> 7 | uVar24 << 0x39;
      uVar25 = uVar25 ^ (uVar25 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
      uVar13 = (uVar13 >> 0x16 | (uVar26 >> 0x27) << 0x2a) ^ uVar26 ^ uVar13;
      uVar22 = uVar15 >> 0x13 | uVar15 << 0x2d;
      uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar24 >> 7) << 0x1e) ^ uVar24;
      uVar26 = (uVar22 >> 9 | (uVar15 >> 0x13) << 0x37) ^ uVar15 ^ uVar22 ^ uVar14;
      uVar15 = (uVar12 >> 5 | (uVar27 >> 1) << 0x3b) ^ uVar13 ^ uVar27 ^ uVar12 ^ 0xffffffffffffffb4
      ;
      uVar14 = uVar14 ^ uVar25;
      uVar27 = uVar26 ^ ~uVar13 & uVar15;
      uVar12 = ~uVar25 & uVar14 ^ uVar15;
      uVar22 = ~uVar26 & uVar13 ^ uVar14;
      uVar24 = ~uVar15 & uVar25 ^ uVar13 ^ uVar27;
      uVar15 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar13 = ~uVar14 & uVar26 ^ uVar25 ^ uVar12;
      uVar26 = uVar12 >> 1 | (ulonglong)((uVar12 & 1) != 0) << 0x3f;
      uVar14 = uVar13 >> 10 | uVar13 << 0x36;
      uVar27 = uVar27 ^ uVar22;
      uVar25 = uVar22 >> 7 | uVar22 << 0x39;
      uVar26 = (uVar26 >> 5 | (uVar12 >> 1) << 0x3b) ^ uVar12 ^ uVar26;
      uStack464 = (uVar15 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar15;
      uVar12 = uVar27 >> 0x13 | uVar27 << 0x2d;
      uVar15 = (uVar12 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar12;
      uVar12 = (uVar14 >> 7 | (uVar13 >> 10) << 0x39) ^ uVar13 ^ uVar14 ^ (ulonglong)pbStack496;
      uStack472 = (uVar25 >> 0x22 | (uVar22 >> 7) << 0x1e) ^ uVar22 ^ uVar25 ^ (ulonglong)puStack568
                  ^ 1;
      uStack552 = uStack448 - 0x10;
      for (uStack448 = uStack552; 7 < uStack448; uStack448 = uStack448 - 8) {
        *(byte *)puStack440 = *(byte *)puStack440 ^ (byte)(uVar15 >> 0x38);
        bVar2 = (byte)(uVar15 >> 0x30) ^ *(byte *)((longlong)puStack440 + 1);
        *(byte *)((longlong)puStack440 + 1) = bVar2;
        bVar9 = (byte)(uVar15 >> 0x28) ^ *(byte *)((longlong)puStack440 + 2);
        *(byte *)((longlong)puStack440 + 2) = bVar9;
        bVar4 = (byte)(uVar15 >> 0x20) ^ *(byte *)((longlong)puStack440 + 3);
        *(byte *)((longlong)puStack440 + 3) = bVar4;
        bVar5 = (byte)(uVar15 >> 0x18) ^ *(byte *)((longlong)puStack440 + 4);
        *(byte *)((longlong)puStack440 + 4) = bVar5;
        bVar3 = (byte)(uVar15 >> 0x10) ^ *(byte *)((longlong)puStack440 + 5);
        *(byte *)((longlong)puStack440 + 5) = bVar3;
        bVar6 = (byte)(uVar15 >> 8) ^ *(byte *)((longlong)puStack440 + 6);
        *(byte *)((longlong)puStack440 + 6) = bVar6;
        *(byte *)((longlong)puStack440 + 7) = *(byte *)((longlong)puStack440 + 7) ^ (byte)uVar15;
        uVar22 = uVar15 ^ CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined
                                                                                           *)
                                                  puStack440,bVar2),bVar9),bVar4),bVar5),bVar3),
                                            bVar6),*(undefined *)((longlong)puStack440 + 7)) ^
                 uStack472;
        uVar13 = ~uVar26 ^ uStack464 ^ 0x96;
        uStack472 = uStack472 ^ uVar12;
        uVar26 = uVar22 ^ ~uStack464 & uVar13;
        uVar25 = ~uVar12 & uStack472 ^ uVar13;
        uVar15 = ~uVar22 & uStack464 ^ uStack472;
        uVar27 = ~uVar13 & uVar12 ^ uStack464 ^ uVar26;
        uVar13 = uVar27 >> 0x27 | uVar27 << 0x19;
        uVar24 = ~uStack472 & uVar22 ^ uVar12 ^ uVar25;
        uVar12 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar22 = uVar24 >> 10 | uVar24 << 0x36;
        uVar26 = uVar26 ^ uVar15;
        uVar14 = uVar15 >> 7 | uVar15 << 0x39;
        uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar24 >> 10) << 0x39) ^ uVar24;
        uVar13 = (uVar13 >> 0x16 | (uVar27 >> 0x27) << 0x2a) ^ uVar27 ^ uVar13;
        uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
        uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar14;
        uVar12 = (uVar12 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar13 ^ uVar25 ^ uVar12 ^
                 0xffffffffffffff78;
        uVar14 = uVar14 ^ uVar22;
        uVar27 = uVar26 ^ ~uVar13 & uVar12;
        uVar25 = ~uVar22 & uVar14 ^ uVar12;
        uVar15 = ~uVar26 & uVar13 ^ uVar14;
        uVar24 = ~uVar12 & uVar22 ^ uVar13 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar14 & uVar26 ^ uVar22 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar28 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar27 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar28;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff87;
        uVar28 = uVar28 ^ uVar13;
        uVar26 = uVar27 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar28 ^ uVar22;
        uVar15 = ~uVar27 & uVar12 ^ uVar28;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar26;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar27 = ~uVar28 & uVar27 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar27 >> 10 | uVar27 << 0x36;
        uVar26 = uVar26 ^ uVar15;
        uVar22 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar22;
        uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff96;
        uVar22 = uVar22 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar14;
        uVar25 = ~uVar13 & uVar22 ^ uVar14;
        uVar15 = ~uVar26 & uVar12 ^ uVar22;
        uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar28 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar28;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffffa5;
        uVar28 = uVar28 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar28 ^ uVar22;
        uVar14 = ~uVar26 & uVar12 ^ uVar28;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
        uVar15 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar28 & uVar26 ^ uVar13 ^ uVar25;
        uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar12 = uVar26 >> 10 | uVar26 << 0x36;
        uVar27 = uVar27 ^ uVar14;
        uVar22 = uVar14 >> 7 | uVar14 << 0x39;
        uVar12 = uVar12 ^ (uVar12 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar15 = (uVar15 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar15;
        uVar24 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
        uVar26 = (uVar24 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar24 ^ uVar22;
        uVar14 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar15 ^ uVar25 ^ uVar13 ^
                 0xffffffffffffffb4;
        uVar22 = uVar22 ^ uVar12;
        uVar25 = uVar26 ^ ~uVar15 & uVar14;
        uVar27 = ~uVar12 & uVar22 ^ uVar14;
        uVar13 = ~uVar26 & uVar15 ^ uVar22;
        uVar15 = ~uVar14 & uVar12 ^ uVar15 ^ uVar25;
        uVar24 = uVar15 >> 0x27 | uVar15 << 0x19;
        uVar22 = ~uVar22 & uVar26 ^ uVar12 ^ uVar27;
        uVar26 = uVar27 >> 1 | (ulonglong)((uVar27 & 1) != 0) << 0x3f;
        uVar12 = uVar22 >> 10 | uVar22 << 0x36;
        uVar25 = uVar25 ^ uVar13;
        uVar14 = uVar13 >> 7 | uVar13 << 0x39;
        uVar26 = (uVar26 >> 5 | (uVar27 >> 1) << 0x3b) ^ uVar27 ^ uVar26;
        uVar12 = (uVar12 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22 ^ uVar12;
        uStack464 = (uVar24 >> 0x16 | (uVar15 >> 0x27) << 0x2a) ^ uVar15 ^ uVar24;
        uVar22 = uVar25 >> 0x13 | uVar25 << 0x2d;
        uStack472 = (uVar14 >> 0x22 | (uVar13 >> 7) << 0x1e) ^ uVar13 ^ uVar14;
        uVar15 = (uVar22 >> 9 | (uVar25 >> 0x13) << 0x37) ^ uVar25 ^ uVar22;
        puStack440 = puStack440 + 1;
      }
      uVar15 = uVar15 ^ 0x80 << ((7U - (char)uStack448 & 7) << 3);
      uVar13 = 0;
      bStack520 = 0;
      while( true ) {
        puStack592 = (ulonglong *)((longlong)puStack440 + 1);
        if (uStack448 <= uVar13) break;
        bVar9 = *(byte *)puStack440;
        bVar2 = ('\a' - (char)uVar13) * '\b';
        *(byte *)puStack440 = (byte)(uVar15 >> (bVar2 & 0x3f)) ^ bVar9;
        uVar15 = uVar15 & ~(0xff << (bVar2 & 0x3f)) | (ulonglong)bVar9 << (bVar2 & 0x3f);
        bStack520 = (char)uVar13 + 1;
        uVar13 = (ulonglong)bStack520;
        puStack440 = puStack592;
      }
      uVar13 = uStack464 ^ (ulonglong)pbStack496;
      uVar15 = uVar15 ^ uStack472;
      uVar14 = ~uVar26 ^ uVar13 ^ (ulonglong)puStack568 ^ 0xf0;
      uVar22 = uStack472 ^ uVar12;
      uVar26 = uVar15 ^ ~uVar13 & uVar14;
      uVar25 = ~uVar12 & uVar22 ^ uVar14;
      uVar24 = ~uVar15 & uVar13 ^ uVar22;
      uVar27 = ~uVar14 & uVar12 ^ uVar13 ^ uVar26;
      uVar13 = uVar27 >> 0x27 | uVar27 << 0x19;
      uVar15 = ~uVar22 & uVar15 ^ uVar12 ^ uVar25;
      uVar12 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar22 = uVar15 >> 10 | uVar15 << 0x36;
      uVar26 = uVar26 ^ uVar24;
      uVar14 = uVar24 >> 7 | uVar24 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar15 >> 10) << 0x39) ^ uVar15;
      uVar13 = (uVar13 >> 0x16 | (uVar27 >> 0x27) << 0x2a) ^ uVar27 ^ uVar13;
      uVar15 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar24 >> 7) << 0x1e) ^ uVar24;
      uVar27 = (uVar15 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar15 ^ uVar14;
      uVar12 = (uVar12 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar13 ^ uVar25 ^ uVar12 ^ 0xffffffffffffff1e
      ;
      uVar14 = uVar14 ^ uVar22;
      uVar26 = uVar27 ^ ~uVar13 & uVar12;
      uVar25 = ~uVar22 & uVar14 ^ uVar12;
      uVar15 = ~uVar27 & uVar13 ^ uVar14;
      uVar24 = ~uVar12 & uVar22 ^ uVar13 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar22 = ~uVar14 & uVar27 ^ uVar22 ^ uVar25;
      uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar13 = uVar22 >> 10 | uVar22 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar28 = uVar15 >> 7 | uVar15 << 0x39;
      uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar22 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar27 = (uVar22 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar22 ^ uVar28;
      uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^ 0xffffffffffffff2d
      ;
      uVar28 = uVar28 ^ uVar13;
      uVar26 = uVar27 ^ ~uVar12 & uVar22;
      uVar25 = ~uVar13 & uVar28 ^ uVar22;
      uVar15 = ~uVar27 & uVar12 ^ uVar28;
      uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar26;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar27 = ~uVar28 & uVar27 ^ uVar13 ^ uVar25;
      uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar13 = uVar27 >> 10 | uVar27 << 0x36;
      uVar26 = uVar26 ^ uVar15;
      uVar22 = uVar15 >> 7 | uVar15 << 0x39;
      uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
      uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar26 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar22;
      uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^ 0xffffffffffffff3c
      ;
      uVar22 = uVar22 ^ uVar13;
      uVar27 = uVar26 ^ ~uVar12 & uVar14;
      uVar25 = ~uVar13 & uVar22 ^ uVar14;
      uVar15 = ~uVar26 & uVar12 ^ uVar22;
      uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
      uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar13 = uVar22 >> 10 | uVar22 << 0x36;
      uVar27 = uVar27 ^ uVar15;
      uVar28 = uVar15 >> 7 | uVar15 << 0x39;
      uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
      uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar26 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar28;
      uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^ 0xffffffffffffff4b
      ;
      uVar28 = uVar28 ^ uVar13;
      uVar27 = uVar26 ^ ~uVar12 & uVar22;
      uVar25 = ~uVar13 & uVar28 ^ uVar22;
      uVar15 = ~uVar26 & uVar12 ^ uVar28;
      uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar26 = ~uVar28 & uVar26 ^ uVar13 ^ uVar25;
      uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar13 = uVar26 >> 10 | uVar26 << 0x36;
      uVar27 = uVar27 ^ uVar15;
      uVar22 = uVar15 >> 7 | uVar15 << 0x39;
      uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar24 = uVar27 >> 0x13 | uVar27 << 0x2d;
      uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar26 = (uVar24 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar24 ^ uVar22;
      uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^ 0xffffffffffffff5a
      ;
      uVar22 = uVar22 ^ uVar13;
      uVar27 = uVar26 ^ ~uVar12 & uVar14;
      uVar25 = ~uVar13 & uVar22 ^ uVar14;
      uVar15 = ~uVar26 & uVar12 ^ uVar22;
      uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
      uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar13 = uVar22 >> 10 | uVar22 << 0x36;
      uVar27 = uVar27 ^ uVar15;
      uVar26 = uVar15 >> 7 | uVar15 << 0x39;
      uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
      uVar26 = uVar26 ^ (uVar26 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar22 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar26;
      uVar24 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^ 0xffffffffffffff69
      ;
      uVar26 = uVar26 ^ uVar13;
      uVar14 = uVar22 ^ ~uVar12 & uVar24;
      uVar25 = ~uVar13 & uVar26 ^ uVar24;
      uVar15 = ~uVar22 & uVar12 ^ uVar26;
      uVar24 = ~uVar24 & uVar13 ^ uVar12 ^ uVar14;
      uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
      uVar26 = ~uVar26 & uVar22 ^ uVar13 ^ uVar25;
      uVar22 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
      uVar13 = uVar26 >> 10 | uVar26 << 0x36;
      uVar14 = uVar14 ^ uVar15;
      uVar28 = uVar15 >> 7 | uVar15 << 0x39;
      uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
      uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
      uVar24 = uVar14 >> 0x13 | uVar14 << 0x2d;
      uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
      uVar26 = (uVar24 >> 9 | (uVar14 >> 0x13) << 0x37) ^ uVar14 ^ uVar24 ^ uVar28;
      uVar22 = (uVar22 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar22 ^ 0xffffffffffffff78
      ;
      uVar28 = uVar28 ^ uVar13;
      uVar27 = uVar26 ^ ~uVar12 & uVar22;
      uVar24 = ~uVar13 & uVar28 ^ uVar22;
      uVar14 = ~uVar26 & uVar12 ^ uVar28;
      uVar15 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
      uVar12 = uVar15 >> 0x27 | uVar15 << 0x19;
      uVar26 = ~uVar28 & uVar26 ^ uVar13 ^ uVar24;
      uVar13 = uVar24 >> 1 | (ulonglong)((uVar24 & 1) != 0) << 0x3f;
      uVar22 = uVar26 >> 10 | uVar26 << 0x36;
      uVar27 = uVar27 ^ uVar14;
      uVar25 = uVar14 >> 7 | uVar14 << 0x39;
      uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
      uVar12 = (uVar12 >> 0x16 | (uVar15 >> 0x27) << 0x2a) ^ uVar15 ^ uVar12;
      uVar15 = uVar27 >> 0x13 | uVar27 << 0x2d;
      uVar25 = uVar25 ^ (uVar25 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
      uVar26 = (uVar15 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar15 ^ uVar25;
      uVar15 = (uVar13 >> 5 | (uVar24 >> 1) << 0x3b) ^ uVar12 ^ uVar24 ^ uVar13 ^ 0xffffffffffffff87
      ;
      uVar25 = uVar25 ^ uVar22;
      uVar27 = uVar26 ^ ~uVar12 & uVar15;
      uVar13 = ~uVar22 & uVar25 ^ uVar15;
      uVar14 = ~uVar26 & uVar12 ^ uVar25;
      uVar15 = ~uVar15 & uVar22 ^ uVar12 ^ uVar27;
      uVar12 = uVar15 >> 0x27 | uVar15 << 0x19;
      uVar24 = ~uVar25 & uVar26 ^ uVar22 ^ uVar13;
      uVar22 = uVar13 >> 1 | (ulonglong)((uVar13 & 1) != 0) << 0x3f;
      uVar26 = uVar24 >> 10 | uVar24 << 0x36;
      uVar27 = uVar27 ^ uVar14;
      uVar28 = uVar14 >> 7 | uVar14 << 0x39;
      uVar26 = uVar26 ^ (uVar26 >> 7 | (uVar24 >> 10) << 0x39) ^ uVar24;
      uVar12 = (uVar12 >> 0x16 | (uVar15 >> 0x27) << 0x2a) ^ uVar15 ^ uVar12;
      uVar15 = uVar27 >> 0x13 | uVar27 << 0x2d;
      uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
      uVar15 = (uVar15 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar15 ^ uVar28;
      uVar22 = (uVar22 >> 5 | (uVar13 >> 1) << 0x3b) ^ uVar12 ^ uVar13 ^ uVar22 ^ 0xffffffffffffff96
      ;
      uVar28 = uVar28 ^ uVar26;
      uVar24 = uVar15 ^ ~uVar12 & uVar22;
      uVar13 = ~uVar26 & uVar28 ^ uVar22;
      uVar14 = ~uVar15 & uVar12 ^ uVar28;
      uVar25 = ~uVar22 & uVar26 ^ uVar12 ^ uVar24;
      uVar12 = uVar25 >> 0x27 | uVar25 << 0x19;
      uVar27 = ~uVar28 & uVar15 ^ uVar26 ^ uVar13;
      uVar22 = uVar13 >> 1 | (ulonglong)((uVar13 & 1) != 0) << 0x3f;
      uVar26 = uVar27 >> 10 | uVar27 << 0x36;
      uVar24 = uVar24 ^ uVar14;
      uVar15 = uVar14 >> 7 | uVar14 << 0x39;
      uVar26 = uVar26 ^ (uVar26 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
      uVar12 = (uVar12 >> 0x16 | (uVar25 >> 0x27) << 0x2a) ^ uVar25 ^ uVar12;
      uVar25 = uVar24 >> 0x13 | uVar24 << 0x2d;
      uVar15 = uVar15 ^ (uVar15 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
      uVar24 = (uVar25 >> 9 | (uVar24 >> 0x13) << 0x37) ^ uVar24 ^ uVar25 ^ uVar15;
      uVar13 = (uVar22 >> 5 | (uVar13 >> 1) << 0x3b) ^ uVar12 ^ uVar13 ^ uVar22 ^ 0xffffffffffffffa5
      ;
      uVar15 = uVar15 ^ uVar26;
      uVar27 = uVar24 ^ ~uVar12 & uVar13;
      uVar14 = ~uVar26 & uVar15 ^ uVar13;
      uVar22 = ~uVar24 & uVar12 ^ uVar15;
      uVar13 = ~uVar13 & uVar26 ^ uVar12 ^ uVar27;
      uVar12 = uVar13 >> 0x27 | uVar13 << 0x19;
      uVar26 = ~uVar15 & uVar24 ^ uVar26 ^ uVar14;
      uVar15 = uVar14 >> 1 | (ulonglong)((uVar14 & 1) != 0) << 0x3f;
      uVar25 = uVar26 >> 10 | uVar26 << 0x36;
      uVar27 = uVar27 ^ uVar22;
      uVar24 = uVar22 >> 7 | uVar22 << 0x39;
      uVar25 = uVar25 ^ (uVar25 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
      uVar12 = (uVar12 >> 0x16 | (uVar13 >> 0x27) << 0x2a) ^ uVar13 ^ uVar12;
      uVar13 = uVar27 >> 0x13 | uVar27 << 0x2d;
      uVar24 = uVar24 ^ (uVar24 >> 0x22 | (uVar22 >> 7) << 0x1e) ^ uVar22;
      uVar22 = (uVar13 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar13 ^ uVar24;
      uVar13 = (uVar15 >> 5 | (uVar14 >> 1) << 0x3b) ^ uVar12 ^ uVar14 ^ uVar15 ^ 0xffffffffffffffb4
      ;
      uVar24 = uVar24 ^ uVar25;
      uVar15 = ~uVar22 & uVar12 ^ uVar24;
      uVar14 = ~uVar24 & uVar22 ^ (uVar24 | uVar25) ^ uVar13;
      uVar24 = uVar14 >> 10 | uVar14 << 0x36;
      uVar22 = uVar22 ^ ~uVar12 & uVar13 ^ uVar15;
      uVar13 = uVar15 >> 7 | uVar15 << 0x39;
      uVar12 = uVar22 >> 0x13 | uVar22 << 0x2d;
      uStack616 = (uVar12 >> 9 | (uVar22 >> 0x13) << 0x37) ^ uVar22 ^ uVar12;
      puVar18 = puStack600;
      if ((CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined *)
                                                                           (puStack440 + 1),
                                                                          *(undefined *)
                                                                           ((longlong)puStack440 + 9
                                                                           )),
                                                                 *(undefined *)
                                                                  ((longlong)puStack440 + 10)),
                                                        *(undefined *)((longlong)puStack440 + 0xb)),
                                               *(undefined *)((longlong)puStack440 + 0xc)),
                                      *(undefined *)((longlong)puStack440 + 0xd)),
                             *(undefined *)((longlong)puStack440 + 0xe)),
                    *(undefined *)((longlong)puStack440 + 0xf)) ^
           (uVar13 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15 ^ uVar13 ^ (ulonglong)puStack568 |
          CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined *)puStack440,
                                                                         *(undefined *)puStack592),
                                                                *(undefined *)
                                                                 ((longlong)puStack440 + 2)),
                                                       *(undefined *)((longlong)puStack440 + 3)),
                                              *(undefined *)((longlong)puStack440 + 4)),
                                     *(undefined *)((longlong)puStack440 + 5)),
                            *(undefined *)((longlong)puStack440 + 6)),
                   *(undefined *)((longlong)puStack440 + 7)) ^
          (uVar24 >> 7 | (uVar14 >> 10) << 0x39) ^ uVar14 ^ uVar24 ^ (ulonglong)pbStack496) == 0) {
        puVar21 = puStack440;
        for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
          *(undefined *)puVar21 = 0;
          puVar21 = (ulonglong *)((longlong)puVar21 + 1);
        }
        iVar10 = 0;
      }
      else {
        puVar21 = (ulonglong *)((longlong)puStack440 - uStack552);
        for (uVar12 = (ulonglong)uStack524; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined *)puVar21 = 0;
          puVar21 = (ulonglong *)((longlong)puVar21 + 1);
        }
        uStack552 = 0;
        iVar10 = 2;
      }
    }
    puVar21 = (ulonglong *)0x0;
    if ((uStack552 != 0) && (iVar10 == 0)) {
      iVar10 = *(int *)puVar18;
      if (iVar10 == 0x23f931ac) {
        if (0xf < *(uint *)(*(longlong *)(lStack584 + 0xb8) + 8)) {
          if (puVar18[1] == 0x943dc9fa3fb97c84) {
            *puVar18 = 0x6bc23605c046837b;
            pcVar8 = (char *)IoGetCurrentProcess();
            pcStack512 = pcVar8;
            if (pcVar8 != (char *)0x0) {
              uStack504 = 0x7a3690389ebe2836;
              uStack488 = 0x8881afbfc89217a8;
LAB_1400108c9:
              while( true ) {
                while( true ) {
                  uStack504 = uStack504 * uStack488;
                  uVar12 = uStack504 >> 0x20;
                  if (uVar12 < 0xde2890ed) break;
                  if (uVar12 == 0xe18b650c) {
                    pcVar8 = (char *)(((ulonglong)pcVar8 ^ (ulonglong)pcVar8 >> 0x16) +
                                     0x569a61b40afcd250);
                    uVar12 = 0x6e10a753d69c74c;
                    uVar13 = 0x60bca4c2d88a505b;
                    goto LAB_14001b3e7;
                  }
                  if (uVar12 != 0xf112cd23) {
                    if (uVar12 == 0xf58dc504) {
                      pcVar8 = (char *)((ulonglong)pcVar8 ^ (ulonglong)pcVar8 >> 7);
                      uStack488 = uStack488 ^ 0xbb1f18a940222b4c;
                      uVar12 = 0x1645e5d66de66fe5;
                      goto LAB_14001b290;
                    }
                    if (uVar12 == 0xf7a5bd92) {
                      uStack504 = uStack504 ^ 0xdcf06dc8735a9ca7;
                      uStack552 = CONCAT44(uStack552._4_4_,0xc2c587e7);
                      uVar13 = 0xa9c60962872a3897;
                      goto LAB_14001b3ef;
                    }
                    goto LAB_140012b7a;
                  }
                  uStack504 = uStack504 ^ 0xa147c438aca13a2c;
                  uStack488 = uStack488 ^ 0xa1813c4b40c30cff;
                  uStack552 = CONCAT44(uStack552._4_4_,0x76b013a7);
                  pcVar8 = IMAGE_DOS_HEADER_140000000.e_magic + (longlong)pcVar8;
                  pcStack512 = pcVar8;
                }
                if (uVar12 != 0xde2890ec) break;
                pcVar8 = (char *)((longlong)pcVar8 * 0x574cfbe22fe5c00d);
                uVar12 = 0x827c39a4eb56b4ab;
                uVar13 = 0x7f1eb980d09e1301;
LAB_14001b3e7:
                uStack504 = uStack504 ^ uVar12;
                pcStack512 = pcVar8;
LAB_14001b3ef:
                uStack488 = uStack488 ^ uVar13;
              }
              if (uVar12 == 0x77a8ac17) {
                uStack504 = uStack504 ^ 0xe4058ca8f88e1e78;
                uStack488 = uStack488 ^ 0x3cda24dace80da4d;
                pcVar8 = (char *)((ulonglong)pcVar8 ^ (ulonglong)pcVar8 >> 0x10);
                pcStack512 = pcVar8;
                goto LAB_1400108c9;
              }
              if (uVar12 == 0x8871f891) {
                pcVar8 = (char *)((longlong)pcVar8 * *(longlong *)(DAT_140029006 + 0x15));
                uStack504 = uStack504 ^ 0xc8b6103bc413840c;
                uStack488 = uStack488 ^ 0xd563b635abef365c;
                pcStack512 = pcVar8;
                goto LAB_1400108c9;
              }
              if (uVar12 == 0xb86d136e) {
                uStack504 = uStack504 ^ 0x44963f7d1c242482;
                uStack488 = uStack488 ^ 0x6b6c845ae16d86af;
                uStack552 = CONCAT44(uStack552._4_4_,0x2bc80976);
                uVar12 = (longlong)pcVar8 * *(longlong *)(DAT_140029006 + 0x17) *
                         -0x1a32d43184f7a20d + 0x154f70f37985e72;
                pcVar8 = (char *)(uVar12 ^ uVar12 >> 0x21);
                pcStack512 = pcVar8;
                goto LAB_1400108c9;
              }
              if (uVar12 == 0xd667f5fe) {
                uStack488 = uStack488 ^ 0x5172f2895ecfff61;
                uStack504 = uStack504 ^ 0xc9e33e37aef85da6;
                uStack552 = CONCAT44(uStack552._4_4_,0xb33da01c);
                goto LAB_1400108c9;
              }
              if (uVar12 == 0xddd6fd9f) {
                pcVar8 = (char *)((longlong)pcVar8 * 0x140000000);
                uStack552 = CONCAT44(uStack552._4_4_,0xad495a46);
                uStack488 = uStack488 ^ 0x43e9c56d854990e1;
                uVar12 = 0x49c6b14e250bd7a7;
LAB_14001b290:
                uStack504 = uStack504 ^ uVar12;
                pcStack512 = pcVar8;
                goto LAB_1400108c9;
              }
            }
LAB_140012b7a:
            *(char **)(DAT_140033a38 + 8) = pcVar8;
            *(undefined8 *)(lStack584 + 0x38) = 8;
LAB_140016da5:
            uStack560 = 0x20000000;
            uStack556 = uStack560;
            goto LAB_14000deea;
          }
          if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
            uVar12 = 0xaa2d145923ec7f30;
            puStack184 = puVar21;
            while( true ) {
              uVar13 = (longlong)puStack184 * 2000;
              lVar11 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar13) >> 0x40,0);
              uVar13 = ((uVar13 + ((uVar13 - lVar11 >> 1) + lVar11 >> 0xb) * -0xe1b) * 0xe1b) %
                       0x1107;
              lVar11 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar13) >> 0x40,0);
              uVar13 = ((((ulonglong)
                          *(ushort *)
                           ((longlong)&DAT_140029050 +
                           ((((uVar13 - lVar11 >> 1) + lVar11 >> 6) * 0x62 + uVar13 / 0x33) * -0x33
                           + uVar13 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
              lVar11 = uVar13 * 0x90 + ((uVar13 / 0xf5) * 0xf5 + uVar13 / 0x11) * -0x88;
              uVar13 = *(ulonglong *)(&DAT_14002b760 + lVar11);
              uVar22 = uVar13 << 4 | uVar13 >> 0x3c;
              uVar15 = uVar12 >> 0x20 & 0x1cf650be;
              uVar14 = (uVar12 >> 0x20 | 0x1cf650be) - uVar15;
              if ((~uVar22 & 0xfffffffffffffffe) + 2 + uVar22 == 0) break;
              if (((uVar12 & 0xffffffff00000000 | 0x1cf650be00000000) - (uVar15 << 0x20) |
                  uVar13 << 0x20) == (uVar13 & uVar14) << 0x20) goto LAB_14000e9d5;
              uVar12 = (uVar13 - 1) + (((~uVar13 & uVar12) - (~uVar12 | uVar13)) - uVar12);
              puStack184 = (ulonglong *)((longlong)puStack184 + 1);
            }
            uVar12 = (~uVar13 | 0xffffffff00000000) + 0x1000000000000001 +
                     (uVar13 & 0xefffffffffffffff);
            *(ulonglong *)(&DAT_14002b760 + lVar11) = (uVar12 | uVar14) - (uVar12 & uVar14);
            *DAT_140033a40 = *DAT_140033a40 + 1;
          }
        }
LAB_14000e9d5:
        uStack560 = 0xe0000001;
        uStack556 = uStack560;
      }
      else {
        if (iVar10 == 0x7f1943eb) {
          uStack528 = KeAcquireSpinLockRaiseToDpc();
          uVar20 = *(uint *)(*(longlong *)(lStack584 + 0xb8) + 8);
          uVar17 = *DAT_140033a40;
          uStack472 = uStack472 & 0xffffffff00000000 | (ulonglong)uVar17;
          uVar19 = uVar17 * 4 + 0x14;
          if ((uVar20 == 0) || (uVar20 < uVar19)) {
            uVar19 = uVar19 & 0x1fffffff | 0x60000000;
            uStack560 = uVar19;
            KeReleaseSpinLock();
            uStack556 = uVar19;
          }
          else {
            pbStack496 = (byte *)((ulonglong)uVar17 << 2);
            uStack560 = uVar19;
            puStack568 = (ulonglong *)ExAllocatePoolWithTag();
            if (puStack568 != (ulonglong *)0x0) {
              uVar20 = 0;
              if ((uVar17 != 0) && (uStack456 = 0, DAT_140033a40 != (uint *)0x0)) {
                uVar19 = *DAT_140033a40;
                uStack552 = uStack552 & 0xffffffff00000000 | (ulonglong)uVar19;
                uStack432 = DAT_140033a40[2];
                puStack144 = puVar21;
                for (uStack80 = 0; uStack80 < 8; uStack80 = uStack80 + 1) {
                  uVar12 = (((uStack80 * 8) % 9) * 9) % 0x11;
                  uVar12 = ((((ulonglong)
                              (byte)(&DAT_140033988)
                                    [uVar12 * 4 + (uVar12 / 3 + (uVar12 / 10) * 10) * -3] << 3) %
                            0xd) * 0xe) % 0xd;
                  puStack144 = (ulonglong *)
                               ((longlong)puStack144 * 0x100 +
                               (ulonglong)
                               (byte)(&DAT_1400339a8)
                                     [uVar12 * 4 + (uVar12 / 3 + (uVar12 / 10) * 10) * -3]);
                }
                for (; (puStack192 = puVar21, uStack432 < uVar19 && (uStack456 < (uint)uStack472));
                    uStack456 = uStack456 + 1) {
                  uVar12 = (ulonglong)uStack432 * 2000;
                  lVar11 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((uVar12 + ((uVar12 - lVar11 >> 1) + lVar11 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar11 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar12) >> 0x40,0);
                  uVar12 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 +
                               ((((uVar12 - lVar11 >> 1) + lVar11 >> 6) * 0x62 + uVar12 / 0x33) *
                                -0x33 + uVar12 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                  puStack592 = *(ulonglong **)
                                (&DAT_14002b760 +
                                uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88);
                  uVar13 = (ulonglong)puStack592 >> 0x3c | (longlong)puStack592 << 4;
                  uVar12 = (~uVar13 & 0xfffffffffffffffe) + 1;
                  if (((uVar13 | uVar12) + (uVar13 & uVar12) ^ 1) +
                      (ulonglong)((int)uVar13 - 1U & 1) * 2 == 0) break;
                  uVar20 = (uint)((ulonglong)puStack144 >> 0x20);
                  uVar17 = (uint)~(ulonglong)puStack592;
                  *(uint *)((longlong)puStack568 + (ulonglong)uStack456 * 4) =
                       ((uVar17 - ((~(uint)puStack592 | uVar20) * 2 + 2)) + 1 + uVar20 | 0xdc98993)
                       - ((uVar17 - ((uVar17 | uVar20) * 2 + 2)) + 1 + uVar20 & 0xdc98993);
                  uVar13 = (~(ulonglong)puStack144 | (ulonglong)puStack592) + 1 +
                           (longlong)puStack144;
                  uVar12 = (~(ulonglong)puStack592 & (ulonglong)puStack144) + (longlong)puStack592;
                  puStack144 = (ulonglong *)((~uVar13 & uVar12) - (~uVar12 & uVar13));
                  uStack432 = uStack432 + 1;
                }
                for (; puStack192 < &DAT_00000008;
                    puStack192 = (ulonglong *)((longlong)puStack192 + 1)) {
                  uVar12 = (((ulonglong)((7 - (longlong)puStack192) * 8) % 9) * 9) % 0x11;
                  uVar12 = ((((ulonglong)
                              (byte)(&DAT_140033988)
                                    [uVar12 * 4 + (uVar12 / 3 + (uVar12 / 10) * 10) * -3] << 3) %
                            0xd) * 0xe) % 0xd;
                  (&DAT_1400339a8)[uVar12 * 4 + (uVar12 / 3 + (uVar12 / 10) * 10) * -3] =
                       (char)puStack144;
                  puStack144 = (ulonglong *)((ulonglong)puStack144 >> 8);
                }
                DAT_140033a40[2] = uStack432;
                uVar20 = uStack456;
                uVar19 = uStack560;
                uStack524 = uStack432;
              }
              if ((uint)uStack472 < uVar20) {
                uVar20 = (uint)uStack472;
              }
              uStack428 = 0;
              puVar18 = puVar21;
              while ((uint)puVar18 < uVar20) {
                *(undefined4 *)((longlong)puStack600 + (longlong)puVar18 * 4 + 4) =
                     *(undefined4 *)((longlong)puStack568 + (longlong)puVar18 * 4);
                uStack428 = (uint)puVar18 + 1;
                puVar18 = (ulonglong *)(ulonglong)uStack428;
              }
              *(uint *)puStack600 = uVar20;
              *(ulonglong *)(lStack584 + 0x38) = (ulonglong)uVar19;
              puVar23 = (undefined *)puStack568;
              for (lVar11 = (longlong)pbStack496; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar23 = 0;
                puVar23 = puVar23 + 1;
              }
              ExFreePoolWithTag(puStack568);
              if (DAT_140033a40 != (uint *)0x0) {
                puStack128 = DAT_140033a40;
                lVar11 = 0xc;
                while (lStack136 = lVar11 + -1, lVar11 != 0) {
                  *(undefined *)puStack128 = 0;
                  puStack128 = (uint *)((longlong)puStack128 + 1);
                  lVar11 = lStack136;
                }
                for (uStack120 = 0; uStack120 < 2000; uStack120 = uStack120 + 1) {
                  uVar12 = uStack120 * 2000;
                  lVar11 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar12) >> 0x40,0);
                  uVar22 = ((uVar12 + ((uVar12 - lVar11 >> 1) + lVar11 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar11 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar22) >> 0x40,0);
                  lVar11 = ((uVar22 - lVar11 >> 1) + lVar11 >> 6) * 0x62 + uVar22 / 0x33;
                  uVar13 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 + (lVar11 * -0x33 + uVar22 * 0x34) * 2) *
                             2000) % 0xc9d) * 0xe35) % 0xc9d;
                  lVar16 = (uVar13 / 0xf5) * 0xf5 + uVar13 / 0x11;
                  uVar12 = rdtsc();
                  *(ulonglong *)(&DAT_14002b760 + uVar13 * 0x90 + lVar16 * -0x88) =
                       (uVar12 & 0xffffffff ^
                       *(ulonglong *)(&DAT_14002b760 + uVar13 * 0x90 + lVar16 * -0x88)) << 0x20 ^
                       *(ulonglong *)(&DAT_14002b760 + uVar13 * 0x90 + lVar16 * -0x88);
                  uVar12 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 + (lVar11 * -0x33 + uVar22 * 0x34) * 2) *
                             2000) % 0xc9d) * 0xe35) % 0xc9d;
                  *(ulonglong *)
                   (&DAT_14002b760 +
                   uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88) =
                       *(ulonglong *)
                        (&DAT_14002b760 +
                        uVar12 * 0x90 + ((uVar12 / 0xf5) * 0xf5 + uVar12 / 0x11) * -0x88) &
                       0xefffffffffffffe0;
                }
                uStack104 = 0xaa2d145923ec7f30;
                for (puStack112 = puVar21; puStack112 < &DAT_00000008;
                    puStack112 = (ulonglong *)((longlong)puStack112 + 1)) {
                  uVar12 = (((ulonglong)((7 - (longlong)puStack112) * 8) % 9) * 9) % 0x11;
                  uVar12 = ((((ulonglong)
                              (byte)(&DAT_140033988)
                                    [uVar12 * 4 + (uVar12 / 3 + (uVar12 / 10) * 10) * -3] << 3) %
                            0xd) * 0xe) % 0xd;
                  (&DAT_1400339a8)[uVar12 * 4 + (uVar12 / 3 + (uVar12 / 10) * 10) * -3] =
                       (char)uStack104;
                  uStack104 = uStack104 >> 8;
                }
              }
              KeReleaseSpinLock();
              goto LAB_140016da5;
            }
            KeReleaseSpinLock();
            uStack560 = 0xe0000017;
            uStack556 = 0xe0000017;
          }
        }
        else {
          if (iVar10 == -0x6808af4f) {
            KeAcquireGuardedMutex();
            lVar11 = lStack584;
            uVar19 = *(uint *)(*(longlong *)(lStack584 + 0xb8) + 8);
            uVar17 = (int)DAT_140033a18 * 0x23a + 0x10;
            if ((uVar19 != 0) && (uVar17 <= uVar19)) {
              if (DAT_140033a28 != (undefined8 *)0x0) {
                uVar12 = DAT_140033a18 * 0x23a;
                thunk_FUN_14001504b(*(undefined8 **)(lStack584 + 0x18),DAT_140033a28,uVar12);
                *(ulonglong *)(lVar11 + 0x38) = uVar12;
                DAT_140033a18 = 0;
                puVar7 = DAT_140033a28;
                for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined *)puVar7 = 0;
                  puVar7 = (undefined8 *)((longlong)puVar7 + 1);
                }
LAB_14001a514:
                KeReleaseGuardedMutex();
                goto LAB_140016da5;
              }
              if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                puStack592 = (ulonglong *)0xf9b81b18;
                uVar12 = 0xaa2d145923ec7f30;
                puStack200 = puVar21;
                while( true ) {
                  uVar13 = (longlong)puStack200 * 2000;
                  lVar11 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar13) >> 0x40,0);
                  uVar13 = ((uVar13 + ((uVar13 - lVar11 >> 1) + lVar11 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar11 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar13) >> 0x40,0);
                  uVar13 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 +
                               ((((uVar13 - lVar11 >> 1) + lVar11 >> 6) * 0x62 + uVar13 / 0x33) *
                                -0x33 + uVar13 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                  lVar11 = uVar13 * 0x90 + ((uVar13 / 0xf5) * 0xf5 + uVar13 / 0x11) * -0x88;
                  uVar13 = *(ulonglong *)(&DAT_14002b760 + lVar11);
                  uVar22 = uVar13 << 4 | uVar13 >> 0x3c;
                  puStack568 = (ulonglong *)(uVar12 >> 0x20 & 0xf9b81b18);
                  uVar14 = (uVar12 >> 0x20 | 0xf9b81b18) - (longlong)puStack568;
                  if ((~uVar22 & 0xfffffffffffffffe) + 2 + uVar22 == 0) break;
                  if (((uVar12 & 0xffffffff00000000 | 0xf9b81b1800000000) -
                       ((longlong)puStack568 << 0x20) | uVar13 << 0x20) == (uVar14 & uVar13) << 0x20
                     ) goto LAB_1400166d5;
                  uVar12 = (uVar13 - 1) + (((~uVar13 & uVar12) - (~uVar12 | uVar13)) - uVar12);
                  puStack200 = (ulonglong *)((longlong)puStack200 + 1);
                }
                uVar12 = (~uVar13 | 0xffffffff00000000) + 0x1000000000000001 +
                         (uVar13 & 0xefffffffffffffff);
                *(ulonglong *)(&DAT_14002b760 + lVar11) = (uVar12 | uVar14) - (uVar12 & uVar14);
                *DAT_140033a40 = *DAT_140033a40 + 1;
              }
LAB_1400166d5:
              KeReleaseGuardedMutex();
              goto LAB_14000e9d5;
            }
            KeReleaseGuardedMutex();
            uStack560 = uVar17 & 0x1fffffff | 0x60000000;
            uStack556 = uStack560;
          }
          else {
            if (iVar10 == -0x1e5ff74b) {
              uVar12 = puVar18[1];
              if (0x1000 < uVar12) goto LAB_14000e9d5;
              uVar12 = uVar12 << 4;
              puVar7 = (undefined8 *)ExAllocatePoolWithTag(0,uVar12,0x656e6f4e);
              if (puVar7 != (undefined8 *)0x0) {
                thunk_FUN_14001504b(puVar7,puVar18 + 1,uVar12);
                KeAcquireGuardedMutex(&DAT_140033a48);
                ExFreePoolWithTag(DAT_140033a80);
                DAT_140033a80 = puVar7;
                goto LAB_14001a514;
              }
              uStack560 = 0xe000009a;
              uStack556 = uStack560;
            }
            else {
              if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
                uVar12 = 0xaa2d145923ec7f30;
                puStack208 = puVar21;
                while( true ) {
                  uVar13 = (longlong)puStack208 * 2000;
                  lVar11 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar13) >> 0x40,0);
                  uVar13 = ((uVar13 + ((uVar13 - lVar11 >> 1) + lVar11 >> 0xb) * -0xe1b) * 0xe1b) %
                           0x1107;
                  lVar11 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar13) >> 0x40,0);
                  uVar13 = ((((ulonglong)
                              *(ushort *)
                               ((longlong)&DAT_140029050 +
                               ((((uVar13 - lVar11 >> 1) + lVar11 >> 6) * 0x62 + uVar13 / 0x33) *
                                -0x33 + uVar13 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
                  lVar11 = uVar13 * 0x90 + ((uVar13 / 0xf5) * 0xf5 + uVar13 / 0x11) * -0x88;
                  uVar13 = *(ulonglong *)(&DAT_14002b760 + lVar11);
                  uVar14 = uVar13 << 4 | uVar13 >> 0x3c;
                  uVar22 = uVar12 >> 0x20 & 0xc2d7a1d8;
                  uVar15 = (uVar12 >> 0x20 | 0xc2d7a1d8) - uVar22;
                  if ((~uVar14 & 0xfffffffffffffffe) + 2 + uVar14 == 0) break;
                  if (((uVar12 & 0xffffffff00000000 | 0xc2d7a1d800000000) - (uVar22 << 0x20) |
                      uVar13 << 0x20) == (uVar15 & uVar13) << 0x20) goto LAB_14000deea;
                  uVar12 = (uVar13 - 1) + (((~uVar13 & uVar12) - (~uVar12 | uVar13)) - uVar12);
                  puStack208 = (ulonglong *)((longlong)puStack208 + 1);
                }
                uVar12 = (~uVar13 | 0xffffffff00000000) + 0x1000000000000001 +
                         (uVar13 & 0xefffffffffffffff);
                *(ulonglong *)(&DAT_14002b760 + lVar11) = (uVar12 | uVar15) - (uVar12 & uVar15);
                *DAT_140033a40 = *DAT_140033a40 + 1;
              }
            }
          }
        }
      }
LAB_14000deea:
      uVar12 = (auStack72._0_8_ >> 8) *
               (SUB168((ZEXT416(_DAT_fffff78000000004) << 0x20) *
                       ZEXT816(((ulonglong)_DAT_fffff78000000320 & 0xffffffff) << 8) >> 0x40,0) -
                0x3ffU >> 0xb);
      uVar13 = ~auStack72._0_8_ ^ uVar12;
      auStack544 = CONCAT88(uVar13,uVar12);
      puStack96 = *(ulonglong **)(lStack584 + 0x38);
      puStack168 = puStack600;
      pbStack496 = (byte *)((((((((uVar12 & 0xff) << 8 | uVar12 >> 8 & 0xff) << 8 |
                                uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18 & 0xff) << 8 |
                              uVar12 >> 0x20 & 0xff) << 8 | uVar12 >> 0x28 & 0xff) << 8 |
                            uVar12 >> 0x30 & 0xff) << 8 | uVar12 >> 0x38);
      uStack464 = (((((((uVar13 & 0xff) << 8 | uVar13 >> 8 & 0xff) << 8 | uVar13 >> 0x10 & 0xff) <<
                      8 | uVar13 >> 0x18 & 0xff) << 8 | uVar13 >> 0x20 & 0xff) << 8 |
                   uVar13 >> 0x28 & 0xff) << 8 | uVar13 >> 0x30 & 0xff) << 8 | uVar13 >> 0x38;
      uVar12 = (((((((auStack72._0_8_ & 0xff) << 8 | (ulonglong)auStack72[1]) << 8 |
                   (ulonglong)auStack72[2]) << 8 | (ulonglong)auStack72[3]) << 8 |
                 (ulonglong)auStack72[4]) << 8 | (ulonglong)auStack72[5]) << 8 |
               (ulonglong)auStack72[6]) << 8 | (ulonglong)auStack72[7];
      uVar13 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(auStack72[8],uStack63)
                                                                     ,uStack62),uStack61),uStack60),
                                          uStack59),uStack58),uStack57);
      puStack592 = puStack96 + 2;
      if (puStack592 <= (ulonglong *)(ulonglong)*(uint *)(puStack576 + 1)) {
        uVar14 = uVar13 ^ 0x80400c0600000000;
        uVar22 = uStack464 ^ (ulonglong)pbStack496 ^ 0xf0;
        uVar13 = uVar13 ^ uVar12;
        uVar15 = uVar14 ^ ~(ulonglong)pbStack496 & uVar22;
        uVar26 = ~uVar12 & uVar13 ^ uVar22;
        uVar24 = ~uVar14 & (ulonglong)pbStack496 ^ uVar13;
        uVar25 = ~uVar22 & uVar12 ^ uVar15 ^ (ulonglong)pbStack496;
        uVar22 = uVar25 >> 0x27 | uVar25 << 0x19;
        uVar12 = ~uVar13 & uVar14 ^ uVar26 ^ uVar12;
        uVar14 = uVar26 >> 1 | (ulonglong)((uVar26 & 1) != 0) << 0x3f;
        uVar13 = uVar12 >> 10 | uVar12 << 0x36;
        uVar15 = uVar15 ^ uVar24;
        uVar27 = uVar24 >> 7 | uVar24 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar12 >> 10) << 0x39) ^ uVar12;
        uVar22 = (uVar22 >> 0x16 | (uVar25 >> 0x27) << 0x2a) ^ uVar25 ^ uVar22;
        uVar12 = uVar15 >> 0x13 | uVar15 << 0x2d;
        uVar27 = uVar27 ^ (uVar27 >> 0x22 | (uVar24 >> 7) << 0x1e) ^ uVar24;
        uVar28 = (uVar12 >> 9 | (uVar15 >> 0x13) << 0x37) ^ uVar15 ^ uVar12 ^ uVar27;
        uVar12 = (uVar14 >> 5 | (uVar26 >> 1) << 0x3b) ^ uVar22 ^ uVar26 ^ uVar14 ^
                 0xffffffffffffff1e;
        uVar27 = uVar27 ^ uVar13;
        uVar29 = uVar28 ^ ~uVar22 & uVar12;
        uVar25 = ~uVar13 & uVar27 ^ uVar12;
        uVar15 = ~uVar28 & uVar22 ^ uVar27;
        uVar24 = ~uVar12 & uVar13 ^ uVar22 ^ uVar29;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar27 & uVar28 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar26 >> 10 | uVar26 << 0x36;
        uVar29 = uVar29 ^ uVar15;
        uVar22 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar29 >> 0x13 | uVar29 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar29 >> 0x13) << 0x37) ^ uVar29 ^ uVar24 ^ uVar22;
        uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff2d;
        uVar22 = uVar22 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar14;
        uVar25 = ~uVar13 & uVar22 ^ uVar14;
        uVar15 = ~uVar26 & uVar12 ^ uVar22;
        uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar26 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar26 = uVar26 ^ (uVar26 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar27 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar26;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff3c;
        uVar26 = uVar26 ^ uVar13;
        uVar28 = uVar27 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar26 ^ uVar22;
        uVar15 = ~uVar27 & uVar12 ^ uVar26;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar28;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar26 & uVar27 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar26 >> 10 | uVar26 << 0x36;
        uVar28 = uVar28 ^ uVar15;
        uVar22 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar28 >> 0x13 | uVar28 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar28 >> 0x13) << 0x37) ^ uVar28 ^ uVar24 ^ uVar22;
        uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff4b;
        uVar22 = uVar22 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar14;
        uVar25 = ~uVar13 & uVar22 ^ uVar14;
        uVar15 = ~uVar26 & uVar12 ^ uVar22;
        uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar26 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar26 = uVar26 ^ (uVar26 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar27 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar26;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff5a;
        uVar26 = uVar26 ^ uVar13;
        uVar28 = uVar27 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar26 ^ uVar22;
        uVar15 = ~uVar27 & uVar12 ^ uVar26;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar28;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar26 & uVar27 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar26 >> 10 | uVar26 << 0x36;
        uVar28 = uVar28 ^ uVar15;
        uVar22 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar28 >> 0x13 | uVar28 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar28 >> 0x13) << 0x37) ^ uVar28 ^ uVar24 ^ uVar22;
        uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff69;
        uVar22 = uVar22 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar14;
        uVar25 = ~uVar13 & uVar22 ^ uVar14;
        uVar15 = ~uVar26 & uVar12 ^ uVar22;
        uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar26 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar26 = uVar26 ^ (uVar26 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar28 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar26;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff78;
        uVar26 = uVar26 ^ uVar13;
        uVar27 = uVar28 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar26 ^ uVar22;
        uVar15 = ~uVar28 & uVar12 ^ uVar26;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar26 & uVar28 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar26 >> 10 | uVar26 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar22 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar27 = (uVar24 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar24 ^ uVar22;
        uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff87;
        uVar22 = uVar22 ^ uVar13;
        uVar26 = uVar27 ^ ~uVar12 & uVar14;
        uVar25 = ~uVar13 & uVar22 ^ uVar14;
        uVar15 = ~uVar27 & uVar12 ^ uVar22;
        uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar26;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar22 & uVar27 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar26 = uVar26 ^ uVar15;
        uVar27 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar26 >> 0x13 | uVar26 << 0x2d;
        uVar27 = uVar27 ^ (uVar27 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar22 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar22 ^ uVar27;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff96;
        uVar27 = uVar27 ^ uVar13;
        uVar28 = uVar26 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar27 ^ uVar22;
        uVar15 = ~uVar26 & uVar12 ^ uVar27;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar28;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar27 & uVar26 ^ uVar13 ^ uVar25;
        uVar13 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar22 = uVar26 >> 10 | uVar26 << 0x36;
        uVar28 = uVar28 ^ uVar15;
        uVar14 = uVar15 >> 7 | uVar15 << 0x39;
        uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar28 >> 0x13 | uVar28 << 0x2d;
        uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar27 = (uVar24 >> 9 | (uVar28 >> 0x13) << 0x37) ^ uVar28 ^ uVar24 ^ uVar14;
        uVar13 = (uVar13 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar13 ^
                 0xffffffffffffffa5;
        uVar14 = uVar14 ^ uVar22;
        uVar28 = uVar27 ^ ~uVar12 & uVar13;
        uVar26 = ~uVar22 & uVar14 ^ uVar13;
        uVar15 = ~uVar27 & uVar12 ^ uVar14;
        uVar24 = ~uVar13 & uVar22 ^ uVar12 ^ uVar28;
        uVar13 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar14 & uVar27 ^ uVar22 ^ uVar26;
        uVar12 = uVar26 >> 1 | (ulonglong)((uVar26 & 1) != 0) << 0x3f;
        uVar25 = uVar22 >> 10 | uVar22 << 0x36;
        uVar28 = uVar28 ^ uVar15;
        uVar14 = uVar15 >> 7 | uVar15 << 0x39;
        uVar25 = uVar25 ^ (uVar25 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar13 = (uVar13 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar13;
        uVar22 = uVar28 >> 0x13 | uVar28 << 0x2d;
        uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar27 = (uVar22 >> 9 | (uVar28 >> 0x13) << 0x37) ^ uVar28 ^ uVar22 ^ uVar14;
        uVar15 = (uVar12 >> 5 | (uVar26 >> 1) << 0x3b) ^ uVar13 ^ uVar26 ^ uVar12 ^
                 0xffffffffffffffb4;
        uVar14 = uVar14 ^ uVar25;
        uVar26 = uVar27 ^ ~uVar13 & uVar15;
        uVar12 = ~uVar25 & uVar14 ^ uVar15;
        uVar22 = ~uVar27 & uVar13 ^ uVar14;
        uVar24 = ~uVar15 & uVar25 ^ uVar13 ^ uVar26;
        uVar28 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar14 = ~uVar14 & uVar27 ^ uVar25 ^ uVar12;
        uVar25 = uVar12 >> 1 | (ulonglong)((uVar12 & 1) != 0) << 0x3f;
        uVar15 = uVar14 >> 10 | uVar14 << 0x36;
        uVar26 = uVar26 ^ uVar22;
        uVar13 = uVar22 >> 7 | uVar22 << 0x39;
        uVar25 = (uVar25 >> 5 | (uVar12 >> 1) << 0x3b) ^ uVar12 ^ uVar25;
        uStack552 = (uVar28 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar28;
        uVar12 = uVar26 >> 0x13 | uVar26 << 0x2d;
        uVar24 = (uVar12 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar12;
        uVar12 = (uVar15 >> 7 | (uVar14 >> 10) << 0x39) ^ uVar14 ^ uVar15 ^ (ulonglong)pbStack496;
        uVar13 = (uVar13 >> 0x22 | (uVar22 >> 7) << 0x1e) ^ uVar22 ^ uVar13 ^ uStack464 ^ 1;
        for (; (ulonglong *)0x7 < puStack96; puStack96 = puStack96 + -1) {
          uVar24 = uVar24 ^ CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(
                                                  undefined *)puStack600,
                                                  *(undefined *)((longlong)puStack600 + 1)),
                                                  *(undefined *)((longlong)puStack600 + 2)),
                                                  *(undefined *)((longlong)puStack600 + 3)),
                                                  *(undefined *)((longlong)puStack600 + 4)),
                                                  *(undefined *)((longlong)puStack600 + 5)),
                                              *(undefined *)((longlong)puStack600 + 6)),
                                     *(undefined *)((longlong)puStack600 + 7));
          *(char *)puStack600 = (char)(uVar24 >> 0x38);
          *(char *)((longlong)puStack600 + 1) = (char)(uVar24 >> 0x30);
          *(char *)((longlong)puStack600 + 2) = (char)(uVar24 >> 0x28);
          *(char *)((longlong)puStack600 + 3) = (char)(uVar24 >> 0x20);
          *(char *)((longlong)puStack600 + 4) = (char)(uVar24 >> 0x18);
          *(char *)((longlong)puStack600 + 5) = (char)(uVar24 >> 0x10);
          *(char *)((longlong)puStack600 + 6) = (char)(uVar24 >> 8);
          *(char *)((longlong)puStack600 + 7) = (char)uVar24;
          uVar24 = uVar24 ^ uVar13;
          uVar22 = ~uVar25 ^ uStack552 ^ 0x96;
          uVar13 = uVar13 ^ uVar12;
          uVar26 = uVar24 ^ ~uStack552 & uVar22;
          uVar25 = ~uVar12 & uVar13 ^ uVar22;
          uVar15 = ~uVar24 & uStack552 ^ uVar13;
          uVar27 = ~uVar22 & uVar12 ^ uStack552 ^ uVar26;
          uVar22 = uVar27 >> 0x27 | uVar27 << 0x19;
          uVar24 = ~uVar13 & uVar24 ^ uVar12 ^ uVar25;
          uVar12 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
          uVar13 = uVar24 >> 10 | uVar24 << 0x36;
          uVar26 = uVar26 ^ uVar15;
          uVar14 = uVar15 >> 7 | uVar15 << 0x39;
          uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar24 >> 10) << 0x39) ^ uVar24;
          uVar22 = (uVar22 >> 0x16 | (uVar27 >> 0x27) << 0x2a) ^ uVar27 ^ uVar22;
          uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
          uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
          uVar26 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar14;
          uVar12 = (uVar12 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar22 ^ uVar25 ^ uVar12 ^
                   0xffffffffffffff78;
          uVar14 = uVar14 ^ uVar13;
          uVar27 = uVar26 ^ ~uVar22 & uVar12;
          uVar25 = ~uVar13 & uVar14 ^ uVar12;
          uVar15 = ~uVar26 & uVar22 ^ uVar14;
          uVar24 = ~uVar12 & uVar13 ^ uVar22 ^ uVar27;
          uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
          uVar22 = ~uVar14 & uVar26 ^ uVar13 ^ uVar25;
          uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
          uVar13 = uVar22 >> 10 | uVar22 << 0x36;
          uVar27 = uVar27 ^ uVar15;
          uVar28 = uVar15 >> 7 | uVar15 << 0x39;
          uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
          uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
          uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
          uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
          uVar26 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar28;
          uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                   0xffffffffffffff87;
          uVar28 = uVar28 ^ uVar13;
          uVar27 = uVar26 ^ ~uVar12 & uVar22;
          uVar25 = ~uVar13 & uVar28 ^ uVar22;
          uVar15 = ~uVar26 & uVar12 ^ uVar28;
          uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
          uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
          uVar26 = ~uVar28 & uVar26 ^ uVar13 ^ uVar25;
          uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
          uVar13 = uVar26 >> 10 | uVar26 << 0x36;
          uVar27 = uVar27 ^ uVar15;
          uVar22 = uVar15 >> 7 | uVar15 << 0x39;
          uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
          uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
          uVar24 = uVar27 >> 0x13 | uVar27 << 0x2d;
          uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
          uVar27 = (uVar24 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar24 ^ uVar22;
          uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                   0xffffffffffffff96;
          uVar22 = uVar22 ^ uVar13;
          uVar26 = uVar27 ^ ~uVar12 & uVar14;
          uVar25 = ~uVar13 & uVar22 ^ uVar14;
          uVar15 = ~uVar27 & uVar12 ^ uVar22;
          uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar26;
          uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
          uVar22 = ~uVar22 & uVar27 ^ uVar13 ^ uVar25;
          uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
          uVar13 = uVar22 >> 10 | uVar22 << 0x36;
          uVar26 = uVar26 ^ uVar15;
          uVar27 = uVar15 >> 7 | uVar15 << 0x39;
          uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
          uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
          uVar22 = uVar26 >> 0x13 | uVar26 << 0x2d;
          uVar27 = uVar27 ^ (uVar27 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
          uVar15 = (uVar22 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar22 ^ uVar27;
          uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                   0xffffffffffffffa5;
          uVar27 = uVar27 ^ uVar13;
          uVar26 = uVar15 ^ ~uVar12 & uVar14;
          uVar25 = ~uVar13 & uVar27 ^ uVar14;
          uVar22 = ~uVar15 & uVar12 ^ uVar27;
          uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar26;
          uVar14 = uVar24 >> 0x27 | uVar24 << 0x19;
          uVar27 = ~uVar27 & uVar15 ^ uVar13 ^ uVar25;
          uVar15 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
          uVar12 = uVar27 >> 10 | uVar27 << 0x36;
          uVar26 = uVar26 ^ uVar22;
          uVar13 = uVar22 >> 7 | uVar22 << 0x39;
          uVar12 = uVar12 ^ (uVar12 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
          uVar14 = (uVar14 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar14;
          uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
          uVar13 = uVar13 ^ (uVar13 >> 0x22 | (uVar22 >> 7) << 0x1e) ^ uVar22;
          uVar27 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar13;
          uVar22 = uVar25 ^ (uVar15 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar14 ^ uVar15 ^
                   0xffffffffffffffb4;
          uVar13 = uVar13 ^ uVar12;
          uVar26 = uVar27 ^ ~uVar14 & uVar22;
          uVar28 = ~uVar12 & uVar13 ^ uVar22;
          uVar15 = ~uVar27 & uVar14 ^ uVar13;
          uVar14 = ~uVar22 & uVar12 ^ uVar14 ^ uVar26;
          uVar24 = uVar14 >> 0x27 | uVar14 << 0x19;
          uVar13 = ~uVar13 & uVar27 ^ uVar12 ^ uVar28;
          uVar25 = uVar28 >> 1 | (ulonglong)((uVar28 & 1) != 0) << 0x3f;
          uVar12 = uVar13 >> 10 | uVar13 << 0x36;
          uVar26 = uVar26 ^ uVar15;
          uVar22 = uVar15 >> 7 | uVar15 << 0x39;
          uVar25 = (uVar25 >> 5 | (uVar28 >> 1) << 0x3b) ^ uVar28 ^ uVar25;
          uVar12 = (uVar12 >> 7 | (uVar13 >> 10) << 0x39) ^ uVar13 ^ uVar12;
          uStack552 = (uVar24 >> 0x16 | (uVar14 >> 0x27) << 0x2a) ^ uVar14 ^ uVar24;
          uVar14 = uVar26 >> 0x13 | uVar26 << 0x2d;
          uVar13 = (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15 ^ uVar22;
          uVar24 = (uVar14 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar14;
          puStack600 = puStack600 + 1;
        }
        uVar24 = uVar24 ^ 0x80 << ((7U - (char)puStack96 & 7) << 3);
        puStack168 = puStack600;
        while( true ) {
          cStack527 = (char)puVar21;
          puStack576 = (ulonglong *)((longlong)puStack168 + 1);
          if (puStack96 <= puVar21) break;
          bVar9 = ('\a' - cStack527) * '\b';
          uVar24 = uVar24 ^ (ulonglong)*(byte *)puStack168 << (bVar9 & 0x3f);
          *(char *)puStack168 = (char)(uVar24 >> (bVar9 & 0x3f));
          puVar21 = (ulonglong *)(ulonglong)(byte)(cStack527 + 1);
          puStack168 = puStack576;
        }
        uStack552 = uStack552 ^ (ulonglong)pbStack496;
        uVar24 = uVar24 ^ uVar13;
        uVar22 = ~uVar25 ^ uStack552 ^ uStack464 ^ 0xf0;
        uVar13 = uVar13 ^ uVar12;
        uVar26 = uVar24 ^ ~uStack552 & uVar22;
        uVar25 = ~uVar12 & uVar13 ^ uVar22;
        uVar15 = ~uVar24 & uStack552 ^ uVar13;
        uVar27 = ~uVar22 & uVar12 ^ uStack552 ^ uVar26;
        uVar22 = uVar27 >> 0x27 | uVar27 << 0x19;
        uVar24 = ~uVar13 & uVar24 ^ uVar12 ^ uVar25;
        uVar12 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar24 >> 10 | uVar24 << 0x36;
        uVar26 = uVar26 ^ uVar15;
        uVar14 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar24 >> 10) << 0x39) ^ uVar24;
        uVar22 = (uVar22 >> 0x16 | (uVar27 >> 0x27) << 0x2a) ^ uVar27 ^ uVar22;
        uVar24 = uVar26 >> 0x13 | uVar26 << 0x2d;
        uVar14 = uVar14 ^ (uVar14 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar26 >> 0x13) << 0x37) ^ uVar26 ^ uVar24 ^ uVar14;
        uVar12 = (uVar12 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar22 ^ uVar25 ^ uVar12 ^
                 0xffffffffffffff1e;
        uVar14 = uVar14 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar22 & uVar12;
        uVar25 = ~uVar13 & uVar14 ^ uVar12;
        uVar15 = ~uVar26 & uVar22 ^ uVar14;
        uVar24 = ~uVar12 & uVar13 ^ uVar22 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar14 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar28 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar28;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff2d;
        uVar28 = uVar28 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar28 ^ uVar22;
        uVar15 = ~uVar26 & uVar12 ^ uVar28;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar28 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar26 >> 10 | uVar26 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar22 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar24 ^ uVar22;
        uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff3c;
        uVar22 = uVar22 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar14;
        uVar25 = ~uVar13 & uVar22 ^ uVar14;
        uVar15 = ~uVar26 & uVar12 ^ uVar22;
        uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar28 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar28;
        uVar22 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff4b;
        uVar28 = uVar28 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar22;
        uVar25 = ~uVar13 & uVar28 ^ uVar22;
        uVar15 = ~uVar26 & uVar12 ^ uVar28;
        uVar24 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar28 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar26 >> 10 | uVar26 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar22 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar22 = uVar22 ^ (uVar22 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar24 ^ uVar22;
        uVar14 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff5a;
        uVar22 = uVar22 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar14;
        uVar25 = ~uVar13 & uVar22 ^ uVar14;
        uVar15 = ~uVar26 & uVar12 ^ uVar22;
        uVar24 = ~uVar14 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar22 = ~uVar22 & uVar26 ^ uVar13 ^ uVar25;
        uVar14 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar22 >> 10 | uVar22 << 0x36;
        uVar27 = uVar27 ^ uVar15;
        uVar26 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar22 >> 10) << 0x39) ^ uVar22;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar22 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar26 = uVar26 ^ (uVar26 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar22 = (uVar22 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar22 ^ uVar26;
        uVar24 = (uVar14 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar14 ^
                 0xffffffffffffff69;
        uVar26 = uVar26 ^ uVar13;
        uVar14 = uVar22 ^ ~uVar12 & uVar24;
        uVar25 = ~uVar13 & uVar26 ^ uVar24;
        uVar15 = ~uVar22 & uVar12 ^ uVar26;
        uVar24 = ~uVar24 & uVar13 ^ uVar12 ^ uVar14;
        uVar12 = uVar24 >> 0x27 | uVar24 << 0x19;
        uVar26 = ~uVar26 & uVar22 ^ uVar13 ^ uVar25;
        uVar22 = uVar25 >> 1 | (ulonglong)((uVar25 & 1) != 0) << 0x3f;
        uVar13 = uVar26 >> 10 | uVar26 << 0x36;
        uVar14 = uVar14 ^ uVar15;
        uVar28 = uVar15 >> 7 | uVar15 << 0x39;
        uVar13 = uVar13 ^ (uVar13 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar24 >> 0x27) << 0x2a) ^ uVar24 ^ uVar12;
        uVar24 = uVar14 >> 0x13 | uVar14 << 0x2d;
        uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar15 >> 7) << 0x1e) ^ uVar15;
        uVar26 = (uVar24 >> 9 | (uVar14 >> 0x13) << 0x37) ^ uVar14 ^ uVar24 ^ uVar28;
        uVar22 = (uVar22 >> 5 | (uVar25 >> 1) << 0x3b) ^ uVar12 ^ uVar25 ^ uVar22 ^
                 0xffffffffffffff78;
        uVar28 = uVar28 ^ uVar13;
        uVar27 = uVar26 ^ ~uVar12 & uVar22;
        uVar24 = ~uVar13 & uVar28 ^ uVar22;
        uVar14 = ~uVar26 & uVar12 ^ uVar28;
        uVar15 = ~uVar22 & uVar13 ^ uVar12 ^ uVar27;
        uVar12 = uVar15 >> 0x27 | uVar15 << 0x19;
        uVar26 = ~uVar28 & uVar26 ^ uVar13 ^ uVar24;
        uVar13 = uVar24 >> 1 | (ulonglong)((uVar24 & 1) != 0) << 0x3f;
        uVar22 = uVar26 >> 10 | uVar26 << 0x36;
        uVar27 = uVar27 ^ uVar14;
        uVar25 = uVar14 >> 7 | uVar14 << 0x39;
        uVar22 = uVar22 ^ (uVar22 >> 7 | (uVar26 >> 10) << 0x39) ^ uVar26;
        uVar12 = (uVar12 >> 0x16 | (uVar15 >> 0x27) << 0x2a) ^ uVar15 ^ uVar12;
        uVar15 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar25 = uVar25 ^ (uVar25 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
        uVar26 = (uVar15 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar15 ^ uVar25;
        uVar15 = (uVar13 >> 5 | (uVar24 >> 1) << 0x3b) ^ uVar12 ^ uVar24 ^ uVar13 ^
                 0xffffffffffffff87;
        uVar25 = uVar25 ^ uVar22;
        uVar27 = uVar26 ^ ~uVar12 & uVar15;
        uVar13 = ~uVar22 & uVar25 ^ uVar15;
        uVar14 = ~uVar26 & uVar12 ^ uVar25;
        uVar15 = ~uVar15 & uVar22 ^ uVar12 ^ uVar27;
        uVar12 = uVar15 >> 0x27 | uVar15 << 0x19;
        uVar24 = ~uVar25 & uVar26 ^ uVar22 ^ uVar13;
        uVar22 = uVar13 >> 1 | (ulonglong)((uVar13 & 1) != 0) << 0x3f;
        uVar26 = uVar24 >> 10 | uVar24 << 0x36;
        uVar27 = uVar27 ^ uVar14;
        uVar28 = uVar14 >> 7 | uVar14 << 0x39;
        uVar26 = uVar26 ^ (uVar26 >> 7 | (uVar24 >> 10) << 0x39) ^ uVar24;
        uVar12 = (uVar12 >> 0x16 | (uVar15 >> 0x27) << 0x2a) ^ uVar15 ^ uVar12;
        uVar15 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar28 = uVar28 ^ (uVar28 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
        uVar15 = (uVar15 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar15 ^ uVar28;
        uVar22 = (uVar22 >> 5 | (uVar13 >> 1) << 0x3b) ^ uVar12 ^ uVar13 ^ uVar22 ^
                 0xffffffffffffff96;
        uVar28 = uVar28 ^ uVar26;
        uVar24 = uVar15 ^ ~uVar12 & uVar22;
        uVar13 = ~uVar26 & uVar28 ^ uVar22;
        uVar14 = ~uVar15 & uVar12 ^ uVar28;
        uVar25 = ~uVar22 & uVar26 ^ uVar12 ^ uVar24;
        uVar12 = uVar25 >> 0x27 | uVar25 << 0x19;
        uVar27 = ~uVar28 & uVar15 ^ uVar26 ^ uVar13;
        uVar22 = uVar13 >> 1 | (ulonglong)((uVar13 & 1) != 0) << 0x3f;
        uVar26 = uVar27 >> 10 | uVar27 << 0x36;
        uVar24 = uVar24 ^ uVar14;
        uVar15 = uVar14 >> 7 | uVar14 << 0x39;
        uVar26 = uVar26 ^ (uVar26 >> 7 | (uVar27 >> 10) << 0x39) ^ uVar27;
        uVar12 = (uVar12 >> 0x16 | (uVar25 >> 0x27) << 0x2a) ^ uVar25 ^ uVar12;
        uVar25 = uVar24 >> 0x13 | uVar24 << 0x2d;
        uVar15 = uVar15 ^ (uVar15 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
        uVar24 = (uVar25 >> 9 | (uVar24 >> 0x13) << 0x37) ^ uVar24 ^ uVar25 ^ uVar15;
        uVar13 = (uVar22 >> 5 | (uVar13 >> 1) << 0x3b) ^ uVar12 ^ uVar13 ^ uVar22 ^
                 0xffffffffffffffa5;
        uVar15 = uVar15 ^ uVar26;
        uVar27 = uVar24 ^ ~uVar12 & uVar13;
        uVar22 = ~uVar26 & uVar15 ^ uVar13;
        uVar14 = ~uVar24 & uVar12 ^ uVar15;
        uVar13 = ~uVar13 & uVar26 ^ uVar12 ^ uVar27;
        uVar12 = uVar13 >> 0x27 | uVar13 << 0x19;
        uVar24 = ~uVar15 & uVar24 ^ uVar26 ^ uVar22;
        uVar15 = uVar22 >> 1 | (ulonglong)((uVar22 & 1) != 0) << 0x3f;
        uVar26 = uVar24 >> 10 | uVar24 << 0x36;
        uVar27 = uVar27 ^ uVar14;
        uVar25 = uVar14 >> 7 | uVar14 << 0x39;
        uVar26 = uVar26 ^ (uVar26 >> 7 | (uVar24 >> 10) << 0x39) ^ uVar24;
        uVar12 = (uVar12 >> 0x16 | (uVar13 >> 0x27) << 0x2a) ^ uVar13 ^ uVar12;
        uVar13 = uVar27 >> 0x13 | uVar27 << 0x2d;
        uVar25 = uVar25 ^ (uVar25 >> 0x22 | (uVar14 >> 7) << 0x1e) ^ uVar14;
        uVar14 = (uVar13 >> 9 | (uVar27 >> 0x13) << 0x37) ^ uVar27 ^ uVar13 ^ uVar25;
        uVar22 = (uVar15 >> 5 | (uVar22 >> 1) << 0x3b) ^ uVar12 ^ uVar22 ^ uVar15 ^
                 0xffffffffffffffb4;
        uVar25 = uVar25 ^ uVar26;
        uVar24 = ~uVar14 & uVar12 ^ uVar25;
        uVar15 = ~uVar25 & uVar14 ^ (uVar25 | uVar26) ^ uVar22;
        uVar13 = uVar15 >> 10 | uVar15 << 0x36;
        uVar14 = uVar14 ^ ~uVar12 & uVar22 ^ uVar24;
        uVar22 = uVar24 >> 7 | uVar24 << 0x39;
        uVar12 = uVar14 >> 0x13 | uVar14 << 0x2d;
        uStack608 = (uVar12 >> 9 | (uVar14 >> 0x13) << 0x37) ^ uVar14 ^ uVar12;
        uVar12 = (uVar13 >> 7 | (uVar15 >> 10) << 0x39) ^ uVar15 ^ uVar13 ^ (ulonglong)pbStack496;
        uVar13 = (uVar22 >> 0x22 | (uVar24 >> 7) << 0x1e) ^ uVar24 ^ uVar22 ^ uStack464;
        *(char *)puStack168 = (char)(uVar12 >> 0x38);
        *(char *)puStack576 = (char)(uVar12 >> 0x30);
        *(char *)((longlong)puStack168 + 2) = (char)(uVar12 >> 0x28);
        *(char *)((longlong)puStack168 + 3) = (char)(uVar12 >> 0x20);
        *(char *)((longlong)puStack168 + 4) = (char)(uVar12 >> 0x18);
        *(char *)((longlong)puStack168 + 5) = (char)(uVar12 >> 0x10);
        *(char *)((longlong)puStack168 + 6) = (char)(uVar12 >> 8);
        *(char *)((longlong)puStack168 + 7) = (char)uVar12;
        *(char *)(puStack168 + 1) = (char)(uVar13 >> 0x38);
        *(char *)((longlong)puStack168 + 9) = (char)(uVar13 >> 0x30);
        *(char *)((longlong)puStack168 + 10) = (char)(uVar13 >> 0x28);
        *(char *)((longlong)puStack168 + 0xb) = (char)(uVar13 >> 0x20);
        *(char *)((longlong)puStack168 + 0xc) = (char)(uVar13 >> 0x18);
        *(char *)((longlong)puStack168 + 0xd) = (char)(uVar13 >> 0x10);
        *(char *)((longlong)puStack168 + 0xe) = (char)(uVar13 >> 8);
        *(char *)((longlong)puStack168 + 0xf) = (char)uVar13;
        puVar21 = puStack592;
      }
      *(ulonglong **)(lStack584 + 0x38) = puVar21;
      puStack600 = puStack168;
      puStack568 = puStack96;
    }
  }
  else {
    if ((DAT_140033a40 != (uint *)0x0) && (*DAT_140033a40 < 2000)) {
      while( true ) {
        uVar13 = lVar11 * 2000;
        lVar16 = SUB168(ZEXT816(0x2262427fc07a8175) * ZEXT816(uVar13) >> 0x40,0);
        uVar13 = ((uVar13 + ((uVar13 - lVar16 >> 1) + lVar16 >> 0xb) * -0xe1b) * 0xe1b) % 0x1107;
        lVar16 = SUB168(ZEXT816(0x4e5e0a72f0539783) * ZEXT816(uVar13) >> 0x40,0);
        uVar13 = ((((ulonglong)
                    *(ushort *)
                     ((longlong)&DAT_140029050 +
                     ((((uVar13 - lVar16 >> 1) + lVar16 >> 6) * 0x62 + uVar13 / 0x33) * -0x33 +
                     uVar13 * 0x34) * 2) * 2000) % 0xc9d) * 0xe35) % 0xc9d;
        puStack592 = (ulonglong *)
                     (&DAT_14002b760 +
                     uVar13 * 0x90 + ((uVar13 / 0xf5) * 0xf5 + uVar13 / 0x11) * -0x88);
        uVar13 = *puStack592;
        uVar22 = uVar13 << 4 | uVar13 >> 0x3c;
        puStack576 = (ulonglong *)(ulonglong)((uint)(uVar12 >> 0x20) & 0x6f735d2c);
        uVar14 = (uVar12 >> 0x20 | 0x6f735d2c) - (longlong)puStack576;
        lStack160 = lVar11;
        if ((~uVar22 & 0xfffffffffffffffe) + 2 + uVar22 == 0) break;
        if (((uVar12 & 0xffffffff00000000 | 0x6f735d2c00000000) - ((longlong)puStack576 << 0x20) |
            uVar13 << 0x20) == (uVar13 & uVar14) << 0x20) goto LAB_14001d5dc;
        uVar12 = (uVar13 - 1) + (((~uVar13 & uVar12) - (~uVar12 | uVar13)) - uVar12);
        lVar11 = lVar11 + 1;
      }
      uVar12 = (~uVar13 | 0xffffffff00000000) + 0x1000000000000001 + (uVar13 & 0xefffffffffffffff);
      *puStack592 = (uVar12 | uVar14) - (uVar12 & uVar14);
      *DAT_140033a40 = *DAT_140033a40 + 1;
    }
  }
LAB_14001d5dc:
  uStack480 = uStack560;
LAB_14001a24a:
  *(uint *)(lStack584 + 0x30) = uStack480;
  IofCompleteRequest(lStack584,0);
  thunk_FUN_1400164f0(uStack56 ^ (ulonglong)auStack648);
  return;
}
