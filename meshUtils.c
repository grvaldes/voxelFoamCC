#include <stdio.h>
#include <stdlib.h>
#include "meshUtils.h"

#define NDIM 3
#define NPROPS 3

Mesh parseInpFile(char *file_in)
{
    int nNodes, nCells, nFaces, nNeigh;
    int *cells, *faces, *owner, *neighbour;
    float **points;
    char **cellZoneNames, **faceZoneNames;
    int **cellZones, **faceZones;
    int *cellZoneSizes, *faceZoneSizes;
    FILE *fptr;
    int nSizes[NPROPS];

    size_t len = 0;
    ssize_t read = 0;
    char *line = NULL;
    char *fileInp = *file_in ".inp";

    fptr = fopen(*fileInp, "r");
    if(fptr == NULL)
    {
      printf("File not found.");   
      exit(EXIT_FAILURE);             
    }

    int rNode = 0;

    while (read != -1)
    {
        if (strncmp(&line,"*Node",5) == 0 && rNode = 0)
        {
            nNodes = parsePoints(&points, &fptr);
            rNode = 1;
            continue;
        }
        if (strncmp(&line,"*Element",8) == 0)
        {
            nSizes = parseElements(&cells, &faces, &owner, &neighbour, &fptr);
            nCells = nSizes[0];
            nFaces = nSizes[1];
            nNeigh = nSizes[2];
            continue;
        }
        if (strncmp(&line,"*Elset",6) == 0)
        {
            continue;
        }
        if (strncmp(&line,"*Nset",5) == 0)
        {
            continue;
        }

        getline(&line, &len, fptr);
    }



    Mesh mesh = {
        nNodes,
        nCells,
        nFaces,
        nNeigh,
        points,
        cells,
        faces,
        owner,
        neighbour
    };

    free(line);

    return mesh;
}


Mesh cellRepetition(Mesh& mesh, int dx, int dy, int dz)
{
    return mesh;
}