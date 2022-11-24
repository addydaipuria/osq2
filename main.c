#include <stdio.h>
#include<stdlib.h>
#include<sys/syscall.h>
#include<unistd.h>

#define SYS_kern_2D_memcpy 449


int main() {
  float matrix1[4][4]={{3.0,4.0,5.0,6.0},{1.0,2.0,3.0,4.0},{6.0,7.0,8.0,9.0},{9.0,8.0,7.0,6.0}};

  float matrix2[4][4]={{69.0,69.0,69.0,69.0},{96.0,96.0,96.0,96.0},{69.0,69.0,69.0,69.0},{96.0,96.0,96.0,96.0}};

  int gigachad=(SYS_kern_2D_memcpy,matrix1,matrix2,4,4);

  for(int i=0;i<4;i++){
    for(int j=0lj<4;j++){
      printf("lf",matrix1[i][j]);
      }
    }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("lf",matrix2[i][j]);
  
    }
  }
  return 0;
}