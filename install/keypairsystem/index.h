namespace KeyPair{
    struct Pairs{
        vector<pair<string,string> > nodes;
        void clear(){
            nodes.clear();
        }
        string getvaluebyid(string id){
            for(pair<string,string> i:nodes)
                if(i.first==id)return i.second;
            return "undefined";
        }
    };
    Pairs loadpairs(string filepath){
        ifstream in(filepath);
        Pairs res; res.clear();
        bool ended=false;
        string str1,str2;
        while(in>>str1){
            char ch;
            getline(in,str2);
            if(str1!="#"){
                string value="";
                bool spaced=false;
                for(int i=0;i<str2.size();i++){
                    if(str2[i]!=' ')spaced=true;
                    if(spaced)value+=str2[i];
                }
                res.nodes.push_back({str1,value});
            }
        }
        in.close();
        return res;
    }
    void savepairs(string filepath,Pairs datas){
        ofstream out(filepath);
        for(pair<string,string> i:datas.nodes)
            out<<i.first<<' '<<i.second<<endl;
    }
}