#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Enter Rows of 1st Matrix : ");
    scanf("%d", &row1);
    printf("Enter Columns of 1st Matrix : ");
    scanf("%d", &col1);
    int array1[row1][col1];
    printf("1st Matrix\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter number at Row %d Column %d: ", i + 1, j + 1);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("2nd Matrix\n");
    printf("Enter Rows of 2nd Matrix : ");
    scanf("%d", &row2);
    printf("Enter Columns of 2nd Matrix : ");
    scanf("%d", &col2);
    int array2[row2][col2];

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Enter number at Row %d Column %d: ", i + 1, j + 1);
            scanf("%d", &array2[i][j]);
        }
    }

    if (col1 != row2)
    {
        printf("Matrix Multiplication is not possible\n");
    }
    int array3[row1][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            array3[i][j] = 0;
            for (int k = 0; k < row2; k++)
            {
                array3[i][j] += array1[i][k] + array2[k][j];
            }
            printf("%d     ", array3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        }
        printf("\n");
    }

    return 0;
}

// /*
// /*
// * This C program can multiply any two square or rectangular matrices.
// * The below program multiplies two square matrices of size 4 * 4.
// * There is also an example of a rectangular matrix for the same code (commented below).
// * We can change the Matrix value with the number of rows and columns (from MACROs) for Matrix-1
// * and Matrix-2 for different dimensions.
// */

// /*
// * Note: i- The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2.
// *	 ii- Output of multiplicationof Matrix-1 and Matrix-2, results with equalto the number
// *		 of rows of Matrix-1 and thenumber of columns of Matrix-2 i.e. rslt[R1][C2].
// */

// #include <stdio.h>
// #include <stdlib.h>

// // Edit MACROs here, according to your Matrix Dimensions for mat1[R1][C1] and mat2[R2][C2]
// #define R1 4		 // number of rows in Matrix-1
// #define C1 4		 // number of columns in Matrix-1
// #define R2 4		 // number of rows in Matrix-2
// #define C2 4		 // number of columns in Matrix-2

// void mulMat(int mat1[][C1], int mat2[][C2]) {
// 	int rslt[R1][C2];

// 	printf("Multiplication of given two matrices is:\n\n");

// 	for (int i = 0; i < R1; i++) {
// 		for (int j = 0; j < C2; j++) {
// 			rslt[i][j] = 0;

// 			for (int k = 0; k < R2; k++) {
// 				rslt[i][j] += mat1[i][k] * mat2[k][j];
// 			}

// 			printf("%d\t", rslt[i][j]);
// 		}

// 		printf("\n");
// 	}
// }

// int main(void) {
// 	// Square Matrices
// 	// R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these values in MACROs)
// 	int mat1[R1][C1] = {
// 			{1, 1, 1, 1},
// 			{2, 2, 2, 2},
// 			{3, 3, 3, 3},
// 			{4, 4, 4, 4}
// 	};

// 	int mat2[R2][C2] = {
// 			{1, 1, 1, 1},
// 			{2, 2, 2, 2},
// 			{3, 3, 3, 3},
// 			{4, 4, 4, 4}
// 	};

// 	/*
// 	// Rectangular Matrices
// 	// R1 = 3, C1 = 4 and R2 = 4, C2 = 3 (Update these values in MACROs)
// 	int mat1[R1][C1] = {
// 			{1, 1, 1, 1},
// 			{2, 2, 2, 2},
// 			{3, 3, 3, 3}
// 	};

// 	int mat2[R2][C2] = {
// 			{1, 1, 1},
// 			{2, 2, 2},
// 			{3, 3, 3},
// 			{4, 4, 4}
// 	};
// 	*/

// 	if (C1 != R2) {
// 		printf("The number of columns in Matrix-1 must be equal to the number of rows in "
// 				"Matrix-2\n");
// 		printf("Please update MACROs value according to your array dimension in "
// 				"#define section\n");

// 		exit(EXIT_FAILURE);
// 	}

// 	mulMat(mat1, mat2);

// 	return 0;
// }

// // This code is contributed by Manish Kumar (mkumar2789)

// */