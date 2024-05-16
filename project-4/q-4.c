#include <stdio.h>
int main()
{
    int m, n;      
    printf( " Enter the number of rows and columns: \n " );
    scanf( "%d %d" , &m, &n );   
    
    int arr[m][n];   
    printf( "Enter the elements : \n" ) ;
    for( int i=0; i<m; i++)     
    {
        for(int j=0; j<n; j++)
        {
            scanf( "%d", &arr[i][j] );
        }
    }
    printf( "\nThe elements in the matrix are \n" );
    for( int i=0; i<m; i++ )      
   {
        for(int j=0; j<n; j++)
        {
            printf( "%d ", arr[i][j] );
        }
        printf( "\n" );
    }
    printf( "\n Calculation of Row Sum \n" );
    for(int i=0; i<m; i++)   
    {
        int rowsum=0;
        for(int j=0; j<n; j++)
        {
            rowsum = rowsum + arr[i][j] ;
        }
        printf( " \n  row %d is %d \n ", i, rowsum);
    }
    printf( "\n Calculation of Column Sum \n " );
    for( int i=0; i<m; i++ )
    {
        int colsum=0;
        for( int j=0; j<n; j++ )
        {
            colsum = colsum+arr[j][i] ;
        }
        printf( " \n   column %d is %d\n ", i, colsum );
    }
    return 0;
}