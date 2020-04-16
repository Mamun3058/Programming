#include <vector>
#include <memory>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

typedef vector< int > IntRow;
typedef vector< IntRow > IntTable;

auto_ptr< IntTable > getSpiralArray( int dimension )
{
	std::auto_ptr< IntTable > spiralArrayPtr( new IntTable(
		dimension, IntRow( dimension ) ) );

	int numConcentricSquares = static_cast< int >( ceil(
		static_cast< double >( dimension ) / 2.0 ) );

	int j;
	int sideLen = dimension;
	int currNum = 1;

	for ( int i = 0; i < numConcentricSquares; i++ )
	{
		// do top side
		for ( j = 0; j < sideLen; j++ )
			( *spiralArrayPtr )[ i ][ i + j ] = currNum++;

		// do right side
		for ( j = 1; j < sideLen; j++ )
			( *spiralArrayPtr )[ i + j ][ dimension - 1 - i ] = currNum++;

		// do bottom side
		for ( j = sideLen - 2; j > -1; j-- )
			( *spiralArrayPtr )[ dimension - 1 - i ][ i + j ] = currNum++;

		// do left side
		for ( j = sideLen - 2; j > 0; j-- )
			( *spiralArrayPtr )[ i + j ][ i ] = currNum++;

		sideLen -= 2;
	}

	return spiralArrayPtr;
}

void printSpiralArray( const std::auto_ptr< IntTable >& spiralArrayPtr )
{
	size_t dimension = spiralArrayPtr->size();

	int fieldWidth = static_cast< int >( floor( log10(
		static_cast< double >( dimension * dimension - 1 ) ) ) ) + 2;

	size_t col;
	for ( size_t row = 0; row < dimension; row++ )
	{
		for ( col = 0; col < dimension; col++ )
			cout<<setw( fieldWidth )<<( *spiralArrayPtr )[row ][ col ];
		cout << endl;
	}
	cout<<endl;
}

int main()
{
          int t;
          cin>>t;
          for(int i=0;i<t;i++)
          {

          int a;
          cin>>a;
	printSpiralArray( getSpiralArray( a) );
          }
          return 0;
}
