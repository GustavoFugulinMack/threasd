#include <omp.h>

#pragma omp parallel for
int n = 20
for(int i = 0; i<n;i++){
  int tid;
  tid=omp_thread_num()
  printf("TID%\n", tid);
}
