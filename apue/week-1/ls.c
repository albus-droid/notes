/* My Implementation of ls, as part of learning
 * advanced programming in Unix */

#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char **argv) { 

  DIR *dp;                     
  struct dirent *dirp;          

  /* Explanations:
  * argc - count of args
  * argv - array of args, eg: argv[1]
  * DIR  - data type to point to a directory
  * dirent - builtin struct 
  */

  if (argc !=2) {
    fprintf(stderr, "usage: %s dir_name\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  if ((dp = opendir(argv[1])) == NULL) {
    fprintf(stderr, "Unable to open '%s': %s\n", argv[1],
            strerror(errno));
    exit(EXIT_FAILURE);
  }

  while ((dirp = readdir(dp)) != NULL) {
    printf("%s\n", dirp->d_name);
  }

  (void)closedir(dp);
  return EXIT_SUCCESS;
}
