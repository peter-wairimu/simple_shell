#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

// environment variables
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
void exit_cmd(char **command, char *line)


/* handle built ins */
int checker(char **cmd, char *buf);
void prompt(void);
int handle_builtin(char **command, char *line)
void exit_cmd(char **command, char *line)
void execution(char *cp, char **cmd)

#endif
