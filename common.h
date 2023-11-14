#ifndef COMMON_H
#define COMMON_H

#define MM_TO_METERS = 0.001

struct fourFace {
    int[] face1;
    int[] face2;
    int[] face3;
    int[] face4;
}
struct fiveFace {
    int[] face1;
    int[] face2;
    int[] face3;
    int[] face4;
    int[] face5;
}
struct sixFace {
    int[] face1;
    int[] face2;
    int[] face3;
    int[] face4;
    int[] face5;
    int[] face6;
}
struct texToFoam {
    char[][] right;
    char[][] left;
    char[][] back;
    char[][] front;
    char[][] top;
    char[][] bottom;
}
struct abaqusToMeshio {
    char[][] T2D2;
    char[][] T2D2H;
    char[][] T2D3;
    char[][] T2D3H;
    char[][] T3D2;
    char[][] T3D2H;
    char[][] T3D3;
    char[][] T3D3H;
    char[][] B21;
    char[][] B21H;
    char[][] B22;
    char[][] B22H;
    char[][] B31;
    char[][] B31H;
    char[][] B32;
    char[][] B32H;
    char[][] B33;
    char[][] B33H;
    char[][] CPS4;
    char[][] CPS4R;
    char[][] S4;
    char[][] S4R;
    char[][] S4RS;
    char[][] S4RSW;
    char[][] S4R5;
    char[][] S8R;
    char[][] S8R5;
    char[][] S9R5;
    char[][] QUAD;
    char[][] QUAD4;
    char[][] QUAD5;
    char[][] QUAD8;
    char[][] QUAD9;
    char[][] CPS3;
    char[][] STRI3;
    char[][] S3;
    char[][] S3R;
    char[][] S3RS;
    char[][] R3D3;
    char[][] TRI7;
    char[][] TRISHELL;
    char[][] TRISHELL3;
    char[][] TRISHELL7;
    char[][] STRI65;
    char[][] TRISHELL6;
    char[][] C3D8;
    char[][] C3D8H;
    char[][] C3D8I;
    char[][] C3D8IH;
    char[][] C3D8R;
    char[][] C3D8RH;
    char[][] HEX9;
    char[][] C3D20;
    char[][] C3D20H;
    char[][] C3D20R;
    char[][] C3D20RH;
    char[][] HEX27;
    char[][] C3D4;
    char[][] C3D4H;
    char[][] TETRA8;
    char[][] C3D10;
    char[][] C3D10H;
    char[][] C3D10I;
    char[][] C3D10M;
    char[][] C3D10MH;
    char[][] C3D6;
    char[][] C3D15;
    char[][] CAX4P;
    char[][] CPE6;
}

enum topological_dimension {
    line = 1,
    polygon = 2,
    triangle = 2,
    quad = 2,
    tetra = 3,
    hexahedron = 3,
    wedge = 3,
    pyramid = 3,
    line3 = 1,
    triangle6 = 2,
    quad9 = 2,
    tetra10 = 3,
    hexahedron27 = 3,
    wedge18 = 3,
    pyramid14 = 3,
    vertex = 0,
    quad8 = 2,
    hexahedron20 = 3,
    triangle10 = 2,
    triangle15 = 2,
    triangle21 = 2,
    line4 = 1,
    line5 = 1,
    line6 = 1,
    tetra20 = 3,
    tetra35 = 3,
    tetra56 = 3,
    quad16 = 2,
    quad25 = 2,
    quad36 = 2,
    triangle28 = 2,
    triangle36 = 2,
    triangle45 = 2,
    triangle55 = 2,
    triangle66 = 2,
    quad49 = 2,
    quad64 = 2,
    quad81 = 2,
    quad100 = 2,
    quad121 = 2,
    line7 = 1,
    line8 = 1,
    line9 = 1,
    line10 = 1,
    line11 = 1,
    tetra84 = 3,
    tetra120 = 3,
    tetra165 = 3,
    tetra220 = 3,
    tetra286 = 3,
    wedge40 = 3,
    wedge75 = 3,
    hexahedron64 = 3,
    hexahedron125 = 3,
    hexahedron216 = 3,
    hexahedron343 = 3,
    hexahedron512 = 3,
    hexahedron729 = 3,
    hexahedron1000 = 3,
    wedge126 = 3,
    wedge196 = 3,
    wedge288 = 3,
    wedge405 = 3,
    wedge550 = 3,
    VTK_LAGRANGE_CURVE = 1,
    VTK_LAGRANGE_TRIANGLE = 2,
    VTK_LAGRANGE_QUADRILATERAL = 2,
    VTK_LAGRANGE_TETRAHEDRON = 3,
    VTK_LAGRANGE_HEXAHEDRON = 3,
    VTK_LAGRANGE_WEDGE = 3,
    VTK_LAGRANGE_PYRAMID = 3,
}

