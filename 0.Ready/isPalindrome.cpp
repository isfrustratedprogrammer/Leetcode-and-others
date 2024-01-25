#include <iostream>
#include <vector>
#include <algorithm>

class IdkHowToNameIt {
public:
    std::vector<int> merge_sorted(std::vector<int>& vec1, std::vector<int>& vec2 ){
        std::vector<int> result;
        int p1 = 0;
        int p2 = 0;
        while(p1 < vec1.size() || p2 < vec2.size()) {
            if(p1 == vec1.size()) {
                result.push_back(vec2[p2]);
                p2++;
            }
            else if(p2 == vec2.size()) {
                result.push_back(vec1[p1]);
                p1++;
            }
            else if(vec1[p1] <= vec2[p2]) {
                result.push_back(vec1[p1]);
                p1++;
            }
            else {
                result.push_back(vec2[p2]);
                p2++;
            }
        }
        return result;
    }
    void printVector(const std::vector<int>& vec) {
        for(int i : vec) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    IdkHowToNameIt finger;

    std::vector<int> vec51 = {1, 5, 2, 7, 2, 9, 19};
    std::vector<int> vec10 = {5, 7, 14, 8, 1, 2, 19};
    std::sort(vec51.begin(), vec51.end());
    std::sort(vec10.begin(), vec10.end());

    finger.printVector(finger.merge_sorted(vec10, vec51));
}
