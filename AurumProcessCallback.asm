5: kd> uf Aurum+0x14060
Aurum+0xf774:
fffff803`133df774 483bd1          cmp     rdx,rcx
fffff803`133df777 0f85c94c0000    jne     Aurum+0x14446 (fffff803`133e4446)  Branch

Aurum+0xf77d:
fffff803`133df77d e99b190000      jmp     Aurum+0x1111d (fffff803`133e111d)  Branch

Aurum+0xff51:
fffff803`133dff51 48b83098ffb13630b690 mov rax,90B63036B1FF9830h
fffff803`133dff5b 4c33c8          xor     r9,rax
fffff803`133dff5e 48b8e1ef8539392fa95e mov rax,5EA92F393985EFE1h
fffff803`133dff68 4889442418      mov     qword ptr [rsp+18h],rax
fffff803`133dff6d 48b8c58e5cab1e59daa7 mov rax,0A7DA591EAB5C8EC5h
fffff803`133dff77 480fafd0        imul    rdx,rax
fffff803`133dff7b 48b8862dce8f161e391d mov rax,1D391E168FCE2D86h
fffff803`133dff85 4889442418      mov     qword ptr [rsp+18h],rax
fffff803`133dff8a 488bc2          mov     rax,rdx
fffff803`133dff8d 48c1e807        shr     rax,7
fffff803`133dff91 4833d0          xor     rdx,rax
fffff803`133dff94 48b83743b2773eface91 mov rax,91CEFA3E77B24337h
fffff803`133dff9e 4c33c0          xor     r8,rax
fffff803`133dffa1 488bc2          mov     rax,rdx
fffff803`133dffa4 48c1e80e        shr     rax,0Eh
fffff803`133dffa8 e9a6410000      jmp     Aurum+0x14153 (fffff803`133e4153)  Branch

Aurum+0x110ef:
fffff803`133e10ef 48b8d933dcd487ee06fb mov rax,0FB06EE87D4DC33D9h
fffff803`133e10f9 4c33c0          xor     r8,rax
fffff803`133e10fc 48b8f667c2d0afa35be5 mov rax,0E55BA3AFD0C267F6h
fffff803`133e1106 4c33c8          xor     r9,rax
fffff803`133e1109 48b8ff17f225816b844a mov rax,4A846B8125F217FFh
fffff803`133e1113 4889442418      mov     qword ptr [rsp+18h],rax
fffff803`133e1118 e9862f0000      jmp     Aurum+0x140a3 (fffff803`133e40a3)  Branch

Aurum+0x1111d:
fffff803`133e111d 488b0514290200  mov     rax,qword ptr [Aurum+0x33a38 (fffff803`13403a38)]
fffff803`133e1124 4883600800      and     qword ptr [rax+8],0
fffff803`133e1129 488b0508290200  mov     rax,qword ptr [Aurum+0x33a38 (fffff803`13403a38)]
fffff803`133e1130 4883601000      and     qword ptr [rax+10h],0
fffff803`133e1135 e90c330000      jmp     Aurum+0x14446 (fffff803`133e4446)  Branch

Aurum+0x12185:
fffff803`133e2185 488b5c2408      mov     rbx,qword ptr [rsp+8]
fffff803`133e218a c3              ret

Aurum+0x12377:
fffff803`133e2377 48c1e816        shr     rax,16h
fffff803`133e237b 4833d0          xor     rdx,rax
fffff803`133e237e 488bc2          mov     rax,rdx
fffff803`133e2381 48c1e82c        shr     rax,2Ch
fffff803`133e2385 4833d0          xor     rdx,rax
fffff803`133e2388 48b8bc3203e351225ff0 mov rax,0F05F2251E30332BCh
fffff803`133e2392 e9931d0000      jmp     Aurum+0x1412a (fffff803`133e412a)  Branch

Aurum+0x14060:
fffff803`133e4060 e9a75f0000      jmp     Aurum+0x1a00c (fffff803`133ea00c)  Branch

Aurum+0x140a3:
fffff803`133e40a3 e934d80200      jmp     Aurum+0x418dc (fffff803`134118dc)  Branch