enum topological_faces {
    line = 0,
    polygon = 1,
    triangle = 1,
    quad = 1,
    tetra = 4,
    hexahedron = 6,
    wedge = 5,
    pyramid = 5,
    line3 = 0,
    triangle6 = 1,
    quad9 = 1,
    tetra10 = 4,
    hexahedron27 = 6,
    wedge18 = 5,
    pyramid14 = 5,
    vertex = 0,
    quad8 = 1,
    hexahedron20 = 6,
    triangle10 = 1,
    triangle15 = 1,
    triangle21 = 1,
    line4 = 0,
    line5 = 0,
    line6 = 0,
    tetra20 = 4,
    tetra35 = 4,
    tetra56 = 4,
    quad16 = 1,
    quad25 = 1,
    quad36 = 1,
    triangle28 = 1,
    triangle36 = 1,
    triangle45 = 1,
    triangle55 = 1,
    triangle66 = 1,
    quad49 = 1,
    quad64 = 1,
    quad81 = 1,
    quad100 = 1,
    quad121 = 1,
    line7 = 0,
    line8 = 0,
    line9 = 0,
    line10 = 0,
    line11 = 0,
    tetra84 = 4,
    tetra120 = 4,
    tetra165 = 4,
    tetra220 = 4,
    tetra286 = 4,
    wedge40 = 5,
    wedge75 = 5,
    hexahedron64 = 6,
    hexahedron125 = 6,
    hexahedron216 = 6,
    hexahedron343 = 6,
    hexahedron512 = 6,
    hexahedron729 = 6,
    hexahedron1000 = 6,
    wedge126 = 5,
    wedge196 = 5,
    wedge288 = 5,
    wedge405 = 5,
    wedge550 = 5,
    VTK_LAGRANGE_CURVE = 0,
    VTK_LAGRANGE_TRIANGLE = 1,
    VTK_LAGRANGE_QUADRILATERAL = 1,
    VTK_LAGRANGE_TETRAHEDRON = 4,
    VTK_LAGRANGE_HEXAHEDRON = 6,
    VTK_LAGRANGE_WEDGE = 5,
    VTK_LAGRANGE_PYRAMID = 5,
}

enum nodes_per_face {
    triangle = 3,
    quad = 4,
    tetra = 3,
    hexahedron = 4,
    wedge = 4,
    pyramid = 4,
    triangle6 = 6,
    quad9 = 9,
    tetra10 = 6,
    hexahedron27 = 9,
    wedge18 = 9,
    pyramid14 = 9,
    quad8 = 8,
    hexahedron20 = 8,
    triangle10 = 10,
    triangle15 = 15,
    triangle21 = 21,
    tetra20 = 10,
    tetra35 = 15,
    tetra56 = 21,
    quad16 = 16,
    quad25 = 25,
    quad36 = 36,
    triangle28 = 28,
    triangle36 = 36,
    triangle45 = 45,
    triangle55 = 55,
    triangle66 = 66,
    quad49 = 49,
    quad64 = 64,
    quad81 = 81,
    quad100 = 100,
    quad121 = 121,
    tetra84 = 4,
    tetra120 = 4,
    tetra165 = 4,
    tetra220 = 4,
    tetra286 = 4,
    wedge40 = 5,
    wedge75 = 5,
    hexahedron64 = 6,
    hexahedron125 = 6,
    hexahedron216 = 6,
    hexahedron343 = 6,
    hexahedron512 = 6,
    hexahedron729 = 6,
    hexahedron1000 = 6,
    wedge126 = 5,
    wedge196 = 5,
    wedge288 = 5,
    wedge405 = 5,
    wedge550 = 5,
    VTK_LAGRANGE_TRIANGLE = 3,
    VTK_LAGRANGE_QUADRILATERAL = 4,
    VTK_LAGRANGE_TETRAHEDRON = 3,
    VTK_LAGRANGE_HEXAHEDRON = 4,
    VTK_LAGRANGE_WEDGE = 4,
    VTK_LAGRANGE_PYRAMID = 4,
}

struct fourFace = abaqus_tet {
    [0, 1, 2],
    [0, 3, 1],
    [1, 3, 2],
    [2, 3, 0]
};
struct sixFace abaqus_hex = {
    face1 = [0, 1, 2, 3],
    face2 = [4, 7, 6, 5],
    face3 = [0, 4, 5, 1],
    face4 = [1, 5, 6, 2],
    face5 = [2, 6, 7, 3],
    face6 = [3, 7, 4, 0]
};
struct fiveFace abaqus_psm = {
    face1 = [0, 1, 2],
    face2 = [3, 5, 4],
    face3 = [0, 3, 4, 1],
    face4 = [1, 4, 5, 2],
    face5 = [2, 5, 4, 1]
}

