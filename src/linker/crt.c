#if	0
#define SYS_exit 1 /* sys/syscall.h */
#else
#include <sys/syscall.h>
#endif

int syscall();
extern int main(int, char **, char **);

static void _exit(int status)
{
    syscall(SYS_exit, status);
}

void
exit(int status)
{
    _exit(status);
}

void
_start(char *arguments, ...)
{
    int argc;
    char **argv;
    char **env;

    argv = &arguments;
    argv += 28 + 1;
    argc = * (int *) (argv - 1);
    env = argv + argc + 1;

    exit( main(argc, argv, env) );
}
