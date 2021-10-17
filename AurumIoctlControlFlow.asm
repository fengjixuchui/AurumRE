.text:0000000140014450                               ; =============== S U B R O U T I N E =======================================
.text:0000000140014450
.text:0000000140014450                               ; Attributes: thunk
.text:0000000140014450
.text:0000000140014450                               IoHandler_sub_140014450 proc far        ; DATA XREF: .rdata:00000001400280F8↓o
.text:0000000140014450                                                                       ; .pdata:0000000140034018↓o ...
.text:0000000140014450
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
.text:0000000140025190                 jmp     loc_140014580

	.text:0000000140014580 loc_140014580:                          ; CODE XREF: sub_14001D640+7B50↓j
	.text:0000000140014580                 jz      loc_1400171E1
	.text:0000000140014586                 jmp     loc_14001282E
	
		.text:000000014001282E loc_14001282E:                          ; CODE XREF: IoHandler_sub_140014450+136↓j
		.text:000000014001282E                 sub     ecx, 0Fh
		.text:0000000140012831                 jz      loc_140016F9E
		.text:0000000140012837                 jmp     loc_140014CC3
		
			.text:0000000140014CC3 loc_140014CC3:                          ; CODE XREF: PreOb_sub_14000D9A0+4E97↑j
			.text:0000000140014CC3                 sub     ecx, 1
			.text:0000000140014CC6                 jz      loc_140016D33
			.text:0000000140014CCC                 jmp     loc_140041892
			
				.text:0000000140041892 loc_140041892:                          ; CODE XREF: IoHandler_sub_140014450+87C↑j
				.text:0000000140041892                 sub     ecx, 1
				.text:0000000140041895                 jz      loc_140016AF3
				.text:000000014004189B                 jmp     loc_140038116
				
					.text:0000000140038116 loc_140038116:                          ; CODE XREF: sub_14004185D+3E↓j
					.text:0000000140038116                 sub     ecx, 1
					.text:0000000140038119                 jz      loc_1400168B0
					.text:000000014003811F                 jmp     loc_14000EA95
					
						.text:000000014000EA95 loc_14000EA95:                          ; CODE XREF: sub_14003800C+113↓j
						.text:000000014000EA95                 sub     ecx, 1
						.text:000000014000EA98                 jz      loc_140016675
						.text:000000014000EA9E                 jmp     loc_140013157
						
							.text:0000000140013157 loc_140013157:                          ; CODE XREF: PreOb_sub_14000D9A0+10FE↑j
							.text:0000000140013157                 cmp     ecx, 1
							.text:000000014001315A                 jnz     loc_1400181CE
							.text:0000000140013160                 jmp     loc_140017C30
							
								.text:0000000140017C30 loc_140017C30:                          ; CODE XREF: PreOb_sub_14000D9A0+57C0↑j
								.text:0000000140017C30                 mov     rax, cs:P
								.text:0000000140017C37                 mov     r10, 0AA2D145923EC7F30h
								.text:0000000140017C41                 lea     rsi, cs:140000000h
								.text:0000000140017C48                 mov     r9, 0A25E5851D18A813Bh
								.text:0000000140017C52                 mov     r12, 85BF37612CEE3C9Bh
								.text:0000000140017C5C                 mov     r14, 0F0F0F0F0F0F0F0F1h
								.text:0000000140017C66                 lea     r15, unk_14002B760
								.text:0000000140017C6D                 mov     r8, 0FFFFFFFF00000000h
								.text:0000000140017C77                 test    rax, rax
								.text:0000000140017C7A                 jz      loc_14001820E
								.text:0000000140017C80                 jmp     loc_140040DEC
								
									.text:0000000140040DEC loc_140040DEC:                          ; CODE XREF: IoHandler_sub_140014450+3830↑j
									.text:0000000140040DEC                 cmp     dword ptr [rax], 7D0h
									.text:0000000140040DF2                 mov     rax, 2262427FC07A8175h
									.text:0000000140040DFC                 jnb     loc_140014797
									.text:0000000140040E02                 jmp     loc_140043022
									
										.text:0000000140043022 loc_140043022:                          ; CODE XREF: sub_140040C0A+1F8↑j
										.text:0000000140043022                 mov     [rsp+arg_28], r10
										.text:0000000140043027                 mov     rcx, r13
										.text:000000014004302A                 mov     rbx, 4E5E0A72F0539783h
										.text:0000000140043034                 mov     r11, 0F08DE3B14D94C2BFh
										.text:000000014004303E                 jmp     loc_1400164BC
										
										.text:00000001400164BC loc_1400164BC:                          ; CODE XREF: sub_14003DD84+141E↓j
										.text:00000001400164BC                                         ; sub_14004185D+17E1↓j
										.text:00000001400164BC                 jmp     loc_1400129E6
										
										.text:00000001400129E6 loc_1400129E6:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400164BC↓j
										.text:00000001400129E6                 mov     [rsp+arg_138], rcx
										.text:00000001400129EE                 imul    rcx, 7D0h
										.text:00000001400129F5                 mul     rcx
										.text:00000001400129F8                 jmp     loc_140024DE7
										
										.text:0000000140024DE7 loc_140024DE7:                          ; CODE XREF: PreOb_sub_14000D9A0+5058↑j
										.text:0000000140024DE7                 mov     rax, rcx
										.text:0000000140024DEA                 sub     rax, rdx
										.text:0000000140024DED                 shr     rax, 1
										.text:0000000140024DF0                 add     rax, rdx
										.text:0000000140024DF3                 shr     rax, 0Bh
										.text:0000000140024DF7                 imul    rax, 0E1Bh
										.text:0000000140024DFE                 sub     rcx, rax
										.text:0000000140024E01                 imul    rdi, rcx, 0E1Bh
										.text:0000000140024E08                 mov     rax, r11
										.text:0000000140024E0B                 mul     rdi
										.text:0000000140024E0E                 jmp     loc_1400168F7
										
										.text:00000001400168F7 loc_1400168F7:                          ; CODE XREF: sub_14001D640+77CE↓j
										.text:00000001400168F7                 shr     rdx, 0Ch
										.text:00000001400168FB                 jmp     loc_1400414B7
										
										.text:00000001400414B7 loc_1400414B7:                          ; CODE XREF: IoHandler_sub_140014450+24AB↑j
										.text:00000001400414B7                 imul    rax, rdx, 1107h
										.text:00000001400414BE                 sub     rdi, rax
										.text:00000001400414C1                 mov     rax, rbx
										.text:00000001400414C4                 mul     rdi
										.text:00000001400414C7                 mov     rax, rdi
										.text:00000001400414CA                 sub     rax, rdx
										.text:00000001400414CD                 shr     rax, 1
										.text:00000001400414D0                 add     rax, rdx
										.text:00000001400414D3                 jmp     loc_14003DA8D
										
										.text:000000014003DA8D loc_14003DA8D:                          ; CODE XREF: sub_140040C0A+8C9↓j
										.text:000000014003DA8D                 shr     rax, 6
										.text:000000014003DA91                 imul    rcx, rax, 62h ; 'b'
										.text:000000014003DA95                 mov     rax, 0A0A0A0A0A0A0A0A1h
										.text:000000014003DA9F                 mul     rdi
										.text:000000014003DAA2                 shr     rdx, 5
										.text:000000014003DAA6                 add     rcx, rdx
										.text:000000014003DAA9                 imul    rax, rcx, 66h ; 'f'
										.text:000000014003DAAD                 imul    rcx, rdi, 68h ; 'h'
										.text:000000014003DAB1                 jmp     loc_14004177F
										
										.text:000000014004177F ; ---------------------------------------------------------------------------
										.text:000000014004177F
										.text:000000014004177F loc_14004177F:                          ; CODE XREF: sub_14003800C+5AA5↑j
										.text:000000014004177F                 sub     rcx, rax
										.text:0000000140041782                 movzx   eax, word ptr [rcx+rsi+29050h]
										.text:000000014004178A                 imul    rcx, rax, 7D0h
										.text:0000000140041791                 mov     rax, r9
										.text:0000000140041794                 mul     rcx
										.text:0000000140041797                 shr     rdx, 0Bh
										.text:000000014004179B                 imul    rax, rdx, 0C9Dh
										.text:00000001400417A2                 sub     rcx, rax
										.text:00000001400417A5                 imul    rdi, rcx, 0E35h
										.text:00000001400417AC                 jmp     loc_14000DF9D
										.text:00000001400417AC ; END OF FUNCTION CHUNK FOR sub_14003800C
										
										.text:000000014000DF9D loc_14000DF9D:                          ; CODE XREF: sub_14003800C+97A0↓j
										.text:000000014000DF9D                 mov     rax, r9
										.text:000000014000DFA0                 mul     rdi
										.text:000000014000DFA3                 shr     rdx, 0Bh
										.text:000000014000DFA7                 imul    rax, rdx, 0C9Dh
										.text:000000014000DFAE                 sub     rdi, rax
										.text:000000014000DFB1                 mov     rax, r12
										.text:000000014000DFB4                 mul     rdi
										.text:000000014000DFB7                 shr     rdx, 7
										.text:000000014000DFBB                 imul    rcx, rdx, 0F5h ; 'õ'
										.text:000000014000DFC2                 jmp     loc_14000EB3F
										
										.text:000000014000EB3F loc_14000EB3F:                          ; CODE XREF: PreOb_sub_14000D9A0+622↑j
										.text:000000014000EB3F                 mov     rax, r14
										.text:000000014000EB42                 mul     rdi
										.text:000000014000EB45                 shr     rdx, 4
										.text:000000014000EB49                 add     rcx, rdx
										.text:000000014000EB4C                 imul    rax, rcx, 88h ; 'ˆ'
										.text:000000014000EB53                 lea     rcx, [rdi+rdi*8]
										.text:000000014000EB57                 shl     rcx, 4
										.text:000000014000EB5B                 sub     rcx, rax
										.text:000000014000EB5E                 add     rcx, r15
										.text:000000014000EB61                 jmp     loc_140039DF1
										
										.text:0000000140039DF1 loc_140039DF1:                          ; CODE XREF: PreOb_sub_14000D9A0+11C1↑j
										.text:0000000140039DF1                 mov     [rsp+arg_30], rcx
										.text:0000000140039DF6                 mov     rdx, [rcx]
										.text:0000000140039DF9                 mov     rcx, rdx
										.text:0000000140039DFC                 rol     rcx, 4
										.text:0000000140039E00                 mov     rdi, [rsp+arg_28]
										.text:0000000140039E05                 shr     rdi, 20h
										.text:0000000140039E09                 mov     rax, rdi
										.text:0000000140039E0C                 and     eax, 5E7F69B8h
										.text:0000000140039E11                 mov     [rsp+arg_40], rax
										.text:0000000140039E16                 jmp     loc_14003C3F0
										
										.text:000000014003C3F0 loc_14003C3F0:                          ; CODE XREF: sub_14003800C+1E0A↑j
										.text:000000014003C3F0                 or      rdi, 5E7F69B8h
										.text:000000014003C3F7                 sub     rdi, rax
										.text:000000014003C3FA                 mov     rax, rcx
										.text:000000014003C3FD                 not     rax
										.text:000000014003C400                 and     rax, 0FFFFFFFFFFFFFFFEh
										.text:000000014003C404                 add     rax, 2
										.text:000000014003C408                 add     rax, rcx
										.text:000000014003C40B                 jz      loc_14001474A
										.text:000000014003C411                 jmp     loc_1400165F3
										
											.text:00000001400165F3 loc_1400165F3:                          ; CODE XREF: sub_14003800C+4405↓j
											.text:00000001400165F3                 jmp     loc_14003AC6F
											
											.text:000000014003AC6F loc_14003AC6F:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400165F3↑j
											.text:000000014003AC6F                 mov     rcx, [rsp+arg_28]
											.text:000000014003AC74                 and     rcx, r8
											.text:000000014003AC77                 jmp     loc_140017146
											
											.text:0000000140017146 loc_140017146:                          ; CODE XREF: sub_14003800C+2C6B↓j
											.text:0000000140017146                 mov     rax, 5E7F69B800000000h
											.text:0000000140017150                 or      rcx, rax
											.text:0000000140017153                 jmp     loc_140012AAC
											
											.text:0000000140012AAC loc_140012AAC:                          ; CODE XREF: IoHandler_sub_140014450+2D03↓j
											.text:0000000140012AAC                 mov     rax, [rsp+arg_40]
											.text:0000000140012AB1                 shl     rax, 20h
											.text:0000000140012AB5                 sub     rcx, rax
											.text:0000000140012AB8                 mov     rax, rdx
											.text:0000000140012ABB                 shl     rax, 20h
											.text:0000000140012ABF                 or      rcx, rax
											.text:0000000140012AC2                 mov     rax, rdx
											.text:0000000140012AC5                 and     rax, rdi
											.text:0000000140012AC8                 shl     rax, 20h
											.text:0000000140012ACC                 cmp     rcx, rax
											.text:0000000140012ACF                 jmp     loc_14001EFE5
											
											.text:000000014001EFE5 loc_14001EFE5:                          ; CODE XREF: PreOb_sub_14000D9A0+512F↑j
											.text:000000014001EFE5                 jz      loc_140014740
											.text:000000014001EFEB                 jmp     loc_14001434D
											
												.text:000000014001434D loc_14001434D:                          ; CODE XREF: sub_14001D640+19AB↓j
												.text:000000014001434D                 mov     rcx, rdx
												.text:0000000140014350                 not     rcx
												.text:0000000140014353                 mov     rdi, [rsp+arg_28]
												.text:0000000140014358                 and     rcx, rdi
												.text:000000014001435B                 mov     rax, rdi
												.text:000000014001435E                 not     rax
												.text:0000000140014361                 jmp     loc_14003F177
												
												.text:000000014003F177 loc_14003F177:                          ; CODE XREF: ProcessCb_sub_140014060+301↑j
												.text:000000014003F177                 or      rax, rdx
												.text:000000014003F17A                 sub     rcx, rax
												.text:000000014003F17D                 sub     rcx, rdi
												.text:000000014003F180                 lea     rax, [rdx-1]
												.text:000000014003F184                 lea     rax, [rax+rcx]
												.text:000000014003F188                 mov     [rsp+arg_28], rax
												.text:000000014003F18D                 mov     rcx, [rsp+arg_138]
												.text:000000014003F195                 inc     rcx
												.text:000000014003F198                 mov     rax, 2262427FC07A8175h
												.text:000000014003F1A2                 jmp     loc_1400164BC
						
						.text:0000000140016675 loc_140016675:                          ; CODE XREF: PreOb_sub_14000D9A0+10F8↑j
						.text:0000000140016675                 jmp     loc_14003E495
						
						.text:000000014003E495 loc_14003E495:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016675↑j
						.text:000000014003E495                 mov     rax, cs:P
						.text:000000014003E49C                 mov     r10, 0AA2D145923EC7F30h
						.text:000000014003E4A6                 lea     rsi, cs:140000000h
						.text:000000014003E4AD                 mov     r9, 0A25E5851D18A813Bh
						.text:000000014003E4B7                 mov     r12, 85BF37612CEE3C9Bh
						.text:000000014003E4C1                 mov     r14, 0F0F0F0F0F0F0F0F1h
						.text:000000014003E4CB                 lea     r15, unk_14002B760
						.text:000000014003E4D2                 mov     r8, 0FFFFFFFF00000000h
						.text:000000014003E4DC                 test    rax, rax
						.text:000000014003E4DF                 jz      loc_14001820E
						.text:000000014003E4E5                 jmp     loc_1400416A7
						
							.text:00000001400416A7 loc_1400416A7:                          ; CODE XREF: sub_14003DD84+761↑j
							.text:00000001400416A7                 cmp     dword ptr [rax], 7D0h
							.text:00000001400416AD                 mov     rax, 2262427FC07A8175h
							.text:00000001400416B7                 jnb     loc_140014797
							.text:00000001400416BD                 jmp     loc_14003DD13
							
								.text:000000014003DD13 ; ---------------------------------------------------------------------------
								.text:000000014003DD13 ; START OF FUNCTION CHUNK FOR sub_140040C0A
								.text:000000014003DD13
								.text:000000014003DD13 loc_14003DD13:                          ; CODE XREF: sub_140040C0A+AB3↓j
								.text:000000014003DD13                 mov     [rsp+arg_28], r10
								.text:000000014003DD18                 mov     rcx, r13
								.text:000000014003DD1B                 mov     rbx, 4E5E0A72F0539783h
								.text:000000014003DD25                 mov     r11, 0F08DE3B14D94C2BFh
								.text:000000014003DD2F                 jmp     loc_1400166F7
								.text:000000014003DD34 ; ---------------------------------------------------------------------------
								
								.text:00000001400166F7 loc_1400166F7:                          ; CODE XREF: sub_14003DC45+15↓j
								.text:00000001400166F7                                         ; sub_140040C0A-2EDB↓j
								.text:00000001400166F7                 jmp     loc_14004115F
								
								.text:000000014004115F loc_14004115F:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400166F7↑j
								.text:000000014004115F                 mov     [rsp+arg_140], rcx
								.text:0000000140041167                 imul    rcx, 7D0h
								.text:000000014004116E                 mul     rcx
								.text:0000000140041171                 mov     rax, rcx
								.text:0000000140041174                 sub     rax, rdx
								.text:0000000140041177                 shr     rax, 1
								.text:000000014004117A                 add     rax, rdx
								.text:000000014004117D                 shr     rax, 0Bh
								.text:0000000140041181                 imul    rax, 0E1Bh
								.text:0000000140041188                 jmp     loc_14003A21E
								
								.text:000000014003A21E loc_14003A21E:                          ; CODE XREF: sub_140040C0A+57E↓j
								.text:000000014003A21E                 sub     rcx, rax
								.text:000000014003A221                 imul    rdi, rcx, 0E1Bh
								.text:000000014003A228                 mov     rax, r11
								.text:000000014003A22B                 mul     rdi
								.text:000000014003A22E                 shr     rdx, 0Ch
								.text:000000014003A232                 imul    rax, rdx, 1107h
								.text:000000014003A239                 sub     rdi, rax
								.text:000000014003A23C                 mov     rax, rbx
								.text:000000014003A23F                 mul     rdi
								.text:000000014003A242                 mov     rax, rdi
								.text:000000014003A245                 jmp     loc_14001ECFF
								
								.text:000000014001ECFF loc_14001ECFF:                          ; CODE XREF: sub_14003800C+2239↓j
								.text:000000014001ECFF                 sub     rax, rdx
								.text:000000014001ED02                 jmp     loc_140016B96
								
								.text:0000000140016B96 loc_140016B96:                          ; CODE XREF: sub_14001D640+16C2↓j
								.text:0000000140016B96                 shr     rax, 1
								.text:0000000140016B99                 add     rax, rdx
								.text:0000000140016B9C                 shr     rax, 6
								.text:0000000140016BA0                 imul    rcx, rax, 62h ; 'b'
								.text:0000000140016BA4                 mov     rax, 0A0A0A0A0A0A0A0A1h
								.text:0000000140016BAE                 mul     rdi
								.text:0000000140016BB1                 shr     rdx, 5
								.text:0000000140016BB5                 add     rcx, rdx
								.text:0000000140016BB8                 jmp     loc_14001CBCC
								
								.text:000000014001CBCC loc_14001CBCC:                          ; CODE XREF: IoHandler_sub_140014450+2768↑j
								.text:000000014001CBCC                 imul    rax, rcx, 66h ; 'f'
								.text:000000014001CBD0                 imul    rcx, rdi, 68h ; 'h'
								.text:000000014001CBD4                 sub     rcx, rax
								.text:000000014001CBD7                 movzx   eax, word ptr [rcx+rsi+29050h]
								.text:000000014001CBDF                 jmp     loc_140042D07
								
								.text:0000000140042D07 loc_140042D07:                          ; CODE XREF: IoHandler_sub_140014450+878F↑j
								.text:0000000140042D07                 imul    rcx, rax, 7D0h
								.text:0000000140042D0E                 mov     rax, r9
								.text:0000000140042D11                 mul     rcx
								.text:0000000140042D14                 jmp     loc_1400107E2
								
								.text:00000001400107E2 loc_1400107E2:                          ; CODE XREF: sub_14004185D+14B7↓j
								.text:00000001400107E2                 shr     rdx, 0Bh
								.text:00000001400107E6                 imul    rax, rdx, 0C9Dh
								.text:00000001400107ED                 sub     rcx, rax
								.text:00000001400107F0                 imul    rdi, rcx, 0E35h
								.text:00000001400107F7                 mov     rax, r9
								.text:00000001400107FA                 jmp     loc_140018BC4
								
								.text:0000000140018BC4 loc_140018BC4:                          ; CODE XREF: PreOb_sub_14000D9A0+2E5A↑j
								.text:0000000140018BC4                 mul     rdi
								.text:0000000140018BC7                 shr     rdx, 0Bh
								.text:0000000140018BCB                 imul    rax, rdx, 0C9Dh
								.text:0000000140018BD2                 sub     rdi, rax
								.text:0000000140018BD5                 mov     rax, r12
								.text:0000000140018BD8                 mul     rdi
								.text:0000000140018BDB                 shr     rdx, 7
								.text:0000000140018BDF                 imul    rcx, rdx, 0F5h ; 'õ'
								.text:0000000140018BE6                 jmp     loc_140015CC2
								
								.text:0000000140015CC2 loc_140015CC2:                          ; CODE XREF: IoHandler_sub_140014450+4796↓j
								.text:0000000140015CC2                 mov     rax, r14
								.text:0000000140015CC5                 mul     rdi
								.text:0000000140015CC8                 shr     rdx, 4
								.text:0000000140015CCC                 add     rcx, rdx
								.text:0000000140015CCF                 imul    rax, rcx, 88h ; 'ˆ'
								.text:0000000140015CD6                 lea     rcx, [rdi+rdi*8]
								.text:0000000140015CDA                 shl     rcx, 4
								.text:0000000140015CDE                 sub     rcx, rax
								.text:0000000140015CE1                 jmp     loc_14003CFF3
								
								.text:000000014003CFF3 loc_14003CFF3:                          ; CODE XREF: IoHandler_sub_140014450+1891↑j
								.text:000000014003CFF3                 add     rcx, r15
								.text:000000014003CFF6                 mov     [rsp+arg_30], rcx
								.text:000000014003CFFB                 mov     rdx, [rcx]
								.text:000000014003CFFE                 mov     rcx, rdx
								.text:000000014003D001                 rol     rcx, 4
								.text:000000014003D005                 mov     rdi, [rsp+arg_28]
								.text:000000014003D00A                 shr     rdi, 20h
								.text:000000014003D00E                 mov     rax, rdi
								.text:000000014003D011                 jmp     loc_1400444D9
								
								.text:00000001400444D9 ; ---------------------------------------------------------------------------
								.text:00000001400444D9 ; START OF FUNCTION CHUNK FOR sub_14003800C
								.text:00000001400444D9
								.text:00000001400444D9 loc_1400444D9:                          ; CODE XREF: sub_14003800C+5005↑j
								.text:00000001400444D9                 and     eax, 2D93783h
								.text:00000001400444DE                 mov     [rsp+arg_40], rax
								.text:00000001400444E3                 or      rdi, 2D93783h
								.text:00000001400444EA                 sub     rdi, rax
								.text:00000001400444ED                 mov     rax, rcx
								.text:00000001400444F0                 not     rax
								.text:00000001400444F3                 and     rax, 0FFFFFFFFFFFFFFFEh
								.text:00000001400444F7                 add     rax, 2
								.text:00000001400444FB                 add     rax, rcx
								.text:00000001400444FE                 jz      loc_14001474A
								.text:0000000140044504                 jmp     loc_14001682E
								.text:0000000140044504 ; END OF FUNCTION CHUNK FOR sub_14003800C
								
									.text:000000014001682E loc_14001682E:                          ; CODE XREF: sub_14003800C+C4F8↓j
									.text:000000014001682E                 jmp     loc_1400193DA
									
									.text:00000001400193DA loc_1400193DA:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001682E↑j
									.text:00000001400193DA                 mov     rcx, [rsp+arg_28]
									.text:00000001400193DF                 and     rcx, r8
									.text:00000001400193E2                 mov     rax, 2D9378300000000h
									.text:00000001400193EC                 or      rcx, rax
									.text:00000001400193EF                 jmp     loc_140013A8E
									
									.text:0000000140013A8E loc_140013A8E:                          ; CODE XREF: IoHandler_sub_140014450+4F9F↓j
									.text:0000000140013A8E                 mov     rax, [rsp+arg_40]
									.text:0000000140013A93                 shl     rax, 20h
									.text:0000000140013A97                 sub     rcx, rax
									.text:0000000140013A9A                 mov     rax, rdx
									.text:0000000140013A9D                 shl     rax, 20h
									.text:0000000140013AA1                 or      rcx, rax
									.text:0000000140013AA4                 mov     rax, rdx
									.text:0000000140013AA7                 jmp     loc_1400131B1
									
									.text:00000001400131B1 loc_1400131B1:                          ; CODE XREF: PreOb_sub_14000D9A0+6107↓j
									.text:00000001400131B1                 and     rax, rdi
									.text:00000001400131B4                 shl     rax, 20h
									.text:00000001400131B8                 cmp     rcx, rax
									.text:00000001400131BB                 jz      loc_140014740
									.text:00000001400131C1                 jmp     loc_14002448B
									
										.text:000000014002448B loc_14002448B:                          ; CODE XREF: PreOb_sub_14000D9A0+5821↑j
										.text:000000014002448B                 mov     rcx, rdx
										.text:000000014002448E                 not     rcx
										.text:0000000140024491                 mov     rdi, [rsp+arg_28]
										.text:0000000140024496                 jmp     loc_14001B5E7
										
										.text:000000014001B5E7 loc_14001B5E7:                          ; CODE XREF: sub_14001D640+6E56↓j
										.text:000000014001B5E7                 and     rcx, rdi
										.text:000000014001B5EA                 mov     rax, rdi
										.text:000000014001B5ED                 not     rax
										.text:000000014001B5F0                 or      rax, rdx
										.text:000000014001B5F3                 sub     rcx, rax
										.text:000000014001B5F6                 sub     rcx, rdi
										.text:000000014001B5F9                 lea     rax, [rdx-1]
										.text:000000014001B5FD                 lea     rax, [rax+rcx]
										.text:000000014001B601                 mov     [rsp+arg_28], rax
										.text:000000014001B606                 jmp     sub_14003DC45
					
					.text:00000001400168B0 loc_1400168B0:                          ; CODE XREF: sub_14003800C+10D↓j
					.text:00000001400168B0                 jmp     loc_14000FACD
					
					.text:000000014000FACD loc_14000FACD:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400168B0↓j
					.text:000000014000FACD                 mov     rax, cs:P
					.text:000000014000FAD4                 mov     r10, 0AA2D145923EC7F30h
					.text:000000014000FADE                 lea     rsi, cs:140000000h
					.text:000000014000FAE5                 mov     r9, 0A25E5851D18A813Bh
					.text:000000014000FAEF                 mov     r12, 85BF37612CEE3C9Bh
					.text:000000014000FAF9                 mov     r14, 0F0F0F0F0F0F0F0F1h
					.text:000000014000FB03                 lea     r15, unk_14002B760
					.text:000000014000FB0A                 mov     r8, 0FFFFFFFF00000000h
					.text:000000014000FB14                 test    rax, rax
					.text:000000014000FB17                 jz      loc_14001820E
					.text:000000014000FB1D                 jmp     loc_1400193F4
					
						.text:00000001400193F4 loc_1400193F4:                          ; CODE XREF: PreOb_sub_14000D9A0+217D↑j
						.text:00000001400193F4                 cmp     dword ptr [rax], 7D0h
						.text:00000001400193FA                 mov     rax, 2262427FC07A8175h
						.text:0000000140019404                 jnb     loc_140014797
						.text:000000014001940A                 jmp     loc_1400236C7
						
							.text:00000001400236C7 loc_1400236C7:                          ; CODE XREF: IoHandler_sub_140014450+4FBA↑j
							.text:00000001400236C7                 mov     [rsp+arg_28], r10
							.text:00000001400236CC                 mov     rcx, r13
							.text:00000001400236CF                 mov     rbx, 4E5E0A72F0539783h
							.text:00000001400236D9                 mov     r11, 0F08DE3B14D94C2BFh
							.text:00000001400236E3                 mov     edx, 0D00DAA9Fh
							.text:00000001400236E8                 mov     [rsp+arg_48], rdx
							.text:00000001400236ED                 jmp     loc_14001693C
							
							.text:000000014001693C loc_14001693C:                          ; CODE XREF: IoHandler_sub_140014450+671F↓j
							.text:000000014001693C                                         ; sub_14001D640+60AD↓j
							.text:000000014001693C                 jmp     loc_14003CB71
							
							.text:000000014003CB71 loc_14003CB71:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001693C↑j
							.text:000000014003CB71                 mov     [rsp+arg_148], rcx
							.text:000000014003CB79                 imul    rcx, 7D0h
							.text:000000014003CB80                 mul     rcx
							.text:000000014003CB83                 mov     rax, rcx
							.text:000000014003CB86                 sub     rax, rdx
							.text:000000014003CB89                 shr     rax, 1
							.text:000000014003CB8C                 add     rax, rdx
							.text:000000014003CB8F                 shr     rax, 0Bh
							.text:000000014003CB93                 jmp     loc_1400166DB
							
							.text:00000001400166DB loc_1400166DB:                          ; CODE XREF: sub_14003800C+4B87↓j
							.text:00000001400166DB                 imul    rax, 0E1Bh
							.text:00000001400166E2                 sub     rcx, rax
							.text:00000001400166E5                 imul    rdi, rcx, 0E1Bh
							.text:00000001400166EC                 mov     rax, r11
							.text:00000001400166EF                 jmp     loc_140039F87
							
							.text:0000000140039F87 loc_140039F87:                          ; CODE XREF: IoHandler_sub_140014450+229F↑j
							.text:0000000140039F87                 mul     rdi
							.text:0000000140039F8A                 shr     rdx, 0Ch
							.text:0000000140039F8E                 imul    rax, rdx, 1107h
							.text:0000000140039F95                 sub     rdi, rax
							.text:0000000140039F98                 mov     rax, rbx
							.text:0000000140039F9B                 mul     rdi
							.text:0000000140039F9E                 mov     rax, rdi
							.text:0000000140039FA1                 jmp     loc_14001C11C
							
							.text:000000014001C11C loc_14001C11C:                          ; CODE XREF: sub_14003800C+1F95↓j
							.text:000000014001C11C                 sub     rax, rdx
							.text:000000014001C11F                 shr     rax, 1
							.text:000000014001C122                 add     rax, rdx
							.text:000000014001C125                 shr     rax, 6
							.text:000000014001C129                 jmp     loc_1400167BE
							
							.text:00000001400167BE loc_1400167BE:                          ; CODE XREF: IoHandler_sub_140014450+7CD9↓j
							.text:00000001400167BE                 imul    rcx, rax, 62h ; 'b'
							.text:00000001400167C2                 mov     rax, 0A0A0A0A0A0A0A0A1h
							.text:00000001400167CC                 mul     rdi
							.text:00000001400167CF                 shr     rdx, 5
							.text:00000001400167D3                 add     rcx, rdx
							.text:00000001400167D6                 imul    rax, rcx, 66h ; 'f'
							.text:00000001400167DA                 imul    rcx, rdi, 68h ; 'h'
							.text:00000001400167DE                 sub     rcx, rax
							.text:00000001400167E1                 jmp     loc_14003D964
							
							.text:000000014003D964 loc_14003D964:                          ; CODE XREF: IoHandler_sub_140014450+2391↑j
							.text:000000014003D964                 movzx   eax, word ptr [rcx+rsi+29050h]
							.text:000000014003D96C                 imul    rcx, rax, 7D0h
							.text:000000014003D973                 mov     rax, r9
							.text:000000014003D976                 mul     rcx
							.text:000000014003D979                 shr     rdx, 0Bh
							.text:000000014003D97D                 imul    rax, rdx, 0C9Dh
							.text:000000014003D984                 jmp     loc_14003C0CC
							
							.text:000000014003C0CC loc_14003C0CC:                          ; CODE XREF: sub_14003800C+5978↓j
							.text:000000014003C0CC                 sub     rcx, rax
							.text:000000014003C0CF                 imul    rdi, rcx, 0E35h
							.text:000000014003C0D6                 mov     rax, r9
							.text:000000014003C0D9                 mul     rdi
							.text:000000014003C0DC                 jmp     loc_140042F17
							
							.text:0000000140042F17 loc_140042F17:                          ; CODE XREF: sub_14003800C+40D0↑j
							.text:0000000140042F17                 shr     rdx, 0Bh
							.text:0000000140042F1B                 imul    rax, rdx, 0C9Dh
							.text:0000000140042F22                 sub     rdi, rax
							.text:0000000140042F25                 jmp     loc_14003BA80
							
							.text:000000014003BA80 loc_14003BA80:                          ; CODE XREF: sub_14004185D+16C8↓j
							.text:000000014003BA80                 mov     rax, r12
							.text:000000014003BA83                 mul     rdi
							.text:000000014003BA86                 shr     rdx, 7
							.text:000000014003BA8A                 imul    rcx, rdx, 0F5h ; 'õ'
							.text:000000014003BA91                 mov     rax, r14
							.text:000000014003BA94                 jmp     loc_14003B74F
							
							.text:000000014003B74F loc_14003B74F:                          ; CODE XREF: sub_14003800C+3A88↓j
							.text:000000014003B74F                 mul     rdi
							.text:000000014003B752                 shr     rdx, 4
							.text:000000014003B756                 add     rcx, rdx
							.text:000000014003B759                 imul    rax, rcx, 88h ; 'ˆ'
							.text:000000014003B760                 lea     rcx, [rdi+rdi*8]
							.text:000000014003B764                 shl     rcx, 4
							.text:000000014003B768                 jmp     loc_14000ED50
							
							.text:000000014000ED50 loc_14000ED50:                          ; CODE XREF: sub_14003800C+375C↓j
							.text:000000014000ED50                 sub     rcx, rax
							.text:000000014000ED53                 add     rcx, r15
							.text:000000014000ED56                 mov     [rsp+ByteOffset], rcx
							.text:000000014000ED5B                 mov     rdx, [rcx]
							.text:000000014000ED5E                 mov     rcx, rdx
							.text:000000014000ED61                 rol     rcx, 4
							.text:000000014000ED65                 mov     rdi, qword ptr [rsp+Length]
							.text:000000014000ED6A                 shr     rdi, 20h
							.text:000000014000ED6E                 mov     rax, rdi
							.text:000000014000ED71                 and     rax, [rsp+arg_48]
							.text:000000014000ED76                 jmp     loc_140013C08
							
							.text:0000000140013C08 loc_140013C08:                          ; CODE XREF: PreOb_sub_14000D9A0+13D6↑j
							.text:0000000140013C08                 mov     [rsp+arg_40], rax
							.text:0000000140013C0D                 or      rdi, [rsp+arg_48]
							.text:0000000140013C12                 sub     rdi, rax
							.text:0000000140013C15                 mov     rax, rcx
							.text:0000000140013C18                 not     rax
							.text:0000000140013C1B                 and     rax, 0FFFFFFFFFFFFFFFEh
							.text:0000000140013C1F                 add     rax, 2
							.text:0000000140013C23                 add     rax, rcx
							.text:0000000140013C26                 jz      loc_14001474A
							.text:0000000140013C2C                 jmp     loc_140016A71
							
								.text:0000000140016A71 loc_140016A71:                          ; CODE XREF: PreOb_sub_14000D9A0+628C↑j
								.text:0000000140016A71                 jmp     loc_14003AC3D
								
								.text:000000014003AC3D loc_14003AC3D:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016A71↑j
								.text:000000014003AC3D                 mov     rcx, [rsp+arg_28]
								.text:000000014003AC42                 and     rcx, r8
								.text:000000014003AC45                 mov     rax, 0D00DAA9F00000000h
								.text:000000014003AC4F                 jmp     loc_14004099C
								
								.text:000000014004099C loc_14004099C:                          ; CODE XREF: sub_14003800C+2C43↑j
								.text:000000014004099C                 or      rcx, rax
								.text:000000014004099F                 mov     rax, [rsp+arg_40]
								.text:00000001400409A4                 shl     rax, 20h
								.text:00000001400409A8                 sub     rcx, rax
								.text:00000001400409AB                 mov     rax, rdx
								.text:00000001400409AE                 shl     rax, 20h
								.text:00000001400409B2                 or      rcx, rax
								.text:00000001400409B5                 jmp     loc_14003E4F7
								
								.text:000000014003E4F7 loc_14003E4F7:                          ; CODE XREF: sub_14003DD84+2C31↓j
								.text:000000014003E4F7                 mov     rax, rdx
								.text:000000014003E4FA                 and     rax, rdi
								.text:000000014003E4FD                 shl     rax, 20h
								.text:000000014003E501                 cmp     rcx, rax
								.text:000000014003E504                 jz      loc_140014740
								.text:000000014003E50A                 jmp     loc_14001AB30
								
									.text:000000014001AB30 loc_14001AB30:                          ; CODE XREF: sub_14003DD84+786↓j
									.text:000000014001AB30                 mov     rdi, [rsp+arg_28]
									.text:000000014001AB35                 mov     rcx, rdi
									.text:000000014001AB38                 not     rcx
									.text:000000014001AB3B                 or      rcx, rdx
									.text:000000014001AB3E                 mov     rax, rdx
									.text:000000014001AB41                 not     rax
									.text:000000014001AB44                 and     rax, rdi
									.text:000000014001AB47                 sub     rax, rcx
									.text:000000014001AB4A                 sub     rax, rdi
									.text:000000014001AB4D                 lea     rax, [rax-1]
									.text:000000014001AB51                 lea     rax, [rax+rdx]
									.text:000000014001AB55                 mov     [rsp+arg_28], rax
									.text:000000014001AB5A                 mov     rcx, [rsp+arg_148]
									.text:000000014001AB62                 inc     rcx
									.text:000000014001AB65                 mov     rax, 2262427FC07A8175h
									.text:000000014001AB6F                 jmp     loc_14001693C
				
				.text:0000000140016AF3 loc_140016AF3:                          ; CODE XREF: sub_14004185D+38↓j
				.text:0000000140016AF3                 jmp     loc_1400381D6
				
				.text:00000001400381D6 loc_1400381D6:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016AF3↑j
				.text:00000001400381D6                 mov     rax, cs:P
				.text:00000001400381DD                 mov     r10, 0AA2D145923EC7F30h
				.text:00000001400381E7                 lea     rsi, cs:140000000h
				.text:00000001400381EE                 mov     r9, 0A25E5851D18A813Bh
				.text:00000001400381F8                 mov     r12, 85BF37612CEE3C9Bh
				.text:0000000140038202                 mov     r14, 0F0F0F0F0F0F0F0F1h
				.text:000000014003820C                 lea     r15, unk_14002B760
				.text:0000000140038213                 mov     r8, 0FFFFFFFF00000000h
				.text:000000014003821D                 test    rax, rax
				.text:0000000140038220                 jz      loc_14001820E
				.text:0000000140038226                 jmp     loc_14001251C
				
					.text:000000014001251C loc_14001251C:                          ; CODE XREF: sub_14003800C+21A↓j
					.text:000000014001251C                 cmp     dword ptr [rax], 7D0h
					.text:0000000140012522                 mov     rax, 2262427FC07A8175h
					.text:000000014001252C                 jnb     loc_140014797
					.text:0000000140012532                 jmp     loc_1400251E7
					
						.text:00000001400251E7 loc_1400251E7:                          ; CODE XREF: PreOb_sub_14000D9A0+4B92↑j
						.text:00000001400251E7                 mov     [rsp+arg_28], r10
						.text:00000001400251EC                 mov     rcx, r13
						.text:00000001400251EF                 mov     rbx, 4E5E0A72F0539783h
						.text:00000001400251F9                 mov     r11, 0F08DE3B14D94C2BFh
						.text:0000000140025203                 mov     edx, 0B2C41B84h
						.text:0000000140025208                 mov     [rsp+arg_48], rdx
						.text:000000014002520D                 jmp     loc_140016B7F
						
						.text:0000000140016B7F loc_140016B7F:                          ; CODE XREF: PreOb_sub_14000D9A0+65BD↑j
						.text:0000000140016B7F                                         ; sub_14001D640+7BCD↓j
						.text:0000000140016B7F                 jmp     loc_140041C64
						
						.text:0000000140041C64 loc_140041C64:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016B7F↑j
						.text:0000000140041C64                 mov     [rsp+arg_150], rcx
						.text:0000000140041C6C                 imul    rcx, 7D0h
						.text:0000000140041C73                 mul     rcx
						.text:0000000140041C76                 mov     rax, rcx
						.text:0000000140041C79                 sub     rax, rdx
						.text:0000000140041C7C                 shr     rax, 1
						.text:0000000140041C7F                 add     rax, rdx
						.text:0000000140041C82                 shr     rax, 0Bh
						.text:0000000140041C86                 imul    rax, 0E1Bh
						.text:0000000140041C8D                 sub     rcx, rax
						.text:0000000140041C90                 imul    rdi, rcx, 0E1Bh
						.text:0000000140041C97                 mov     rax, r11
						.text:0000000140041C9A                 mul     rdi
						.text:0000000140041C9D                 shr     rdx, 0Ch
						.text:0000000140041CA1                 imul    rax, rdx, 1107h
						.text:0000000140041CA8                 sub     rdi, rax
						.text:0000000140041CAB                 mov     rax, rbx
						.text:0000000140041CAE                 mul     rdi
						.text:0000000140041CB1                 mov     rax, rdi
						.text:0000000140041CB4                 sub     rax, rdx
						.text:0000000140041CB7                 shr     rax, 1
						.text:0000000140041CBA                 add     rax, rdx
						.text:0000000140041CBD                 shr     rax, 6
						.text:0000000140041CC1                 imul    rcx, rax, 62h ; 'b'
						.text:0000000140041CC5                 mov     rax, 0A0A0A0A0A0A0A0A1h
						.text:0000000140041CCF                 mul     rdi
						.text:0000000140041CD2                 shr     rdx, 5
						.text:0000000140041CD6                 add     rcx, rdx
						.text:0000000140041CD9                 imul    rax, rcx, 66h ; 'f'
						.text:0000000140041CDD                 imul    rcx, rdi, 68h ; 'h'
						.text:0000000140041CE1                 sub     rcx, rax
						.text:0000000140041CE4                 movzx   eax, word ptr [rcx+rsi+29050h]
						.text:0000000140041CEC                 imul    rcx, rax, 7D0h
						.text:0000000140041CF3                 mov     rax, r9
						.text:0000000140041CF6                 mul     rcx
						.text:0000000140041CF9                 shr     rdx, 0Bh
						.text:0000000140041CFD                 imul    rax, rdx, 0C9Dh
						.text:0000000140041D04                 sub     rcx, rax
						.text:0000000140041D07                 imul    rdi, rcx, 0E35h
						.text:0000000140041D0E                 mov     rax, r9
						.text:0000000140041D11                 mul     rdi
						.text:0000000140041D14                 shr     rdx, 0Bh
						.text:0000000140041D18                 imul    rax, rdx, 0C9Dh
						.text:0000000140041D1F                 sub     rdi, rax
						.text:0000000140041D22                 mov     rax, r12
						.text:0000000140041D25                 mul     rdi
						.text:0000000140041D28                 shr     rdx, 7
						.text:0000000140041D2C                 imul    rcx, rdx, 0F5h ; 'õ'
						.text:0000000140041D33                 mov     rax, r14
						.text:0000000140041D36                 mul     rdi
						.text:0000000140041D39                 shr     rdx, 4
						.text:0000000140041D3D                 add     rcx, rdx
						.text:0000000140041D40                 imul    rax, rcx, 88h ; 'ˆ'
						.text:0000000140041D47                 lea     rcx, [rdi+rdi*8]
						.text:0000000140041D4B                 shl     rcx, 4
						.text:0000000140041D4F                 sub     rcx, rax
						.text:0000000140041D52                 add     rcx, r15
						.text:0000000140041D55                 mov     [rsp+arg_30], rcx
						.text:0000000140041D5A                 mov     rdi, [rcx]
						.text:0000000140041D5D                 mov     rcx, rdi
						.text:0000000140041D60                 rol     rcx, 4
						.text:0000000140041D64                 mov     rdx, [rsp+arg_28]
						.text:0000000140041D69                 shr     rdx, 20h
						.text:0000000140041D6D                 mov     rax, rdx
						.text:0000000140041D70                 and     rax, [rsp+arg_48]
						.text:0000000140041D75                 mov     [rsp+arg_40], rax
						.text:0000000140041D7A                 or      rdx, [rsp+arg_48]
						.text:0000000140041D7F                 sub     rdx, rax
						.text:0000000140041D82                 mov     rax, rcx
						.text:0000000140041D85                 not     rax
						.text:0000000140041D88                 and     rax, 0FFFFFFFFFFFFFFFEh
						.text:0000000140041D8C                 add     rax, 2
						.text:0000000140041D90                 add     rax, rcx
						.text:0000000140041D93                 jz      loc_140014F99
						.text:0000000140041D99                 jmp     loc_140016CB4
						
							.text:0000000140016CB4 loc_140016CB4:                          ; CODE XREF: sub_14004185D+53C↓j
							.text:0000000140016CB4                 jmp     loc_14001CC32
							
							.text:000000014001CC32 loc_14001CC32:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016CB4↑j
							.text:000000014001CC32                 mov     rcx, [rsp+arg_28]
							.text:000000014001CC37                 and     rcx, r8
							.text:000000014001CC3A                 mov     rax, 0B2C41B8400000000h
							.text:000000014001CC44                 or      rcx, rax
							.text:000000014001CC47                 mov     rax, [rsp+arg_40]
							.text:000000014001CC4C                 shl     rax, 20h
							.text:000000014001CC50                 sub     rcx, rax
							.text:000000014001CC53                 mov     rax, rdi
							.text:000000014001CC56                 shl     rax, 20h
							.text:000000014001CC5A                 or      rcx, rax
							.text:000000014001CC5D                 and     rdx, rdi
							.text:000000014001CC60                 shl     rdx, 20h
							.text:000000014001CC64                 cmp     rcx, rdx
							.text:000000014001CC67                 jz      loc_140014740
							.text:000000014001CC6D                 jmp     loc_140013F1E
							
								.text:0000000140013F1E loc_140013F1E:                          ; CODE XREF: IoHandler_sub_140014450+881D↓j
								.text:0000000140013F1E                 mov     rdx, qword ptr [rsp+Length]
								.text:0000000140013F23                 mov     rcx, rdx
								.text:0000000140013F26                 not     rcx
								.text:0000000140013F29                 or      rcx, rdi
								.text:0000000140013F2C                 mov     rax, rdi
								.text:0000000140013F2F                 not     rax
								.text:0000000140013F32                 and     rax, rdx
								.text:0000000140013F35                 sub     rax, rcx
								.text:0000000140013F38                 sub     rax, rdx
								.text:0000000140013F3B                 lea     rax, [rax-1]
								.text:0000000140013F3F                 lea     rax, [rax+rdi]
								.text:0000000140013F43                 mov     qword ptr [rsp+Length], rax
								.text:0000000140013F48                 mov     rcx, [rsp+arg_150]
								.text:0000000140013F50                 inc     rcx
								.text:0000000140013F53                 mov     rax, 2262427FC07A8175h
								.text:0000000140013F5D                 jmp     loc_140016B7F
			
			.text:0000000140016D33 loc_140016D33:                          ; CODE XREF: IoHandler_sub_140014450+876↑j
			.text:0000000140016D33                 jmp     loc_140016241
			
			.text:0000000140016241 loc_140016241:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016D33↓j
			.text:0000000140016241                 mov     rax, cs:P
			.text:0000000140016248                 mov     r10, 0AA2D145923EC7F30h
			.text:0000000140016252                 lea     rsi, cs:140000000h
			.text:0000000140016259                 mov     r9, 0A25E5851D18A813Bh
			.text:0000000140016263                 mov     r12, 85BF37612CEE3C9Bh
			.text:000000014001626D                 mov     r14, 0F0F0F0F0F0F0F0F1h
			.text:0000000140016277                 lea     r15, unk_14002B760
			.text:000000014001627E                 mov     r8, 0FFFFFFFF00000000h
			.text:0000000140016288                 test    rax, rax
			.text:000000014001628B                 jz      loc_14001820E
			.text:0000000140016291                 jmp     loc_1400189F9
			
				.text:00000001400189F9 loc_1400189F9:                          ; CODE XREF: IoHandler_sub_140014450+1E41↑j
				.text:00000001400189F9                 cmp     dword ptr [rax], 7D0h
				.text:00000001400189FF                 mov     rax, 2262427FC07A8175h
				.text:0000000140018A09                 jnb     loc_140014797
				.text:0000000140018A0F                 jmp     loc_14001447E
				
					.text:000000014001447E loc_14001447E:                          ; CODE XREF: IoHandler_sub_140014450+45BF↓j
					.text:000000014001447E                 mov     [rsp+arg_28], r10
					.text:0000000140014483                 mov     rcx, r13
					.text:0000000140014486                 mov     rbx, 4E5E0A72F0539783h
					.text:0000000140014490                 mov     r11, 0F08DE3B14D94C2BFh
					.text:000000014001449A                 jmp     loc_140016DB5
					
					.text:0000000140016DB5 loc_140016DB5:                          ; CODE XREF: IoHandler_sub_140014450+4A↑j
					.text:0000000140016DB5                                         ; IoHandler_sub_140014450+747A↓j
					.text:0000000140016DB5                 jmp     loc_14000F17A
					
					.text:000000014000F17A loc_14000F17A:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016DB5↓j
					.text:000000014000F17A                 mov     [rsp+arg_158], rcx
					.text:000000014000F182                 imul    rcx, 7D0h
					.text:000000014000F189                 mul     rcx
					.text:000000014000F18C                 mov     rax, rcx
					.text:000000014000F18F                 sub     rax, rdx
					.text:000000014000F192                 shr     rax, 1
					.text:000000014000F195                 add     rax, rdx
					.text:000000014000F198                 shr     rax, 0Bh
					.text:000000014000F19C                 imul    rax, 0E1Bh
					.text:000000014000F1A3                 sub     rcx, rax
					.text:000000014000F1A6                 imul    rdi, rcx, 0E1Bh
					.text:000000014000F1AD                 mov     rax, r11
					.text:000000014000F1B0                 mul     rdi
					.text:000000014000F1B3                 shr     rdx, 0Ch
					.text:000000014000F1B7                 imul    rax, rdx, 1107h
					.text:000000014000F1BE                 sub     rdi, rax
					.text:000000014000F1C1                 mov     rax, rbx
					.text:000000014000F1C4                 mul     rdi
					.text:000000014000F1C7                 mov     rax, rdi
					.text:000000014000F1CA                 sub     rax, rdx
					.text:000000014000F1CD                 shr     rax, 1
					.text:000000014000F1D0                 add     rax, rdx
					.text:000000014000F1D3                 shr     rax, 6
					.text:000000014000F1D7                 imul    rcx, rax, 62h ; 'b'
					.text:000000014000F1DB                 mov     rax, 0A0A0A0A0A0A0A0A1h
					.text:000000014000F1E5                 mul     rdi
					.text:000000014000F1E8                 shr     rdx, 5
					.text:000000014000F1EC                 add     rcx, rdx
					.text:000000014000F1EF                 imul    rax, rcx, 66h ; 'f'
					.text:000000014000F1F3                 imul    rcx, rdi, 68h ; 'h'
					.text:000000014000F1F7                 sub     rcx, rax
					.text:000000014000F1FA                 movzx   eax, word ptr [rcx+rsi+29050h]
					.text:000000014000F202                 imul    rcx, rax, 7D0h
					.text:000000014000F209                 mov     rax, r9
					.text:000000014000F20C                 mul     rcx
					.text:000000014000F20F                 shr     rdx, 0Bh
					.text:000000014000F213                 imul    rax, rdx, 0C9Dh
					.text:000000014000F21A                 sub     rcx, rax
					.text:000000014000F21D                 imul    rdi, rcx, 0E35h
					.text:000000014000F224                 mov     rax, r9
					.text:000000014000F227                 mul     rdi
					.text:000000014000F22A                 shr     rdx, 0Bh
					.text:000000014000F22E                 imul    rax, rdx, 0C9Dh
					.text:000000014000F235                 sub     rdi, rax
					.text:000000014000F238                 mov     rax, r12
					.text:000000014000F23B                 mul     rdi
					.text:000000014000F23E                 shr     rdx, 7
					.text:000000014000F242                 imul    rcx, rdx, 0F5h ; 'õ'
					.text:000000014000F249                 mov     rax, r14
					.text:000000014000F24C                 mul     rdi
					.text:000000014000F24F                 shr     rdx, 4
					.text:000000014000F253                 add     rcx, rdx
					.text:000000014000F256                 imul    rax, rcx, 88h ; 'ˆ'
					.text:000000014000F25D                 lea     rcx, [rdi+rdi*8]
					.text:000000014000F261                 shl     rcx, 4
					.text:000000014000F265                 sub     rcx, rax
					.text:000000014000F268                 add     rcx, r15
					.text:000000014000F26B                 mov     [rsp+ByteOffset], rcx
					.text:000000014000F270                 mov     rdi, [rcx]
					.text:000000014000F273                 mov     rcx, rdi
					.text:000000014000F276                 rol     rcx, 4
					.text:000000014000F27A                 mov     rdx, qword ptr [rsp+Length]
					.text:000000014000F27F                 shr     rdx, 20h
					.text:000000014000F283                 mov     rax, rdx
					.text:000000014000F286                 and     eax, 5FC2EFB3h
					.text:000000014000F28B                 mov     [rsp+arg_40], rax
					.text:000000014000F290                 or      rdx, 5FC2EFB3h
					.text:000000014000F297                 sub     rdx, rax
					.text:000000014000F29A                 mov     rax, rcx
					.text:000000014000F29D                 not     rax
					.text:000000014000F2A0                 and     rax, 0FFFFFFFFFFFFFFFEh
					.text:000000014000F2A4                 add     rax, 2
					.text:000000014000F2A8                 add     rax, rcx
					.text:000000014000F2AB                 jz      loc_140016F67
					.text:000000014000F2B1                 jmp     loc_140016EE8
					
						.text:0000000140016EE8 loc_140016EE8:                          ; CODE XREF: PreOb_sub_14000D9A0+1911↑j
						.text:0000000140016EE8                 jmp     loc_140016C3F
						
						.text:0000000140016C3F loc_140016C3F:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016EE8↓j
						.text:0000000140016C3F                 mov     rcx, [rsp+arg_28]
						.text:0000000140016C44                 and     rcx, r8
						.text:0000000140016C47                 mov     rax, 5FC2EFB300000000h
						.text:0000000140016C51                 or      rcx, rax
						.text:0000000140016C54                 mov     rax, [rsp+arg_40]
						.text:0000000140016C59                 shl     rax, 20h
						.text:0000000140016C5D                 sub     rcx, rax
						.text:0000000140016C60                 mov     rax, rdi
						.text:0000000140016C63                 shl     rax, 20h
						.text:0000000140016C67                 or      rcx, rax
						.text:0000000140016C6A                 and     rdx, rdi
						.text:0000000140016C6D                 shl     rdx, 20h
						.text:0000000140016C71                 cmp     rcx, rdx
						.text:0000000140016C74                 jz      loc_140014740
						.text:0000000140016C7A                 jmp     loc_14003F4D5
						
							.text:000000014003F4D5 loc_14003F4D5:                          ; CODE XREF: IoHandler_sub_140014450+282A↑j
							.text:000000014003F4D5                 mov     rcx, rdi
							.text:000000014003F4D8                 not     rcx
							.text:000000014003F4DB                 mov     rdx, [rsp+arg_28]
							.text:000000014003F4E0                 jmp     loc_140017A7B
							
							.text:0000000140017A7B loc_140017A7B:                          ; CODE XREF: sub_14003DD84+175C↓j
							.text:0000000140017A7B                 and     rcx, rdx
							.text:0000000140017A7E                 mov     rax, rdx
							.text:0000000140017A81                 not     rax
							.text:0000000140017A84                 jmp     loc_14001B89F
							
							.text:000000014001B89F loc_14001B89F:                          ; CODE XREF: IoHandler_sub_140014450+3634↑j
							.text:000000014001B89F                 or      rax, rdi
							.text:000000014001B8A2                 sub     rcx, rax
							.text:000000014001B8A5                 sub     rcx, rdx
							.text:000000014001B8A8                 lea     rax, [rdi-1]
							.text:000000014001B8AC                 lea     rax, [rax+rcx]
							.text:000000014001B8B0                 mov     [rsp+arg_28], rax
							.text:000000014001B8B5                 mov     rcx, [rsp+arg_158]
							.text:000000014001B8BD                 inc     rcx
							.text:000000014001B8C0                 mov     rax, 2262427FC07A8175h
							.text:000000014001B8CA                 jmp     loc_140016DB5
					
					.text:0000000140016F67 loc_140016F67:                          ; CODE XREF: PreOb_sub_14000D9A0+190B↑j
					.text:0000000140016F67                 jmp     loc_14003AEE6
					
					.text:000000014003AEE6 loc_14003AEE6:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016F67↑j
					.text:000000014003AEE6                 mov     rcx, rdi
					.text:000000014003AEE9                 not     rcx
					.text:000000014003AEEC                 jmp     loc_14001B670
					
					.text:000000014001B670 loc_14001B670:                          ; CODE XREF: sub_14003800C+2EE0↓j
					.text:000000014001B670                 or      rcx, r8
					.text:000000014001B673                 mov     r11, 0EFFFFFFFFFFFFFFFh
					.text:000000014001B67D                 and     rdi, r11
					.text:000000014001B680                 mov     rbx, 1000000000000001h
					.text:000000014001B68A                 add     rcx, rbx
					.text:000000014001B68D                 jmp     loc_140039AE2
					
					.text:0000000140039AE2 loc_140039AE2:                          ; CODE XREF: IoHandler_sub_140014450+723D↑j
					.text:0000000140039AE2                 add     rcx, rdi
					.text:0000000140039AE5                 mov     rax, rdx
					.text:0000000140039AE8                 or      rax, rcx
					.text:0000000140039AEB                 and     rdx, rcx
					.text:0000000140039AEE                 sub     rax, rdx
					.text:0000000140039AF1                 jmp     loc_14001477C
		
		.text:0000000140016F9E loc_140016F9E:                          ; CODE XREF: PreOb_sub_14000D9A0+4E91↑j
		.text:0000000140016F9E                 jmp     loc_14003F8EE
		
		.text:000000014003F8EE loc_14003F8EE:                          ; CODE XREF: IoHandler_sub_140014450:loc_140016F9E↑j
		.text:000000014003F8EE                 mov     rax, cs:P
		.text:000000014003F8F5                 mov     r10, 0AA2D145923EC7F30h
		.text:000000014003F8FF                 lea     rsi, cs:140000000h
		.text:000000014003F906                 mov     r9, 0A25E5851D18A813Bh
		.text:000000014003F910                 mov     r12, 85BF37612CEE3C9Bh
		.text:000000014003F91A                 mov     r14, 0F0F0F0F0F0F0F0F1h
		.text:000000014003F924                 lea     r15, unk_14002B760
		.text:000000014003F92B                 mov     r8, 0FFFFFFFF00000000h
		.text:000000014003F935                 test    rax, rax
		.text:000000014003F938                 jz      loc_14001820E
		.text:000000014003F93E                 jmp     loc_140011CDA
		
			.text:0000000140011CDA loc_140011CDA:                          ; CODE XREF: sub_14003DD84+1BBA↓j
			.text:0000000140011CDA                 cmp     dword ptr [rax], 7D0h
			.text:0000000140011CE0                 mov     rax, 2262427FC07A8175h
			.text:0000000140011CEA                 jnb     loc_140014797
			.text:0000000140011CF0                 jmp     loc_1400157B7
			
				.text:00000001400157B7 loc_1400157B7:                          ; CODE XREF: PreOb_sub_14000D9A0+4350↑j
				.text:00000001400157B7                 mov     [rsp+arg_28], r10
				.text:00000001400157BC                 mov     rcx, r13
				.text:00000001400157BF                 mov     rbx, 4E5E0A72F0539783h
				.text:00000001400157C9                 mov     r11, 0F08DE3B14D94C2BFh
				.text:00000001400157D3                 mov     edx, 0ED538DE2h
				.text:00000001400157D8                 mov     [rsp+arg_48], rdx
				.text:00000001400157DD                 jmp     loc_14001702A
				
				.text:000000014001702A loc_14001702A:                          ; CODE XREF: IoHandler_sub_140014450+138D↑j
				.text:000000014001702A                                         ; sub_14003800C+516C↓j
				.text:000000014001702A                 jmp     loc_14003B4A2
				
				.text:000000014003B4A2 loc_14003B4A2:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001702A↑j
				.text:000000014003B4A2                 mov     [rsp+arg_160], rcx
				.text:000000014003B4AA                 imul    rcx, 7D0h
				.text:000000014003B4B1                 mul     rcx
				.text:000000014003B4B4                 jmp     loc_140023CAD
				
				.text:0000000140023CAD loc_140023CAD:                          ; CODE XREF: sub_14003800C+34A8↓j
				.text:0000000140023CAD                 mov     rax, rcx
				.text:0000000140023CB0                 sub     rax, rdx
				.text:0000000140023CB3                 shr     rax, 1
				.text:0000000140023CB6                 jmp     loc_140040608
				
				.text:0000000140040608 loc_140040608:                          ; CODE XREF: sub_14001D640+6676↑j
				.text:0000000140040608                 add     rax, rdx
				.text:000000014004060B                 shr     rax, 0Bh
				.text:000000014004060F                 imul    rax, 0E1Bh
				.text:0000000140040616                 sub     rcx, rax
				.text:0000000140040619                 imul    rdi, rcx, 0E1Bh
				.text:0000000140040620                 mov     rax, r11
				.text:0000000140040623                 mul     rdi
				.text:0000000140040626                 shr     rdx, 0Ch
				.text:000000014004062A                 imul    rax, rdx, 1107h
				.text:0000000140040631                 jmp     loc_140011DB8
				
				.text:0000000140011DB8 loc_140011DB8:                          ; CODE XREF: sub_14003DD84+28AD↓j
				.text:0000000140011DB8                 sub     rdi, rax
				.text:0000000140011DBB                 mov     rax, rbx
				.text:0000000140011DBE                 mul     rdi
				.text:0000000140011DC1                 mov     rax, rdi
				.text:0000000140011DC4                 sub     rax, rdx
				.text:0000000140011DC7                 shr     rax, 1
				.text:0000000140011DCA                 jmp     loc_140016CB9
				
				.text:0000000140016CB9 loc_140016CB9:                          ; CODE XREF: PreOb_sub_14000D9A0+442A↑j
				.text:0000000140016CB9                 add     rax, rdx
				.text:0000000140016CBC                 shr     rax, 6
				.text:0000000140016CC0                 imul    rcx, rax, 62h ; 'b'
				.text:0000000140016CC4                 mov     rax, 0A0A0A0A0A0A0A0A1h
				.text:0000000140016CCE                 mul     rdi
				.text:0000000140016CD1                 shr     rdx, 5
				.text:0000000140016CD5                 add     rcx, rdx
				.text:0000000140016CD8                 imul    rax, rcx, 66h ; 'f'
				.text:0000000140016CDC                 jmp     loc_140042885
				
				.text:0000000140042885 loc_140042885:                          ; CODE XREF: IoHandler_sub_140014450+288C↑j
				.text:0000000140042885                 imul    rcx, rdi, 68h ; 'h'
				.text:0000000140042889                 sub     rcx, rax
				.text:000000014004288C                 movzx   eax, word ptr [rcx+rsi+29050h]
				.text:0000000140042894                 imul    rcx, rax, 7D0h
				.text:000000014004289B                 mov     rax, r9
				.text:000000014004289E                 mul     rcx
				.text:00000001400428A1                 shr     rdx, 0Bh
				.text:00000001400428A5                 imul    rax, rdx, 0C9Dh
				.text:00000001400428AC                 jmp     loc_14000DAB0
				
				.text:000000014000DAB0 loc_14000DAB0:                          ; CODE XREF: sub_14004185D+104F↓j
				.text:000000014000DAB0                 sub     rcx, rax
				.text:000000014000DAB3                 jmp     loc_14003D06E
				
				.text:000000014003D06E loc_14003D06E:                          ; CODE XREF: PreOb_sub_14000D9A0+113↑j
				.text:000000014003D06E                 imul    rdi, rcx, 0E35h
				.text:000000014003D075                 mov     rax, r9
				.text:000000014003D078                 mul     rdi
				.text:000000014003D07B                 shr     rdx, 0Bh
				.text:000000014003D07F                 imul    rax, rdx, 0C9Dh
				.text:000000014003D086                 sub     rdi, rax
				.text:000000014003D089                 mov     rax, r12
				.text:000000014003D08C                 mul     rdi
				.text:000000014003D08F                 jmp     loc_14003D7A7
				
				.text:000000014003D7A7 loc_14003D7A7:                          ; CODE XREF: sub_14003800C+5083↑j
				.text:000000014003D7A7                 shr     rdx, 7
				.text:000000014003D7AB                 imul    rcx, rdx, 0F5h ; 'õ'
				.text:000000014003D7B2                 mov     rax, r14
				.text:000000014003D7B5                 jmp     loc_140018F4F
				
				.text:0000000140018F4F loc_140018F4F:                          ; CODE XREF: sub_14003800C+57A9↓j
				.text:0000000140018F4F                 mul     rdi
				.text:0000000140018F52                 shr     rdx, 4
				.text:0000000140018F56                 add     rcx, rdx
				.text:0000000140018F59                 imul    rax, rcx, 88h ; 'ˆ'
				.text:0000000140018F60                 jmp     loc_14001212F
				
				.text:000000014001212F loc_14001212F:                          ; CODE XREF: IoHandler_sub_140014450+4B10↓j
				.text:000000014001212F                 lea     rcx, [rdi+rdi*8]
				.text:0000000140012133                 jmp     loc_140041128
				
				.text:0000000140041128 loc_140041128:                          ; CODE XREF: PreOb_sub_14000D9A0+4793↑j
				.text:0000000140041128                 shl     rcx, 4
				.text:000000014004112C                 sub     rcx, rax
				.text:000000014004112F                 add     rcx, r15
				.text:0000000140041132                 mov     [rsp+arg_30], rcx
				.text:0000000140041137                 mov     rdx, [rcx]
				.text:000000014004113A                 mov     rcx, rdx
				.text:000000014004113D                 jmp     loc_14003CC71
				
				.text:000000014003CC71 loc_14003CC71:                          ; CODE XREF: sub_140040C0A+533↓j
				.text:000000014003CC71                 rol     rcx, 4
				.text:000000014003CC75                 mov     rdi, [rsp+arg_28]
				.text:000000014003CC7A                 shr     rdi, 20h
				.text:000000014003CC7E                 mov     rax, rdi
				.text:000000014003CC81                 and     rax, [rsp+arg_48]
				.text:000000014003CC86                 mov     [rsp+arg_40], rax
				.text:000000014003CC8B                 jmp     loc_140042E89
				
				.text:0000000140042E89 loc_140042E89:                          ; CODE XREF: sub_14003800C+4C7F↑j
				.text:0000000140042E89                 or      rdi, [rsp+arg_48]
				.text:0000000140042E8E                 sub     rdi, rax
				.text:0000000140042E91                 mov     rax, rcx
				.text:0000000140042E94                 not     rax
				.text:0000000140042E97                 and     rax, 0FFFFFFFFFFFFFFFEh
				.text:0000000140042E9B                 add     rax, 2
				.text:0000000140042E9F                 add     rax, rcx
				.text:0000000140042EA2                 jz      loc_14001474A
				.text:0000000140042EA8                 jmp     loc_14001715F
				
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
	
	.text:00000001400171E1 loc_1400171E1:                          ; CODE XREF: IoHandler_sub_140014450:loc_140014580↑j
	.text:00000001400171E1                 jmp     loc_14001977F
	
	.text:000000014001977F loc_14001977F:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400171E1↑j
	.text:000000014001977F                 mov     rax, cs:P
	.text:0000000140019786                 mov     r10, 0AA2D145923EC7F30h
	.text:0000000140019790                 lea     rsi, cs:140000000h
	.text:0000000140019797                 mov     r9, 0A25E5851D18A813Bh
	.text:00000001400197A1                 mov     r12, 85BF37612CEE3C9Bh
	.text:00000001400197AB                 mov     r14, 0F0F0F0F0F0F0F0F1h
	.text:00000001400197B5                 lea     r15, unk_14002B760
	.text:00000001400197BC                 mov     r8, 0FFFFFFFF00000000h
	.text:00000001400197C6                 test    rax, rax
	.text:00000001400197C9                 jz      loc_14001820E
	.text:00000001400197CF                 jmp     loc_140013B20
	
		.text:0000000140013B20 loc_140013B20:                          ; CODE XREF: IoHandler_sub_140014450+537F↓j
		.text:0000000140013B20                 cmp     dword ptr [rax], 7D0h
		.text:0000000140013B26                 mov     rax, 2262427FC07A8175h
		.text:0000000140013B30                 jnb     loc_140014797
		.text:0000000140013B36                 jmp     loc_140018329
		
			.text:0000000140018329 loc_140018329:                          ; CODE XREF: PreOb_sub_14000D9A0+6196↑j
			.text:0000000140018329                 mov     [rsp+arg_28], r10
			.text:000000014001832E                 mov     rcx, r13
			.text:0000000140018331                 mov     rbx, 4E5E0A72F0539783h
			.text:000000014001833B                 mov     r11, 0F08DE3B14D94C2BFh
			.text:0000000140018345                 jmp     loc_140017263
			
			.text:0000000140017263 loc_140017263:                          ; CODE XREF: IoHandler_sub_140014450+3EF5↓j
			.text:0000000140017263                                         ; sub_14003800C+5457↓j
			.text:0000000140017263                 jmp     loc_14000F857
			
			.text:000000014000F857 loc_14000F857:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017263↓j
			.text:000000014000F857                 mov     [rsp+arg_168], rcx
			.text:000000014000F85F                 imul    rcx, 7D0h
			.text:000000014000F866                 mul     rcx
			.text:000000014000F869                 mov     rax, rcx
			.text:000000014000F86C                 sub     rax, rdx
			.text:000000014000F86F                 shr     rax, 1
			.text:000000014000F872                 add     rax, rdx
			.text:000000014000F875                 shr     rax, 0Bh
			.text:000000014000F879                 imul    rax, 0E1Bh
			.text:000000014000F880                 sub     rcx, rax
			.text:000000014000F883                 imul    rdi, rcx, 0E1Bh
			.text:000000014000F88A                 mov     rax, r11
			.text:000000014000F88D                 mul     rdi
			.text:000000014000F890                 shr     rdx, 0Ch
			.text:000000014000F894                 imul    rax, rdx, 1107h
			.text:000000014000F89B                 sub     rdi, rax
			.text:000000014000F89E                 mov     rax, rbx
			.text:000000014000F8A1                 mul     rdi
			.text:000000014000F8A4                 mov     rax, rdi
			.text:000000014000F8A7                 sub     rax, rdx
			.text:000000014000F8AA                 shr     rax, 1
			.text:000000014000F8AD                 add     rax, rdx
			.text:000000014000F8B0                 shr     rax, 6
			.text:000000014000F8B4                 imul    rcx, rax, 62h ; 'b'
			.text:000000014000F8B8                 mov     rax, 0A0A0A0A0A0A0A0A1h
			.text:000000014000F8C2                 mul     rdi
			.text:000000014000F8C5                 shr     rdx, 5
			.text:000000014000F8C9                 add     rcx, rdx
			.text:000000014000F8CC                 imul    rax, rcx, 66h ; 'f'
			.text:000000014000F8D0                 imul    rcx, rdi, 68h ; 'h'
			.text:000000014000F8D4                 sub     rcx, rax
			.text:000000014000F8D7                 movzx   eax, word ptr [rcx+rsi+29050h]
			.text:000000014000F8DF                 imul    rcx, rax, 7D0h
			.text:000000014000F8E6                 mov     rax, r9
			.text:000000014000F8E9                 mul     rcx
			.text:000000014000F8EC                 shr     rdx, 0Bh
			.text:000000014000F8F0                 imul    rax, rdx, 0C9Dh
			.text:000000014000F8F7                 sub     rcx, rax
			.text:000000014000F8FA                 imul    rdi, rcx, 0E35h
			.text:000000014000F901                 mov     rax, r9
			.text:000000014000F904                 mul     rdi
			.text:000000014000F907                 shr     rdx, 0Bh
			.text:000000014000F90B                 imul    rax, rdx, 0C9Dh
			.text:000000014000F912                 sub     rdi, rax
			.text:000000014000F915                 mov     rax, r12
			.text:000000014000F918                 mul     rdi
			.text:000000014000F91B                 shr     rdx, 7
			.text:000000014000F91F                 imul    rcx, rdx, 0F5h ; 'õ'
			.text:000000014000F926                 mov     rax, r14
			.text:000000014000F929                 mul     rdi
			.text:000000014000F92C                 shr     rdx, 4
			.text:000000014000F930                 add     rcx, rdx
			.text:000000014000F933                 imul    rax, rcx, 88h ; 'ˆ'
			.text:000000014000F93A                 lea     rcx, [rdi+rdi*8]
			.text:000000014000F93E                 shl     rcx, 4
			.text:000000014000F942                 sub     rcx, rax
			.text:000000014000F945                 add     rcx, r15
			.text:000000014000F948                 mov     [rsp+ByteOffset], rcx
			.text:000000014000F94D                 mov     rdx, [rcx]
			.text:000000014000F950                 mov     rcx, rdx
			.text:000000014000F953                 rol     rcx, 4
			.text:000000014000F957                 mov     rdi, qword ptr [rsp+Length]
			.text:000000014000F95C                 shr     rdi, 20h
			.text:000000014000F960                 mov     rax, rdi
			.text:000000014000F963                 and     eax, 48263782h
			.text:000000014000F968                 mov     [rsp+arg_40], rax
			.text:000000014000F96D                 or      rdi, 48263782h
			.text:000000014000F974                 sub     rdi, rax
			.text:000000014000F977                 mov     rax, rcx
			.text:000000014000F97A                 not     rax
			.text:000000014000F97D                 and     rax, 0FFFFFFFFFFFFFFFEh
			.text:000000014000F981                 add     rax, 2
			.text:000000014000F985                 add     rax, rcx
			.text:000000014000F988                 jz      loc_14001474A
			.text:000000014000F98E                 jmp     loc_14001739A
			
				.text:000000014001739A loc_14001739A:                          ; CODE XREF: PreOb_sub_14000D9A0+1FEE↑j
				.text:000000014001739A                 jmp     loc_140013503
				
				.text:0000000140013503 loc_140013503:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001739A↓j
				.text:0000000140013503                 mov     rcx, qword ptr [rsp+Length]
				.text:0000000140013508                 and     rcx, r8
				.text:000000014001350B                 mov     rax, 4826378200000000h
				.text:0000000140013515                 or      rcx, rax
				.text:0000000140013518                 mov     rax, [rsp+arg_40]
				.text:000000014001351D                 shl     rax, 20h
				.text:0000000140013521                 sub     rcx, rax
				.text:0000000140013524                 mov     rax, rdx
				.text:0000000140013527                 shl     rax, 20h
				.text:000000014001352B                 or      rcx, rax
				.text:000000014001352E                 mov     rax, rdx
				.text:0000000140013531                 and     rax, rdi
				.text:0000000140013534                 shl     rax, 20h
				.text:0000000140013538                 cmp     rcx, rax
				.text:000000014001353B                 jz      loc_140014740
				.text:0000000140013541                 jmp     loc_1400109F2
				
					.text:00000001400109F2 loc_1400109F2:                          ; CODE XREF: PreOb_sub_14000D9A0+5BA1↓j
					.text:00000001400109F2                 mov     rdi, qword ptr [rsp+Length]
					.text:00000001400109F7                 mov     rcx, rdi
					.text:00000001400109FA                 not     rcx
					.text:00000001400109FD                 or      rcx, rdx
					.text:0000000140010A00                 mov     rax, rdx
					.text:0000000140010A03                 not     rax
					.text:0000000140010A06                 jmp     loc_14003D438
					
					.text:000000014003D438 loc_14003D438:                          ; CODE XREF: PreOb_sub_14000D9A0+3066↑j
					.text:000000014003D438                 and     rax, rdi
					.text:000000014003D43B                 sub     rax, rcx
					.text:000000014003D43E                 sub     rax, rdi
					.text:000000014003D441                 lea     rax, [rax-1]
					.text:000000014003D445                 lea     rax, [rax+rdx]
					.text:000000014003D449                 mov     [rsp+arg_28], rax
					.text:000000014003D44E                 mov     rcx, [rsp+arg_168]
					.text:000000014003D456                 inc     rcx
					.text:000000014003D459                 mov     rax, 2262427FC07A8175h
					.text:000000014003D463                 jmp     loc_140017263

