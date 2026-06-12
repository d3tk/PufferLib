#include <stdlib.h>
#include <string.h>

typedef struct {
    float score;
    float n;
} Log;

typedef struct {
    Log log;
    unsigned char* observations;
    int* actions;
    float* rewards;
    unsigned char* terminals;
    int obs_dim;
    int act_dim;
} FlyNav;

void c_reset(FlyNav* env);
void c_step(FlyNav* env);
void c_render(FlyNav* env);
void c_close(FlyNav* env);
