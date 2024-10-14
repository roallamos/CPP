#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream       infile;
    std::ofstream       outfile;
    std::string         str;
    std::string         str_replace;
    std::string         s1 = argv[2];
    std::string         s2 = argv[3];
    std::string         new_str;
    std::string         name;
    unsigned long int   start;
    long unsigned int   i = 0;
    long unsigned int   j = 0;

    if (argc != 4)
        return (0);
    infile.open(argv[1]);
    name.append(argv[1]);
    name.append(".replace");
    outfile.open(name.c_str());
	std::cout << "File created successfully!\n";
    while (std::getline(infile,new_str))
   {
        str += new_str;
        if (!infile.eof())
            str += '\n';
    }
    while (str.find(s1) != (long unsigned int)-1)
    {
        i = 0;
        while (i != str.length())
        {
            j = 0;
            start = str.find(s1);
            std::cout << start << std::endl;
            while (i != str.length() && i != start)
                str_replace += str.at(i++);
            while (i == start && j != s2.length())
                str_replace += s2.at(j++);
            if (j != 0)
                i += s1.length();
        }
        str = str_replace;
        str_replace.clear();
    }
    outfile << str;
	infile.close();
    outfile.close();
    return (0);
}