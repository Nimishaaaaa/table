#include<iostream>
using namespace std;
const int MAX=2;
class matrix
{
  private:
    int mat[MAX][MAX];
  public: matrix();
  void create(); void display();
  void add_mat(matrix &tb1,matrix &tb2); 
void sub_mat(matrix &tb1,matrix &tb2); 
void mul_mat(matrix &tb1,matrix &tb2);
  void transpose(matrix &m1);
};
matrix :: matrix()
{
  for(int a=0;a<MAX;a++)
    for(int b=0;b<MAX;b++)
        mat[a][b]=0;
}
void matrix :: create()
{
   for(int a=0;a<MAX;a++)
    for(int b=0;b<MAX;b++)
      cin>>mat[a][b];
}
void matrix :: add_mat(matrix &tb1,matrix &tb2)
{
  for(int a=0;a<MAX;a++)
    for(int b=0;b<MAX;b++)
        {
           mat[a][b]=tb1.mat[a][b]+tb2.mat[a][b];
        }
}
void matrix :: sub_mat(matrix &tb1,matrix &tb2)
{
  for(int a=0;a<MAX;a++)
    for(int b=0;b<MAX;b++)
        {
           mat[a][b]=tb1.mat[a][b]-tb2.mat[a][b];
        }
}
void matrix :: mul_mat(matrix &tb1,matrix &tb2)
{
  for (int k=0;k<MAX;k++)
    for(int a=0;a<MAX;a++)
      for(int b=0;b<MAX;b++)
        {
           mat[a][b]=tb1.mat[a][b]*tb2.mat[a][b];
        }
}
void matrix :: transpose(matrix &m1)
{
    for(int a=0;a<MAX;a++)
      for(int b=0;b<MAX;b++)
      {
          mat[a][b]=m1.mat[b][a];
      }
}
void matrix :: display()
{
   for(int a=0;a<MAX;a++)
   {
      for(int b=0;b<MAX;b++)
       {
           cout<<mat[a][b]<<" ";
       }
       cout<<endl;
   }
}
int main()
{
  matrix tb1,tb2,mat3;
  cout<<"1st matrix here: "; tb1.create();
  cout<<"\n  2nd matrix here: "; tb2.create();
  cout<<"\n1st matrix: "<<endl; tb1.display();
  cout<<"\n2nd matrix: "<<endl; tb2.display(); mat3.add_mat(tb1,tb2);
  cout<<"\nAddition of 2 matrix: "<<endl; tb2.display();
  cout<<"\nSubtraction of 2 matrix: "<<endl; tb2.sub_mat(tb1,tb2); tb2.display();
  cout<<"\nMultiplication of 2 matrix: "<<endl; tb2.mul_mat(tb1,tb2); tb2.display();
  cout<<"\nTranspose of 1st matrix: "<<endl; tb2.transpose(tb1); tb2.display();
  cout<<"\nTranspose of 2nd matrix: "<<endl; tb2.transpose(tb2); tb2.display();
  return 0;
}
