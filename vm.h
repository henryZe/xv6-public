#ifndef K_VM_H
#define K_VM_H

int mappages(pde_t *pgdir, void *va, uint size, uint pa, int perm);

#endif