Aurum+0x140b7:
fffff803`133e40b7 e9c70c0100      jmp     Aurum+0x24d83 (fffff803`133f4d83)  Branch

Aurum+0x1412a:
fffff803`133e412a e920a50000      jmp     Aurum+0x1e64f (fffff803`133ee64f)  Branch

Aurum+0x14132:
fffff803`133e4132 e9111f0000      jmp     Aurum+0x16048 (fffff803`133e6048)  Branch

Aurum+0x14153:
fffff803`133e4153 e90e940000      jmp     Aurum+0x1d566 (fffff803`133ed566)  Branch

Aurum+0x1415b:
fffff803`133e415b e95a5a0200      jmp     Aurum+0x39bba (fffff803`13409bba)  Branch

Aurum+0x14186:
fffff803`133e4186 e9f6b30200      jmp     Aurum+0x3f581 (fffff803`1340f581)  Branch

Aurum+0x141b6:
fffff803`133e41b6 e90b890200      jmp     Aurum+0x3cac6 (fffff803`1340cac6)  Branch

Aurum+0x141eb:
fffff803`133e41eb e988210000      jmp     Aurum+0x16378 (fffff803`133e6378)  Branch

Aurum+0x14237:
fffff803`133e4237 e915bdffff      jmp     Aurum+0xff51 (fffff803`133dff51)  Branch

Aurum+0x14293:
fffff803`133e4293 e9cd170000      jmp     Aurum+0x15a65 (fffff803`133e5a65)  Branch

Aurum+0x142b5:
fffff803`133e42b5 e9c18c0200      jmp     Aurum+0x3cf7b (fffff803`1340cf7b)  Branch

Aurum+0x14348:
fffff803`133e4348 e9a2cdffff      jmp     Aurum+0x110ef (fffff803`133e10ef)  Branch

Aurum+0x14376:
fffff803`133e4376 e9220b0000      jmp     Aurum+0x14e9d (fffff803`133e4e9d)  Branch

Aurum+0x143a5:
fffff803`133e43a5 e9ff4d0200      jmp     Aurum+0x391a9 (fffff803`134091a9)  Branch

Aurum+0x143cc:
fffff803`133e43cc e9de260000      jmp     Aurum+0x16aaf (fffff803`133e6aaf)  Branch

Aurum+0x143fe:
fffff803`133e43fe e98f960000      jmp     Aurum+0x1da92 (fffff803`133eda92)  Branch

Aurum+0x14406:
fffff803`133e4406 e91a070000      jmp     Aurum+0x14b25 (fffff803`133e4b25)  Branch

Aurum+0x14429:
fffff803`133e4429 e946b3ffff      jmp     Aurum+0xf774 (fffff803`133df774)  Branch

Aurum+0x14446:
fffff803`133e4446 e93addffff      jmp     Aurum+0x12185 (fffff803`133e2185)  Branch

