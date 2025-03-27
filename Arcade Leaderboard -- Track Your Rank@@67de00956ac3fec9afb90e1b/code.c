#include <stdio.h>

int removeDuplicates(int scores[], int size, int uniqueScores[]) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0 || scores[i] != scores[i - 1]) {
            uniqueScores[j++] = scores[i];
        }
    }
    return j;
}

void findRanks(int uniqueScores[], int size, int gameScores[], int gameSize, int ranks[]) {
    int pointer = size - 1;
    for (int i = 0; i < gameSize; i++) {
        while (pointer >= 0 && gameScores[i] >= uniqueScores[pointer]) {
            pointer--;
        }
        ranks[i] = pointer + 2;
    }
}

int main() {
    int leaderboard[] = {100, 100, 50, 40, 40, 20, 10};
    int leaderboardSize = sizeof(leaderboard) / sizeof(leaderboard[0]);
    int gameScores[] = {5, 25, 50, 120};
    int gameSize = sizeof(gameScores) / sizeof(gameScores[0]);
    int uniqueScores[leaderboardSize];
    int uniqueSize = removeDuplicates(leaderboard, leaderboardSize, uniqueScores);
    int ranks[gameSize];
    findRanks(uniqueScores, uniqueSize, gameScores, gameSize, ranks);
    for (int i = 0; i < gameSize; i++) {
        printf("%d\n", ranks[i]);
    }
    return 0;
}