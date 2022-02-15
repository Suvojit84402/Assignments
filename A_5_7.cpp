/*7.Write a program to read a file and count the number of chars, words, and lines, and print these quantities.*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char s;
    int character = 0, word = 1, line = 1;
    ifstream fin;
    fin.open("file1.txt",ios::in);
    if(!fin){
        cout<<"Invalid File!"<<endl;
    }
    else{
    fin.seekg(0, ios::beg);
    while (fin)
    {
        fin.get(s);
        if (s != ' ' && s != '\n')
        {
            character++;
        }
        if (s == ' ' || s=='\n')
        {
            word++;
        }
        if (s == '\n')
        {
            line++;
        }
    }
    }
    fin.close();

    cout << "No. of Characters : " << character << endl;
    cout << "No. of Words : " << word << endl;
    cout << "No. of Lines : " << line << endl;

    return 0;
}












/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    FILE *fr;
    char s;
    int character = 0, word = 1, line = 1;
    fr = fopen("file1.txt", "r");
    if (fr == NULL)
    {
        cout << "Invalid File Name or File unable to open." << endl;
        exit(1);
    }
    s = fgetc(fr);
    if (s == EOF)
    {
        cout << "Nothing here!"<<endl<<"File empty!" << endl;
        exit(-1);
    }
    while (s != EOF)
    {
        if (s != ' ' && s != '\n')
        {
            character++;
        }
        if (s == ' ')
        {
            word++;
        }
        if (s == '\n')
        {
            line++;
            word++;
        }
        s = fgetc(fr);
    }
    fclose(fr);

    cout << "No. of Characters : " << character << endl;
    cout << "No. of Words : " << word << endl;
    cout << "No. of Lines : " << line << endl;

    return 0;
}*/
