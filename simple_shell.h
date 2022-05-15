#ifndef _SIMPLE_SHELL_H_
#define _SIMPLE_SHELL_H_

#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/stat.h>
#include <errno.h>
#include <limits.h>

#define F_FLUSH -1
#define ILLNUM 666
#define NOTDIR 777

int _getc(int fd);
char *_fgets(char *s, int n, int fd);
int _getline(char **lineptr, int fd);

/* environmental variables */
extern char **environ;
