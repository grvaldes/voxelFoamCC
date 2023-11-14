#ifndef FILEUTILS_H
#define FILEUTILS_H

#include "meshUtils.h"

void createFolderStructure(char* file_out);

void writePointsFile(Mesh mesh, char* file_out);
void writeCellsFile(Mesh mesh, char* file_out);
void writeFacesFile(Mesh mesh, char* file_out);
void writeOwnerFile(Mesh mesh, char* file_out);
void writeNeighbourFile(Mesh mesh, char* file_out);
void writeBoundaryFile(Mesh mesh, char* file_out);
void writeSets(Mesh mesh, char* file_out);
void writePointZones(Mesh mesh, char* file_out);
void writeFaceZones(Mesh mesh, char* file_out);
void writeCellZones(Mesh mesh, char* file_out);
void writeFoamFile(Mesh mesh, char* file_out);

void writeControlDictFile(Mesh mesh, char* file_out);
void writeDecomposeParDictFile(Mesh mesh, char* file_out);
void writeFvSolutionFile(Mesh mesh, char* file_out);
void writeFvSchemesFile(Mesh mesh, char* file_out);
void writeSetFieldsDictFile(Mesh mesh, char* file_out);
void writeTopoSetDictFile(Mesh mesh, char* file_out);

void createFoamFile(Mesh mesh, char* file_out);

void writeBanner(Mesh mesh, char* file_out);
void writeBreak(Mesh mesh, char* file_out);
#endif