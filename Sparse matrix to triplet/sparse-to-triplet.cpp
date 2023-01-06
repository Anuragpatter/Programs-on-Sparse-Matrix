// Program to convert a Sparse Matrix to Triplet representation.

#include<iostream>
using namespace std;

int main()
{
    // sparse matrix of class 5x6 with 6 non-zero values
    int sparseMatrix[8][10] =
    {
        {0 , 0 , 0 , 0 , 0 , 0 , 0 , 4 , 0, 0 },
        {0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0, 0 },
        {0 , 0 , 0 , 0 , 0 , 5 , 0 , 0 , 0, 0 },
        {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0, 0 },
        {7 , 0 , 0 , 0 , 0 , 6 , 0 , 0 , 0, 0 },
        {0 , 0 , 0 , 0 , 2 , 0 , 0 , 0 , 0, 0 },
        {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0, 3 },
        {0 , 0 , 8 , 0 , 0 , 0 , 0 , 0 , 0, 0 }
    };

    // Finding total non-zero values in the sparse matrix
    int size = 0;
    for (int row = 0; row < 8; row++)
        for (int column = 0; column < 10; column++)
            if (sparseMatrix[row][column] != 0)
                size++;
                // Defining result Matrix
    int resultMatrix[3][size];

    // Generating result matrix
    int k = 0;
    for (int row = 0; row < 8; row++)
        for (int column = 0; column < 10; column++)
            if (sparseMatrix[row][column] != 0)
            {
                resultMatrix[0][k] = row;
                resultMatrix[1][k] = column;
                resultMatrix[2][k] = sparseMatrix[row][column];
                k++;
            }

    // Displaying result matrix
    cout<<"Triplet Representation : "<<endl;
    for (int row=0; row<3; row++)
    {
        for (int column = 0; column<size; column++)
            cout<<resultMatrix[row][column]<<" ";

        cout<<endl;
    }
    return 0;
}