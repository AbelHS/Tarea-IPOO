#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Graph
{
        map<int, vector<int> > nodo;

    public:
        Graph(const vector<int> starts, const vector<int> ends);
        int numOutGoing(const int nodeID) const;
        const vector<int> &adjacent(const int nodeID);
};

Graph::Graph(const vector<int> starts, const vector<int> ends)
{
    if(starts.size()!=ends.size())
    {
        cout << "error " << endl;

    }
    for(int i = 0; i<starts.size();i++){
        nodo[starts[i]].push_back(ends[i]);
    }
}



int Graph::numOutGoing(const int nodeID)const{
    return (nodo.find(nodeID))->second.size();
}

const vector<int> &Graph::adjacent(const int nodeID)
{
    return (nodo.find(nodeID))->second;
}


int main()
{

    vector<int> s,t;

    s.push_back(1000000);
    s.push_back(1);
    s.push_back(1);
    s.push_back(1);
    s.push_back(3);
    s.push_back(9);

    t.push_back(80);
    t.push_back(2);
    t.push_back(2);
    t.push_back(7);
    t.push_back(2);
    t.push_back(3);



    Graph g(t,s);
    cout<<g.numOutGoing(80)<<endl;
    const vector<int> ad = g.adjacent(80);



    for(int i = 0; i<ad.size(); i++)
    {
        cout<<ad[i]<<endl;
    }

return 0;
}
