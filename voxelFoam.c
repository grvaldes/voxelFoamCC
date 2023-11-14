#include <stdio.h>
#include <string.h>
#include "printHelp.h"
#include "meshUtils.h"
#include "fileUtils.h"
 
int main(int argc, char** argv)
{
    if (argc < 2)
    {
        printf("ERROR: Program needs at least one argument. \n");
        printf("Use \'voxelFoam -h\' or \'voxelFoam --help\' for help on ");
        printf("how to use the program.");

        return -1;
    }

    char* file_in = argv[1];
    char* file_out = argv[2];

    if (strncmp(&argv[1][0],"-h",2) == 0)
    {
        printHelp();

        return 0;
    }
    else if (strncmp(&argv[1][0],"-f",2) == 0)
    {
        const int b_folder = 1;

        createFolderStructure(file_out);
    }
    else
    {
        printf("Option does not exist.\n");

        return -1;
    }

    Mesh mesh = readMeshFile(file_in);

    return 0;
}