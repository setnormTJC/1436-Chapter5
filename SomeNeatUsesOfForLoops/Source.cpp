#include <iostream>

#include<filesystem>

#include<fstream>

#include<string>

using namespace std;

int main()
{
    //int fileCount = 0;
    //string rootFolderPath = "C:/Users/Work/Desktop/misc/testTextFiles";
    //for (const auto& entry : std::filesystem::directory_iterator(rootFolderPath))
    //{
    //    fileCount++;
    //    string s = entry.path().string();

    //    ifstream inputFile{ s }; 

    //    while (!inputFile.eof())
    //    {
    //        string inputLine; 
    //        getline(inputFile, inputLine);

    //        cout << inputLine << endl; 

    //    }
    //    cout << "Filepath number " << fileCount << ": " << s << endl;
    //}

    //reading in a DICTIONARY FILE - hooray!

    ifstream dictFile{ "C:\\Users\\Work\\Downloads\\words.txt" };


    int longWordCount = 0;

    while (!dictFile.eof())
    {
        string word; 
        getline(dictFile, word);


        if (word.length() > 15 && word[0] == 'a')
        {
            cout << word << endl;
            longWordCount++; 
        }
    }

    cout << "The number of words with more than 15 characters is : " << longWordCount << endl;

    dictFile.close(); 

    return 0;
}