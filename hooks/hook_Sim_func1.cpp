//HOOK This is called from beat function ROffset = 0x9AC0

#include <stdlib.h>
#include "../preprocessor/define.h"
#include "../preprocessor/macro.h"

__asm__
(
    ".equ by_pass_address, 0x00409AC0 \n"
);

__asm__
(
	" \n " //!; Source: forgedalliance_exxt.exe (base 0x00400000 - 4194304)
	" \n " //!; Internal calls outside selected range (before)
	"_0x4091F0 =  4231664 - by_pass_address \n "
	"_0x4090E0 =  4231392 - by_pass_address \n "  
	"_0x957A60 = 0x00958C40 - by_pass_address \n"
	" \n " //!; Start of selected range: 0x00409AC0
	"push ebp \n " 
	"mov ebp,esp \n " 
	"and esp,0xFFFFFFF8 \n " 
	"push 0xFFFFFFFF \n " 
	"push 0xBB38A8 \n " 
	//"mov eax,dword ptr [0x0] \n " 
	"push eax \n " 
	//"mov dword ptr [0x0],esp \n " 
	"sub esp,0xC \n " 
	"push esi \n " 
	"push edi \n " 
	"mov edi,ecx \n " 
	"lea ecx,dword ptr [esp+0x8] \n " 
	"mov eax,ecx \n " 
	"mov dword ptr [esp+0xC],ecx \n " 
	"mov dword ptr [esp+0x8],eax \n " 
	"mov dword ptr [esp+0x1C],0x0 \n " 
	"mov esi,dword ptr [edi+0x4] \n " 
	"cmp esi,edi \n " 
	"je L0xABEL_0x00409B78  \n " //!; => 0x00409B78
	//"nop  \n " 
	"L0xABEL_0x00409B00: \n " 
	"mov ecx,dword ptr [esi] \n " 
	"mov edx,dword ptr [esi+0x4] \n " 
	"mov dword ptr [ecx+0x4],edx \n " 
	//"mov eax,dword ptr [esi+0x4] \n " 
	//"mov ecx,dword ptr [esi] \n " 
	"mov dword ptr [edx],ecx \n " 
	//"mov dword ptr [esi],esi \n " 
	//"mov dword ptr [esi+0x4],esi \n " 
	"mov edx,dword ptr [esp+0x8] \n " 
	"mov dword ptr [esi],edx \n " 
	"lea eax,dword ptr [esp+0x8] \n " 
	"mov dword ptr [esi+0x4],eax \n " 
	"mov dword ptr [esp+0x8],esi \n " 
	//"mov ecx, edx \n " 
	"push esi \n " 
	"mov dword ptr [edx+0x4],esi \n " 
	"call _0x4091F0 \n " 
	"cmp al,0xFE \n " 
	"je L0xABEL_0x00409B4B  \n " //!; => 0x00409B4B
	"cmp al,0xFF \n " 
	"jne L0xABEL_0x00409B6D  \n " //!; => 0x00409B6D
	"push esi \n " 
	"call _0x4090E0 \n " 
	"push esi \n " 
	"call _0x957A60 \n " 
	"add esp,0x4 \n " 
	"jmp L0xABEL_0x00409B6D  \n " //!; => 0x00409B6D
	"L0xABEL_0x00409B4B: \n " 
	"mov edx,dword ptr [esi] \n " 
	"mov eax,dword ptr [esi+0x4] \n " 
	"mov dword ptr [edx+0x4],eax \n " 
	//"mov ecx,dword ptr [esi+0x4] \n " 
	//"mov edx,dword ptr [esi] \n " 
	"mov dword ptr [eax],edx \n " 
	//"mov dword ptr [esi],esi \n " 
	//"mov dword ptr [esi+0x4],esi \n " 
	"mov eax,dword ptr [edi] \n " 
	"mov dword ptr [esi],eax \n " 
	"mov dword ptr [esi+0x4],edi \n " 
	"mov dword ptr [edi],esi \n " 
	"mov ecx,dword ptr [esi] \n " 
	"mov dword ptr [ecx+0x4],esi \n " 
	"L0xABEL_0x00409B6D: \n " 
	"mov esi,dword ptr [edi+0x4] \n " 
	"cmp esi,edi \n " 
	"jne L0xABEL_0x00409B00  \n " //!; => 0x00409B00
	"mov ecx,dword ptr [esp+0xC] \n " 
	"L0xABEL_0x00409B78: \n " 
	"mov edi,dword ptr [edi+0x4] \n " 
	"lea edx,dword ptr [esp+0x8] \n " 
	"cmp ecx,edx \n " 
	"je L0xABEL_0x00409BC7  \n " //!; => 0x00409BC7
	"mov eax,dword ptr [edi] \n " 
	"mov dword ptr [eax+0x4],ecx \n " 
	"mov ecx,dword ptr [esp+0x8] \n " 
	"mov dword ptr [edi],ecx \n " 
	"mov edx,dword ptr [esp+0x8] \n " 
	"mov dword ptr [edx+0x4],edi \n " 
	"mov ecx,dword ptr [esp+0xC] \n " 
	"mov dword ptr [ecx],eax \n " 
	"lea eax,dword ptr [esp+0x8] \n " 
	"mov ecx,eax \n " 
	"mov dword ptr [esp+0xC],eax \n " 
	"mov dword ptr [esp+0x8],ecx \n " 
	"mov dword ptr [ecx+0x4],eax \n " 
	"mov edx,dword ptr [esp+0xC] \n " 
	"mov eax,dword ptr [esp+0x8] \n " 
	"mov dword ptr [edx],eax \n " 
	"mov ecx,dword ptr [esp+0x14] \n " 
	//"mov dword ptr [0x0],ecx \n " 
	"pop edi \n " 
	"pop esi \n " 
	"mov esp,ebp \n " 
	"pop ebp \n " 
	"ret  \n " 
	"L0xABEL_0x00409BC7: \n " 
	"mov edx,dword ptr [esp+0x8] \n " 
	"mov dword ptr [edx+0x4],ecx \n " 
	"mov ecx,dword ptr [esp+0x8] \n " 
	"mov eax,dword ptr [esp+0xC] \n " 
	"mov dword ptr [eax],ecx \n " 
	"mov ecx,dword ptr [esp+0x14] \n " 
	"pop edi \n " 
	//"mov dword ptr [0x0],ecx \n " 
	"pop esi \n " 
	"mov esp,ebp \n " 
	"pop ebp \n " 
	"ret  \n " 
	" \n " //! 0xFinis of selected range: 0x00409BE8
	".align 8192, 0x0 \n"
);