Aurum+0x146c7:
fffff803`133e46c7 49b8e8ff21cd0db06407 mov r8,764B00DCD21FFE8h
fffff803`133e46d1 488d1d28b9feff  lea     rbx,[Aurum (fffff803`133d0000)]
fffff803`133e46d8 49b9a01d7baf01db6bdd mov r9,0DD6BDB01AF7B1DA0h
fffff803`133e46e2 41bbec02d97b    mov     r11d,7BD902ECh
fffff803`133e46e8 e9b6f9ffff      jmp     Aurum+0x140a3 (fffff803`133e40a3)  Branch

Aurum+0x14b25:
fffff803`133e4b25 488bc2          mov     rax,rdx
fffff803`133e4b28 48c1e81c        shr     rax,1Ch
fffff803`133e4b2c 4833d0          xor     rdx,rax
fffff803`133e4b2f 48b81f69e29ec610b8a5 mov rax,0A5B810C69EE2691Fh
fffff803`133e4b39 4c33c0          xor     r8,rax
fffff803`133e4b3c 48b860a01c00143fdf05 mov rax,5DF3F14001CA060h
fffff803`133e4b46 e9b3f8ffff      jmp     Aurum+0x143fe (fffff803`133e43fe)  Branch

Aurum+0x14e9d:
fffff803`133e4e9d 48b81a81333b891e8bd6 mov rax,0D68B1E893B33811Ah
fffff803`133e4ea7 c74424188d91d5bf mov     dword ptr [rsp+18h],0BFD5918Dh
fffff803`133e4eaf 4c33c8          xor     r9,rax
fffff803`133e4eb2 c74424185c5791c6 mov     dword ptr [rsp+18h],0C691575Ch
fffff803`133e4eba 48b87e2dd9d6ad129a26 mov rax,269A12ADD6D92D7Eh
fffff803`133e4ec4 4c33c0          xor     r8,rax
fffff803`133e4ec7 e9d7f1ffff      jmp     Aurum+0x140a3 (fffff803`133e40a3)  Branch

Aurum+0x15821:
fffff803`133e5821 483d5276012e    cmp     rax,2E017652h
fffff803`133e5827 0f8489e9ffff    je      Aurum+0x141b6 (fffff803`133e41b6)  Branch

Aurum+0x1582d:
fffff803`133e582d e9ac8f0200      jmp     Aurum+0x3e7de (fffff803`1340e7de)  Branch

Aurum+0x15a65:
fffff803`133e5a65 48b851bdbb4ebb6fe210 mov rax,10E26FBB4EBBBD51h
fffff803`133e5a6f 4c33c0          xor     r8,rax
fffff803`133e5a72 48b870b03d5da674fd2d mov rax,2DFD74A65D3DB070h
fffff803`133e5a7c 4c33c8          xor     r9,rax
fffff803`133e5a7f 4803d3          add     rdx,rbx
fffff803`133e5a82 e91ce6ffff      jmp     Aurum+0x140a3 (fffff803`133e40a3)  Branch

Aurum+0x16048:
fffff803`133e6048 48b806d1fccceb0df955 mov rax,55F90DEBCCFCD106h
fffff803`133e6052 4c33c8          xor     r9,rax
fffff803`133e6055 48b8b7cd4c572d9bbb2a mov rax,2ABB9B2D574CCDB7h
fffff803`133e605f 4c33c0          xor     r8,rax
fffff803`133e6062 488bc2          mov     rax,rdx
fffff803`133e6065 48c1e80d        shr     rax,0Dh
fffff803`133e6069 e9e5e0ffff      jmp     Aurum+0x14153 (fffff803`133e4153)  Branch

Aurum+0x16378:
fffff803`133e6378 48b8f28fe2dac1fbaebb mov rax,0BBAEFBC1DAE28FF2h
fffff803`133e6382 4c33c8          xor     r9,rax
fffff803`133e6385 488b05982c0100  mov     rax,qword ptr [Aurum+0x29024 (fffff803`133f9024)]
fffff803`133e638c 480faf5009      imul    rdx,qword ptr [rax+9]
fffff803`133e6391 48b850d2fc0ab4619a56 mov rax,569A61B40AFCD250h
fffff803`133e639b 482bd3          sub     rdx,rbx
fffff803`133e639e 482bd0          sub     rdx,rax
fffff803`133e63a1 488bc2          mov     rax,rdx
fffff803`133e63a4 e9cebfffff      jmp     Aurum+0x12377 (fffff803`133e2377)  Branch

Aurum+0x16aaf:
fffff803`133e6aaf 48b8145fcb802ec97ea5 mov rax,0A57EC92E80CB5F14h
fffff803`133e6ab9 4889442418      mov     qword ptr [rsp+18h],rax
fffff803`133e6abe 488b055f250100  mov     rax,qword ptr [Aurum+0x29024 (fffff803`133f9024)]
fffff803`133e6ac5 480faf5011      imul    rdx,qword ptr [rax+11h]
fffff803`133e6aca 48b8441abcf068cde236 mov rax,36E2CD68F0BC1A44h
fffff803`133e6ad4 4c33c0          xor     r8,rax
fffff803`133e6ad7 48b8e2e9a9297aa6ce8d mov rax,8DCEA67A29A9E9E2h
fffff803`133e6ae1 e918d9ffff      jmp     Aurum+0x143fe (fffff803`133e43fe)  Branch

Aurum+0x1a00c:
fffff803`133ea00c 48895c2408      mov     qword ptr [rsp+8],rbx
fffff803`133ea011 4d85c0          test    r8,r8
fffff803`133ea014 0f852ca4ffff    jne     Aurum+0x14446 (fffff803`133e4446)  Branch

Aurum+0x1a01a:
fffff803`133ea01a e9f0280200      jmp     Aurum+0x3c90f (fffff803`1340c90f)  Branch

Aurum+0x1c1eb:
fffff803`133ec1eb 41ba1ddde6f3    mov     r10d,0F3E6DD1Dh
fffff803`133ec1f1 493bc2          cmp     rax,r10
fffff803`133ec1f4 0f852f82ffff    jne     Aurum+0x14429 (fffff803`133e4429)  Branch

