#include <bits/stdc++.h>
using namespace std;
#include "install/keypairsystem/index.h"
#include "install/systemop_linux.h"
#include "install/system_front.h"
#include "install/terminal.h"

int main(){
    Front::write_helptext();
    printf("\n");
    bool quited=false,inited=false;
    while(!quited){
        printf("topanPage$ ");
        string op;
        if(!inited){
            printf("systeminit\n");
            op="systeminit",inited=true;
        }
        else getline(cin,op);
        string opidentifier=Terminal::cutoperator(op).first;
        string opdetail=Terminal::cutoperator(op).second;
        if(opidentifier=="systeminit"){
            continue;
        }
        if(opidentifier=="quit"){
            quited=true;
            continue;
        }
        if(opidentifier=="init"){
            continue;
        }
        printf("Can't find operation \"%s\".\n",opidentifier.c_str());
    }
    return 0;
}