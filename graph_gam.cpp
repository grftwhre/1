#include <iostream>
using namespace std;

void swap_string(queue A,int k,int i)
{
for (int j=0,j<i-k;j++)
swap(A.at(j),A.at(k-j))
}

int f(A.at(a),A.at(b),G)
{
if ((G[a][b]==0)&(G[b][a]==0))
return 0;
if ((G[a][b]!=0)&(G[b][a]!=0))
return 1;
}
int main() {
int N;
int G[N][N];
printf (“enter N”);
scanf(“%d”,&N);
for (int i=0;i<N;i++)
{
for (int j=0;j<N;j++)
{
printf(“G[i][j] = “);
scanf(“%d”,&G[i][j]);
}
}
queue <int>A; //очередь вершин//
//заполнить список вершин//

int k=n-1;
while(k)
{
if (f(A.at(0),A.at(1),G)!=0) //проверка есть ли ребро между 0 и 1 вершиной//

while((f(A.at(0),A.at(i),G)!=0)&&(f(A.at(1),A.at(i+1),G)!=0))
i++;

swap_string(A,1,i); //переворачиваем перестановку от 1 до i//
A.push_back(A.top()); //добавление в конец первой вершины//
A.pop(); //удаление вершины//
k—;
}
} 
