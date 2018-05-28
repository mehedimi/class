#include <stdio.h>

int main()
{
    int row, column, matrix_count;
    
    int a_row, a_column;

    printf("Enter row of MATRIX A: ");
    scanf("%d", &a_row);

    printf("Enter column of MARTIX B: ");
    scanf("%d", &a_column);
    
    int a_matrix[100][100];

    printf("Enter values of MATRIX A: \n");
    for(row = 0; row < a_row; row++){
        for(column = 0; column < a_column; column++){
            scanf("%d", &a_matrix[row][column]);
        }
    }

    for(row = 0; row < a_row; row++){
        for(column = 0; column < a_column; column++){
            printf("%d ", a_matrix[row][column]) ;
        }
        printf("\n");
    }


    int b_row, b_column;

    printf("Enter row of MATRIX B: ");
    scanf("%d", &b_row);

    printf("Enter column of MARTIX B: ");
    scanf("%d", &b_column);
    
    int b_matrix[100][100];

    printf("Enter values of MATRIX B: \n");
    for(row = 0; row < b_row; row++){
        for(column = 0; column < b_column; column++){
            scanf("%d", &b_matrix[row][column]);
        }
    }

    for(row = 0; row < b_row; row++){
        for(column = 0; column < b_column; column++){
            printf("%d ", b_matrix[row][column]) ;
        }
        printf("\n");
    }

    int c_matrix[100][100];

    for(row = 0; row < a_row; row++){
        for(column = 0; column < a_column; column++){
            c_matrix[row][column] = 0;

            for(matrix_count = 0; matrix_count < a_column; matrix_count++){
                printf("c_m = %d a_m = %d b_m = %d \n", c_matrix[row][column], a_matrix[column][row], b_matrix[row][column]);
                c_matrix[row][column] = c_matrix[row][column] + (
                    a_matrix[column][row] * b_matrix[row][column]
                );
            }

        }
        printf("\n");
    }
    
    for(row = 0; row < a_row; row++){
        for(column = 0; column < a_column; column++){
            printf("%d ", c_matrix[row][column]) ;
        }
        printf("\n");
    }

    return 0;
}