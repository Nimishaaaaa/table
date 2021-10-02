#include<iostream>
using namespace std;
const int MAX=2;
class mat
{
  private:
    int mat[MAX][MAX];
  public: mat();
  void create(); void display();
  void add_mat(mat &mat1,mat &mat2); 
void sub_mat(mat &mat1,mat &mat2); 
void mul_mat(mat &mat1,mat &mat2);
  void transpose(mat &m1);
};
mat :: mat()
{
  for(int a=0;a<MAX;a++)
    for(int n=0;n<MAX;n++)
        mat[a][n]=0;
}
void mat :: create()
{
   for(int a=0;a<MAX;a++)
    for(int b=0;b<MAX;b++)
      cin>>mat[a][b];
}
void mat :: add_mat(mat &mat1,mat &mat2)
{
  for(int a=0;a<MAX;a++)
    for(int b=0;b<MAX;b++)
        {
           mat[a][b]=mat1.mat[a][b]+mat2.mat[a][b];
        }
}
void mat :: sub_mat(mat &mat1,mat &mat2)
{
  for(int a=0;a<MAX;a++)
    for(int b=0;b<MAX;b++)
        {
           mat[a][b]=mat1.mat[a][b]-mat2.mat[a][b];
        }
}
void mat :: mul_mat(mat &mat1,mat &mat2)
{
  for (int k=0;k<MAX;k++)
    for(int a=0;a<AAX;a++)
      for(int b=0;b<MAX;b++)
        {
           mat[a][b]=mat1.mat[a][b]*mat2.mat[a][b];
        }
}
void mat :: transpose(mat &m1)
{
    for(int a=0;a<MAX;a++)
      for(int b=0;b<MAX;b++)
      {
          mat[a][b]=m1.mat[b][a];
      }
}
void mat :: display()
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
  mat mat1,mat2,mat3;
  cout<<"1st matrix here: "; mat1.create();
  cout<<"\n  2nd matrix here: "; mat2.create();
  cout<<"\n1st matrix: "<<endl; mat1.display();
  cout<<"\n2nd matrix: "<<endl; mat2.display(); mat3.add_mat(mat1,mat2);
  cout<<"\nAddition of 2 matrix: "<<endl; mat3.display();
  cout<<"\nSubtraction of 2 matrix: "<<endl; mat3.sub_mat(mat1,mat2); mat3.display();
  cout<<"\nMultiplication of 2 matrix: "<<endl; mat3.mul_mat(mat1,mat2); mat3.display();
  cout<<"\nTranspose of 1st matrix: "<<endl; mat3.transpose(mat1); mat3.display();
  cout<<"\nTranspose of 2nd matrix: "<<endl; mat3.transpose(mat2); mat3.display();
  return 0;
}
