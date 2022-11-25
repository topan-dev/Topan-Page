namespace Front{
    void write_helptext(){
        ifstream help("install/help");
        string str;
        while(getline(help,str))
            printf("%s\n",str.c_str());
        help.close();
    }
}