.text:000000014001741C loc_14001741C:                          ; CODE XREF: sub_14001D640+7B4A↓j
.text:000000014001741C                 jmp     loc_140041441

.text:0000000140041441 loc_140041441:                          ; CODE XREF: IoHandler_sub_140014450:loc_14001741C↑j
.text:0000000140041441                 sub     ecx, 16h
.text:0000000140041444                 jz      loc_140017F80
.text:000000014004144A                 jmp     loc_140011E35

	.text:0000000140011E35 loc_140011E35:                          ; CODE XREF: sub_140040C0A+840↓j
	.text:0000000140011E35                 sub     ecx, 1
	.text:0000000140011E38                 jz      loc_140017D48
	.text:0000000140011E3E                 jmp     loc_14000DA6D
	
		.text:000000014000DA6D loc_14000DA6D:                          ; CODE XREF: PreOb_sub_14000D9A0+449E↓j
		.text:000000014000DA6D                 sub     ecx, 1
		.text:000000014000DA70                 jz      loc_140017B08
		.text:000000014000DA76                 jmp     sub_140026457   ; [FUNCTION] sub_140026457
		
			.text:0000000140026457 ; =============== S U B R O U T I N E =======================================
			.text:0000000140026457
			.text:0000000140026457
			.text:0000000140026457 sub_140026457   proc near               ; CODE XREF: PreOb_sub_14000D9A0+D6↑j
			.text:0000000140026457                 sub     ecx, 1
			.text:000000014002645A                 jz      loc_1400178D0
			.text:0000000140026460                 jmp     loc_14001292B
			.text:0000000140026460 sub_140026457   endp
			
				.text:000000014001292B loc_14001292B:                          ; CODE XREF: sub_140026457+9↓j
				.text:000000014001292B                 sub     ecx, 1
				.text:000000014001292E                 jz      loc_140017695
				.text:0000000140012934                 jmp     loc_140025ECB
				
					.text:0000000140025ECB loc_140025ECB:                          ; CODE XREF: PreOb_sub_14000D9A0+4F94↑j
					.text:0000000140025ECB                 cmp     ecx, 1
					.text:0000000140025ECE                 jnz     loc_1400181CE
					.text:0000000140025ED4                 jmp     loc_14000EAEA
					
						.text:000000014000EAEA loc_14000EAEA:                          ; CODE XREF: sub_140025360+B74↓j
						.text:000000014000EAEA                 mov     rax, cs:P
						.text:000000014000EAF1                 mov     r10, 0AA2D145923EC7F30h
						.text:000000014000EAFB                 lea     rsi, cs:140000000h
						.text:000000014000EB02                 mov     r9, 0A25E5851D18A813Bh
						.text:000000014000EB0C                 mov     r12, 85BF37612CEE3C9Bh
						.text:000000014000EB16                 mov     r14, 0F0F0F0F0F0F0F0F1h
						.text:000000014000EB20                 lea     r15, unk_14002B760
						.text:000000014000EB27                 mov     r8, 0FFFFFFFF00000000h
						.text:000000014000EB31                 test    rax, rax
						.text:000000014000EB34                 jz      loc_14001820E
						.text:000000014000EB3A                 jmp     loc_140039B3A
						
							.text:0000000140039B3A loc_140039B3A:                          ; CODE XREF: PreOb_sub_14000D9A0+119A↑j
							.text:0000000140039B3A                 cmp     dword ptr [rax], 7D0h
							.text:0000000140039B40                 mov     rax, 2262427FC07A8175h
							.text:0000000140039B4A                 jnb     loc_1400181B8
							.text:0000000140039B50                 jmp     loc_140042C33
							
								.text:0000000140042C33 loc_140042C33:                          ; CODE XREF: sub_14001D640+7BE↑j
								.text:0000000140042C33                                         ; sub_14003800C+1B44↑j
								.text:0000000140042C33                 mov     [rsp+arg_28], r10
								.text:0000000140042C38                 mov     rcx, r13
								.text:0000000140042C3B                 mov     rbx, 4E5E0A72F0539783h
								.text:0000000140042C45                 mov     r11, 0F08DE3B14D94C2BFh
								.text:0000000140042C4F                 mov     edx, 99E15C84h
								.text:0000000140042C54                 mov     [rsp+arg_48], rdx
								.text:0000000140042C59                 jmp     loc_1400174DE
								
								.text:00000001400174DE loc_1400174DE:                          ; CODE XREF: sub_140040C0A+3F8↓j
								.text:00000001400174DE                                         ; sub_14004185D+13FC↓j
								.text:00000001400174DE                 jmp     loc_14003BBAA
								
								.text:000000014003BBAA loc_14003BBAA:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400174DE↑j
								.text:000000014003BBAA                 mov     [rsp+arg_170], rcx
								.text:000000014003BBB2                 imul    rcx, 7D0h
								.text:000000014003BBB9                 mul     rcx
								.text:000000014003BBBC                 mov     rax, rcx
								.text:000000014003BBBF                 sub     rax, rdx
								.text:000000014003BBC2                 shr     rax, 1
								.text:000000014003BBC5                 add     rax, rdx
								.text:000000014003BBC8                 shr     rax, 0Bh
								.text:000000014003BBCC                 imul    rax, 0E1Bh
								.text:000000014003BBD3                 sub     rcx, rax
								.text:000000014003BBD6                 imul    rdi, rcx, 0E1Bh
								.text:000000014003BBDD                 mov     rax, r11
								.text:000000014003BBE0                 mul     rdi
								.text:000000014003BBE3                 shr     rdx, 0Ch
								.text:000000014003BBE7                 imul    rax, rdx, 1107h
								.text:000000014003BBEE                 sub     rdi, rax
								.text:000000014003BBF1                 mov     rax, rbx
								.text:000000014003BBF4                 mul     rdi
								.text:000000014003BBF7                 mov     rax, rdi
								.text:000000014003BBFA                 sub     rax, rdx
								.text:000000014003BBFD                 shr     rax, 1
								.text:000000014003BC00                 add     rax, rdx
								.text:000000014003BC03                 shr     rax, 6
								.text:000000014003BC07                 imul    rcx, rax, 62h ; 'b'
								.text:000000014003BC0B                 mov     rax, 0A0A0A0A0A0A0A0A1h
								.text:000000014003BC15                 mul     rdi
								.text:000000014003BC18                 shr     rdx, 5
								.text:000000014003BC1C                 add     rcx, rdx
								.text:000000014003BC1F                 imul    rax, rcx, 66h ; 'f'
								.text:000000014003BC23                 imul    rcx, rdi, 68h ; 'h'
								.text:000000014003BC27                 sub     rcx, rax
								.text:000000014003BC2A                 movzx   eax, word ptr [rcx+rsi+29050h]
								.text:000000014003BC32                 imul    rcx, rax, 7D0h
								.text:000000014003BC39                 mov     rax, r9
								.text:000000014003BC3C                 mul     rcx
								.text:000000014003BC3F                 shr     rdx, 0Bh
								.text:000000014003BC43                 imul    rax, rdx, 0C9Dh
								.text:000000014003BC4A                 sub     rcx, rax
								.text:000000014003BC4D                 imul    rdi, rcx, 0E35h
								.text:000000014003BC54                 mov     rax, r9
								.text:000000014003BC57                 mul     rdi
								.text:000000014003BC5A                 shr     rdx, 0Bh
								.text:000000014003BC5E                 imul    rax, rdx, 0C9Dh
								.text:000000014003BC65                 sub     rdi, rax
								.text:000000014003BC68                 mov     rax, r12
								.text:000000014003BC6B                 mul     rdi
								.text:000000014003BC6E                 shr     rdx, 7
								.text:000000014003BC72                 imul    rcx, rdx, 0F5h ; 'õ'
								.text:000000014003BC79                 mov     rax, r14
								.text:000000014003BC7C                 mul     rdi
								.text:000000014003BC7F                 shr     rdx, 4
								.text:000000014003BC83                 add     rcx, rdx
								.text:000000014003BC86                 imul    rax, rcx, 88h ; 'ˆ'
								.text:000000014003BC8D                 lea     rcx, [rdi+rdi*8]
								.text:000000014003BC91                 shl     rcx, 4
								.text:000000014003BC95                 sub     rcx, rax
								.text:000000014003BC98                 add     rcx, r15
								.text:000000014003BC9B                 mov     [rsp+arg_30], rcx
								.text:000000014003BCA0                 mov     rdx, [rcx]
								.text:000000014003BCA3                 mov     rcx, rdx
								.text:000000014003BCA6                 rol     rcx, 4
								.text:000000014003BCAA                 mov     rdi, [rsp+arg_28]
								.text:000000014003BCAF                 shr     rdi, 20h
								.text:000000014003BCB3                 mov     rax, rdi
								.text:000000014003BCB6                 and     rax, [rsp+arg_48]
								.text:000000014003BCBB                 mov     [rsp+arg_40], rax
								.text:000000014003BCC0                 or      rdi, [rsp+arg_48]
								.text:000000014003BCC5                 sub     rdi, rax
								.text:000000014003BCC8                 mov     rax, rcx
								.text:000000014003BCCB                 not     rax
								.text:000000014003BCCE                 and     rax, 0FFFFFFFFFFFFFFFEh
								.text:000000014003BCD2                 add     rax, 2
								.text:000000014003BCD6                 add     rax, rcx
								.text:000000014003BCD9                 jz      loc_14001474A
								.text:000000014003BCDF                 jmp     loc_140017613
								
									.text:0000000140017613 loc_140017613:                          ; CODE XREF: sub_14003800C+3CD3↓j
									.text:0000000140017613                 jmp     loc_140016F23
									
									.text:0000000140016F23 loc_140016F23:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017613↓j
									.text:0000000140016F23                 mov     rcx, [rsp+arg_28]
									.text:0000000140016F28                 and     rcx, r8
									.text:0000000140016F2B                 mov     rax, 99E15C8400000000h
									.text:0000000140016F35                 or      rcx, rax
									.text:0000000140016F38                 mov     rax, [rsp+arg_40]
									.text:0000000140016F3D                 shl     rax, 20h
									.text:0000000140016F41                 sub     rcx, rax
									.text:0000000140016F44                 mov     rax, rdx
									.text:0000000140016F47                 shl     rax, 20h
									.text:0000000140016F4B                 or      rcx, rax
									.text:0000000140016F4E                 mov     rax, rdx
									.text:0000000140016F51                 and     rax, rdi
									.text:0000000140016F54                 shl     rax, 20h
									.text:0000000140016F58                 cmp     rcx, rax
									.text:0000000140016F5B                 jz      loc_140014740
									.text:0000000140016F61                 jmp     loc_1400170E7
									
										.text:00000001400170E7 loc_1400170E7:                          ; CODE XREF: IoHandler_sub_140014450+2B11↑j
										.text:00000001400170E7                 mov     rcx, rdx
										.text:00000001400170EA                 not     rcx
										.text:00000001400170ED                 mov     rdi, [rsp+arg_28]
										.text:00000001400170F2                 and     rcx, rdi
										.text:00000001400170F5                 mov     rax, rdi
										.text:00000001400170F8                 not     rax
										.text:00000001400170FB                 jmp     loc_140040FD7
										
										.text:0000000140040FD7 loc_140040FD7:                          ; CODE XREF: IoHandler_sub_140014450+2CAB↑j
										.text:0000000140040FD7                 or      rax, rdx
										.text:0000000140040FDA                 sub     rcx, rax
										.text:0000000140040FDD                 sub     rcx, rdi
										.text:0000000140040FE0                 lea     rax, [rdx-1]
										.text:0000000140040FE4                 lea     rax, [rax+rcx]
										.text:0000000140040FE8                 mov     [rsp+arg_28], rax
										.text:0000000140040FED                 mov     rcx, [rsp+arg_170]
										.text:0000000140040FF5                 inc     rcx
										.text:0000000140040FF8                 mov     rax, 2262427FC07A8175h
										.text:0000000140041002                 jmp     loc_1400174DE
							
							.text:00000001400181B8 loc_1400181B8:                          ; CODE XREF: sub_14003800C+1B3E↓j
							.text:00000001400181B8                                         ; sub_14003800C+209F↓j
							.text:00000001400181B8                 jmp     loc_14001A87B
							
							.text:000000014001A87B loc_14001A87B:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400181B8↑j
							.text:000000014001A87B                 mov     r11, 0EFFFFFFFFFFFFFFFh
							.text:000000014001A885                 mov     rbx, 1000000000000001h
							.text:000000014001A88F                 jmp     loc_14001822C
				
				.text:0000000140017695 loc_140017695:                          ; CODE XREF: PreOb_sub_14000D9A0+4F8E↑j
				.text:0000000140017695                 jmp     loc_14001AC8B
				
				.text:000000014001AC8B loc_14001AC8B:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017695↑j
				.text:000000014001AC8B                 mov     rax, cs:P
				.text:000000014001AC92                 mov     r10, 0AA2D145923EC7F30h
				.text:000000014001AC9C                 lea     rsi, cs:140000000h
				.text:000000014001ACA3                 mov     r9, 0A25E5851D18A813Bh
				.text:000000014001ACAD                 mov     r12, 85BF37612CEE3C9Bh
				.text:000000014001ACB7                 mov     r14, 0F0F0F0F0F0F0F0F1h
				.text:000000014001ACC1                 lea     r15, unk_14002B760
				.text:000000014001ACC8                 mov     r8, 0FFFFFFFF00000000h
				.text:000000014001ACD2                 test    rax, rax
				.text:000000014001ACD5                 jz      loc_14001820E
				.text:000000014001ACDB                 jmp     sub_14004413C ; [FUNCTION] sub_14004413C
				
					.text:000000014004413C ; =============== S U B R O U T I N E =======================================
					.text:000000014004413C
					.text:000000014004413C
					.text:000000014004413C sub_14004413C   proc near               ; CODE XREF: IoHandler_sub_140014450+688B↑j
					.text:000000014004413C                 cmp     dword ptr [rax], 7D0h
					.text:0000000140044142                 mov     rax, 2262427FC07A8175h
					.text:000000014004414C                 jnb     loc_140014797
					.text:0000000140044152                 jmp     loc_14003D6B3
					.text:0000000140044152 sub_14004413C   endp
					
						.text:000000014003D6B3 loc_14003D6B3:                          ; CODE XREF: sub_14004413C+16↓j
						.text:000000014003D6B3                 mov     [rsp+arg_28], r10
						.text:000000014003D6B8                 mov     rcx, r13
						.text:000000014003D6BB                 mov     rbx, 4E5E0A72F0539783h
						.text:000000014003D6C5                 mov     r11, 0F08DE3B14D94C2BFh
						.text:000000014003D6CF                 jmp     loc_140017717
						
						.text:0000000140017717 loc_140017717:                          ; CODE XREF: sub_14003800C+1EE4↓j
						.text:0000000140017717                                         ; sub_14003800C+56C3↓j
						.text:0000000140017717                 jmp     loc_140010461
						
						.text:0000000140010461 loc_140010461:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017717↓j
						.text:0000000140010461                 mov     [rsp+arg_178], rcx
						.text:0000000140010469                 imul    rcx, 7D0h
						.text:0000000140010470                 mul     rcx
						.text:0000000140010473                 mov     rax, rcx
						.text:0000000140010476                 sub     rax, rdx
						.text:0000000140010479                 shr     rax, 1
						.text:000000014001047C                 add     rax, rdx
						.text:000000014001047F                 shr     rax, 0Bh
						.text:0000000140010483                 imul    rax, 0E1Bh
						.text:000000014001048A                 sub     rcx, rax
						.text:000000014001048D                 imul    rdi, rcx, 0E1Bh
						.text:0000000140010494                 mov     rax, r11
						.text:0000000140010497                 mul     rdi
						.text:000000014001049A                 shr     rdx, 0Ch
						.text:000000014001049E                 imul    rax, rdx, 1107h
						.text:00000001400104A5                 sub     rdi, rax
						.text:00000001400104A8                 mov     rax, rbx
						.text:00000001400104AB                 mul     rdi
						.text:00000001400104AE                 mov     rax, rdi
						.text:00000001400104B1                 sub     rax, rdx
						.text:00000001400104B4                 shr     rax, 1
						.text:00000001400104B7                 add     rax, rdx
						.text:00000001400104BA                 shr     rax, 6
						.text:00000001400104BE                 imul    rcx, rax, 62h ; 'b'
						.text:00000001400104C2                 mov     rax, 0A0A0A0A0A0A0A0A1h
						.text:00000001400104CC                 mul     rdi
						.text:00000001400104CF                 shr     rdx, 5
						.text:00000001400104D3                 add     rcx, rdx
						.text:00000001400104D6                 imul    rax, rcx, 66h ; 'f'
						.text:00000001400104DA                 imul    rcx, rdi, 68h ; 'h'
						.text:00000001400104DE                 sub     rcx, rax
						.text:00000001400104E1                 movzx   eax, word ptr [rcx+rsi+29050h]
						.text:00000001400104E9                 imul    rcx, rax, 7D0h
						.text:00000001400104F0                 mov     rax, r9
						.text:00000001400104F3                 mul     rcx
						.text:00000001400104F6                 shr     rdx, 0Bh
						.text:00000001400104FA                 imul    rax, rdx, 0C9Dh
						.text:0000000140010501                 sub     rcx, rax
						.text:0000000140010504                 imul    rdi, rcx, 0E35h
						.text:000000014001050B                 mov     rax, r9
						.text:000000014001050E                 mul     rdi
						.text:0000000140010511                 shr     rdx, 0Bh
						.text:0000000140010515                 imul    rax, rdx, 0C9Dh
						.text:000000014001051C                 sub     rdi, rax
						.text:000000014001051F                 mov     rax, r12
						.text:0000000140010522                 mul     rdi
						.text:0000000140010525                 shr     rdx, 7
						.text:0000000140010529                 imul    rcx, rdx, 0F5h ; 'õ'
						.text:0000000140010530                 mov     rax, r14
						.text:0000000140010533                 mul     rdi
						.text:0000000140010536                 shr     rdx, 4
						.text:000000014001053A                 add     rcx, rdx
						.text:000000014001053D                 imul    rax, rcx, 88h ; 'ˆ'
						.text:0000000140010544                 lea     rcx, [rdi+rdi*8]
						.text:0000000140010548                 shl     rcx, 4
						.text:000000014001054C                 sub     rcx, rax
						.text:000000014001054F                 add     rcx, r15
						.text:0000000140010552                 mov     [rsp+ByteOffset], rcx
						.text:0000000140010557                 mov     rdx, [rcx]
						.text:000000014001055A                 mov     rcx, rdx
						.text:000000014001055D                 rol     rcx, 4
						.text:0000000140010561                 mov     rdi, qword ptr [rsp+Length]
						.text:0000000140010566                 shr     rdi, 20h
						.text:000000014001056A                 mov     rax, rdi
						.text:000000014001056D                 and     eax, 7B9B1527h
						.text:0000000140010572                 mov     [rsp+arg_40], rax
						.text:0000000140010577                 or      rdi, 7B9B1527h
						.text:000000014001057E                 sub     rdi, rax
						.text:0000000140010581                 mov     rax, rcx
						.text:0000000140010584                 not     rax
						.text:0000000140010587                 and     rax, 0FFFFFFFFFFFFFFFEh
						.text:000000014001058B                 add     rax, 2
						.text:000000014001058F                 add     rax, rcx
						.text:0000000140010592                 jz      loc_14001474A
						.text:0000000140010598                 jmp     loc_14001784E
						
							.text:000000014001784E loc_14001784E:                          ; CODE XREF: PreOb_sub_14000D9A0+2BF8↑j
							.text:000000014001784E                 jmp     sub_140044429 ; [FUNCTION] sub_140044429
							
							.text:0000000140044429 ; =============== S U B R O U T I N E =======================================
							.text:0000000140044429
							.text:0000000140044429
							.text:0000000140044429 sub_140044429   proc near               ; CODE XREF: IoHandler_sub_140014450:loc_14001784E↑j
							.text:0000000140044429
							.text:0000000140044429 arg_28          = qword ptr  30h
							.text:0000000140044429 arg_40          = qword ptr  48h
							.text:0000000140044429
							.text:0000000140044429                 mov     rcx, [rsp+arg_28]
							.text:000000014004442E                 and     rcx, r8
							.text:0000000140044431                 mov     rax, 7B9B152700000000h
							.text:000000014004443B                 or      rcx, rax
							.text:000000014004443E                 mov     rax, [rsp+arg_40]
							.text:0000000140044443                 shl     rax, 20h
							.text:0000000140044447                 sub     rcx, rax
							.text:000000014004444A                 mov     rax, rdx
							.text:000000014004444D                 shl     rax, 20h
							.text:0000000140044451                 or      rcx, rax
							.text:0000000140044454                 mov     rax, rdx
							.text:0000000140044457                 and     rax, rdi
							.text:000000014004445A                 shl     rax, 20h
							.text:000000014004445E                 cmp     rcx, rax
							.text:0000000140044461                 jz      loc_140014740
							.text:0000000140044467                 jmp     loc_140039EB1
							.text:0000000140044467 sub_140044429   endp
							
								.text:0000000140039EB1 loc_140039EB1:                          ; CODE XREF: sub_140044429+3E↓j
								.text:0000000140039EB1                 mov     rcx, rdx
								.text:0000000140039EB4                 not     rcx
								.text:0000000140039EB7                 mov     rdi, [rsp+arg_28]
								.text:0000000140039EBC                 and     rcx, rdi
								.text:0000000140039EBF                 mov     rax, rdi
								.text:0000000140039EC2                 not     rax
								.text:0000000140039EC5                 or      rax, rdx
								.text:0000000140039EC8                 sub     rcx, rax
								.text:0000000140039ECB                 sub     rcx, rdi
								.text:0000000140039ECE                 lea     rax, [rdx-1]
								.text:0000000140039ED2                 lea     rax, [rax+rcx]
								.text:0000000140039ED6                 mov     [rsp+arg_28], rax
								.text:0000000140039EDB                 mov     rcx, [rsp+arg_178]
								.text:0000000140039EE3                 inc     rcx
								.text:0000000140039EE6                 mov     rax, 2262427FC07A8175h
								.text:0000000140039EF0                 jmp     loc_140017717
			
			.text:00000001400178D0 loc_1400178D0:                          ; CODE XREF: sub_140026457+3↓j
			.text:00000001400178D0                 jmp     loc_14001BA31
			
			.text:000000014001BA31 loc_14001BA31:                          ; CODE XREF: IoHandler_sub_140014450:loc_1400178D0↑j
			.text:000000014001BA31                 mov     rax, cs:P
			.text:000000014001BA38                 mov     r10, 0AA2D145923EC7F30h
			.text:000000014001BA42                 lea     rsi, cs:140000000h
			.text:000000014001BA49                 mov     r9, 0A25E5851D18A813Bh
			.text:000000014001BA53                 mov     r12, 85BF37612CEE3C9Bh
			.text:000000014001BA5D                 mov     r14, 0F0F0F0F0F0F0F0F1h
			.text:000000014001BA67                 lea     r15, unk_14002B760
			.text:000000014001BA6E                 mov     r8, 0FFFFFFFF00000000h
			.text:000000014001BA78                 test    rax, rax
			.text:000000014001BA7B                 jz      loc_14001820E
			.text:000000014001BA81                 jmp     loc_14003C5A5
			
				.text:000000014003C5A5 loc_14003C5A5:                          ; CODE XREF: IoHandler_sub_140014450+7631↑j
				.text:000000014003C5A5                 cmp     dword ptr [rax], 7D0h
				.text:000000014003C5AB                 mov     rax, 2262427FC07A8175h
				.text:000000014003C5B5                 jnb     loc_140014797
				.text:000000014003C5BB                 jmp     loc_1400138C2
				
					.text:00000001400138C2 loc_1400138C2:                          ; CODE XREF: sub_14003800C+45AF↓j
					.text:00000001400138C2                 mov     qword ptr [rsp+Length], r10
					.text:00000001400138C7                 mov     rcx, r13
					.text:00000001400138CA                 mov     rbx, 4E5E0A72F0539783h
					.text:00000001400138D4                 mov     r11, 0F08DE3B14D94C2BFh
					.text:00000001400138DE                 jmp     loc_140017952
					
					.text:0000000140017952 loc_140017952:                          ; CODE XREF: PreOb_sub_14000D9A0+5F3E↑j
					.text:0000000140017952                                         ; sub_14003DD84+A12↓j
					.text:0000000140017952                 jmp     loc_14001059D
					
					.text:000000014001059D loc_14001059D:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017952↓j
					.text:000000014001059D                 mov     [rsp+arg_180], rcx
					.text:00000001400105A5                 imul    rcx, 7D0h
					.text:00000001400105AC                 mul     rcx
					.text:00000001400105AF                 mov     rax, rcx
					.text:00000001400105B2                 sub     rax, rdx
					.text:00000001400105B5                 shr     rax, 1
					.text:00000001400105B8                 add     rax, rdx
					.text:00000001400105BB                 shr     rax, 0Bh
					.text:00000001400105BF                 imul    rax, 0E1Bh
					.text:00000001400105C6                 sub     rcx, rax
					.text:00000001400105C9                 imul    rdi, rcx, 0E1Bh
					.text:00000001400105D0                 mov     rax, r11
					.text:00000001400105D3                 mul     rdi
					.text:00000001400105D6                 shr     rdx, 0Ch
					.text:00000001400105DA                 imul    rax, rdx, 1107h
					.text:00000001400105E1                 sub     rdi, rax
					.text:00000001400105E4                 mov     rax, rbx
					.text:00000001400105E7                 mul     rdi
					.text:00000001400105EA                 mov     rax, rdi
					.text:00000001400105ED                 sub     rax, rdx
					.text:00000001400105F0                 shr     rax, 1
					.text:00000001400105F3                 add     rax, rdx
					.text:00000001400105F6                 shr     rax, 6
					.text:00000001400105FA                 imul    rcx, rax, 62h ; 'b'
					.text:00000001400105FE                 mov     rax, 0A0A0A0A0A0A0A0A1h
					.text:0000000140010608                 mul     rdi
					.text:000000014001060B                 shr     rdx, 5
					.text:000000014001060F                 add     rcx, rdx
					.text:0000000140010612                 imul    rax, rcx, 66h ; 'f'
					.text:0000000140010616                 imul    rcx, rdi, 68h ; 'h'
					.text:000000014001061A                 sub     rcx, rax
					.text:000000014001061D                 movzx   eax, word ptr [rcx+rsi+29050h]
					.text:0000000140010625                 imul    rcx, rax, 7D0h
					.text:000000014001062C                 mov     rax, r9
					.text:000000014001062F                 mul     rcx
					.text:0000000140010632                 shr     rdx, 0Bh
					.text:0000000140010636                 imul    rax, rdx, 0C9Dh
					.text:000000014001063D                 sub     rcx, rax
					.text:0000000140010640                 imul    rdi, rcx, 0E35h
					.text:0000000140010647                 mov     rax, r9
					.text:000000014001064A                 mul     rdi
					.text:000000014001064D                 shr     rdx, 0Bh
					.text:0000000140010651                 imul    rax, rdx, 0C9Dh
					.text:0000000140010658                 sub     rdi, rax
					.text:000000014001065B                 mov     rax, r12
					.text:000000014001065E                 mul     rdi
					.text:0000000140010661                 shr     rdx, 7
					.text:0000000140010665                 imul    rcx, rdx, 0F5h ; 'õ'
					.text:000000014001066C                 mov     rax, r14
					.text:000000014001066F                 mul     rdi
					.text:0000000140010672                 shr     rdx, 4
					.text:0000000140010676                 add     rcx, rdx
					.text:0000000140010679                 imul    rax, rcx, 88h ; 'ˆ'
					.text:0000000140010680                 lea     rcx, [rdi+rdi*8]
					.text:0000000140010684                 shl     rcx, 4
					.text:0000000140010688                 sub     rcx, rax
					.text:000000014001068B                 add     rcx, r15
					.text:000000014001068E                 mov     [rsp+ByteOffset], rcx
					.text:0000000140010693                 mov     rdi, [rcx]
					.text:0000000140010696                 mov     rcx, rdi
					.text:0000000140010699                 rol     rcx, 4
					.text:000000014001069D                 mov     rdx, qword ptr [rsp+Length]
					.text:00000001400106A2                 shr     rdx, 20h
					.text:00000001400106A6                 mov     rax, rdx
					.text:00000001400106A9                 and     eax, 4021BAB6h
					.text:00000001400106AE                 mov     [rsp+arg_40], rax
					.text:00000001400106B3                 or      rdx, 4021BAB6h
					.text:00000001400106BA                 sub     rdx, rax
					.text:00000001400106BD                 mov     rax, rcx
					.text:00000001400106C0                 not     rax
					.text:00000001400106C3                 and     rax, 0FFFFFFFFFFFFFFFEh
					.text:00000001400106C7                 add     rax, 2
					.text:00000001400106CB                 add     rax, rcx
					.text:00000001400106CE                 jz      loc_140014F99
					.text:00000001400106D4                 jmp     loc_140017A89
					
						.text:0000000140017A89 loc_140017A89:                          ; CODE XREF: PreOb_sub_14000D9A0+2D34↑j
						.text:0000000140017A89                 jmp     loc_14003B5B0
						
						.text:000000014003B5B0 loc_14003B5B0:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017A89↑j
						.text:000000014003B5B0                 mov     rcx, [rsp+arg_28]
						.text:000000014003B5B5                 and     rcx, r8
						.text:000000014003B5B8                 mov     rax, 4021BAB600000000h
						.text:000000014003B5C2                 or      rcx, rax
						.text:000000014003B5C5                 mov     rax, [rsp+arg_40]
						.text:000000014003B5CA                 shl     rax, 20h
						.text:000000014003B5CE                 sub     rcx, rax
						.text:000000014003B5D1                 mov     rax, rdi
						.text:000000014003B5D4                 shl     rax, 20h
						.text:000000014003B5D8                 jmp     loc_14002317A
						
						.text:000000014002317A loc_14002317A:                          ; CODE XREF: sub_14003800C+35CC↓j
						.text:000000014002317A                 or      rcx, rax
						.text:000000014002317D                 and     rdx, rdi
						.text:0000000140023180                 shl     rdx, 20h
						.text:0000000140023184                 cmp     rcx, rdx
						.text:0000000140023187                 jz      loc_140014740
						.text:000000014002318D                 jmp     loc_140014BB2
						
							.text:0000000140014BB2 loc_140014BB2:                          ; CODE XREF: sub_14001D640+5B4D↓j
							.text:0000000140014BB2                 mov     rcx, rdi
							.text:0000000140014BB5                 not     rcx
							.text:0000000140014BB8                 mov     rdx, [rsp+arg_28]
							.text:0000000140014BBD                 jmp     loc_14001338A
							
							.text:000000014001338A loc_14001338A:                          ; CODE XREF: IoHandler_sub_140014450+76D↓j
							.text:000000014001338A                 and     rcx, rdx
							.text:000000014001338D                 mov     rax, rdx
							.text:0000000140013390                 not     rax
							.text:0000000140013393                 or      rax, rdi
							.text:0000000140013396                 sub     rcx, rax
							.text:0000000140013399                 sub     rcx, rdx
							.text:000000014001339C                 lea     rax, [rdi-1]
							.text:00000001400133A0                 jmp     loc_14003E778
							
							.text:000000014003E778 loc_14003E778:                          ; CODE XREF: PreOb_sub_14000D9A0+5A00↑j
							.text:000000014003E778                 lea     rax, [rax+rcx]
							.text:000000014003E77C                 mov     [rsp+arg_28], rax
							.text:000000014003E781                 mov     rcx, [rsp+arg_180]
							.text:000000014003E789                 inc     rcx
							.text:000000014003E78C                 mov     rax, 2262427FC07A8175h
							.text:000000014003E796                 jmp     loc_140017952
		
		.text:0000000140017B08 loc_140017B08:                          ; CODE XREF: PreOb_sub_14000D9A0+D0↑j
		.text:0000000140017B08                 jmp     loc_14003856A
		
		.text:000000014003856A loc_14003856A:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017B08↑j
		.text:000000014003856A                 mov     rax, cs:P
		.text:0000000140038571                 mov     r10, 0AA2D145923EC7F30h
		.text:000000014003857B                 lea     rsi, cs:140000000h
		.text:0000000140038582                 mov     r9, 0A25E5851D18A813Bh
		.text:000000014003858C                 mov     r12, 85BF37612CEE3C9Bh
		.text:0000000140038596                 mov     r14, 0F0F0F0F0F0F0F0F1h
		.text:00000001400385A0                 lea     r15, unk_14002B760
		.text:00000001400385A7                 mov     r8, 0FFFFFFFF00000000h
		.text:00000001400385B1                 test    rax, rax
		.text:00000001400385B4                 jz      loc_14001820E
		.text:00000001400385BA                 jmp     loc_14000DF4E
		
			.text:000000014000DF4E loc_14000DF4E:                          ; CODE XREF: sub_14003800C+5AE↓j
			.text:000000014000DF4E                 cmp     dword ptr [rax], 7D0h
			.text:000000014000DF54                 mov     rax, 2262427FC07A8175h
			.text:000000014000DF5E                 jnb     loc_140014797
			.text:000000014000DF64                 jmp     loc_1400404EC
			
				.text:00000001400404EC loc_1400404EC:                          ; CODE XREF: PreOb_sub_14000D9A0+5C4↑j
				.text:00000001400404EC                 mov     [rsp+arg_28], r10
				.text:00000001400404F1                 mov     rcx, r13
				.text:00000001400404F4                 mov     rbx, 4E5E0A72F0539783h
				.text:00000001400404FE                 mov     r11, 0F08DE3B14D94C2BFh
				.text:0000000140040508                 mov     edx, 0D84E2215h
				.text:000000014004050D                 mov     [rsp+arg_48], rdx
				.text:0000000140040512                 jmp     loc_140017B94
				
				.text:0000000140017B94 loc_140017B94:                          ; CODE XREF: PreOb_sub_14000D9A0+560D↑j
				.text:0000000140017B94                                         ; sub_14003DD84+278E↓j
				.text:0000000140017B94                 jmp     loc_14000F4D8
				
				.text:000000014000F4D8 loc_14000F4D8:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017B94↓j
				.text:000000014000F4D8                 mov     [rsp+arg_188], rcx
				.text:000000014000F4E0                 imul    rcx, 7D0h
				.text:000000014000F4E7                 mul     rcx
				.text:000000014000F4EA                 mov     rax, rcx
				.text:000000014000F4ED                 sub     rax, rdx
				.text:000000014000F4F0                 shr     rax, 1
				.text:000000014000F4F3                 add     rax, rdx
				.text:000000014000F4F6                 shr     rax, 0Bh
				.text:000000014000F4FA                 imul    rax, 0E1Bh
				.text:000000014000F501                 sub     rcx, rax
				.text:000000014000F504                 imul    rdi, rcx, 0E1Bh
				.text:000000014000F50B                 mov     rax, r11
				.text:000000014000F50E                 mul     rdi
				.text:000000014000F511                 shr     rdx, 0Ch
				.text:000000014000F515                 imul    rax, rdx, 1107h
				.text:000000014000F51C                 sub     rdi, rax
				.text:000000014000F51F                 mov     rax, rbx
				.text:000000014000F522                 mul     rdi
				.text:000000014000F525                 mov     rax, rdi
				.text:000000014000F528                 sub     rax, rdx
				.text:000000014000F52B                 shr     rax, 1
				.text:000000014000F52E                 add     rax, rdx
				.text:000000014000F531                 shr     rax, 6
				.text:000000014000F535                 imul    rcx, rax, 62h ; 'b'
				.text:000000014000F539                 mov     rax, 0A0A0A0A0A0A0A0A1h
				.text:000000014000F543                 mul     rdi
				.text:000000014000F546                 shr     rdx, 5
				.text:000000014000F54A                 add     rcx, rdx
				.text:000000014000F54D                 imul    rax, rcx, 66h ; 'f'
				.text:000000014000F551                 imul    rcx, rdi, 68h ; 'h'
				.text:000000014000F555                 sub     rcx, rax
				.text:000000014000F558                 movzx   eax, word ptr [rcx+rsi+29050h]
				.text:000000014000F560                 imul    rcx, rax, 7D0h
				.text:000000014000F567                 mov     rax, r9
				.text:000000014000F56A                 mul     rcx
				.text:000000014000F56D                 shr     rdx, 0Bh
				.text:000000014000F571                 imul    rax, rdx, 0C9Dh
				.text:000000014000F578                 sub     rcx, rax
				.text:000000014000F57B                 imul    rdi, rcx, 0E35h
				.text:000000014000F582                 mov     rax, r9
				.text:000000014000F585                 mul     rdi
				.text:000000014000F588                 shr     rdx, 0Bh
				.text:000000014000F58C                 imul    rax, rdx, 0C9Dh
				.text:000000014000F593                 sub     rdi, rax
				.text:000000014000F596                 mov     rax, r12
				.text:000000014000F599                 mul     rdi
				.text:000000014000F59C                 shr     rdx, 7
				.text:000000014000F5A0                 imul    rcx, rdx, 0F5h ; 'õ'
				.text:000000014000F5A7                 mov     rax, r14
				.text:000000014000F5AA                 mul     rdi
				.text:000000014000F5AD                 shr     rdx, 4
				.text:000000014000F5B1                 add     rcx, rdx
				.text:000000014000F5B4                 imul    rax, rcx, 88h ; 'ˆ'
				.text:000000014000F5BB                 lea     rcx, [rdi+rdi*8]
				.text:000000014000F5BF                 shl     rcx, 4
				.text:000000014000F5C3                 sub     rcx, rax
				.text:000000014000F5C6                 add     rcx, r15
				.text:000000014000F5C9                 mov     [rsp+ByteOffset], rcx
				.text:000000014000F5CE                 mov     rdi, [rcx]
				.text:000000014000F5D1                 mov     rcx, rdi
				.text:000000014000F5D4                 rol     rcx, 4
				.text:000000014000F5D8                 mov     rdx, qword ptr [rsp+Length]
				.text:000000014000F5DD                 shr     rdx, 20h
				.text:000000014000F5E1                 mov     rax, rdx
				.text:000000014000F5E4                 and     rax, [rsp+arg_48]
				.text:000000014000F5E9                 mov     [rsp+arg_40], rax
				.text:000000014000F5EE                 or      rdx, [rsp+arg_48]
				.text:000000014000F5F3                 sub     rdx, rax
				.text:000000014000F5F6                 mov     rax, rcx
				.text:000000014000F5F9                 not     rax
				.text:000000014000F5FC                 and     rax, 0FFFFFFFFFFFFFFFEh
				.text:000000014000F600                 add     rax, 2
				.text:000000014000F604                 add     rax, rcx
				.text:000000014000F607                 jz      loc_140014F99
				.text:000000014000F60D                 jmp     loc_140017CC9
				
					.text:0000000140017CC9 loc_140017CC9:                          ; CODE XREF: PreOb_sub_14000D9A0+1C6D↑j
					.text:0000000140017CC9                 jmp     loc_1400391D3
					
					.text:00000001400391D3 loc_1400391D3:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017CC9↑j
					.text:00000001400391D3                 mov     rcx, [rsp+arg_28]
					.text:00000001400391D8                 and     rcx, r8
					.text:00000001400391DB                 mov     rax, 0D84E221500000000h
					.text:00000001400391E5                 or      rcx, rax
					.text:00000001400391E8                 mov     rax, [rsp+arg_40]
					.text:00000001400391ED                 shl     rax, 20h
					.text:00000001400391F1                 sub     rcx, rax
					.text:00000001400391F4                 mov     rax, rdi
					.text:00000001400391F7                 shl     rax, 20h
					.text:00000001400391FB                 or      rcx, rax
					.text:00000001400391FE                 jmp     loc_14001514B
					
					.text:000000014001514B loc_14001514B:                          ; CODE XREF: sub_14003800C+11F2↓j
					.text:000000014001514B                 and     rdx, rdi
					.text:000000014001514E                 shl     rdx, 20h
					.text:0000000140015152                 cmp     rcx, rdx
					.text:0000000140015155                 jz      loc_140014740
					.text:000000014001515B                 jmp     loc_140012F6E
					
						.text:0000000140012F6E loc_140012F6E:                          ; CODE XREF: IoHandler_sub_140014450+D0B↓j
						.text:0000000140012F6E                 mov     rcx, rdi
						.text:0000000140012F71                 not     rcx
						.text:0000000140012F74                 mov     rdx, qword ptr [rsp+Length]
						.text:0000000140012F79                 and     rcx, rdx
						.text:0000000140012F7C                 mov     rax, rdx
						.text:0000000140012F7F                 not     rax
						.text:0000000140012F82                 or      rax, rdi
						.text:0000000140012F85                 sub     rcx, rax
						.text:0000000140012F88                 sub     rcx, rdx
						.text:0000000140012F8B                 lea     rax, [rdi-1]
						.text:0000000140012F8F                 lea     rax, [rax+rcx]
						.text:0000000140012F93                 mov     qword ptr [rsp+Length], rax
						.text:0000000140012F98                 mov     rcx, [rsp+arg_188]
						.text:0000000140012FA0                 inc     rcx
						.text:0000000140012FA3                 mov     rax, 2262427FC07A8175h
						.text:0000000140012FAD                 jmp     loc_140017B94
	
	.text:0000000140017D48 loc_140017D48:                          ; CODE XREF: PreOb_sub_14000D9A0+4498↑j
	.text:0000000140017D48                 jmp     loc_140015416
	
	.text:0000000140015416 loc_140015416:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017D48↓j
	.text:0000000140015416                 mov     rax, cs:P
	.text:000000014001541D                 mov     r10, 0AA2D145923EC7F30h
	.text:0000000140015427                 lea     rsi, cs:140000000h
	.text:000000014001542E                 mov     r9, 0A25E5851D18A813Bh
	.text:0000000140015438                 mov     r12, 85BF37612CEE3C9Bh
	.text:0000000140015442                 mov     r14, 0F0F0F0F0F0F0F0F1h
	.text:000000014001544C                 lea     r15, unk_14002B760
	.text:0000000140015453                 mov     r8, 0FFFFFFFF00000000h
	.text:000000014001545D                 test    rax, rax
	.text:0000000140015460                 jz      loc_14001820E
	.text:0000000140015466                 jmp     loc_140010F97
	
		.text:0000000140010F97 loc_140010F97:                          ; CODE XREF: IoHandler_sub_140014450+1016↓j
		.text:0000000140010F97                 cmp     dword ptr [rax], 7D0h
		.text:0000000140010F9D                 mov     rax, 2262427FC07A8175h
		.text:0000000140010FA7                 jnb     loc_140014797
		.text:0000000140010FAD                 jmp     loc_140014F55
		
			.text:0000000140014F55 loc_140014F55:                          ; CODE XREF: PreOb_sub_14000D9A0+360D↑j
			.text:0000000140014F55                 mov     [rsp+arg_28], r10
			.text:0000000140014F5A                 mov     rcx, r13
			.text:0000000140014F5D                 mov     rbx, 4E5E0A72F0539783h
			.text:0000000140014F67                 mov     r11, 0F08DE3B14D94C2BFh
			.text:0000000140014F71                 jmp     loc_140017DCA
			
			.text:0000000140017DCA loc_140017DCA:                          ; CODE XREF: IoHandler_sub_140014450+B21↑j
			.text:0000000140017DCA                                         ; sub_14003DD84+3F7↓j
			.text:0000000140017DCA                 jmp     loc_1400134C5
			
			.text:00000001400134C5 loc_1400134C5:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017DCA↓j
			.text:00000001400134C5                 mov     [rsp+arg_190], rcx
			.text:00000001400134CD                 imul    rcx, 7D0h
			.text:00000001400134D4                 mul     rcx
			.text:00000001400134D7                 mov     rax, rcx
			.text:00000001400134DA                 sub     rax, rdx
			.text:00000001400134DD                 shr     rax, 1
			.text:00000001400134E0                 add     rax, rdx
			.text:00000001400134E3                 shr     rax, 0Bh
			.text:00000001400134E7                 jmp     loc_14001505D
			
			.text:000000014001505D loc_14001505D:                          ; CODE XREF: PreOb_sub_14000D9A0+5B47↑j
			.text:000000014001505D                 imul    rax, 0E1Bh
			.text:0000000140015064                 sub     rcx, rax
			.text:0000000140015067                 imul    rdi, rcx, 0E1Bh
			.text:000000014001506E                 mov     rax, r11
			.text:0000000140015071                 mul     rdi
			.text:0000000140015074                 shr     rdx, 0Ch
			.text:0000000140015078                 imul    rax, rdx, 1107h
			.text:000000014001507F                 jmp     loc_140041B07
			
			.text:0000000140041B07 loc_140041B07:                          ; CODE XREF: IoHandler_sub_140014450+C2F↑j
			.text:0000000140041B07                 sub     rdi, rax
			.text:0000000140041B0A                 mov     rax, rbx
			.text:0000000140041B0D                 mul     rdi
			.text:0000000140041B10                 mov     rax, rdi
			.text:0000000140041B13                 sub     rax, rdx
			.text:0000000140041B16                 jmp     loc_14001BE59
			
			.text:000000014001BE59 loc_14001BE59:                          ; CODE XREF: sub_14004185D+2B9↓j
			.text:000000014001BE59                 shr     rax, 1
			.text:000000014001BE5C                 add     rax, rdx
			.text:000000014001BE5F                 shr     rax, 6
			.text:000000014001BE63                 imul    rcx, rax, 62h ; 'b'
			.text:000000014001BE67                 mov     rax, 0A0A0A0A0A0A0A0A1h
			.text:000000014001BE71                 jmp     loc_14001F068
			
			.text:000000014001F068 loc_14001F068:                          ; CODE XREF: IoHandler_sub_140014450+7A21↑j
			.text:000000014001F068                 mul     rdi
			.text:000000014001F06B                 jmp     loc_14000F412
			
			.text:000000014000F412 loc_14000F412:                          ; CODE XREF: sub_14001D640+1A2B↓j
			.text:000000014000F412                 shr     rdx, 5
			.text:000000014000F416                 add     rcx, rdx
			.text:000000014000F419                 imul    rax, rcx, 66h ; 'f'
			.text:000000014000F41D                 jmp     loc_14003C66F
			
			.text:000000014003C66F loc_14003C66F:                          ; CODE XREF: PreOb_sub_14000D9A0+1A7D↑j
			.text:000000014003C66F                 imul    rcx, rdi, 68h ; 'h'
			.text:000000014003C673                 sub     rcx, rax
			.text:000000014003C676                 movzx   eax, word ptr [rcx+rsi+29050h]
			.text:000000014003C67E                 imul    rcx, rax, 7D0h
			.text:000000014003C685                 mov     rax, r9
			.text:000000014003C688                 mul     rcx
			.text:000000014003C68B                 shr     rdx, 0Bh
			.text:000000014003C68F                 imul    rax, rdx, 0C9Dh
			.text:000000014003C696                 sub     rcx, rax
			.text:000000014003C699                 jmp     loc_14000FFF7
			
			.text:000000014000FFF7 loc_14000FFF7:                          ; CODE XREF: sub_14003800C+468D↓j
			.text:000000014000FFF7                 imul    rdi, rcx, 0E35h
			.text:000000014000FFFE                 mov     rax, r9
			.text:0000000140010001                 mul     rdi
			.text:0000000140010004                 shr     rdx, 0Bh
			.text:0000000140010008                 imul    rax, rdx, 0C9Dh
			.text:000000014001000F                 sub     rdi, rax
			.text:0000000140010012                 mov     rax, r12
			.text:0000000140010015                 mul     rdi
			.text:0000000140010018                 shr     rdx, 7
			.text:000000014001001C                 imul    rcx, rdx, 0F5h ; 'õ'
			.text:0000000140010023                 jmp     loc_14003ABB4
			
			.text:000000014003ABB4 loc_14003ABB4:                          ; CODE XREF: PreOb_sub_14000D9A0+2683↑j
			.text:000000014003ABB4                 mov     rax, r14
			.text:000000014003ABB7                 mul     rdi
			.text:000000014003ABBA                 shr     rdx, 4
			.text:000000014003ABBE                 add     rcx, rdx
			.text:000000014003ABC1                 imul    rax, rcx, 88h ; 'ˆ'
			.text:000000014003ABC8                 lea     rcx, [rdi+rdi*8]
			.text:000000014003ABCC                 shl     rcx, 4
			.text:000000014003ABD0                 sub     rcx, rax
			.text:000000014003ABD3                 add     rcx, r15
			.text:000000014003ABD6                 mov     [rsp+arg_30], rcx
			.text:000000014003ABDB                 jmp     loc_140042860
			
			.text:0000000140042860 loc_140042860:                          ; CODE XREF: sub_14003800C+2BCF↑j
			.text:0000000140042860                 mov     rdi, [rcx]
			.text:0000000140042863                 mov     rcx, rdi
			.text:0000000140042866                 rol     rcx, 4
			.text:000000014004286A                 mov     rdx, [rsp+arg_28]
			.text:000000014004286F                 shr     rdx, 20h
			.text:0000000140042873                 mov     rax, rdx
			.text:0000000140042876                 and     eax, 16B0524Dh
			.text:000000014004287B                 mov     [rsp+arg_40], rax
			.text:0000000140042880                 jmp     loc_14003864C
			
			.text:000000014003864C loc_14003864C:                          ; CODE XREF: sub_14004185D+1023↓j
			.text:000000014003864C                 or      rdx, 16B0524Dh
			.text:0000000140038653                 sub     rdx, rax
			.text:0000000140038656                 mov     rax, rcx
			.text:0000000140038659                 not     rax
			.text:000000014003865C                 and     rax, 0FFFFFFFFFFFFFFFEh
			.text:0000000140038660                 add     rax, 2
			.text:0000000140038664                 add     rax, rcx
			.text:0000000140038667                 jz      loc_140014F99
			.text:000000014003866D                 jmp     loc_140017F01
			
				.text:0000000140017F01 loc_140017F01:                          ; CODE XREF: sub_14003800C+661↓j
				.text:0000000140017F01                 jmp     loc_140013A25
				
				.text:0000000140013A25 loc_140013A25:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017F01↓j
				.text:0000000140013A25                 mov     rcx, qword ptr [rsp+Length]
				.text:0000000140013A2A                 and     rcx, r8
				.text:0000000140013A2D                 mov     rax, 16B0524D00000000h
				.text:0000000140013A37                 or      rcx, rax
				.text:0000000140013A3A                 mov     rax, [rsp+arg_40]
				.text:0000000140013A3F                 shl     rax, 20h
				.text:0000000140013A43                 sub     rcx, rax
				.text:0000000140013A46                 mov     rax, rdi
				.text:0000000140013A49                 shl     rax, 20h
				.text:0000000140013A4D                 or      rcx, rax
				.text:0000000140013A50                 and     rdx, rdi
				.text:0000000140013A53                 shl     rdx, 20h
				.text:0000000140013A57                 cmp     rcx, rdx
				.text:0000000140013A5A                 jz      loc_140014740
				.text:0000000140013A60                 jmp     loc_14003E13C
				
					.text:000000014003E13C loc_14003E13C:                          ; CODE XREF: PreOb_sub_14000D9A0+60C0↑j
					.text:000000014003E13C                 mov     rdx, [rsp+arg_28]
					.text:000000014003E141                 mov     rcx, rdx
					.text:000000014003E144                 not     rcx
					.text:000000014003E147                 or      rcx, rdi
					.text:000000014003E14A                 mov     rax, rdi
					.text:000000014003E14D                 not     rax
					.text:000000014003E150                 and     rax, rdx
					.text:000000014003E153                 sub     rax, rcx
					.text:000000014003E156                 sub     rax, rdx
					.text:000000014003E159                 lea     rax, [rax-1]
					.text:000000014003E15D                 lea     rax, [rax+rdi]
					.text:000000014003E161                 mov     [rsp+arg_28], rax
					.text:000000014003E166                 mov     rcx, [rsp+arg_190]
					.text:000000014003E16E                 inc     rcx
					.text:000000014003E171                 mov     rax, 2262427FC07A8175h
					.text:000000014003E17B                 jmp     loc_140017DCA