struct fourFace of_tet = {
    face1 = [1, 2, 3],
    face2 = [2, 0, 3],
    face3 = [0, 1, 3],
    face4 = [1, 0, 2]
}
struct sixFace of_hex = {
    face1 = [0, 4, 7, 3],
    face2 = [1, 2, 6, 5],
    face3 = [0, 1, 5, 4],
    face4 = [2, 3, 7, 6],
    face5 = [0, 3, 2, 1],
    face6 = [4 ,5 ,6 ,7]
}
struct fiveFace of_psm = {
    face1 = [0, 2, 1],
    face2 = [3 ,4, 5],
    face3 = [0, 3, 5, 2],
    face4 = [1, 2, 5 ,4],
    face5 = [0, 1, 4, 3]
}
struct fiveFace of_pyr = {
    face1 = [0, 3, 2, 1],
    face2 = [0, 4, 3],
    face3 = [2, 3, 4],
    face4 = [1, 2, 4],
    face5 = [0, 1, 4]
}
struct sixFace of_wdg = {
    face1 = [0, 2, 1],
    face2 = [3, 4, 5, 6],
    face3 = [0, 3, 6],
    face4 = [1, 2, 5, 4],
    face5 = [0, 1, 4, 3],
    face6 = [0, 6, 5, 2]
}
struct fourFace of_twg = {
    face1 = [0, 2, 1],
    face2 = [0, 1, 3],
    face3 = [0, 3, 4, 2],
    face4 = [1, 3, 4, 3]
}

struct texToFoam texgen_to_openfoam = {
    char[][] right = ["FaceA","Edge2","Edge3","Edge6","Edge7","MasterNode2","MasterNode6","MasterNode7","MasterNode3"],
    char[][] left = ["FaceB","Edge1","Edge4","Edge5","Edge8","MasterNode1","MasterNode4","MasterNode8","MasterNode5"],
    char[][] back = ["FaceC","Edge3","Edge4","Edge10","Edge11","MasterNode4","MasterNode3","MasterNode7","MasterNode8"],
    char[][] front = ["FaceD","Edge1","Edge2","Edge9","Edge12","MasterNode1","MasterNode5","MasterNode6","MasterNode2"],
    char[][] top = ["FaceE","Edge7","Edge8","Edge11","Edge12","MasterNode5","MasterNode8","MasterNode7","MasterNode6"],
    char[][] bottom = ["FaceF","Edge5","Edge6","Edge9","Edge10","MasterNode1","MasterNode2","MasterNode3","MasterNode4"]
}

struct abaqusToMeshio abaqus_to_meshio_type = {
    // trusses
    T2D2 = "line",
    T2D2H = "line",
    T2D3 = "line3",
    T2D3H = "line3",
    T3D2 = "line",
    T3D2H = "line",
    T3D3 = "line3",
    T3D3H = "line3",
    // beams
    B21 = "line",
    B21H = "line",
    B22 = "line3",
    B22H = "line3",
    B31 = "line",
    B31H = "line",
    B32 = "line3",
    B32H = "line3",
    B33 = "line3",
    B33H = "line3",
    // surfaces
    CPS4 = "quad",
    CPS4R = "quad",
    S4 = "quad",
    S4R = "quad",
    S4RS = "quad",
    S4RSW = "quad",
    S4R5 = "quad",
    S8R = "quad8",
    S8R5 = "quad8",
    S9R5 = "quad9",
    QUAD = "quad",
    QUAD4 = "quad",
    QUAD5 = "quad5",
    QUAD8 = "quad8",
    QUAD9 = "quad9",
    CPS3 = "triangle",
    STRI3 = "triangle",
    S3 = "triangle",
    S3R = "triangle",
    S3RS = "triangle",
    R3D3 = "triangle",
    TRI7 = "triangle7",
    TRISHELL = 'triangle',
    TRISHELL3 = 'triangle',
    TRISHELL7 = 'triangle',
    STRI65 = "triangle6",
    TRISHELL6 = 'triangle6',
    // volumes
    C3D8 = "hexahedron",
    C3D8H = "hexahedron",
    C3D8I = "hexahedron",
    C3D8IH = "hexahedron",
    C3D8R = "hexahedron",
    C3D8RH = "hexahedron",
    HEX9 = "hexahedron9",
    C3D20 = "hexahedron20",
    C3D20H = "hexahedron20",
    C3D20R = "hexahedron20",
    C3D20RH = "hexahedron20",
    HEX27 = "hexahedron27",
    C3D4 = "tetra",
    C3D4H = "tetra4",
    TETRA8 = "tetra8",
    C3D10 = "tetra10",
    C3D10H = "tetra10",
    C3D10I = "tetra10",
    C3D10M = "tetra10",
    C3D10MH = "tetra10",
    TETRA14 = "tetra14",
    PYRAMID = "pyramid",
    C3D6 = "wedge",
    C3D15 = "wedge15",
    // 4-node bilinear displacement and pore pressure
    CAX4P = "quad",
    // 6-node quadratic
    CPE6 = "triangle6"
}

#endif