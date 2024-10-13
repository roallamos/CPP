#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream       infile;
    std::ofstream       outfile;
    std::string         str;
    std::string         new_str;
    std::string         name;
    int                 start;
    long unsigned int   i = 0;

    if (argc != 4)
        return (0);
    infile.open(argv[1]);
    name.append(argv[1]);
    name.append(".replace");
    outfile.open(name.c_str());
    if (!infile)
		std::cout << "File not created!";
	else
    {
		std::cout << "File created successfully!\n";
        while (std::getline(infile,new_str))
        {
            str += new_str;
            if (!infile.eof())
                str += '\n';
        }
        while (i != str.length())
        {
            outfile << str.at(i);
            start = str.find(argv[2]);
            i++;
        }
        std::cout << start << std::endl;
        std::cout << str << std::endl;
		infile.close(); 
	}
    return (0);
}