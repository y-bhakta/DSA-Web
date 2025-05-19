#include<iostream>
#include<vector>
using namespace std;    
int main(){
    vector<int> v1{1,2,3,4,5,6,7,8,9,10};
    cout<<"Methods of vector\n";
    cout<<"Size of vector: "<<v1.size()<<endl;
    cout<<"PushBack: ";
    v1.push_back(11);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"PopBack: ";
    v1.pop_back();
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Insert: ";
    v1.insert(v1.begin()+5, 100);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Erase: ";
    v1.erase(v1.begin()+5);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Empty: ";
    if(v1.empty()){
        cout<<"Vector is empty\n";
    }
    else{
        cout<<"Vector is not empty\n";
    }
    cout<<"Front: "<<v1.front()<<endl;
    cout<<"Back: "<<v1.back()<<endl;
    cout<<"At(Index 5): "<<v1.at(5)<<endl;
    cout<<"Insert(End): ";
    v1.insert(v1.end(), 200);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Cleared"<<endl;
    v1.clear();
    cout<<"Size of vector: "<<v1.size()<<endl;

    return 0;
}