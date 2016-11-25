//
//  matrixMultiplier.c
//  Takes two matrices and multiplies them.
//Manvir Grewal : 10193283
//Aiden Polese : 10197342
//Kathleen Abols : 10179548
//Lianne Orlowski : 10204124

#Simple Calculator Program

#include <stdio.h>

int main(int argc, const char* argv[]){
    
    //declare matrices dim vars
    int rows1;
    int cols1;
    int rows2;
    int cols2;
    
    
    //prompt user for matrix 1 dimensions
    //promt user for matrix 2 dimensions
    printf("Enter the rows and columns for matrix1: ");
    if (scanf("%d %d", &rows1, &cols1) != 2){
        fprintf(stderr, "Invalid Input\n");
        return -1;
    }
    
    printf("Enter the rows and columns for matrix2: ");
    if (scanf("%d %d", &rows2, &cols2) != 2){
        fprintf(stderr, "Invalid Input\n");
        return -1;
    }
    
    //while(matrix1.col != matrix2.row)
    //print error
    //prompt for dimensions again
    while(cols1 != rows2){
        
        fprintf(stderr, "Dimensions Mismatch: Column of matrix1 not equal to row of matrix2.\n");
        printf("Enter the rows and columns for matrix1 (delimited by a space): ");
        if (scanf("%d %d", &rows1, &cols1) != 2){
            fprintf(stderr, "Invalid Input\n");
            return -1;
        }
        
        printf("Enter the rows and columns for matrix2 (delimited by a space): ");
        if (scanf("%d %d", &rows2, &cols1) != 2){
            fprintf(stderr, "Invalid Input\n");
            return -1;
        }
        
    }
    
    //create element arrays for matrices
    int elements1[rows1][cols1];
    int elements2[rows2][cols2];
    
    
    //prompt user for matrix 1 elements -> int array
    printf("\nEnter elements of matrix 1:\n");
    for(int i=0; i<rows1; i++)
        for(int j=0; j<cols1; j++){
            printf("Enter element %d,%d: ",i+1, j+1);
            //if scanf doesn't return 1, output error, return -1
            if (scanf("%d", &elements1[i][j]) != 1){
                fprintf(stderr, "Invalid Input\n");
                return -1;
            }
        }
    
    //prompt user for matrix 2 elements -> int array
    printf("\nEnter elements of matrix 2:\n");
    for(int i=0; i<rows2; i++)
        for(int j=0; j<cols2; j++){
            printf("Enter element %d,%d: ",i+1, j+1);
            if (scanf("%d", &elements2[i][j]) != 1){
                fprintf(stderr, "Invalid Input\n");
                return -1;
            }
        }
    
    //set resulting array size
    int result[rows1][cols1];
    
    // Init elements of result matrix to 0
    for(int i=0; i<rows1; i++)
        for(int j=0; j<cols2; j++){
            result[i][j] = 0;
        }
    
    // Multiply matrices matrix1 & matrix2
    // store the resulting elements in the result array
    for(int i=0; i<rows1; i++)
        for(int j=0; j<cols2; j++)
            for(int k=0; k<cols1; k++){
                result[i][j]+=elements1[i][k]*elements2[k][j];
            }
    
    // print the resulting matrix
    printf("\nOutput Matrix:\n");
    for(int i=0; i<rows1; i++)
        for(int j=0; j<cols2; j++){
            printf("%d  ", result[i][j]);
            if(j == cols2-1)
                printf("\n\n");
        }
    
    return 0;

}