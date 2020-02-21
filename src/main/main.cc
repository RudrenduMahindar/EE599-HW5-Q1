#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    vector<int> v={8,3,10,1,6,14,4,7,13};
    BST s(v);
    vector<int> v1 = s.TreeToVector();
    cout<<"Tree -> vector :"<<endl;
    for(auto& i:v1)
        cout<<" "<<i;
    cout<<endl;
    TreeNode* root_node=s.get_root();
    cout<<"Height = "<<s.height(root_node)<<endl;
    
    /*int val=14;
    cout<<" Find val = "<<val<<" Found = "<<s.find(val)<<endl;
    val=0;
    s.push(val);
    v1 = s.TreeToVector();
    cout<<"after push val = "<<val<<endl;
    for(auto& i:v1)
        cout<<" "<<i;
    val=20;
    cout<<"\nerase = "<<s.erase(val)<<" val = "<<val<<endl;*/
    /*v1 = s.TreeToVector();
    for(auto& i:v1)
        cout<<" "<<i;
    cout<<endl;*/        
    return EXIT_SUCCESS;
}