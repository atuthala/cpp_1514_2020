#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int64_t x;
    int64_t m;
    bool is_m_vacant = true;

    cin >> x;
    while (x != 0) {  // ïîêà X íå òåðìèíàëüíûé
        // исправить
        // We’ve detected the file encoding as ISO-8859-1. When you commit changes we will transcode it to UTF-8.
        if (x % 2 == 0) {
            if (is_m_vacant or x > m) {
                m = x;
                is_m_vacant = false;
            }
        }
        cin >> x;
    }

    if (is_m_vacant)
        cout << "No even numbers in succession! \n";
    else
        cout << "Maximum from even numbers is " << m << '\n';
}
