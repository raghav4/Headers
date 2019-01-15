void printsub(char *inp, char *out,int i,int j)
{
    if(inp[i]=='\0'){
        out[j]='\0';
        std::cout<<out<<" ";
        return;
    }
    out[j]=inp[i];
    printsub(inp,out,i+1,j+1);
    printsub(inp,out,i+1,j);
}