#ifndef PRINTHELP_H
#define PRINTHELP_H

void printHelp()
{
    printf("voxelFoam, v0.0.1 \n");
    printf("This tool is designed to convert voxelized meshes created in ");
    printf("TexGen into an OpenFoam polyMesh. It creates the mesh with ");
    printf("each yarn and the matrix turned into their own cellZone and ");
    printf("each face as boundary.\n");
    printf(" \n");
    printf("USAGE: voxelFoam [OPTIONS] input (output) \n");
    printf(" \n");
    printf("OPTIONS: \n");
    printf("-f, --folder\tCreates the full folder structure for OpenFoam.\n");
    printf("-h, --help\tOpens this help dialog. \n");
}

#endif