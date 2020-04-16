#include <limits>
#include <string>
#include <sstream>
using namespace std;
class SolutionShortestPalindrome {
public:
    //Works, but not elegant
    string shortestPalindrome1(string s) {
        int len = s.length();
        ostringstream os;
        int loob = numeric_limits<int>::min(), uoob = numeric_limits<int>::max();
        int begin = 0, end = len, endsofar = len, prevchar = loob, lasthead = 0;
        while (begin < endsofar)
        {
            if (prevchar != loob && prevchar != uoob && s[end] == prevchar)
                end += begin - 1;
            else if (end - begin == 1 && lasthead > 0 && lasthead < endsofar)
                end = lasthead;
            else
                --end;
            endsofar = end;
            begin = lasthead = 0;
            prevchar = loob;
            while (begin < end && s[begin] == s[end])
            {
                if (loob == prevchar)prevchar = s[end];
                else if (prevchar != s[end])prevchar = uoob;
                if (s[0] == s[end])lasthead = end;
                begin++, --end;
            }
            if (s[end] == s[0])lasthead = end;
            if (begin >= end)
            {
                for (int i = len - 1; i > endsofar; --i)
                    os << s[i];
                break;
            }
        }
        return os.str() + s;
    }
};
