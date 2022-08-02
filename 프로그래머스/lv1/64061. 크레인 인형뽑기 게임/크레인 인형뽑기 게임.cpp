#include <string>
#include <vector>
#include <iostream>
using namespace std;
int solution(vector<vector<int>> board, vector<int> moves) {
    vector<int> bucket;
    bucket.push_back(-1);
    int k = 0;
    int cnt = 0;
    while (k != moves.size()) {
        for (int j = 0; j < board.size(); j++) {
            if (board[j][moves[k] - 1] == 0) {
                continue;
            }
            else {
                if (bucket[bucket.size() - 1] == board[j][moves[k] - 1]) {
                    bucket.erase(bucket.end()-1);
                    board[j][moves[k] - 1] = 0;
                    cnt += 2;
                    break;
                }
                else {
                    bucket.push_back(board[j][moves[k] - 1]);
                    board[j][moves[k] - 1] = 0;
                    break;
                }       
            }
        }
        k++;
    }
    return cnt;
}