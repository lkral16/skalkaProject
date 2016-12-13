#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int reps = 0;
    int shuffles;
    int nums[5][5][5][5][5];
    for (int m = 0; m < 5; m++) {
        for (int l = 0; l < 5; l++) {
            for (int k = 0; k < 5; k++) {
                for (int j = 0; j < 5; j++) {
                    for (int i = 0; i < 5; i++) {
                        nums[i][j][k][l][m] = rand() % 10;
                        printf("%d ", nums[i][j][k][l][m]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
            printf("----\n");
        }
        printf("++++\n");
    }
    printf("\n\n");
    
    
    int buffer;
    for (int b1 = 0; b1 < 5; b1++) {
        for (int a1 = 0; a1 < 5; a1++) {
            for (int z1 = 0; z1 < 5; z1++) {
                for (int y1 = 0; y1 < 5; y1++) {
                    for (int x1 = 0; x1 < 5; x1++) {
                        for (int b2 = b1; b2 < 5; b2++) {
                            for (int a2 = (b2 > b1 ? 0 : a1); a2 < 5; a2++) {
                                for (int z2 = (a2 > a1 || b2 > b1 ? 0 : z1); z2 < 5; z2++) {
                                    for (int y2 = (z2 > z1 || a2 > a1 || b2 > b1 ? 0 : y1); y2 < 5; y2++) {
                                        for (int x2 = (y2 > y1 || z2 > z1 || a2 > a1 || b2 > b1 ? 0 : x1 + 1); x2 < 5; x2++) {
                                            if (nums[x1][y1][z1][a1][b1] > nums[x2][y2][z2][a2][b2]) {
                                                buffer = nums[x1][y1][z1][a1][b1];
                                                nums[x1][y1][z1][a1][b1] = nums[x2][y2][z2][a2][b2];
                                                nums[x2][y2][z2][a2][b2] = buffer;
                                                shuffles++;
                                            }
                                            reps++;
                                            /*printf("[%d] [%d] [%d] [%d] [%d]\n",x1,y1,z1, a1, b1);
                                            printf("[%d] [%d] [%d] [%d] [%d]\n",x2,y2,z2, a2, b2);
                                            usleep(125000);
                                            system("clear");*/
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
    
    
    for (int m = 0; m < 5; m++) {
        for (int l = 0; l < 5; l++) {
            for (int k = 0; k < 5; k++) {
                for (int j = 0; j < 5; j++) {
                    for (int i = 0; i < 5; i++) {
                        printf("%d ", nums[i][j][k][l][m]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
            printf("----\n");
        }
        printf("++++\n");
    }
    
    
    printf("Zkontrolovani pole: %d\n\
            skutecnych prohozeni: %d", reps, shuffles);
}
