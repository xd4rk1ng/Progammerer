#include <iostream>
#include <fstream>
#include <string>

static const std::string fileContents_1 =
    R"(#include <iostream>

int main(int reiterate = )";
static const std::string fileContents_2 =
    R"(
 );

int main(int reiterate)
{
    using namespace std;

    ofstream file("./codeDir/code.cpp");
    do
    {
        if (!file.is_open())
        {
            fileFiller(file, fileContents_1);
            fileFiller(file, to_string(reiterate));
            fileFiller(file, fileContents_2);
        } else
            cout << "Error Opening file at " << reiterate << " iteration";

    } while (reiterate > 0);

    file.close();
    return 0;
}
)";

void fileFiller(std::ofstream &file, const std::string &fileContents)
{
    file << fileContents;
}

int main(int reiterate = 0);
int main(int reiterate)
{
    using namespace std;

    ofstream file("./codeDir/code.cpp");
    do
    {
        if (!file.is_open())
        {
            fileFiller(file, fileContents_1);
            fileFiller(file, to_string(reiterate));
            fileFiller(file, fileContents_2);
        } else
            cout << "Error Opening file at " << reiterate << " iteration";

    } while (reiterate > 0);

    file.close();
    return 0;
}