#include "/include/io"
#include "/include/fs"
#include "/include/memory"
int main(int argc, char **argv) {
    if (argc > 1) {
        switch (mkdir(argv[1])) {
            case 0:
                // put_string("[INFO] Success.\n");
                break;
            case -1:
                set_fg(240, 0, 0);
                put_string("[ERROR] Directory already exists.\n");
                restore_fg();
                break;
            case -2:
                set_fg(240, 0, 0);
                put_string("[ERROR] Path is invalid.\n");
                restore_fg();
                break;
            case -3:
                set_fg(240, 0, 0);
                put_string("[ERROR] Forbidden.\n");
                restore_fg();
                break;
        }
    }
    return 0;
}