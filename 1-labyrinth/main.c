#include <stdio.h>
#include <string.h>
#include <testkit.h>

void print_version() {
    printf("===Labyrinth Game 1.0.0 ===\n");
}

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
       if (strcmp(argv[i], "--version") == 0) {
           if(argc == 2) {
                print_version();
                return 0;
            } else {
                return 1;
            }
       }
      
    }
    printf("Running program normally...\n");
    return 0;
}


UnitTest(version_only) {
    char *argv[] = {"any", "--version"};
    int ret = main(2, argv);
    tk_assert(ret == 0, "version_only");
}
UnitTest(test_fail) {
    tk_assert(114514 == 0x114514, "This will not do.");
}
UnitTest(test_timeout) {
    while(1);
}