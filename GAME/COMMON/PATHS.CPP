#include "NFS4.H"
#include "PATHS.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Paths_StartUp__Fv()
 // line 47, offset 0x800a6e14
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x800A6E14
		// Variables:
	// 		char *scan; // stack offset -8
	// 		int dirCounter; // $v1
	/* end block 1 */
	// End offset: 0x800A6E58
	// End Line: 99

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Paths_StartUp__Fv(void)

{
  char **ppcVar1;
  int iVar2;
  
  iVar2 = 0x31;
  ppcVar1 = &PTR_8011652c;
  do {
    *ppcVar1 = (char *)0x8013d2e0;
    iVar2 = iVar2 + -1;
    ppcVar1 = ppcVar1 + -1;
  } while (-1 < iVar2);
  PTR_801164e8 = &fePath;
  PTR_801164f8 = &fePath;
  return;
}




