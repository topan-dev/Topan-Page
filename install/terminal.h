namespace Terminal{
    pair<string,string> cutoperator(string op){
        int spacepos=op.find(' ');
        string opidentifier=op.substr(0,spacepos);
        string opdetail;
        if(spacepos==-1)opdetail="";
        else opdetail=op.substr(spacepos+1,(int)(op.size())-spacepos-1);
        return{opidentifier,opdetail};
    }
}