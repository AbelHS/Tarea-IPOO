
#include <iostream>
using namespace std;

#include <vector>
#include <map>

class Graph{
    map<int, vector<int> >nodes;

public:
    Graph(const vector<int> starts, const vector<int> ends);
    int numOutGoing(const int nodeID) const;
    const vector<int> &adjacent(const int nodeID);
};

Graph::Graph(const vector<int> starts, const vector<int> ends){
    if(starts.size()!=ends.size()){cout << ("los vectores son de diferente tamanho");
    }
    for(int i = 0; i<starts.size();i++){
        nodes[starts[i]].push_back(ends[i]);
    }
}
int Graph::numOutGoing(const int nodeID)const{
    return (nodes.find(nodeID))->second.size();
}

const vector<int> &Graph::adjacent(const int nodeID){
    return (nodes.find(nodeID))->second;
}


int main()
{
    vector<int> s,t;

    s.push_back(1);
    s.push_back(1);
    s.push_back(1);
    s.push_back(5);
    s.push_back(5);
    s.push_back(4);


    t.push_back(2);
    t.push_back(3);
    t.push_back(4);
    t.push_back(4);
    t.push_back(1);
    t.push_back(1);

    Graph g(s,t);
    cout<<g.numOutGoing(7)<<endl;

    const vector<int> ad= g.adjacent(10);


    for(int i = 0; i<ad.size(); i++){
        cout<<ad[i]<<endl;
    }

    return 0;
}
