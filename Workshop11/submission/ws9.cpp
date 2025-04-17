    #include <iostream>
    #include <fstream>
    #include <vector>
    #include <string>
    #include <stdexcept>

    using namespace std;

    typedef vector<int> Records;

    class RecordsManager {
    private:
        fstream _file;
        string _filename;

    public:
        RecordsManager(string filename) : _filename(filename) {}

        // Updated read function with exception handling
        void read(Records &records) {
            _file.open(_filename, ios::in);
            if (!_file.is_open()) {
                throw runtime_error("Error: Unable to open");
            }

            try {
                string line;
                while (getline(_file, line)) {
                    try {
                        int value = stoi(line);  // Convert string to integer
                        records.push_back(value);
                    } catch (const invalid_argument &e) {
                        _file.close();  // Ensure file is closed before throwing
                        throw invalid_argument("invalid_argument error");
                    } 
                    catch (const out_of_range &e) {
                        _file.close();  // Ensure file is closed before throwing
                        throw out_of_range("out_of_range error");
                    }
                }
            } catch (...) {
                _file.close();  // Ensure file is closed in case of any error
                throw;  // Propagate exception upwards
            }

            _file.close();  // Close file after reading successfully
        }
    };

    int main(int argc, char* argv[]) {
        Records myRecords;

        string filename = "records.txt";
        if (argc > 1) filename = argv[1];

        try {            
            RecordsManager recordM(filename); 
            
            // Attempt to read records
            recordM.read(myRecords);

            // Calculate and print the sum of records
            int sum = 0;
            for (int i = 0; i < myRecords.size(); i++) {
                sum += myRecords[i];
            }
            cout << sum << endl;

        } catch (const exception &e) {
            // Print the error message
            cout << e.what() << endl;
        }

        return 0;
    }
