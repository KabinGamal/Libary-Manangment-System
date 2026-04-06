#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <regex>
using namespace std;

// Utility functions
class DateUtils {
public:
    static string getCurrentDate() {
        time_t now = time(0);
        tm* localtm = localtime(&now);
        stringstream ss;
        ss << 1900 + localtm->tm_year << "-" 
           << setw(2) << setfill('0') << (1 + localtm->tm_mon) << "-" 
           << setw(2) << setfill('0') << localtm->tm_mday;
        return ss.str();
    }