#include "flynav.h"

void c_reset(FlyNav* env) {
    for (int i = 0; i < env->obs_dim; i++) {
        env->observations[i] = 0;
    }
}

void c_step(FlyNav* env) {
    env->rewards[0] = 0.0f;
    env->terminals[0] = 0;
    c_reset(env);
}

void c_render(FlyNav* env) {
    (void)env;
}

void c_close(FlyNav* env) {
    (void)env;
}
