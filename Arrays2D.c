void findMax(size_t row, size_t col, int array[row][col]){
    int max = array[0][0]; 
    for (size_t i = 0; i < row; ++i){
        for (size_t j = 0; j < col; ++j){
            if (array[i][j] > max){
                max = array[i][j];
            }
        }
    }    
    printf("\nThe max cell is: %d\n", max);
}

void rowSum(size_t row, size_t col, int array[row][col]){
    int sum = 0;
    int size = col - 1;
    for (size_t i = 0; i < row; ++i){
        for (size_t j = 0; j < col; ++j){
            sum += array[i][j];
            if (j == size){
                printf("\nSum of row %d = %d", i + 1, sum);
                sum = 0;
            }
        }
    }
}

void columnSum(size_t row, size_t col, int array[row][col]){
    printf("\n");
    int sum = 0;
    int size = row - 1;
    for (size_t j = 0; j < col; ++j){
        for (size_t i = 0; i < row; ++i){
            sum += array[i][j];
            if (i == size){
                printf("\nSum of column %d = %d", j + 1, sum);
                sum = 0;
            }
        }
    }
}

void isSquare(size_t row, size_t col){
    if(row == col){
        puts("\n\nThis is a square array.");
    } else {
        puts("\n\nThis is not a square array.");
    }
}

void displayOutputs(size_t row, size_t col, int array[row][col]){
    puts("\nHere is your 2Dim array:");
    int size = col - 1;
    for (size_t i = 0; i < row; ++i){
        for (size_t j = 0; j < col; ++j){
            if (j == 0) {printf("[");}
            if (j == size) {
                printf("%d]", array[i][j]);
            } else {
                printf("%d, ", array[i][j]);
            }
        }
        puts("");
    }
}

int main()
{
    puts("Let's create a 2Dim array!");

    int rows, cols;
    printf("\tHow many rows? ");
    scanf("%d", &rows);  
    printf("\tHow many columns? ");
    scanf("%d", &cols);  

    int array[rows][cols];

    for (size_t i = 0; i < rows; ++i){
        for (size_t j = 0; j < cols; ++j){
            printf("\tenter [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    findMax(rows, cols, array);
    rowSum(rows, cols, array);
    columnSum(rows, cols, array);
    isSquare(rows, cols);
    displayOutputs(rows, cols, array);

    return 0;
}
