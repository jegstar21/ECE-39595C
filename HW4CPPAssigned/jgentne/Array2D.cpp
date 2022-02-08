#include <iostream>
#include <cstdlib>
#include "Array2D.H"

// This constructor is delegated to by other constructors and does all of the 
// allocation, showing an example of a delegating constructor..  
Array2D::Array2D(int numR, int numC, char differentiator) : numRows(numR), numCols(numC) 
{
   ary = new int*[numRows];

   for (int i = 0; i < numRows; i++) 
   {
      ary[i] = new int[numCols];

      for (int j = 0; j < numCols; j++) 
      {
            ary[i][j] = -1;
      }
   }
}

Array2D::Array2D(int numR, int numC) : Array2D(numR, numC, 'c') 
{ 
   for (int i = 0; i < numRows; i++) 
   {
      for (int j = 0; j < numCols; j++) 
      {
         ary[i][j] = i;
      }
   }
}

Array2D::Array2D(int numR, int numC, int val) : Array2D(numR, numC, 'c') 
{ 
   for (int i = 0; i < numRows; i++) 
   {
      for (int j = 0; j < numCols; j++) 
      {
         ary[i][j] = val;
      }
   }
}

int& Array2D::operator( )(int row, int col) 
{
   return ary[row][col];
}
      
int Array2D::operator( )(int row, int col) const 
{
   return ary[row][col];
}

bool Array2D::sameSize(const Array2D& other) const 
{
   return (numRows == other.getNumRows( ) && numCols == other.getNumCols( ));
}

void Array2D::deleteAry(int** ary) 
{
   for (int i = 0; i < numRows; i++) 
   {
      delete [ ] ary[i];
   }
   delete [ ] ary;
}

Array2D::Array2D(const Array2D& other) 
{
   numRows = other.getNumRows();
   numCols = other.getNumCols();

   ary = new int*[numRows];

   int i, j; 

   for (i = 0; i < numRows; i++) 
   {
      ary[i] = new int[numCols];

      for (j = 0; j < numCols; j++) 
      {
            ary[i][j] = other(i,j);
      }
   }
}

Array2D::~Array2D()
{
   this->deleteAry(this->ary);
}

Array2D& Array2D::operator=(const Array2D& other) 
{
   deleteAry(ary);
   ary = new int*[other.getNumRows()];

   numCols = other.getNumCols();
   numRows = other.getNumRows();
    int i, j;
   for (i = 0; i < other.getNumRows(); i++)
   {
      ary[i] = new int[other.getNumCols()];

      for (j = 0; j < other.getNumCols(); j++) 
      {
         ary[i][j] = other(i,j);
      }
   }
   return *this;
}

bool Array2D::operator==(const Array2D& other) 
{
   if (this->sameSize(other) != true) 
   {
      return false;
   }
   else 
   {
      int i, j;
      for (i = 0; i < numRows; i++)
      {
         for (j = 0; j < numCols; j++)
         {
            if (this->operator()(i,j) != other(i,j))
            {
               return false;
            }
         }
      }
   }
   return true;
}

Array2D& Array2D::operator*(const Array2D& other) 
{
   Array2D value(numRows, other.getNumCols(), 0);

   if (numCols != other.getNumRows()) 
   {
      Array2D value2(numRows, numCols, -1);
      *this = value2;
      return *this;
   }
   else 
   {
      int i, j, k;

      for (i = 0; i < numRows; i++)
      {
         for (j = 0; j < other.getNumCols(); j++)
         {
            for (k = 0; k < numCols; k++)
            {
               value(i,j) += this->operator()(i, k) * other(k, j);
            }
         }
      }
      numCols = other.getNumCols();
      Array2D& point = value;
      *this = point;
      return *this;
   }
} 

std::ostream& operator<<(std::ostream& stream, const Array2D& other)
{
   int i, j;

   for (i = 0; i < other.getNumRows(); i ++);
   {
      for (i = 0; i < other.getNumCols(); j ++);
      {
         stream << std::to_string(other(i, j)) + " ";
      }

      stream << std::endl;
   }

   return stream;
}

int Array2D::getNumRows() const
{
   return numRows;
}

int Array2D::getNumCols() const
{
   return numCols;
}

