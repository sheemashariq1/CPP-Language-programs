// To merge the contents of the two given data files into a third data file.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout1("file1.txt");
    ofstream fout2("file2.txt");

    if (!fout1 || !fout2)
    {
        cout << "Error creating source files!" << endl;
        return 0;
    }

    fout1 << "Hello from the first file!\n";
    fout2 << "Greetings from the second file!\n";

    fout1.close();
    fout2.close();

    cout << "Source files created with sample data." << endl;

    // STEP 2: Merge files
    ifstream f1("file1.txt");
    ifstream f2("file2.txt");
    ofstream f3("merged.txt");

    if (!f1 || !f2 || !f3)
    {
        cout << "Error opening files for merging!" << endl;
        return 0;
    }

    char ch;

    // Copy file1
    while (f1.get(ch))
        f3.put(ch);

    // Copy file2
    while (f2.get(ch))
        f3.put(ch);

    cout << "Merge complete! Check 'merged.txt' file." << endl;

    f1.close();
    f2.close();
    f3.close();

    return 0;
}