Aurum+0x1c1fa:
fffff803`133ec1fa e99ed40100      jmp     Aurum+0x3969d (fffff803`1340969d)  Branch

Aurum+0x1c4dd:
fffff803`133ec4dd 41ba20cc1deb    mov     r10d,0EB1DCC20h
fffff803`133ec4e3 493bc2          cmp     rax,r10
fffff803`133ec4e6 0f845c7effff    je      Aurum+0x14348 (fffff803`133e4348)  Branch

Aurum+0x1c4ec:
fffff803`133ec4ec e9fafcffff      jmp     Aurum+0x1c1eb (fffff803`133ec1eb)  Branch

Aurum+0x1d566:
fffff803`133ed566 4833d0          xor     rdx,rax
fffff803`133ed569 e9356bffff      jmp     Aurum+0x140a3 (fffff803`133e40a3)  Branch

Aurum+0x1da92:
fffff803`133eda92 4c33c8          xor     r9,rax
fffff803`133eda95 e90966ffff      jmp     Aurum+0x140a3 (fffff803`133e40a3)  Branch

Aurum+0x1e64f:
fffff803`133ee64f 4c33c0          xor     r8,rax
fffff803`133ee652 e94c5affff      jmp     Aurum+0x140a3 (fffff803`133e40a3)  Branch

Aurum+0x23620:
fffff803`133f3620 483d4ea5ad15    cmp     rax,15ADA54Eh
fffff803`133f3626 0f840b0cffff    je      Aurum+0x14237 (fffff803`133e4237)  Branch

Aurum+0x2362c:
fffff803`133f362c e9df240000      jmp     Aurum+0x25b10 (fffff803`133f5b10)  Branch

Aurum+0x23b83:
fffff803`133f3b83 488bc2          mov     rax,rdx
fffff803`133f3b86 48c1e81a        shr     rax,1Ah
fffff803`133f3b8a 4833d0          xor     rdx,rax
fffff803`133f3b8d 48b8a78ee863caa171ba mov rax,0BA71A1CA63E88EA7h
fffff803`133f3b97 4c33c8          xor     r9,rax
fffff803`133f3b9a 48b8098f676c92bb0584 mov rax,8405BB926C678F09h
fffff803`133f3ba4 e98105ffff      jmp     Aurum+0x1412a (fffff803`133e412a)  Branch

Aurum+0x247ec:
fffff803`133f47ec 41ba39e39bc9    mov     r10d,0C99BE339h
fffff803`133f47f2 493bc2          cmp     rax,r10
fffff803`133f47f5 0f84aafbfeff    je      Aurum+0x143a5 (fffff803`133e43a5)  Branch

Aurum+0x247fb:
fffff803`133f47fb e976d20100      jmp     Aurum+0x41a76 (fffff803`13411a76)  Branch

Aurum+0x24d83:
fffff803`133f4d83 0f840af5feff    je      Aurum+0x14293 (fffff803`133e4293)  Branch

Aurum+0x24d89:
fffff803`133f4d89 e992e8ffff      jmp     Aurum+0x23620 (fffff803`133f3620)  Branch

Aurum+0x25899:
fffff803`133f5899 41babcd3c4c8    mov     r10d,0C8C4D3BCh
fffff803`133f589f 493bc2          cmp     rax,r10
fffff803`133f58a2 0f8424ebfeff    je      Aurum+0x143cc (fffff803`133e43cc)  Branch