.text:0000000140017F80 loc_140017F80:                          ; CODE XREF: sub_140040C0A+83A↓j
.text:0000000140017F80                 jmp     loc_14003A485

.text:000000014003A485 loc_14003A485:                          ; CODE XREF: IoHandler_sub_140014450:loc_140017F80↑j
.text:000000014003A485                 mov     rax, cs:P
.text:000000014003A48C                 test    rax, rax
.text:000000014003A48F                 jz      loc_1400181CE
.text:000000014003A495                 jmp     loc_14003A05B

	.text:000000014003A05B loc_14003A05B:                          ; CODE XREF: sub_14003800C+2489↓j
	.text:000000014003A05B                 mov     r10, 0AA2D145923EC7F30h
	.text:000000014003A065                 lea     rsi, cs:140000000h
	.text:000000014003A06C                 mov     r9, 0A25E5851D18A813Bh
	.text:000000014003A076                 mov     r12, 85BF37612CEE3C9Bh
	.text:000000014003A080                 mov     r14, 0F0F0F0F0F0F0F0F1h
	.text:000000014003A08A                 lea     r15, unk_14002B760
	.text:000000014003A091                 mov     r8, 0FFFFFFFF00000000h
	.text:000000014003A09B                 cmp     dword ptr [rax], 7D0h
	.text:000000014003A0A1                 mov     rax, 2262427FC07A8175h
	.text:000000014003A0AB                 jnb     loc_1400181B8
	.text:000000014003A0B1                 jmp     loc_140040F3D
	
		.text:0000000140040F3D loc_140040F3D:                          ; CODE XREF: sub_14003800C+20A5↑j
		.text:0000000140040F3D                 mov     [rsp+arg_28], r10
		.text:0000000140040F42                 mov     rcx, r13
		.text:0000000140040F45                 mov     rbx, 4E5E0A72F0539783h
		.text:0000000140040F4F                 mov     r11, 0F08DE3B14D94C2BFh
		.text:0000000140040F59                 jmp     loc_140018002
		
		.text:0000000140018002 loc_140018002:                          ; CODE XREF: sub_14001D640+6999↓j
		.text:0000000140018002                                         ; sub_140040C0A+34F↓j
		.text:0000000140018002                 jmp     loc_14003EDD1
		
		.text:000000014003EDD1 loc_14003EDD1:                          ; CODE XREF: IoHandler_sub_140014450:loc_140018002↑j
		.text:000000014003EDD1                 mov     [rsp+arg_198], rcx
		.text:000000014003EDD9                 imul    rcx, 7D0h
		.text:000000014003EDE0                 mul     rcx
		.text:000000014003EDE3                 mov     rax, rcx
		.text:000000014003EDE6                 sub     rax, rdx
		.text:000000014003EDE9                 shr     rax, 1
		.text:000000014003EDEC                 add     rax, rdx
		.text:000000014003EDEF                 shr     rax, 0Bh
		.text:000000014003EDF3                 imul    rax, 0E1Bh
		.text:000000014003EDFA                 sub     rcx, rax
		.text:000000014003EDFD                 imul    rdi, rcx, 0E1Bh
		.text:000000014003EE04                 mov     rax, r11
		.text:000000014003EE07                 mul     rdi
		.text:000000014003EE0A                 shr     rdx, 0Ch
		.text:000000014003EE0E                 imul    rax, rdx, 1107h
		.text:000000014003EE15                 sub     rdi, rax
		.text:000000014003EE18                 mov     rax, rbx
		.text:000000014003EE1B                 mul     rdi
		.text:000000014003EE1E                 mov     rax, rdi
		.text:000000014003EE21                 sub     rax, rdx
		.text:000000014003EE24                 shr     rax, 1
		.text:000000014003EE27                 add     rax, rdx
		.text:000000014003EE2A                 shr     rax, 6
		.text:000000014003EE2E                 imul    rcx, rax, 62h ; 'b'
		.text:000000014003EE32                 mov     rax, 0A0A0A0A0A0A0A0A1h
		.text:000000014003EE3C                 mul     rdi
		.text:000000014003EE3F                 shr     rdx, 5
		.text:000000014003EE43                 add     rcx, rdx
		.text:000000014003EE46                 imul    rax, rcx, 66h ; 'f'
		.text:000000014003EE4A                 imul    rcx, rdi, 68h ; 'h'
		.text:000000014003EE4E                 sub     rcx, rax
		.text:000000014003EE51                 movzx   eax, word ptr [rcx+rsi+29050h]
		.text:000000014003EE59                 imul    rcx, rax, 7D0h
		.text:000000014003EE60                 mov     rax, r9
		.text:000000014003EE63                 mul     rcx
		.text:000000014003EE66                 shr     rdx, 0Bh
		.text:000000014003EE6A                 imul    rax, rdx, 0C9Dh
		.text:000000014003EE71                 sub     rcx, rax
		.text:000000014003EE74                 imul    rdi, rcx, 0E35h
		.text:000000014003EE7B                 mov     rax, r9
		.text:000000014003EE7E                 mul     rdi
		.text:000000014003EE81                 shr     rdx, 0Bh
		.text:000000014003EE85                 imul    rax, rdx, 0C9Dh
		.text:000000014003EE8C                 sub     rdi, rax
		.text:000000014003EE8F                 mov     rax, r12
		.text:000000014003EE92                 mul     rdi
		.text:000000014003EE95                 shr     rdx, 7
		.text:000000014003EE99                 imul    rcx, rdx, 0F5h ; 'õ'
		.text:000000014003EEA0                 mov     rax, r14
		.text:000000014003EEA3                 mul     rdi
		.text:000000014003EEA6                 shr     rdx, 4
		.text:000000014003EEAA                 add     rcx, rdx
		.text:000000014003EEAD                 imul    rax, rcx, 88h ; 'ˆ'
		.text:000000014003EEB4                 lea     rcx, [rdi+rdi*8]
		.text:000000014003EEB8                 shl     rcx, 4
		.text:000000014003EEBC                 sub     rcx, rax
		.text:000000014003EEBF                 add     rcx, r15
		.text:000000014003EEC2                 mov     [rsp+arg_30], rcx
		.text:000000014003EEC7                 mov     rdi, [rcx]
		.text:000000014003EECA                 mov     rcx, rdi
		.text:000000014003EECD                 rol     rcx, 4
		.text:000000014003EED1                 mov     rdx, [rsp+arg_28]
		.text:000000014003EED6                 shr     rdx, 20h
		.text:000000014003EEDA                 mov     rax, rdx
		.text:000000014003EEDD                 and     eax, 17326A2Eh
		.text:000000014003EEE2                 mov     [rsp+arg_40], rax
		.text:000000014003EEE7                 or      rdx, 17326A2Eh
		.text:000000014003EEEE                 sub     rdx, rax
		.text:000000014003EEF1                 mov     rax, rcx
		.text:000000014003EEF4                 not     rax
		.text:000000014003EEF7                 and     rax, 0FFFFFFFFFFFFFFFEh
		.text:000000014003EEFB                 add     rax, 2
		.text:000000014003EEFF                 add     rax, rcx
		.text:000000014003EF02                 jz      loc_140014F99
		.text:000000014003EF08                 jmp     loc_140018139
		
			.text:0000000140018139 loc_140018139:                          ; CODE XREF: IoHandler_sub_140014450+3CE7↑j
			.text:0000000140018139                                         ; sub_14003DD84+1184↓j
			.text:0000000140018139                 jmp     loc_1400152BF
			
			.text:00000001400152BF loc_1400152BF:                          ; CODE XREF: IoHandler_sub_140014450:loc_140018139↓j
			.text:00000001400152BF                 mov     rcx, [rsp+arg_28]
			.text:00000001400152C4                 and     rcx, r8
			.text:00000001400152C7                 mov     rax, 17326A2E00000000h
			.text:00000001400152D1                 or      rcx, rax
			.text:00000001400152D4                 mov     rax, [rsp+arg_40]
			.text:00000001400152D9                 shl     rax, 20h
			.text:00000001400152DD                 sub     rcx, rax
			.text:00000001400152E0                 mov     rax, rdi
			.text:00000001400152E3                 jmp     loc_14003B4E3
			
			.text:000000014003B4E3 loc_14003B4E3:                          ; CODE XREF: IoHandler_sub_140014450+E93↑j
			.text:000000014003B4E3                 shl     rax, 20h
			.text:000000014003B4E7                 or      rcx, rax
			.text:000000014003B4EA                 and     rdx, rdi
			.text:000000014003B4ED                 shl     rdx, 20h
			.text:000000014003B4F1                 cmp     rcx, rdx
			.text:000000014003B4F4                 jz      loc_140014740
			.text:000000014003B4FA                 jmp     loc_14001430B
			
				.text:000000014001430B loc_14001430B:                          ; CODE XREF: sub_14003800C+34EE↓j
				.text:000000014001430B                 mov     rdx, [rsp+arg_28]
				.text:0000000140014310                 mov     rcx, rdx
				.text:0000000140014313                 not     rcx
				.text:0000000140014316                 or      rcx, rdi
				.text:0000000140014319                 mov     rax, rdi
				.text:000000014001431C                 not     rax
				.text:000000014001431F                 and     rax, rdx
				.text:0000000140014322                 sub     rax, rcx
				.text:0000000140014325                 sub     rax, rdx
				.text:0000000140014328                 lea     rax, [rax-1]
				.text:000000014001432C                 jmp     loc_140023FBB
				
				.text:0000000140023FBB loc_140023FBB:                          ; CODE XREF: ProcessCb_sub_140014060+2CC↑j
				.text:0000000140023FBB                 lea     rax, [rax+rdi]
				.text:0000000140023FBF                 mov     [rsp+arg_28], rax
				.text:0000000140023FC4                 mov     rcx, [rsp+arg_198]
				.text:0000000140023FCC                 inc     rcx
				.text:0000000140023FCF                 mov     rax, 2262427FC07A8175h
				.text:0000000140023FD9                 jmp     loc_140018002

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

.text:000000014001D629 loc_14001D629:                          ; CODE XREF: sub_14001D640:loc_14001E8EA↓j
.text:000000014001D629                 mov     ecx, 16CC38h
.text:000000014001D62E                 cmp     eax, ecx
.text:000000014001D630                 ja      loc_14001E992
.text:000000014001D636                 jmp     loc_140017258

.text:000000014001D63B                 align 4
.text:000000014001D63C                 dd 0AA0EF981h
.text:000000014001D63C ; } // starts at 140014450
.text:000000014001D63C IoHandler_sub_140014450 endp
