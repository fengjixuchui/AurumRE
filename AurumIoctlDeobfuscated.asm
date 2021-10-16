.text:0000000140014450 ; __unwind { // __GSHandlerCheck_SEH
.text:0000000140014450                 jmp     loc_1400122B5

.text:00000001400122B5 loc_1400122B5:                          ; CODE XREF: IoHandler_sub_140014450↓j
.text:00000001400122B5                 mov     [rsp+arg_0], rbx
.text:00000001400122BA                 mov     [rsp+arg_10], rsi
.text:00000001400122BF                 push    rdi
.text:00000001400122C0                 push    r12
.text:00000001400122C2                 push    r13
.text:00000001400122C4                 push    r14
.text:00000001400122C6                 push    r15
.text:00000001400122C8                 sub     rsp, 260h
.text:00000001400122CF                 mov     rax, cs:__security_cookie
.text:00000001400122D6                 jmp     loc_14001EFD4

.text:000000014001EFD4 loc_14001EFD4:                          ; CODE XREF: PreOb_sub_14000D9A0+4936↑j
.text:000000014001EFD4                 xor     rax, rsp
.text:000000014001EFD7                 jmp     loc_140016EC7

.text:0000000140016EC7 loc_140016EC7:                          ; CODE XREF: sub_14001D640+1997↓j
.text:0000000140016EC7                 mov     [rsp+arg_248], rax
.text:0000000140016ECF                 mov     rdi, rdx
.text:0000000140016ED2                 jmp     loc_14003D376

.text:000000014003D376 loc_14003D376:                          ; CODE XREF: IoHandler_sub_140014450+2A82↑j
.text:000000014003D376                 mov     [rsp+arg_38], rdx
.text:000000014003D37B                 mov     [rsp+arg_228], rdx
.text:000000014003D383                 xor     r13d, r13d
.text:000000014003D386                 mov     [rsp+arg_A0], r13d
.text:000000014003D38E                 mov     [rdx+38h], r13
.text:000000014003D392                 mov     rax, [rdx+0B8h]
.text:000000014003D399                 mov     [rsp+arg_90], rax
.text:000000014003D3A1                 movzx   ecx, byte ptr [rax]
.text:000000014003D3A4                 cmp     ecx, 0Eh
.text:000000014003D3A7                 ja      loc_1400163F5
.text:000000014003D3AD                 jmp     loc_1400411DE

.text:00000001400163F5 loc_1400163F5:                          ; CODE XREF: sub_14003800C+539B↓j
.text:00000001400163F5                 jmp     loc_140025187

.text:0000000140025187 loc_140025187:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400163F5↑j
.text:0000000140025187                 cmp     ecx, 15h
.text:000000014002518A                 ja      loc_14001741C
> .text:0000000140025190                 jmp     loc_140014580

.text:000000014001741C loc_14001741C:                          ; CODE XREF: sub_14001D640+7B4A↓j
.text:000000014001741C                 jmp     loc_140041441

.text:0000000140041441 loc_140041441:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001741C↑j
.text:0000000140041441                 sub     ecx, 16h
.text:0000000140041444                 jz      loc_140017F80
> .text:000000014004144A                 jmp     loc_140011E35

.text:0000000140017F80 loc_140017F80:                          ; CODE XREF: sub_140040C0A+83A↓j
.text:0000000140017F80                 jmp     loc_14003A485

.text:000000014003A485 loc_14003A485:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017F80↑j
.text:000000014003A485                 mov     rax, cs:P
.text:000000014003A48C                 test    rax, rax
.text:000000014003A48F                 jz      loc_1400181CE
> .text:000000014003A495                 jmp     loc_14003A05B

.text:00000001400181CE loc_1400181CE:                          ; CODE XREF: PreOb_sub_14000D9A0+57BA↑j
.text:00000001400181CE                                         ; sub_140025360+B6E↓j ...
.text:00000001400181CE                 jmp     loc_14003C554

.text:000000014003C554 loc_14003C554:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400181CE↑j
.text:000000014003C554                 mov     r8, 0FFFFFFFF00000000h
.text:000000014003C55E                 lea     r15, unk_14002B760
.text:000000014003C565                 mov     r14, 0F0F0F0F0F0F0F0F1h
.text:000000014003C56F                 mov     r12, 85BF37612CEE3C9Bh
.text:000000014003C579                 mov     r9, 0A25E5851D18A813Bh
.text:000000014003C583                 lea     rsi, cs:140000000h
.text:000000014003C58A                 mov     r10, 0AA2D145923EC7F30h
.text:000000014003C594                 jmp     loc_14001820E

.text:000000014001820E loc_14001820E:                          ; CODE XREF: PreOb_sub_14000D9A0+DE↑j
.text:000000014001820E                                         ; PreOb_sub_14000D9A0+2C8↑j ...
.text:000000014001820E                 jmp     loc_14001D1AF

.text:000000014001D1AF loc_14001D1AF:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001820E↑j
.text:000000014001D1AF                 mov     r11, 0EFFFFFFFFFFFFFFFh
.text:000000014001D1B9                 mov     rbx, 1000000000000001h
.text:000000014001D1C3                 jmp     loc_140018222

.text:0000000140018222 loc_140018222:                          ; CODE XREF: IoHandler_sub_140014450+8D73↓j
.text:0000000140018222                                         ; sub_14001D640+6639↓j
.text:0000000140018222                 jmp     loc_1400425BB

.text:00000001400425BB loc_1400425BB:                          ; CODE XREF: IoHandler_sub_140014450:loc_140018222↑j
.text:00000001400425BB                 mov     rax, 2262427FC07A8175h
.text:00000001400425C5                 jmp     loc_14001822C

.text:000000014001822C loc_14001822C:                          ; CODE XREF: IoHandler_sub_140014450+643F↓j
.text:000000014001822C                                         ; sub_14003800C+2A4A↓j ...
.text:000000014001822C                 jmp     loc_1400127C3

~~~

.text:00000001400411DE loc_1400411DE:                          ; CODE XREF: sub_14003800C+53A1↑j
.text:00000001400411DE                 mov     r10, 0AA2D145923EC7F30h
.text:00000001400411E8                 lea     rsi, cs:140000000h
.text:00000001400411EF                 mov     r9, 0A25E5851D18A813Bh
.text:00000001400411F9                 mov     r12, 85BF37612CEE3C9Bh
.text:0000000140041203                 mov     r14, 0F0F0F0F0F0F0F0F1h
.text:000000014004120D                 lea     r15, unk_14002B760
.text:0000000140041214                 mov     r8, 0FFFFFFFF00000000h
.text:000000014004121E                 jz      loc_1400161FA
.text:0000000140041224                 jmp     loc_14001255B

.text:000000014001255B loc_14001255B:                          ; CODE XREF: sub_140040C0A+61A↓j
.text:000000014001255B                 cmp     ecx, 7
.text:000000014001255E                 ja      loc_1400155C5
.text:0000000140012564                 jmp     loc_140022AFE

.text:00000001400155C5 loc_1400155C5:                          ; CODE XREF: PreOb_sub_14000D9A0+4BBE↑j
.text:00000001400155C5                 jmp     loc_140012259

.text:0000000140012259 loc_140012259:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400155C5↓j
.text:0000000140012259                 sub     ecx, 8
.text:000000014001225C                 jz      loc_140015FF7
.text:0000000140012262                 jmp     loc_14004091C

	.text:000000014004091C loc_14004091C:                          ; CODE XREF: PreOb_sub_14000D9A0+48C2↑j
	.text:000000014004091C                 sub     ecx, 1
	.text:000000014004091F                 jz      loc_140015DF4
	.text:0000000140040925                 jmp     loc_140016FE0
	
		.text:0000000140016FE0 loc_140016FE0:                          ; CODE XREF: sub_14003DD84+2BA1↓j
		.text:0000000140016FE0                 sub     ecx, 1
		.text:0000000140016FE3                 jz      loc_140015BF1
		.text:0000000140016FE9                 jmp     loc_140013171
		
			.text:0000000140013171 loc_140013171:                          ; CODE XREF: IoHandler_sub_140014450+2B99↓j
			.text:0000000140013171                 sub     ecx, 1
			.text:0000000140013174                 jz      loc_1400159F6
			.text:000000014001317A                 jmp     loc_140010FC3
			
				.text:0000000140010FC3 loc_140010FC3:                          ; CODE XREF: PreOb_sub_14000D9A0+57DA↓j
				.text:0000000140010FC3                 sub     ecx, 1
				.text:0000000140010FC6                 jz      loc_1400157FB
				.text:0000000140010FCC                 jmp     loc_140040435
				
					.text:0000000140040435 loc_140040435:                          ; CODE XREF: PreOb_sub_14000D9A0+362C↑j
					.text:0000000140040435                 cmp     ecx, 1
					.text:0000000140040438                 jnz     loc_14001820E
					.text:000000014004043E                 jmp     loc_14001A6D9
					
						.text:000000014001A6D9 loc_14001A6D9:                          ; CODE XREF: sub_14003DD84+26BA↓j
						.text:000000014001A6D9                 mov     rax, cs:P
						.text:000000014001A6E0                 test    rax, rax
						.text:000000014001A6E3                 jz      loc_14001820E
						.text:000000014001A6E9                 jmp     loc_14003EB43
						
							.text:000000014003EB43 loc_14003EB43:                          ; CODE XREF: IoHandler_sub_140014450+6299↑j
							.text:000000014003EB43                 cmp     dword ptr [rax], 7D0h
							.text:000000014003EB49                 mov     rax, 2262427FC07A8175h
							.text:000000014003EB53                 jnb     loc_140014797
							.text:000000014003EB59                 jmp     loc_14001A756
							
								.text:000000014001A756 loc_14001A756:                          ; CODE XREF: sub_14003DD84+DD5↓j
								.text:000000014001A756                 mov     [rsp+arg_28], r10
								.text:000000014001A75B                 mov     rcx, r13
								.text:000000014001A75E                 mov     rbx, 4E5E0A72F0539783h
								.text:000000014001A768                 mov     r11, 0F08DE3B14D94C2BFh
								.text:000000014001A772                 mov     edx, 0A7DB1BFBh
								.text:000000014001A777                 mov     [rsp+arg_48], rdx
								.text:000000014001A77C                 jmp     loc_140015647
								
								.text:0000000140015647 loc_140015647:                          ; CODE XREF: IoHandler_sub_140014450+632C↓j
								.text:0000000140015647                                         ; sub_14003800C+2DAB↓j
								.text:0000000140015647                 jmp     loc_14001C4A2
								
								.text:000000014001C4A2 loc_14001C4A2:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015647↑j
								.text:000000014001C4A2                 mov     [rsp+arg_100], rcx
								.text:000000014001C4AA                 imul    rcx, 7D0h
								.text:000000014001C4B1                 mul     rcx
								.text:000000014001C4B4                 mov     rax, rcx
								.text:000000014001C4B7                 sub     rax, rdx
								.text:000000014001C4BA                 shr     rax, 1
								.text:000000014001C4BD                 jmp     loc_140039186
								
								.text:0000000140039186 loc_140039186:                          ; CODE XREF: IoHandler_sub_140014450+806D↑j
								.text:0000000140039186                 add     rax, rdx
								.text:0000000140039189                 shr     rax, 0Bh
								.text:000000014003918D                 imul    rax, 0E1Bh
								.text:0000000140039194                 sub     rcx, rax
								.text:0000000140039197                 imul    rdi, rcx, 0E1Bh
								.text:000000014003919E                 mov     rax, r11
								.text:00000001400391A1                 mul     rdi
								.text:00000001400391A4                 jmp     loc_14004367C
								
								.text:000000014004367C ; ---------------------------------------------------------------------------
								.text:000000014004367C ; START OF FUNCTION CHUNK FOR sub_14003800C
								.text:000000014004367C
								.text:000000014004367C loc_14004367C:                          ; CODE XREF: sub_14003800C+1198↑j
								.text:000000014004367C                 shr     rdx, 0Ch
								.text:0000000140043680                 imul    rax, rdx, 1107h
								.text:0000000140043687                 sub     rdi, rax
								.text:000000014004368A                 mov     rax, rbx
								.text:000000014004368D                 mul     rdi
								.text:0000000140043690                 mov     rax, rdi
								.text:0000000140043693                 sub     rax, rdx
								.text:0000000140043696                 jmp     loc_14001A141
								.text:0000000140043696 ; END OF FUNCTION CHUNK FOR sub_14003800C
								
								.text:000000014001A141 loc_14001A141:                          ; CODE XREF: sub_14003800C+B68A↓j
								.text:000000014001A141                 shr     rax, 1
								.text:000000014001A144                 add     rax, rdx
								.text:000000014001A147                 shr     rax, 6
								.text:000000014001A14B                 imul    rcx, rax, 62h ; 'b'
								.text:000000014001A14F                 mov     rax, 0A0A0A0A0A0A0A0A1h
								.text:000000014001A159                 mul     rdi
								.text:000000014001A15C                 shr     rdx, 5
								.text:000000014001A160                 add     rcx, rdx
								.text:000000014001A163                 imul    rax, rcx, 66h ; 'f'
								.text:000000014001A167                 jmp     loc_140023E17
								
								.text:0000000140023E17 loc_140023E17:                          ; CODE XREF: IoHandler_sub_140014450+5D17↑j
								.text:0000000140023E17                 imul    rcx, rdi, 68h ; 'h'
								.text:0000000140023E1B                 sub     rcx, rax
								.text:0000000140023E1E                 movzx   eax, word ptr [rcx+rsi+29050h]
								.text:0000000140023E26                 imul    rcx, rax, 7D0h
								.text:0000000140023E2D                 jmp     loc_14001B0F5
								
								.text:000000014001B0F5 loc_14001B0F5:                          ; CODE XREF: sub_14001D640+67ED↓j
								.text:000000014001B0F5                 mov     rax, r9
								.text:000000014001B0F8                 mul     rcx
								.text:000000014001B0FB                 shr     rdx, 0Bh
								.text:000000014001B0FF                 imul    rax, rdx, 0C9Dh
								.text:000000014001B106                 sub     rcx, rax        ; SpinLock
								.text:000000014001B109                 imul    rdi, rcx, 0E35h
								.text:000000014001B110                 mov     rax, r9
								.text:000000014001B113                 mul     rdi
								.text:000000014001B116                 shr     rdx, 0Bh        ; NewIrql
								.text:000000014001B11A                 jmp     loc_140011D2D
								
								.text:0000000140011D2D loc_140011D2D:                          ; CODE XREF: IoHandler_sub_140014450+6CCA↓j
								.text:0000000140011D2D                 imul    rax, rdx, 0C9Dh
								.text:0000000140011D34                 jmp     loc_140025D5D
								
								.text:0000000140025D5D loc_140025D5D:                          ; CODE XREF: PreOb_sub_14000D9A0+4394↑j
								.text:0000000140025D5D                 sub     rdi, rax
								.text:0000000140025D60                 mov     rax, r12
								.text:0000000140025D63                 jmp     loc_14001C29C
								
								.text:000000014001C29C loc_14001C29C:                          ; CODE XREF: sub_140025360+A03↓j
								.text:000000014001C29C                 mul     rdi
								.text:000000014001C29F                 shr     rdx, 7
								.text:000000014001C2A3                 imul    rcx, rdx, 0F5h ; 'õ'
								.text:000000014001C2AA                 jmp     loc_140013D6F
								
								.text:0000000140013D6F loc_140013D6F:                          ; CODE XREF: IoHandler_sub_140014450+7E5A↓j
								.text:0000000140013D6F                 mov     rax, r14
								.text:0000000140013D72                 mul     rdi
								.text:0000000140013D75                 shr     rdx, 4
								.text:0000000140013D79                 add     rcx, rdx
								.text:0000000140013D7C                 jmp     loc_140017A6B
								
								.text:0000000140017A6B loc_140017A6B:                          ; CODE XREF: PreOb_sub_14000D9A0+63DC↑j
								.text:0000000140017A6B                 imul    rax, rcx, 88h ; 'ˆ'
								.text:0000000140017A72                 lea     rcx, [rdi+rdi*8]
								.text:0000000140017A76                 jmp     loc_140038453
								
								.text:0000000140038453 loc_140038453:                          ; CODE XREF: IoHandler_sub_140014450+3626↑j
								.text:0000000140038453                 shl     rcx, 4
								.text:0000000140038457                 sub     rcx, rax
								.text:000000014003845A                 add     rcx, r15
								.text:000000014003845D                 mov     [rsp+arg_30], rcx
								.text:0000000140038462                 jmp     loc_14001C9BB
								
								.text:000000014001C9BB loc_14001C9BB:                          ; CODE XREF: sub_14003800C+456↓j
								.text:000000014001C9BB                 mov     rdi, [rcx]
								.text:000000014001C9BE                 mov     rcx, rdi
								.text:000000014001C9C1                 rol     rcx, 4
								.text:000000014001C9C5                 mov     rdx, [rsp+arg_28]
								.text:000000014001C9CA                 shr     rdx, 20h
								.text:000000014001C9CE                 jmp     loc_14003AA20
								
								.text:000000014003AA20 loc_14003AA20:                          ; CODE XREF: IoHandler_sub_140014450+857E↑j
								.text:000000014003AA20                 mov     rax, rdx
								.text:000000014003AA23                 and     rax, [rsp+arg_48]
								.text:000000014003AA28                 mov     [rsp+arg_40], rax
								.text:000000014003AA2D                 jmp     loc_14003F3A6
								
								.text:000000014003F3A6 loc_14003F3A6:                          ; CODE XREF: sub_14003800C+2A21↑j
								.text:000000014003F3A6                 or      rdx, [rsp+arg_48]
								.text:000000014003F3AB                 sub     rdx, rax
								.text:000000014003F3AE                 mov     rax, rcx
								.text:000000014003F3B1                 not     rax
								.text:000000014003F3B4                 and     rax, 0FFFFFFFFFFFFFFFEh
								.text:000000014003F3B8                 add     rax, 2
								.text:000000014003F3BC                 add     rax, rcx
								.text:000000014003F3BF                 jz      loc_140014F99
								.text:000000014003F3C5                 jmp     loc_14001577C
								
									.text:000000014001577C loc_14001577C:                          ; CODE XREF: sub_14003DD84+1641↓j
									.text:000000014001577C                 jmp     loc_14003D9F3
									
									.text:000000014003D9F3 loc_14003D9F3:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001577C↑j
									.text:000000014003D9F3                 mov     rcx, [rsp+arg_28]
									.text:000000014003D9F8                 and     rcx, r8
									.text:000000014003D9FB                 mov     rax, 0A7DB1BFB00000000h
									.text:000000014003DA05                 or      rcx, rax
									.text:000000014003DA08                 mov     rax, [rsp+arg_40]
									.text:000000014003DA0D                 shl     rax, 20h
									.text:000000014003DA11                 sub     rcx, rax
									.text:000000014003DA14                 mov     rax, rdi
									.text:000000014003DA17                 shl     rax, 20h
									.text:000000014003DA1B                 or      rcx, rax
									.text:000000014003DA1E                 and     rdx, rdi
									.text:000000014003DA21                 shl     rdx, 20h
									.text:000000014003DA25                 cmp     rcx, rdx
									.text:000000014003DA28                 jz      loc_140014740
									.text:000000014003DA2E                 jmp     loc_14003AD78
									
										.text:000000014003AD78 loc_14003AD78:                          ; CODE XREF: sub_14003800C+5A22↓j
										.text:000000014003AD78                 mov     rcx, rdi
										.text:000000014003AD7B                 not     rcx
										.text:000000014003AD7E                 mov     rdx, [rsp+arg_28]
										.text:000000014003AD83                 and     rcx, rdx
										.text:000000014003AD86                 mov     rax, rdx
										.text:000000014003AD89                 not     rax
										.text:000000014003AD8C                 or      rax, rdi
										.text:000000014003AD8F                 sub     rcx, rax
										.text:000000014003AD92                 sub     rcx, rdx
										.text:000000014003AD95                 lea     rax, [rdi-1]
										.text:000000014003AD99                 lea     rax, [rax+rcx]
										.text:000000014003AD9D                 mov     [rsp+arg_28], rax
										.text:000000014003ADA2                 mov     rcx, [rsp+arg_100]
										.text:000000014003ADAA                 inc     rcx
										.text:000000014003ADAD                 mov     rax, 2262427FC07A8175h
										.text:000000014003ADB7                 jmp     loc_140015647
								
								.text:0000000140014F99 loc_140014F99:                          ; CODE XREF: PreOb_sub_14000D9A0+1C67↑j
								.text:0000000140014F99                                         ; PreOb_sub_14000D9A0+1DBF↑j ...
								.text:0000000140014F99                 jmp     loc_140015307
								
								.text:0000000140015307 loc_140015307:                          ; CODE XREF: IoHandler_sub_140014450:loc_140014F99↑j
								.text:0000000140015307                 mov     rcx, rdi
								.text:000000014001530A                 not     rcx
								.text:000000014001530D                 or      rcx, r8
								.text:0000000140015310                 jmp     loc_14001823D
								
								.text:000000014001823D loc_14001823D:                          ; CODE XREF: IoHandler_sub_140014450+EC0↑j
								.text:000000014001823D                 mov     r11, 0EFFFFFFFFFFFFFFFh
								.text:0000000140018247                 and     rdi, r11
								.text:000000014001824A                 mov     rbx, 1000000000000001h
								.text:0000000140018254                 add     rcx, rbx
								.text:0000000140018257                 add     rcx, rdi
								.text:000000014001825A                 mov     rax, rcx
								.text:000000014001825D                 or      rax, rdx
								.text:0000000140018260                 and     rcx, rdx
								.text:0000000140018263                 jmp     loc_140014779
				
				.text:00000001400157FB loc_1400157FB:                          ; CODE XREF: PreOb_sub_14000D9A0+3626↑j
				.text:00000001400157FB                 jmp     loc_14003F119
				
				.text:000000014003F119 loc_14003F119:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400157FB↑j
				.text:000000014003F119                 mov     rax, cs:P
				.text:000000014003F120                 test    rax, rax
				.text:000000014003F123                 jz      loc_14001820E
				.text:000000014003F129                 jmp     loc_140019DFB
				
					.text:0000000140019DFB loc_140019DFB:                          ; CODE XREF: sub_14003DD84+13A5↓j
					.text:0000000140019DFB                 cmp     dword ptr [rax], 7D0h
					.text:0000000140019E01                 mov     rax, 2262427FC07A8175h
					.text:0000000140019E0B                 jnb     loc_140014797
					.text:0000000140019E11                 jmp     loc_14004052E
					
						.text:000000014004052E loc_14004052E:                          ; CODE XREF: IoHandler_sub_140014450+59C1↑j
						.text:000000014004052E                 mov     [rsp+arg_28], r10
						.text:0000000140040533                 mov     rcx, r13
						.text:0000000140040536                 mov     rbx, 4E5E0A72F0539783h
						.text:0000000140040540                 mov     r11, 0F08DE3B14D94C2BFh
						.text:000000014004054A                 jmp     loc_14001583D
						
						.text:000000014001583D loc_14001583D:                          ; CODE XREF: sub_14003800C+379F↓j
						.text:000000014001583D                                         ; sub_14003DD84+27C6↓j
						.text:000000014001583D                 jmp     loc_140011146
						
						.text:0000000140011146 loc_140011146:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001583D↓j
						.text:0000000140011146                 mov     [rsp+arg_108], rcx
						.text:000000014001114E                 imul    rcx, 7D0h
						.text:0000000140011155                 mul     rcx
						.text:0000000140011158                 mov     rax, rcx
						.text:000000014001115B                 sub     rax, rdx
						.text:000000014001115E                 shr     rax, 1
						.text:0000000140011161                 add     rax, rdx
						.text:0000000140011164                 jmp     loc_140042AE4
						
						.text:0000000140042AE4 loc_140042AE4:                          ; CODE XREF: PreOb_sub_14000D9A0+37C4↑j
						.text:0000000140042AE4                 shr     rax, 0Bh
						.text:0000000140042AE8                 imul    rax, 0E1Bh
						.text:0000000140042AEF                 sub     rcx, rax
						.text:0000000140042AF2                 imul    rdi, rcx, 0E1Bh
						.text:0000000140042AF9                 mov     rax, r11
						.text:0000000140042AFC                 mul     rdi
						.text:0000000140042AFF                 shr     rdx, 0Ch
						.text:0000000140042B03                 imul    rax, rdx, 1107h
						.text:0000000140042B0A                 sub     rdi, rax
						.text:0000000140042B0D                 jmp     loc_14001C7FF
						
						.text:000000014001C7FF loc_14001C7FF:                          ; CODE XREF: sub_14004185D+12B0↓j
						.text:000000014001C7FF                 mov     rax, rbx
						.text:000000014001C802                 mul     rdi
						.text:000000014001C805                 mov     rax, rdi
						.text:000000014001C808                 sub     rax, rdx
						.text:000000014001C80B                 shr     rax, 1
						.text:000000014001C80E                 add     rax, rdx
						.text:000000014001C811                 shr     rax, 6
						.text:000000014001C815                 imul    rcx, rax, 62h ; 'b'
						.text:000000014001C819                 mov     rax, 0A0A0A0A0A0A0A0A1h
						.text:000000014001C823                 jmp     loc_140015781
						
						.text:0000000140015781 loc_140015781:                          ; CODE XREF: IoHandler_sub_140014450+83D3↓j
						.text:0000000140015781                 mul     rdi
						.text:0000000140015784                 shr     rdx, 5
						.text:0000000140015788                 add     rcx, rdx
						.text:000000014001578B                 imul    rax, rcx, 66h ; 'f'
						.text:000000014001578F                 imul    rcx, rdi, 68h ; 'h'
						.text:0000000140015793                 sub     rcx, rax
						.text:0000000140015796                 movzx   eax, word ptr [rcx+rsi+29050h]
						.text:000000014001579E                 imul    rcx, rax, 7D0h
						.text:00000001400157A5                 mov     rax, r9
						.text:00000001400157A8                 mul     rcx
						.text:00000001400157AB                 jmp     loc_140012537
						
						.text:0000000140012537 loc_140012537:                          ; CODE XREF: IoHandler_sub_140014450+135B↓j
						.text:0000000140012537                 shr     rdx, 0Bh
						.text:000000014001253B                 jmp     sub_140043EA1   ; [FUNCTION] sub_140043EA1
						
						.text:0000000140043EA1 ; =============== S U B R O U T I N E =======================================
						.text:0000000140043EA1
						.text:0000000140043EA1
						.text:0000000140043EA1 sub_140043EA1   proc near               ; CODE XREF: PreOb_sub_14000D9A0+4B9B↑j
						.text:0000000140043EA1                 imul    rax, rdx, 0C9Dh
						.text:0000000140043EA8                 sub     rcx, rax
						.text:0000000140043EAB                 jmp     loc_14003E22E
						.text:0000000140043EAB sub_140043EA1   endp
						
						.text:000000014003E22E loc_14003E22E:                          ; CODE XREF: sub_140043EA1+A↓j
						.text:000000014003E22E                 imul    rdi, rcx, 0E35h
						.text:000000014003E235                 mov     rax, r9
						.text:000000014003E238                 mul     rdi
						.text:000000014003E23B                 shr     rdx, 0Bh
						.text:000000014003E23F                 imul    rax, rdx, 0C9Dh
						.text:000000014003E246                 sub     rdi, rax
						.text:000000014003E249                 mov     rax, r12
						.text:000000014003E24C                 mul     rdi
						.text:000000014003E24F                 jmp     loc_140038428
						
						.text:0000000140038428 loc_140038428:                          ; CODE XREF: sub_14003DD84+4CB↓j
						.text:0000000140038428                 shr     rdx, 7
						.text:000000014003842C                 imul    rcx, rdx, 0F5h ; 'õ'
						.text:0000000140038433                 mov     rax, r14
						.text:0000000140038436                 mul     rdi
						.text:0000000140038439                 jmp     loc_140041EF4
						
						.text:0000000140041EF4 loc_140041EF4:                          ; CODE XREF: sub_14003800C+42D↑j
						.text:0000000140041EF4                 shr     rdx, 4
						.text:0000000140041EF8                 add     rcx, rdx
						.text:0000000140041EFB                 imul    rax, rcx, 88h ; 'ˆ'
						.text:0000000140041F02                 lea     rcx, [rdi+rdi*8]
						.text:0000000140041F06                 jmp     loc_14003AE29
						
						.text:000000014003AE29 loc_14003AE29:                          ; CODE XREF: sub_14004185D+6A9↓j
						.text:000000014003AE29                 shl     rcx, 4
						.text:000000014003AE2D                 sub     rcx, rax
						.text:000000014003AE30                 add     rcx, r15
						.text:000000014003AE33                 jmp     loc_1400445AC
						
						.text:00000001400445AC ; ---------------------------------------------------------------------------
						.text:00000001400445AC ; START OF FUNCTION CHUNK FOR sub_14003800C
						.text:00000001400445AC
						.text:00000001400445AC loc_1400445AC:                          ; CODE XREF: sub_14003800C+2E27↑j
						.text:00000001400445AC                 mov     [rsp+arg_30], rcx
						.text:00000001400445B1                 mov     rdx, [rcx]
						.text:00000001400445B4                 mov     rcx, rdx
						.text:00000001400445B7                 rol     rcx, 4
						.text:00000001400445BB                 mov     rdi, [rsp+arg_28]
						.text:00000001400445C0                 shr     rdi, 20h
						.text:00000001400445C4                 mov     rax, rdi
						.text:00000001400445C7                 and     eax, 5257C4C4h
						.text:00000001400445CC                 mov     [rsp+arg_40], rax
						.text:00000001400445D1                 jmp     loc_140018E13
						.text:00000001400445D1 ; END OF FUNCTION CHUNK FOR sub_14003800C
						
						.text:0000000140018E13 loc_140018E13:                          ; CODE XREF: sub_14003800C+C5C5↓j
						.text:0000000140018E13                 or      rdi, 5257C4C4h
						.text:0000000140018E1A                 sub     rdi, rax
						.text:0000000140018E1D                 mov     rax, rcx
						.text:0000000140018E20                 not     rax
						.text:0000000140018E23                 and     rax, 0FFFFFFFFFFFFFFFEh
						.text:0000000140018E27                 add     rax, 2
						.text:0000000140018E2B                 add     rax, rcx
						.text:0000000140018E2E                 jz      loc_14001474A
						.text:0000000140018E34                 jmp     loc_140015974
						
							.text:0000000140015974 loc_140015974:                          ; CODE XREF: IoHandler_sub_140014450+49E4↓j
							.text:0000000140015974                 jmp     loc_14003B7F7
							
							.text:000000014003B7F7 loc_14003B7F7:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015974↑j
							.text:000000014003B7F7                 mov     rcx, [rsp+arg_28]
							.text:000000014003B7FC                 and     rcx, r8
							.text:000000014003B7FF                 mov     rax, 5257C4C400000000h
							.text:000000014003B809                 or      rcx, rax
							.text:000000014003B80C                 mov     rax, [rsp+arg_40]
							.text:000000014003B811                 shl     rax, 20h
							.text:000000014003B815                 sub     rcx, rax
							.text:000000014003B818                 mov     rax, rdx
							.text:000000014003B81B                 shl     rax, 20h
							.text:000000014003B81F                 or      rcx, rax
							.text:000000014003B822                 mov     rax, rdx
							.text:000000014003B825                 and     rax, rdi
							.text:000000014003B828                 shl     rax, 20h
							.text:000000014003B82C                 cmp     rcx, rax
							.text:000000014003B82F                 jz      loc_140014740
							.text:000000014003B835                 jmp     loc_14003CE09
							
								.text:000000014003CE09 loc_14003CE09:                          ; CODE XREF: sub_14003800C+3829↑j
								.text:000000014003CE09                 mov     rcx, rdx
								.text:000000014003CE0C                 not     rcx
								.text:000000014003CE0F                 mov     rdi, [rsp+arg_28]
								.text:000000014003CE14                 and     rcx, rdi
								.text:000000014003CE17                 jmp     loc_140023FE3
								
								.text:0000000140023FE3 loc_140023FE3:                          ; CODE XREF: sub_14003800C+4E0B↓j
								.text:0000000140023FE3                 mov     rax, rdi
								.text:0000000140023FE6                 not     rax
								.text:0000000140023FE9                 or      rax, rdx
								.text:0000000140023FEC                 sub     rcx, rax
								.text:0000000140023FEF                 sub     rcx, rdi
								.text:0000000140023FF2                 lea     rax, [rdx-1]
								.text:0000000140023FF6                 lea     rax, [rax+rcx]
								.text:0000000140023FFA                 mov     [rsp+arg_28], rax
								.text:0000000140023FFF                 mov     rcx, [rsp+arg_108]
								.text:0000000140024007                 jmp     loc_14003B79E
								
								.text:000000014003B79E loc_14003B79E:                          ; CODE XREF: sub_14001D640+69C7↑j
								.text:000000014003B79E                 inc     rcx
								.text:000000014003B7A1                 mov     rax, 2262427FC07A8175h
								.text:000000014003B7AB                 jmp     loc_14001583D
			
			.text:00000001400159F6 loc_1400159F6:                          ; CODE XREF: PreOb_sub_14000D9A0+57D4↑j
			.text:00000001400159F6                 jmp     sub_140043EB0   ; [FUNCTION] sub_140043EB0
			
			.text:0000000140043EB0 ; =============== S U B R O U T I N E =======================================
			.text:0000000140043EB0
			.text:0000000140043EB0
			.text:0000000140043EB0 sub_140043EB0   proc near               ; CODE XREF: IoHandler_sub_140014450:loc_1400159F6↑j
			.text:0000000140043EB0                 mov     rax, cs:P
			.text:0000000140043EB7                 test    rax, rax
			.text:0000000140043EBA                 jz      loc_14001820E
			.text:0000000140043EC0                 jmp     loc_14000F0FB
			.text:0000000140043EC0 sub_140043EB0   endp
			
				.text:000000014000F0FB loc_14000F0FB:                          ; CODE XREF: sub_140043EB0+10↓j
				.text:000000014000F0FB                 cmp     dword ptr [rax], 7D0h
				.text:000000014000F101                 mov     rax, 2262427FC07A8175h
				.text:000000014000F10B                 jnb     loc_140014797
				.text:000000014000F111                 jmp     loc_14000E654
				
				.text:000000014000E654 loc_14000E654:                          ; CODE XREF: PreOb_sub_14000D9A0+1771↓j
				.text:000000014000E654                 mov     qword ptr [rsp+Length], r10
				.text:000000014000E659                 mov     rcx, r13
				.text:000000014000E65C                 mov     rbx, 4E5E0A72F0539783h
				.text:000000014000E666                 mov     r11, 0F08DE3B14D94C2BFh
				.text:000000014000E670                 jmp     loc_140015A38	
				
				.text:0000000140015A38 loc_140015A38:                          ; CODE XREF: PreOb_sub_14000D9A0+CD0↑j
				.text:0000000140015A38                                         ; sub_140043DDA+25↓j
				.text:0000000140015A38                 jmp     loc_14003EC5C
				
				.text:000000014003EC5C loc_14003EC5C:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015A38↑j
				.text:000000014003EC5C                 mov     [rsp+arg_110], rcx
				.text:000000014003EC64                 imul    rcx, 7D0h
				.text:000000014003EC6B                 mul     rcx
				.text:000000014003EC6E                 jmp     loc_1400125AA
				
				.text:00000001400125AA loc_1400125AA:                          ; CODE XREF: sub_14003DD84+EEA↓j
				.text:00000001400125AA                 mov     rax, rcx
				.text:00000001400125AD                 jmp     loc_140019B1F
				
				.text:0000000140019B1F loc_140019B1F:                          ; CODE XREF: PreOb_sub_14000D9A0+4C0D↑j
				.text:0000000140019B1F                 sub     rax, rdx
				.text:0000000140019B22                 shr     rax, 1
				.text:0000000140019B25                 add     rax, rdx
				.text:0000000140019B28                 shr     rax, 0Bh
				.text:0000000140019B2C                 imul    rax, 0E1Bh
				.text:0000000140019B33                 sub     rcx, rax
				.text:0000000140019B36                 jmp     loc_14003B47F
				
				.text:000000014003B47F loc_14003B47F:                          ; CODE XREF: IoHandler_sub_140014450+56E6↑j
				.text:000000014003B47F                 imul    rdi, rcx, 0E1Bh
				.text:000000014003B486                 mov     rax, r11
				.text:000000014003B489                 mul     rdi
				.text:000000014003B48C                 shr     rdx, 0Ch
				.text:000000014003B490                 imul    rax, rdx, 1107h
				.text:000000014003B497                 sub     rdi, rax
				.text:000000014003B49A                 mov     rax, rbx
				.text:000000014003B49D                 jmp     loc_14001EC9D
				
				.text:000000014001EC9D loc_14001EC9D:                          ; CODE XREF: sub_14003800C+3491↓j
				.text:000000014001EC9D                 mul     rdi
				.text:000000014001ECA0                 jmp     loc_140017067
				
				.text:0000000140017067 loc_140017067:                          ; CODE XREF: sub_14001D640+1660↓j
				.text:0000000140017067                 mov     rax, rdi
				.text:000000014001706A                 sub     rax, rdx
				.text:000000014001706D                 shr     rax, 1
				.text:0000000140017070                 add     rax, rdx
				.text:0000000140017073                 shr     rax, 6
				.text:0000000140017077                 imul    rcx, rax, 62h ; 'b'
				.text:000000014001707B                 jmp     loc_14001607A
				
				.text:000000014001607A loc_14001607A:                          ; CODE XREF: IoHandler_sub_140014450+2C2B↓j
				.text:000000014001607A                 mov     rax, 0A0A0A0A0A0A0A0A1h
				.text:0000000140016084                 jmp     loc_140011179
				
				.text:0000000140011179 loc_140011179:                          ; CODE XREF: IoHandler_sub_140014450+1C34↓j
				.text:0000000140011179                 mul     rdi
				.text:000000014001117C                 shr     rdx, 5
				.text:0000000140011180                 add     rcx, rdx
				.text:0000000140011183                 imul    rax, rcx, 66h ; 'f'
				.text:0000000140011187                 jmp     loc_140018C5B
				
				.text:0000000140018C5B loc_140018C5B:                          ; CODE XREF: PreOb_sub_14000D9A0+37E7↑j
				.text:0000000140018C5B                 imul    rcx, rdi, 68h ; 'h'
				.text:0000000140018C5F                 sub     rcx, rax
				.text:0000000140018C62                 movzx   eax, word ptr [rcx+rsi+29050h]
				.text:0000000140018C6A                 imul    rcx, rax, 7D0h
				.text:0000000140018C71                 mov     rax, r9
				.text:0000000140018C74                 mul     rcx
				.text:0000000140018C77                 shr     rdx, 0Bh
				.text:0000000140018C7B                 imul    rax, rdx, 0C9Dh
				.text:0000000140018C82                 sub     rcx, rax
				.text:0000000140018C85                 imul    rdi, rcx, 0E35h
				.text:0000000140018C8C                 jmp     loc_14001A23D
				
				.text:000000014001A23D loc_14001A23D:                          ; CODE XREF: IoHandler_sub_140014450+483C↑j
				.text:000000014001A23D                 mov     rax, r9
				.text:000000014001A240                 mul     rdi
				.text:000000014001A243                 jmp     loc_14003AAEF
				
				.text:000000014003AAEF loc_14003AAEF:                          ; CODE XREF: IoHandler_sub_140014450+5DF3↑j
				.text:000000014003AAEF                 shr     rdx, 0Bh
				.text:000000014003AAF3                 imul    rax, rdx, 0C9Dh
				.text:000000014003AAFA                 jmp     loc_1400399B4
				
				.text:00000001400399B4 loc_1400399B4:                          ; CODE XREF: sub_14003800C+2AEE↓j
				.text:00000001400399B4                 sub     rdi, rax
				.text:00000001400399B7                 mov     rax, r12
				.text:00000001400399BA                 mul     rdi
				.text:00000001400399BD                 shr     rdx, 7
				.text:00000001400399C1                 imul    rcx, rdx, 0F5h ; 'õ'
				.text:00000001400399C8                 mov     rax, r14
				.text:00000001400399CB                 mul     rdi
				.text:00000001400399CE                 jmp     loc_140025F31
				
				.text:0000000140025F31 loc_140025F31:                          ; CODE XREF: sub_14003800C+19C2↓j
				.text:0000000140025F31                 shr     rdx, 4
				.text:0000000140025F35                 add     rcx, rdx
				.text:0000000140025F38                 imul    rax, rcx, 88h ; 'ˆ'
				.text:0000000140025F3F                 jmp     loc_140016296
				
				.text:0000000140016296 loc_140016296:                          ; CODE XREF: sub_140025360+BDF↓j
				.text:0000000140016296                 lea     rcx, [rdi+rdi*8]
				.text:000000014001629A                 shl     rcx, 4
				.text:000000014001629E                 sub     rcx, rax
				.text:00000001400162A1                 add     rcx, r15
				.text:00000001400162A4                 mov     [rsp+arg_30], rcx
				.text:00000001400162A9                 mov     rdx, [rcx]
				.text:00000001400162AC                 mov     rcx, rdx
				.text:00000001400162AF                 rol     rcx, 4
				.text:00000001400162B3                 jmp     loc_14003EA0A
				
				.text:000000014003EA0A loc_14003EA0A:                          ; CODE XREF: IoHandler_sub_140014450+1E63↑j
				.text:000000014003EA0A                 mov     rdi, [rsp+arg_28]
				.text:000000014003EA0F                 shr     rdi, 20h
				.text:000000014003EA13                 jmp     loc_14003EA72
				
				.text:000000014003EA72 loc_14003EA72:                          ; CODE XREF: sub_14003DD84+C8F↑j
				.text:000000014003EA72                 mov     rax, rdi
				.text:000000014003EA75                 and     eax, 57B98901h
				.text:000000014003EA7A                 mov     [rsp+arg_40], rax
				.text:000000014003EA7F                 or      rdi, 57B98901h
				.text:000000014003EA86                 sub     rdi, rax
				.text:000000014003EA89                 mov     rax, rcx
				.text:000000014003EA8C                 not     rax
				.text:000000014003EA8F                 and     rax, 0FFFFFFFFFFFFFFFEh
				.text:000000014003EA93                 add     rax, 2
				.text:000000014003EA97                 add     rax, rcx
				.text:000000014003EA9A                 jmp     loc_14001842C
				
				.text:000000014001842C loc_14001842C:                          ; CODE XREF: sub_14003DD84+D16↓j
				.text:000000014001842C                 jz      loc_14001474A
				.text:0000000140018432                 jmp     loc_140015B6F
				
					.text:0000000140015B6F loc_140015B6F:                          ; CODE XREF: IoHandler_sub_140014450+3FE2↓j
					.text:0000000140015B6F                 jmp     loc_140010BA0
					
					.text:0000000140010BA0 loc_140010BA0:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015B6F↓j
					.text:0000000140010BA0                 mov     rcx, qword ptr [rsp+Length]
					.text:0000000140010BA5                 and     rcx, r8
					.text:0000000140010BA8                 mov     rax, 57B9890100000000h
					.text:0000000140010BB2                 or      rcx, rax
					.text:0000000140010BB5                 jmp     loc_14004326F
					
					.text:000000014004326F loc_14004326F:                          ; CODE XREF: PreOb_sub_14000D9A0+3215↑j
					.text:000000014004326F                 mov     rax, [rsp+arg_40]
					.text:0000000140043274                 shl     rax, 20h
					.text:0000000140043278                 sub     rcx, rax
					.text:000000014004327B                 mov     rax, rdx
					.text:000000014004327E                 shl     rax, 20h
					.text:0000000140043282                 or      rcx, rax
					.text:0000000140043285                 mov     rax, rdx
					.text:0000000140043288                 and     rax, rdi
					.text:000000014004328B                 jmp     loc_140040722
					
					.text:0000000140040722 loc_140040722:                          ; CODE XREF: sub_14004185D+1A2E↓j
					.text:0000000140040722                 shl     rax, 20h
					.text:0000000140040726                 cmp     rcx, rax
					.text:0000000140040729                 jz      loc_140014740
					.text:000000014004072F                 jmp     loc_14003B83A
		
		.text:0000000140015BF1 loc_140015BF1:                          ; CODE XREF: IoHandler_sub_140014450+2B93↓j
		.text:0000000140015BF1                 jmp     loc_14000FCAB
		
		.text:000000014000FCAB loc_14000FCAB:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015BF1↓j
		.text:000000014000FCAB                 mov     rax, cs:P
		.text:000000014000FCB2                 test    rax, rax
		.text:000000014000FCB5                 jz      loc_14001820E
		.text:000000014000FCBB                 jmp     loc_14000DBD6
		
			.text:000000014000DBD6 loc_14000DBD6:                          ; CODE XREF: PreOb_sub_14000D9A0+231B↓j
			.text:000000014000DBD6                 cmp     dword ptr [rax], 7D0h
			.text:000000014000DBDC                 mov     rax, 2262427FC07A8175h
			.text:000000014000DBE6                 jnb     loc_140014797
			.text:000000014000DBEC                 jmp     loc_14003EC14
			
				.text:000000014003EC14 loc_14003EC14:                          ; CODE XREF: PreOb_sub_14000D9A0+24C↑j
				.text:000000014003EC14                 mov     [rsp+arg_28], r10
				.text:000000014003EC19                 mov     rcx, r13
				.text:000000014003EC1C                 mov     rbx, 4E5E0A72F0539783h
				.text:000000014003EC26                 mov     r11, 0F08DE3B14D94C2BFh
				.text:000000014003EC30                 mov     edx, 9F97637Ah
				.text:000000014003EC35                 mov     [rsp+arg_48], rdx
				.text:000000014003EC3A                 jmp     loc_140015C3D
				
				.text:0000000140015C3D loc_140015C3D:                          ; CODE XREF: PreOb_sub_14000D9A0+3190↑j
				.text:0000000140015C3D                                         ; sub_14003DD84+EB6↓j
				.text:0000000140015C3D                 jmp     loc_14001ABF8
				
				.text:000000014001ABF8 loc_14001ABF8:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015C3D↑j
				.text:000000014001ABF8                 mov     [rsp+arg_118], rcx
				.text:000000014001AC00                 imul    rcx, 7D0h
				.text:000000014001AC07                 mul     rcx
				.text:000000014001AC0A                 mov     rax, rcx
				.text:000000014001AC0D                 sub     rax, rdx
				.text:000000014001AC10                 shr     rax, 1
				.text:000000014001AC13                 add     rax, rdx
				.text:000000014001AC16                 shr     rax, 0Bh
				.text:000000014001AC1A                 imul    rax, 0E1Bh
				.text:000000014001AC21                 jmp     loc_140019279
				
				.text:0000000140019279 loc_140019279:                          ; CODE XREF: IoHandler_sub_140014450+67D1↓j
				.text:0000000140019279                 sub     rcx, rax
				.text:000000014001927C                 imul    rdi, rcx, 0E1Bh
				.text:0000000140019283                 mov     rax, r11
				.text:0000000140019286                 mul     rdi
				.text:0000000140019289                 shr     rdx, 0Ch
				.text:000000014001928D                 imul    rax, rdx, 1107h
				.text:0000000140019294                 sub     rdi, rax
				.text:0000000140019297                 jmp     loc_14001BF85
				
				.text:000000014001BF85 loc_14001BF85:                          ; CODE XREF: IoHandler_sub_140014450+4E47↑j
				.text:000000014001BF85                 mov     rax, rbx
				.text:000000014001BF88                 mul     rdi
				.text:000000014001BF8B                 mov     rax, rdi
				.text:000000014001BF8E                 sub     rax, rdx
				.text:000000014001BF91                 shr     rax, 1
				.text:000000014001BF94                 add     rax, rdx
				.text:000000014001BF97                 shr     rax, 6
				.text:000000014001BF9B                 imul    rcx, rax, 62h ; 'b'
				.text:000000014001BF9F                 mov     rax, 0A0A0A0A0A0A0A0A1h
				.text:000000014001BFA9                 jmp     loc_1400183FD
				
				.text:00000001400183FD loc_1400183FD:                          ; CODE XREF: IoHandler_sub_140014450+7B59↓j
				.text:00000001400183FD                 mul     rdi
				.text:0000000140018400                 shr     rdx, 5
				.text:0000000140018404                 add     rcx, rdx
				.text:0000000140018407                 imul    rax, rcx, 66h ; 'f'
				.text:000000014001840B                 imul    rcx, rdi, 68h ; 'h'
				.text:000000014001840F                 sub     rcx, rax
				.text:0000000140018412                 movzx   eax, word ptr [rcx+rsi+29050h]
				.text:000000014001841A                 imul    rcx, rax, 7D0h
				.text:0000000140018421                 mov     rax, r9
				.text:0000000140018424                 mul     rcx
				.text:0000000140018427                 jmp     loc_1400398D0
				
				.text:00000001400398D0 loc_1400398D0:                          ; CODE XREF: IoHandler_sub_140014450+3FD7↑j
				.text:00000001400398D0                 shr     rdx, 0Bh
				.text:00000001400398D4                 imul    rax, rdx, 0C9Dh
				.text:00000001400398DB                 sub     rcx, rax
				.text:00000001400398DE                 imul    rdi, rcx, 0E35h
				.text:00000001400398E5                 mov     rax, r9
				.text:00000001400398E8                 mul     rdi
				.text:00000001400398EB                 jmp     loc_14003D663
				
				.text:000000014003D663 loc_14003D663:                          ; CODE XREF: sub_14003800C+18DF↑j
				.text:000000014003D663                 shr     rdx, 0Bh
				.text:000000014003D667                 imul    rax, rdx, 0C9Dh
				.text:000000014003D66E                 sub     rdi, rax
				.text:000000014003D671                 mov     rax, r12
				.text:000000014003D674                 mul     rdi
				.text:000000014003D677                 jmp     loc_14003E10D
				
				.text:000000014003E10D loc_14003E10D:                          ; CODE XREF: sub_14003800C+566B↑j
				.text:000000014003E10D                 shr     rdx, 7
				.text:000000014003E111                 imul    rcx, rdx, 0F5h ; 'õ'
				.text:000000014003E118                 mov     rax, r14
				.text:000000014003E11B                 mul     rdi
				.text:000000014003E11E                 shr     rdx, 4
				.text:000000014003E122                 add     rcx, rdx
				.text:000000014003E125                 imul    rax, rcx, 88h ; 'ˆ'
				.text:000000014003E12C                 lea     rcx, [rdi+rdi*8]
				.text:000000014003E130                 shl     rcx, 4
				.text:000000014003E134                 sub     rcx, rax
				.text:000000014003E137                 jmp     loc_14001AAA6
				
				.text:000000014001AAA6 loc_14001AAA6:                          ; CODE XREF: sub_14003DD84+3B3↓j
				.text:000000014001AAA6                 add     rcx, r15
				.text:000000014001AAA9                 mov     [rsp+arg_30], rcx
				.text:000000014001AAAE                 mov     rdx, [rcx]
				.text:000000014001AAB1                 mov     rcx, rdx
				.text:000000014001AAB4                 rol     rcx, 4
				.text:000000014001AAB8                 jmp     loc_14003A29F
				
				.text:000000014003A29F loc_14003A29F:                          ; CODE XREF: IoHandler_sub_140014450+6668↑j
				.text:000000014003A29F                 mov     rdi, [rsp+arg_28]
				.text:000000014003A2A4                 shr     rdi, 20h
				.text:000000014003A2A8                 mov     rax, rdi
				.text:000000014003A2AB                 jmp     loc_14003CE2A
				
				.text:000000014003CE2A loc_14003CE2A:                          ; CODE XREF: sub_14003800C+229F↑j
				.text:000000014003CE2A                 and     rax, [rsp+arg_48]
				.text:000000014003CE2F                 mov     [rsp+arg_40], rax
				.text:000000014003CE34                 or      rdi, [rsp+arg_48]
				.text:000000014003CE39                 sub     rdi, rax
				.text:000000014003CE3C                 mov     rax, rcx
				.text:000000014003CE3F                 not     rax
				.text:000000014003CE42                 and     rax, 0FFFFFFFFFFFFFFFEh
				.text:000000014003CE46                 add     rax, 2
				.text:000000014003CE4A                 add     rax, rcx
				.text:000000014003CE4D                 jz      loc_14001474A
				.text:000000014003CE53                 jmp     loc_140015D72
				
					.text:0000000140015D72 loc_140015D72:                          ; CODE XREF: sub_14003800C+4E47↓j
					.text:0000000140015D72                 jmp     loc_14004229D
					
					.text:000000014004229D loc_14004229D:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015D72↑j
					.text:000000014004229D                 mov     rcx, [rsp+arg_28]
					.text:00000001400422A2                 and     rcx, r8
					.text:00000001400422A5                 mov     rax, 9F97637A00000000h
					.text:00000001400422AF                 or      rcx, rax
					.text:00000001400422B2                 mov     rax, [rsp+arg_40]
					.text:00000001400422B7                 shl     rax, 20h
					.text:00000001400422BB                 sub     rcx, rax
					.text:00000001400422BE                 jmp     loc_14000FDD1
					
					.text:000000014000FDD1 loc_14000FDD1:                          ; CODE XREF: sub_14004185D+A61↓j
					.text:000000014000FDD1                 mov     rax, rdx
					.text:000000014000FDD4                 shl     rax, 20h
					.text:000000014000FDD8                 or      rcx, rax
					.text:000000014000FDDB                 mov     rax, rdx
					.text:000000014000FDDE                 and     rax, rdi
					.text:000000014000FDE1                 shl     rax, 20h
					.text:000000014000FDE5                 cmp     rcx, rax
					.text:000000014000FDE8                 jz      loc_140014740
					.text:000000014000FDEE                 jmp     sub_140041850 ; [FUNCTION] sub_140041850
					
						.text:0000000140041850 ; =============== S U B R O U T I N E =======================================
						.text:0000000140041850
						.text:0000000140041850
						.text:0000000140041850 sub_140041850   proc near               ; CODE XREF: PreOb_sub_14000D9A0+244E↑j
						.text:0000000140041850
						.text:0000000140041850 arg_28          = qword ptr  30h
						.text:0000000140041850
						.text:0000000140041850                 mov     rdi, [rsp+arg_28]
						.text:0000000140041855                 mov     rcx, rdi
						.text:0000000140041858                 jmp     loc_1400197D4
						.text:0000000140041858 sub_140041850   endp
						
						.text:00000001400197D4 loc_1400197D4:                          ; CODE XREF: sub_140041850+8↓j
						.text:00000001400197D4                 not     rcx
						.text:00000001400197D7                 or      rcx, rdx
						.text:00000001400197DA                 mov     rax, rdx
						.text:00000001400197DD                 not     rax
						.text:00000001400197E0                 and     rax, rdi
						.text:00000001400197E3                 sub     rax, rcx
						.text:00000001400197E6                 sub     rax, rdi
						.text:00000001400197E9                 lea     rax, [rax-1]
						.text:00000001400197ED                 lea     rax, [rax+rdx]
						.text:00000001400197F1                 mov     [rsp+arg_28], rax
						.text:00000001400197F6                 jmp     loc_140010B1B
						
						.text:0000000140010B1B loc_140010B1B:                          ; CODE XREF: IoHandler_sub_140014450+53A6↓j
						.text:0000000140010B1B                 mov     rcx, [rsp+arg_118]
						.text:0000000140010B23                 inc     rcx
						.text:0000000140010B26                 mov     rax, 2262427FC07A8175h
						.text:0000000140010B30                 jmp     loc_140015C3D
						
					.text:0000000140014740 loc_140014740:                          ; CODE XREF: PreOb_sub_14000D9A0+8E↑j
					.text:0000000140014740                                         ; PreOb_sub_14000D9A0+2448↑j ...
					.text:0000000140014740                 jmp     loc_14001723D
					
					.text:000000014001723D loc_14001723D:                          ; CODE XREF: IoHandler_sub_140014450:loc_140014740↑j
					.text:000000014001723D                 mov     rdi, [rsp+arg_38]
					.text:0000000140017242                 jmp     loc_14001820E
				
				.text:000000014001474A loc_14001474A:                          ; CODE XREF: PreOb_sub_14000D9A0+1FE8↑j
				.text:000000014001474A                                         ; PreOb_sub_14000D9A0+2BF2↑j ...
				.text:000000014001474A                 jmp     loc_1400427C8
				
				.text:00000001400427C8 loc_1400427C8:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001474A↑j
				.text:00000001400427C8                 mov     rcx, rdx
				.text:00000001400427CB                 not     rcx
				.text:00000001400427CE                 or      rcx, r8
				.text:00000001400427D1                 mov     r11, 0EFFFFFFFFFFFFFFFh
				.text:00000001400427DB                 and     rdx, r11
				.text:00000001400427DE                 mov     rbx, 1000000000000001h
				.text:00000001400427E8                 add     rcx, rbx
				.text:00000001400427EB                 add     rcx, rdx
				.text:00000001400427EE                 mov     rax, rcx
				.text:00000001400427F1                 or      rax, rdi
				.text:00000001400427F4                 and     rcx, rdi
				.text:00000001400427F7                 jmp     loc_140014779
				
				.text:0000000140014779 loc_140014779:                          ; CODE XREF: IoHandler_sub_140014450+3E13↓j
				.text:0000000140014779                                         ; sub_14004185D+F9A↓j
				.text:0000000140014779                 jmp     short loc_140014745
				
				.text:0000000140014745 loc_140014745:                          ; CODE XREF: IoHandler_sub_140014450:loc_140014779↓j
				.text:0000000140014745                 jmp     loc_14000DE49
				
				.text:000000014000DE49 loc_14000DE49:                          ; CODE XREF: IoHandler_sub_140014450:loc_140014745↓j
				.text:000000014000DE49                 sub     rax, rcx
				.text:000000014000DE4C                 jmp     loc_14001477C
				
				.text:000000014001477C loc_14001477C:                          ; CODE XREF: PreOb_sub_14000D9A0+4AC↑j
				.text:000000014001477C                                         ; sub_14003800C+1AE5↓j
				.text:000000014001477C                 jmp     loc_140023C63
				
				.text:0000000140023C63 loc_140023C63:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001477C↑j
				.text:0000000140023C63                 mov     rcx, [rsp+arg_30]
				.text:0000000140023C68                 mov     [rcx], rax
				.text:0000000140023C6B                 mov     rax, cs:P
				.text:0000000140023C72                 inc     dword ptr [rax]
				.text:0000000140023C74                 mov     rdi, [rsp+arg_38]
				.text:0000000140023C79                 jmp     loc_140018222
			
			.text:0000000140014797 loc_140014797:                          ; CODE XREF: PreOb_sub_14000D9A0+246↑j
			.text:0000000140014797                                         ; PreOb_sub_14000D9A0+5BE↑j ...
			.text:0000000140014797                 jmp     loc_14003AA42
			
			.text:000000014003AA42 loc_14003AA42:                          ; CODE XREF: IoHandler_sub_140014450:loc_140014797↑j
			.text:000000014003AA42                 mov     rbx, 1000000000000001h
			.text:000000014003AA4C                 mov     r11, 0EFFFFFFFFFFFFFFFh
			.text:000000014003AA56                 jmp     loc_14001822C
			
			.text:000000014001822C loc_14001822C:                          ; CODE XREF: IoHandler_sub_140014450+643F↓j
			.text:000000014001822C                                         ; sub_14003800C+2A4A↓j ...
			.text:000000014001822C                 jmp     loc_1400127C3
	
	.text:0000000140015DF4 loc_140015DF4:                          ; CODE XREF: sub_14003DD84+2B9B↓j
	.text:0000000140015DF4                 jmp     loc_14002306F
	
	.text:000000014002306F loc_14002306F:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015DF4↑j
	.text:000000014002306F                 mov     rax, cs:P
	.text:0000000140023076                 test    rax, rax
	.text:0000000140023079                 jz      loc_14001820E
	.text:000000014002307F                 jmp     loc_140042F2A
	
		.text:0000000140042F2A loc_140042F2A:                          ; CODE XREF: sub_14001D640+5A3F↑j
		.text:0000000140042F2A                 cmp     dword ptr [rax], 7D0h
		.text:0000000140042F30                 mov     rax, 2262427FC07A8175h
		.text:0000000140042F3A                 jnb     loc_140014797
		.text:0000000140042F40                 jmp     loc_140024123
		
			.text:0000000140024123 loc_140024123:                          ; CODE XREF: sub_14004185D+16E3↓j
			.text:0000000140024123                 mov     [rsp+arg_28], r10
			.text:0000000140024128                 mov     rcx, r13
			.text:000000014002412B                 mov     rbx, 4E5E0A72F0539783h
			.text:0000000140024135                 mov     r11, 0F08DE3B14D94C2BFh
			.text:000000014002413F                 mov     edx, 0E6F6B898h
			.text:0000000140024144                 mov     [rsp+arg_48], rdx
			.text:0000000140024149                 jmp     loc_140015E40
			
			.text:0000000140015E40 loc_140015E40:                          ; CODE XREF: PreOb_sub_14000D9A0+1FF↑j
			.text:0000000140015E40                                         ; sub_14001D640+6B09↓j
			.text:0000000140015E40                 jmp     loc_14001AE6E
			
			.text:000000014001AE6E loc_14001AE6E:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015E40↑j
			.text:000000014001AE6E                 mov     [rsp+arg_120], rcx
			.text:000000014001AE76                 imul    rcx, 7D0h
			.text:000000014001AE7D                 mul     rcx
			.text:000000014001AE80                 mov     rax, rcx
			.text:000000014001AE83                 sub     rax, rdx
			.text:000000014001AE86                 shr     rax, 1
			.text:000000014001AE89                 add     rax, rdx
			.text:000000014001AE8C                 shr     rax, 0Bh
			.text:000000014001AE90                 imul    rax, 0E1Bh
			.text:000000014001AE97                 sub     rcx, rax
			.text:000000014001AE9A                 imul    rdi, rcx, 0E1Bh
			.text:000000014001AEA1                 mov     rax, r11
			.text:000000014001AEA4                 mul     rdi
			.text:000000014001AEA7                 shr     rdx, 0Ch
			.text:000000014001AEAB                 imul    rax, rdx, 1107h
			.text:000000014001AEB2                 sub     rdi, rax
			.text:000000014001AEB5                 mov     rax, rbx
			.text:000000014001AEB8                 mul     rdi
			.text:000000014001AEBB                 mov     rax, rdi
			.text:000000014001AEBE                 sub     rax, rdx
			.text:000000014001AEC1                 shr     rax, 1
			.text:000000014001AEC4                 add     rax, rdx
			.text:000000014001AEC7                 shr     rax, 6
			.text:000000014001AECB                 imul    rcx, rax, 62h ; 'b'
			.text:000000014001AECF                 mov     rax, 0A0A0A0A0A0A0A0A1h
			.text:000000014001AED9                 mul     rdi
			.text:000000014001AEDC                 shr     rdx, 5
			.text:000000014001AEE0                 add     rcx, rdx
			.text:000000014001AEE3                 imul    rax, rcx, 66h ; 'f'
			.text:000000014001AEE7                 imul    rcx, rdi, 68h ; 'h'
			.text:000000014001AEEB                 sub     rcx, rax
			.text:000000014001AEEE                 movzx   eax, word ptr [rcx+rsi+29050h]
			.text:000000014001AEF6                 imul    rcx, rax, 7D0h
			.text:000000014001AEFD                 mov     rax, r9
			.text:000000014001AF00                 mul     rcx
			.text:000000014001AF03                 shr     rdx, 0Bh
			.text:000000014001AF07                 imul    rax, rdx, 0C9Dh
			.text:000000014001AF0E                 sub     rcx, rax
			.text:000000014001AF11                 imul    rdi, rcx, 0E35h
			.text:000000014001AF18                 mov     rax, r9
			.text:000000014001AF1B                 mul     rdi
			.text:000000014001AF1E                 shr     rdx, 0Bh
			.text:000000014001AF22                 imul    rax, rdx, 0C9Dh
			.text:000000014001AF29                 sub     rdi, rax
			.text:000000014001AF2C                 mov     rax, r12
			.text:000000014001AF2F                 mul     rdi
			.text:000000014001AF32                 shr     rdx, 7
			.text:000000014001AF36                 imul    rcx, rdx, 0F5h ; 'õ'
			.text:000000014001AF3D                 mov     rax, r14
			.text:000000014001AF40                 mul     rdi
			.text:000000014001AF43                 shr     rdx, 4
			.text:000000014001AF47                 add     rcx, rdx
			.text:000000014001AF4A                 imul    rax, rcx, 88h ; 'ˆ'
			.text:000000014001AF51                 lea     rcx, [rdi+rdi*8]
			.text:000000014001AF55                 shl     rcx, 4
			.text:000000014001AF59                 sub     rcx, rax
			.text:000000014001AF5C                 add     rcx, r15
			.text:000000014001AF5F                 mov     [rsp+arg_30], rcx
			.text:000000014001AF64                 mov     rdx, [rcx]
			.text:000000014001AF67                 mov     rcx, rdx
			.text:000000014001AF6A                 rol     rcx, 4
			.text:000000014001AF6E                 mov     rdi, [rsp+arg_28]
			.text:000000014001AF73                 shr     rdi, 20h
			.text:000000014001AF77                 mov     rax, rdi
			.text:000000014001AF7A                 and     rax, [rsp+arg_48]
			.text:000000014001AF7F                 mov     [rsp+arg_40], rax
			.text:000000014001AF84                 or      rdi, [rsp+arg_48]
			.text:000000014001AF89                 sub     rdi, rax
			.text:000000014001AF8C                 mov     rax, rcx
			.text:000000014001AF8F                 not     rax
			.text:000000014001AF92                 and     rax, 0FFFFFFFFFFFFFFFEh
			.text:000000014001AF96                 add     rax, 2
			.text:000000014001AF9A                 add     rax, rcx
			.text:000000014001AF9D                 jz      loc_14001474A
			.text:000000014001AFA3                 jmp     loc_140015F75
			
				.text:0000000140015F75 loc_140015F75:                          ; CODE XREF: IoHandler_sub_140014450+6B53↓j
				.text:0000000140015F75                 jmp     loc_14000F335
				
				.text:000000014000F335 loc_14000F335:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015F75↓j
				.text:000000014000F335                 mov     rcx, qword ptr [rsp+Length]
				.text:000000014000F33A                 and     rcx, r8
				.text:000000014000F33D                 mov     rax, 0E6F6B89800000000h
				.text:000000014000F347                 or      rcx, rax
				.text:000000014000F34A                 jmp     loc_14001437B
				
				.text:000000014001437B loc_14001437B:                          ; CODE XREF: PreOb_sub_14000D9A0+19AA↑j
				.text:000000014001437B                 mov     rax, [rsp+arg_40]
				.text:0000000140014380                 shl     rax, 20h
				.text:0000000140014384                 sub     rcx, rax
				.text:0000000140014387                 mov     rax, rdx
				.text:000000014001438A                 shl     rax, 20h
				.text:000000014001438E                 or      rcx, rax
				.text:0000000140014391                 mov     rax, rdx
				.text:0000000140014394                 and     rax, rdi
				.text:0000000140014397                 jmp     loc_14003BE0D
				
				.text:000000014003BE0D loc_14003BE0D:                          ; CODE XREF: ProcessCb_sub_140014060+337↑j
				.text:000000014003BE0D                 shl     rax, 20h
				.text:000000014003BE11                 cmp     rcx, rax
				.text:000000014003BE14                 jz      loc_140014740
				.text:000000014003BE1A                 jmp     loc_14000E6C7
				
					.text:000000014000E6C7 loc_14000E6C7:                          ; CODE XREF: sub_14003800C+3E0E↓j
					.text:000000014000E6C7                 mov     rdi, qword ptr [rsp+Length]
					.text:000000014000E6CC                 jmp     loc_140014A1F
					
					.text:0000000140014A1F loc_140014A1F:                          ; CODE XREF: PreOb_sub_14000D9A0+D2C↑j
					.text:0000000140014A1F                 mov     rcx, rdi
					.text:0000000140014A22                 not     rcx
					.text:0000000140014A25                 or      rcx, rdx
					.text:0000000140014A28                 mov     rax, rdx
					.text:0000000140014A2B                 not     rax
					.text:0000000140014A2E                 and     rax, rdi
					.text:0000000140014A31                 sub     rax, rcx
					.text:0000000140014A34                 sub     rax, rdi
					.text:0000000140014A37                 lea     rax, [rax-1]
					.text:0000000140014A3B                 jmp     loc_14000DB81
					
					.text:000000014000DB81 loc_14000DB81:                          ; CODE XREF: IoHandler_sub_140014450+5EB↓j
					.text:000000014000DB81                 lea     rax, [rax+rdx]
					.text:000000014000DB85                 mov     qword ptr [rsp+Length], rax
					.text:000000014000DB8A                 mov     rcx, [rsp+arg_120]
					.text:000000014000DB92                 inc     rcx
					.text:000000014000DB95                 mov     rax, 2262427FC07A8175h
					.text:000000014000DB9F                 jmp     loc_140015E40
	
	.text:000000014001820E loc_14001820E:                          ; CODE XREF: PreOb_sub_14000D9A0+DE↑j
	.text:000000014001820E                                         ; PreOb_sub_14000D9A0+2C8↑j ...
	.text:000000014001820E                 jmp     loc_14001D1AF

.text:0000000140015FF7 loc_140015FF7:                          ; CODE XREF: PreOb_sub_14000D9A0+48BC↑j
.text:0000000140015FF7                 jmp     loc_140018B31

.text:0000000140018B31 loc_140018B31:                          ; CODE XREF: IoHandler_sub_140014450:loc_140015FF7↑j
.text:0000000140018B31                 mov     rax, cs:P
.text:0000000140018B38                 test    rax, rax
.text:0000000140018B3B                 jz      loc_14001820E
.text:0000000140018B41                 jmp     loc_14003B1A2

	.text:000000014003B1A2 loc_14003B1A2:                          ; CODE XREF: IoHandler_sub_140014450+46F1↑j
	.text:000000014003B1A2                 cmp     dword ptr [rax], 7D0h
	.text:000000014003B1A8                 mov     rax, 2262427FC07A8175h
	.text:000000014003B1B2                 jnb     loc_140014797
	.text:000000014003B1B8                 jmp     loc_1400131F2
	
		.text:00000001400131F2 loc_1400131F2:                          ; CODE XREF: sub_14003800C+31AC↓j
		.text:00000001400131F2                 mov     qword ptr [rsp+Length], r10
		.text:00000001400131F7                 mov     rcx, r13
		.text:00000001400131FA                 mov     rbx, 4E5E0A72F0539783h
		.text:0000000140013204                 mov     r11, 0F08DE3B14D94C2BFh
		.text:000000014001320E                 mov     edx, 0F9736436h
		.text:0000000140013213                 mov     [rsp+arg_48], rdx
		.text:0000000140013218                 jmp     loc_140016043
		
		.text:0000000140016043 loc_140016043:                          ; CODE XREF: PreOb_sub_14000D9A0+5878↑j
		.text:0000000140016043                                         ; sub_14004185D+112B↓j
		.text:0000000140016043                 jmp     loc_140016797
		
		.text:0000000140016797 loc_140016797:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016043↑j
		.text:0000000140016797                 mov     [rsp+arg_128], rcx
		.text:000000014001679F                 imul    rcx, 7D0h
		.text:00000001400167A6                 mul     rcx
		.text:00000001400167A9                 jmp     loc_14003C3DB
		
		.text:000000014003C3DB loc_14003C3DB:                          ; CODE XREF: IoHandler_sub_140014450+2359↑j
		.text:000000014003C3DB                 mov     rax, rcx
		.text:000000014003C3DE                 sub     rax, rdx
		.text:000000014003C3E1                 shr     rax, 1
		.text:000000014003C3E4                 add     rax, rdx
		.text:000000014003C3E7                 shr     rax, 0Bh
		.text:000000014003C3EB                 jmp     loc_140018D2E
		
		.text:0000000140018D2E loc_140018D2E:                          ; CODE XREF: sub_14003800C+43DF↓j
		.text:0000000140018D2E                 imul    rax, 0E1Bh
		.text:0000000140018D35                 sub     rcx, rax
		.text:0000000140018D38                 imul    rdi, rcx, 0E1Bh
		.text:0000000140018D3F                 mov     rax, r11
		.text:0000000140018D42                 mul     rdi
		.text:0000000140018D45                 shr     rdx, 0Ch
		.text:0000000140018D49                 jmp     loc_14001757D
		
		.text:000000014001757D loc_14001757D:                          ; CODE XREF: IoHandler_sub_140014450+48F9↓j
		.text:000000014001757D                 imul    rax, rdx, 1107h
		.text:0000000140017584                 sub     rdi, rax
		.text:0000000140017587                 mov     rax, rbx
		.text:000000014001758A                 mul     rdi
		.text:000000014001758D                 jmp     loc_14003D188
		
		.text:000000014003D188 loc_14003D188:                          ; CODE XREF: IoHandler_sub_140014450+313D↑j
		.text:000000014003D188                 mov     rax, rdi
		.text:000000014003D18B                 sub     rax, rdx
		.text:000000014003D18E                 shr     rax, 1
		.text:000000014003D191                 add     rax, rdx
		.text:000000014003D194                 shr     rax, 6
		.text:000000014003D198                 imul    rcx, rax, 62h ; 'b'
		.text:000000014003D19C                 jmp     loc_140042507
		
		.text:0000000140042507 loc_140042507:                          ; CODE XREF: sub_14003800C+5190↑j
		.text:0000000140042507                 mov     rax, 0A0A0A0A0A0A0A0A1h
		.text:0000000140042511                 mul     rdi
		.text:0000000140042514                 shr     rdx, 5
		.text:0000000140042518                 add     rcx, rdx
		.text:000000014004251B                 imul    rax, rcx, 66h ; 'f'
		.text:000000014004251F                 imul    rcx, rdi, 68h ; 'h'
		.text:0000000140042523                 sub     rcx, rax
		.text:0000000140042526                 movzx   eax, word ptr [rcx+rsi+29050h]
		.text:000000014004252E                 imul    rcx, rax, 7D0h
		.text:0000000140042535                 jmp     loc_140022E89
		
		.text:0000000140022E89 loc_140022E89:                          ; CODE XREF: sub_14004185D+CD8↓j
		.text:0000000140022E89                 mov     rax, r9
		.text:0000000140022E8C                 mul     rcx
		.text:0000000140022E8F                 shr     rdx, 0Bh
		.text:0000000140022E93                 imul    rax, rdx, 0C9Dh
		.text:0000000140022E9A                 jmp     loc_14001B08F
		
		.text:000000014001B08F loc_14001B08F:                          ; CODE XREF: sub_14001D640+585A↓j
		.text:000000014001B08F                 sub     rcx, rax
		.text:000000014001B092                 imul    rdi, rcx, 0E35h
		.text:000000014001B099                 mov     rax, r9
		.text:000000014001B09C                 mul     rdi
		.text:000000014001B09F                 shr     rdx, 0Bh
		.text:000000014001B0A3                 imul    rax, rdx, 0C9Dh
		.text:000000014001B0AA                 jmp     loc_14003F87E
		
		.text:000000014003F87E loc_14003F87E:                          ; CODE XREF: IoHandler_sub_140014450+6C5A↑j
		.text:000000014003F87E                 sub     rdi, rax
		.text:000000014003F881                 mov     rax, r12
		.text:000000014003F884                 mul     rdi
		.text:000000014003F887                 shr     rdx, 7
		.text:000000014003F88B                 imul    rcx, rdx, 0F5h ; 'õ'
		.text:000000014003F892                 mov     rax, r14
		.text:000000014003F895                 mul     rdi
		.text:000000014003F898                 shr     rdx, 4
		.text:000000014003F89C                 add     rcx, rdx
		.text:000000014003F89F                 imul    rax, rcx, 88h ; 'ˆ'
		.text:000000014003F8A6                 jmp     loc_1400405D5
		
		.text:00000001400405D5 loc_1400405D5:                          ; CODE XREF: sub_14003DD84+1B22↑j
		.text:00000001400405D5                 lea     rcx, [rdi+rdi*8]
		.text:00000001400405D9                 shl     rcx, 4
		.text:00000001400405DD                 sub     rcx, rax
		.text:00000001400405E0                 add     rcx, r15
		.text:00000001400405E3                 jmp     loc_1400101F3
		
		.text:00000001400101F3 loc_1400101F3:                          ; CODE XREF: sub_14003DD84+285F↓j
		.text:00000001400101F3                 mov     [rsp+ByteOffset], rcx
		.text:00000001400101F8                 mov     rdx, [rcx]
		.text:00000001400101FB                 mov     rcx, rdx
		.text:00000001400101FE                 rol     rcx, 4
		.text:0000000140010202                 mov     rdi, qword ptr [rsp+Length]
		.text:0000000140010207                 shr     rdi, 20h
		.text:000000014001020B                 mov     rax, rdi
		.text:000000014001020E                 and     rax, [rsp+arg_48]
		.text:0000000140010213                 jmp     loc_14003B8F6
		
		.text:000000014003B8F6 loc_14003B8F6:                          ; CODE XREF: PreOb_sub_14000D9A0+2873↑j
		.text:000000014003B8F6                 mov     [rsp+arg_40], rax
		.text:000000014003B8FB                 or      rdi, [rsp+arg_48]
		.text:000000014003B900                 sub     rdi, rax
		.text:000000014003B903                 mov     rax, rcx
		.text:000000014003B906                 not     rax
		.text:000000014003B909                 and     rax, 0FFFFFFFFFFFFFFFEh
		.text:000000014003B90D                 add     rax, 2
		.text:000000014003B911                 add     rax, rcx
		.text:000000014003B914                 jz      loc_14001474A
		.text:000000014003B91A                 jmp     loc_140016178
		
			.text:0000000140016178 loc_140016178:                          ; CODE XREF: sub_14003800C+390E↓j
			.text:0000000140016178                 jmp     loc_14000D9F6
			
			.text:000000014000D9F6 loc_14000D9F6:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016178↓j
			.text:000000014000D9F6                 mov     rcx, qword ptr [rsp+Length]
			.text:000000014000D9FB                 and     rcx, r8
			.text:000000014000D9FE                 mov     rax, 0F973643600000000h
			.text:000000014000DA08                 or      rcx, rax
			.text:000000014000DA0B                 mov     rax, [rsp+arg_40]
			.text:000000014000DA10                 shl     rax, 20h
			.text:000000014000DA14                 sub     rcx, rax
			.text:000000014000DA17                 mov     rax, rdx
			.text:000000014000DA1A                 shl     rax, 20h
			.text:000000014000DA1E                 or      rcx, rax
			.text:000000014000DA21                 mov     rax, rdx
			.text:000000014000DA24                 and     rax, rdi
			.text:000000014000DA27                 shl     rax, 20h
			.text:000000014000DA2B                 cmp     rcx, rax
			.text:000000014000DA2E                 jz      loc_140014740
			.text:000000014000DA34                 jmp     loc_140042949
			
				.text:0000000140042949 loc_140042949:                          ; CODE XREF: PreOb_sub_14000D9A0+94↑j
				.text:0000000140042949                 mov     rdi, [rsp+arg_28]
				.text:000000014004294E                 mov     rcx, rdi
				.text:0000000140042951                 not     rcx
				.text:0000000140042954                 or      rcx, rdx
				.text:0000000140042957                 mov     rax, rdx
				.text:000000014004295A                 not     rax
				.text:000000014004295D                 and     rax, rdi
				.text:0000000140042960                 sub     rax, rcx
				.text:0000000140042963                 sub     rax, rdi
				.text:0000000140042966                 lea     rax, [rax-1]
				.text:000000014004296A                 lea     rax, [rax+rdx]
				.text:000000014004296E                 mov     [rsp+arg_28], rax
				.text:0000000140042973                 mov     rcx, [rsp+arg_128]
				.text:000000014004297B                 inc     rcx
				.text:000000014004297E                 mov     rax, 2262427FC07A8175h
				.text:0000000140042988                 jmp     loc_140016043

.text:000000014001820E loc_14001820E:                          ; CODE XREF: PreOb_sub_14000D9A0+DE↑j
.text:000000014001820E                                         ; PreOb_sub_14000D9A0+2C8↑j ...
.text:000000014001820E                 jmp     loc_14001D1AF

.text:000000014001D1AF loc_14001D1AF:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001820E↑j
.text:000000014001D1AF                 mov     r11, 0EFFFFFFFFFFFFFFFh
.text:000000014001D1B9                 mov     rbx, 1000000000000001h
.text:000000014001D1C3                 jmp     loc_140018222

.text:0000000140018222 loc_140018222:                          ; CODE XREF: IoHandler_sub_140014450+8D73↓j
.text:0000000140018222                                         ; sub_14001D640+6639↓j
.text:0000000140018222                 jmp     loc_1400425BB

.text:00000001400425BB loc_1400425BB:                          ; CODE XREF: IoHandler_sub_140014450:loc_140018222↑j
.text:00000001400425BB                 mov     rax, 2262427FC07A8175h
.text:00000001400425C5                 jmp     loc_14001822C

.text:000000014001822C loc_14001822C:                          ; CODE XREF: IoHandler_sub_140014450+643F↓j
.text:000000014001822C                                         ; sub_14003800C+2A4A↓j ...
.text:000000014001822C                 jmp     loc_1400127C3

.text:00000001400127C3 loc_1400127C3:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001822C↓j
.text:00000001400127C3                 mov     rcx, [rsp+arg_90]
.text:00000001400127CB                 cmp     byte ptr [rcx], 0Eh
.text:00000001400127CE
.text:00000001400127CE loc_1400127CE:                          ; CODE XREF: sub_14001D640+4448↓j
.text:00000001400127CE                 jnz     loc_14001D5E9
.text:00000001400127D4                 jmp     sub_1400417D7   ; [FUNCTION] sub_1400417D7

	.text:00000001400417D7 sub_1400417D7   proc near               ; CODE XREF: PreOb_sub_14000D9A0+4E34↑j
	.text:00000001400417D7
	.text:00000001400417D7 arg_40          = qword ptr  48h
	.text:00000001400417D7 arg_50          = dword ptr  58h
	.text:00000001400417D7 arg_54          = dword ptr  5Ch
	.text:00000001400417D7 arg_74          = dword ptr  7Ch
	.text:00000001400417D7
	.text:00000001400417D7                 mov     ecx, 0E0000001h
	.text:00000001400417DC                 mov     [rsp+arg_50], ecx
	.text:00000001400417E0                 mov     [rsp+arg_54], ecx
	.text:00000001400417E4                 mov     [rdi+38h], r13
	.text:00000001400417E8                 mov     rdx, [rdi+0B8h]
	.text:00000001400417EF                 mov     [rsp+arg_40], rdx
	.text:00000001400417F4                 mov     edx, [rdx+10h]
	.text:00000001400417F7                 mov     [rsp+arg_74], edx
	.text:00000001400417FB                 cmp     edx, 14h
	.text:00000001400417FE                 jnb     loc_14001847F
	.text:0000000140041804                 jmp     loc_1400393DA
	.text:0000000140041804 sub_1400417D7   endp

.text:000000014001D5E9 loc_14001D5E9:                          ; CODE XREF: PreOb_sub_14000D9A0:loc_1400127CE↑j
.text:000000014001D5E9                                         ; IoHandler_sub_140014450+73B1↑j ...
.text:000000014001D5E9                 jmp     short loc_14001D601

.text:000000014001D601 loc_14001D601:                          ; CODE XREF: PreOb_sub_14000D9A0+643B↑j
.text:000000014001D601                                         ; IoHandler_sub_140014450:loc_14001D5E9↑j
.text:000000014001D601                 jmp     loc_14001A24A

.text:000000014001A24A loc_14001A24A:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001D601↓j
.text:000000014001A24A                 mov     [rdi+30h], r13d
.text:000000014001A24E                 xor     edx, edx        ; PriorityBoost
.text:000000014001A250                 mov     rcx, rdi        ; Irp
.text:000000014001A253                 jmp     loc_14001D60A

.text:000000014001D60A loc_14001D60A:                          ; CODE XREF: IoHandler_sub_140014450+5E03↑j
.text:000000014001D60A                 call    cs:IofCompleteRequest
.text:000000014001D610                 nop
.text:000000014001D611                 jmp     loc_14003E32F

.text:000000014003E32F loc_14003E32F:                          ; CODE XREF: IoHandler_sub_140014450+91C1↑j
.text:000000014003E32F                 mov     eax, r13d
.text:000000014003E332                 mov     rcx, [rsp+arg_248]
.text:000000014003E33A                 xor     rcx, rsp
.text:000000014003E33D                 jmp     loc_14001D61E

.text:000000014001D61E loc_14001D61E:                          ; CODE XREF: sub_14003DD84+5B9↓j
.text:000000014001D61E                 call    sub_140026020   ; [stub] jmp     loc_14001D71F
.text:000000014001D623                 nop
.text:000000014001D624                 jmp     loc_140039E74

.text:000000014001D61E loc_14001D61E:                          ; CODE XREF: sub_14003DD84+5B9↓j
.text:000000014001D61E                 call    sub_140026020
.text:000000014001D623                 nop
.text:000000014001D624                 jmp     loc_140039E74
