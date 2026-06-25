// Force-included on Solaris builds (-include). Claim sys/model.h early with
// model_t renamed so Source Engine can use struct model_t later.
#if defined(SUNOS) || defined(_SUNOS) || defined(__sun)
#define model_t solaris_kernel_model_t
#include <sys/model.h>
#undef model_t
#endif
