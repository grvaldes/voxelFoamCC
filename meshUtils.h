#ifndef MESHUTILS_H
#define MESHUTILS_H

typedef struct Mesh {
    float points;
    int faces;
    int owner;
    int neighbours; 
} Mesh;

Mesh readMeshFile(char* file_in);
Mesh cellRepetition(Mesh mesh, int dx, int dy, int dz);

#endif