Aurum+0x258a8:
fffff803`133f58a8 e93fefffff      jmp     Aurum+0x247ec (fffff803`133f47ec)  Branch

Aurum+0x25b10:
fffff803`133f5b10 483d0adec02d    cmp     rax,2DC0DE0Ah
fffff803`133f5b16 0f84cfe6feff    je      Aurum+0x141eb (fffff803`133e41eb)  Branch

Aurum+0x25b1c:
fffff803`133f5b1c e900fdfeff      jmp     Aurum+0x15821 (fffff803`133e5821)  Branch

Aurum+0x391a9:
fffff803`134091a9 48b89963181c9ac9173d mov rax,3D17C99A1C186399h
fffff803`134091b3 480fafd0        imul    rdx,rax
fffff803`134091b7 48b87b9842faedf05658 mov rax,5856F0EDFA42987Bh
fffff803`134091c1 4c33c0          xor     r8,rax
fffff803`134091c4 48b8305b877f8f2d0f00 mov rax,0F2D8F7F875B30h
fffff803`134091ce e92bb2fdff      jmp     Aurum+0x143fe (fffff803`133e43fe)  Branch

Aurum+0x3969d:
fffff803`1340969d 48b8a1d9e57eeb6e0be5 mov rax,0E50B6EEB7EE5D9A1h
fffff803`134096a7 c7442418326fb177 mov     dword ptr [rsp+18h],77B16F32h
fffff803`134096af 4c33c8          xor     r9,rax
fffff803`134096b2 488bc2          mov     rax,rdx
fffff803`134096b5 48c1e81f        shr     rax,1Fh
fffff803`134096b9 4833d0          xor     rdx,rax
fffff803`134096bc 48b86e431a2e14868d3a mov rax,3A8D86142E1A436Eh
fffff803`134096c6 4889442418      mov     qword ptr [rsp+18h],rax
fffff803`134096cb 48b8edb433aaeeff389a mov rax,9A38FFEEAA33B4EDh
fffff803`134096d5 e950aafdff      jmp     Aurum+0x1412a (fffff803`133e412a)  Branch

Aurum+0x39bba:
fffff803`13409bba 48b888be0d749080ec05 mov rax,5EC8090740DBE88h
fffff803`13409bc4 c744241858c97a68 mov     dword ptr [rsp+18h],687AC958h
fffff803`13409bcc 4c33c8          xor     r9,rax
fffff803`13409bcf 48b8493468f3fd741e42 mov rax,421E74FDF3683449h
fffff803`13409bd9 4c33c0          xor     r8,rax
fffff803`13409bdc 488bc2          mov     rax,rdx
fffff803`13409bdf 48c1e83e        shr     rax,3Eh
fffff803`13409be3 e96ba5fdff      jmp     Aurum+0x14153 (fffff803`133e4153)  Branch

Aurum+0x3b13a:
fffff803`1340b13a 483d19ace974    cmp     rax,74E9AC19h
fffff803`1340b140 0f84ec8ffdff    je      Aurum+0x14132 (fffff803`133e4132)  Branch

Aurum+0x3b146:
fffff803`1340b146 e9e3670000      jmp     Aurum+0x4192e (fffff803`1341192e)  Branch

Aurum+0x3c90f:
fffff803`1340c90f 488b052271ffff  mov     rax,qword ptr [Aurum+0x33a38 (fffff803`13403a38)]
fffff803`1340c916 488b5008        mov     rdx,qword ptr [rax+8]
fffff803`1340c91a 4885d2          test    rdx,rdx
fffff803`1340c91d 0f84067bfdff    je      Aurum+0x14429 (fffff803`133e4429)  Branch

Aurum+0x3c923:
fffff803`1340c923 e99f7dfdff      jmp     Aurum+0x146c7 (fffff803`133e46c7)  Branch

Aurum+0x3cac6:
fffff803`1340cac6 48b8d856e4d6115a1c58 mov rax,581C5A11D6E456D8h
fffff803`1340cad0 4c33c0          xor     r8,rax
fffff803`1340cad3 48b83678219e787cc9d9 mov rax,0D9C97C789E217836h
fffff803`1340cadd 4889442418      mov     qword ptr [rsp+18h],rax
fffff803`1340cae2 48b873e7da1f7fa257a2 mov rax,0A257A27F1FDAE773h
fffff803`1340caec 4c33c8          xor     r9,rax
fffff803`1340caef 488bc2          mov     rax,rdx
fffff803`1340caf2 48c1e838        shr     rax,38h
fffff803`1340caf6 e95876fdff      jmp     Aurum+0x14153 (fffff803`133e4153)  Branch

Aurum+0x3cf7b:
fffff803`1340cf7b 41ba399586ba    mov     r10d,0BA869539h
fffff803`1340cf81 493bc2          cmp     rax,r10
fffff803`1340cf84 0f847c74fdff    je      Aurum+0x14406 (fffff803`133e4406)  Branch

Aurum+0x3cf8a:
fffff803`1340cf8a e90a89feff      jmp     Aurum+0x25899 (fffff803`133f5899)  Branch

Aurum+0x3e7de:
fffff803`1340e7de 483d6aef2532    cmp     rax,3225EF6Ah
fffff803`1340e7e4 0f849c59fdff    je      Aurum+0x14186 (fffff803`133e4186)  Branch

Aurum+0x3e7ea:
fffff803`1340e7ea e9ea4b0000      jmp     Aurum+0x433d9 (fffff803`134133d9)  Branch

Aurum+0x3f581:
fffff803`1340f581 48b8d7fa349dfd227d5b mov rax,5B7D22FD9D34FAD7h
fffff803`1340f58b 482bd0          sub     rdx,rax
fffff803`1340f58e 48b829bc2f6643fbe05a mov rax,5AE0FB43662FBC29h
fffff803`1340f598 4c33c8          xor     r9,rax
fffff803`1340f59b 48b83f5016d0738656ef mov rax,0EF568673D016503Fh
fffff803`1340f5a5 4c33c0          xor     r8,rax
fffff803`1340f5a8 488bc2          mov     rax,rdx
fffff803`1340f5ab 48c1e834        shr     rax,34h
fffff803`1340f5af e99f4bfdff      jmp     Aurum+0x14153 (fffff803`133e4153)  Branch

Aurum+0x418dc:
fffff803`134118dc 4d0fafc1        imul    r8,r9
fffff803`134118e0 498bc0          mov     rax,r8
fffff803`134118e3 48c1e820        shr     rax,20h
fffff803`134118e7 493bc3          cmp     rax,r11
fffff803`134118ea 0f87c529fdff    ja      Aurum+0x142b5 (fffff803`133e42b5)  Branch

Aurum+0x418f0:
fffff803`134118f0 e9c227fdff      jmp     Aurum+0x140b7 (fffff803`133e40b7)  Branch

Aurum+0x4192e:
fffff803`1341192e 483dc6f83c7a    cmp     rax,7A3CF8C6h
fffff803`13411934 0f85ef2afdff    jne     Aurum+0x14429 (fffff803`133e4429)  Branch

Aurum+0x4193a:
fffff803`1341193a e94422feff      jmp     Aurum+0x23b83 (fffff803`133f3b83)  Branch

Aurum+0x41a76:
fffff803`13411a76 41ba0cabedd4    mov     r10d,0D4EDAB0Ch
fffff803`13411a7c 493bc2          cmp     rax,r10
fffff803`13411a7f 0f84f128fdff    je      Aurum+0x14376 (fffff803`133e4376)  Branch

Aurum+0x41a85:
fffff803`13411a85 e953aafdff      jmp     Aurum+0x1c4dd (fffff803`133ec4dd)  Branch

Aurum+0x433d9:
fffff803`134133d9 483dc584c94e    cmp     rax,4EC984C5h
fffff803`134133df 0f84760dfdff    je      Aurum+0x1415b (fffff803`133e415b)  Branch

Aurum+0x433e5:
fffff803`134133e5 e9507dffff      jmp     Aurum+0x3b13a (fffff803`1340b13a)  Branch
