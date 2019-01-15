#include<iostream>
#include "Subsequence.h"
int main()
{
    char inp[100];
    std::cin>>inp; // Input array to store the input.
    char out[100]; // Output array to store the generated subsequence.
    printsub(inp,out,0,0);
}