#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
// declaring vector of vectors here

    vector<vector<int> > items;

    int k;

    int N, M;
    cin>>N;
// i value stands for no of rows here(manipulate i as you like)

    for (int i =0; i<N; i++)
    {
//adding rows of vectors here
        items.push_back(vector<int>());
//inputting each value into a particular of column size 4
        cin>>M;
        for (int j=0; j<M; j++)
        {
            cin >> k;
            items[i].push_back(k);
        }
    }

    cout<<endl;

//printing out the elements
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<items[i].size(); j++)
        {
            cout<< items[i][j]<<"\t\t";
        }
        cout<<endl;
    }
    return 0;

}
