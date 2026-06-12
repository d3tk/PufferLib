#include "flynav.h"

#define Env FlyNav
#include "../env_binding.h"

static int my_init(Env* env, PyObject* args, PyObject* kwargs) {
    env->obs_dim = unpack(kwargs, "obs_dim");
    env->act_dim = unpack(kwargs, "act_dim");
    return 0;
}

static int my_log(PyObject* dict, Log* log) {
    assign_to_dict(dict, "score", log->score);
    return 0;
}
