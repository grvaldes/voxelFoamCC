#ifndef MESHUTILS_H
#define MESHUTILS_H

typedef struct Mesh {
    int nNodes;
    int nCells;
    int nFaces;
    int nNeigh;
    float **points;
    int *cells;
    int *faces;
    int *owner;
    int *neighbour; 
} Mesh;

Mesh parseInpFile(char* file_in);
Mesh cellRepetition(Mesh& mesh, int dx, int dy, int dz);

#endif