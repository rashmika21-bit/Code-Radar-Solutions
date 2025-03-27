#include <stdio.h>

void calculateRanks(int leaderboard[], int leaderboardSize, int yourScores[], int yourScoresSize) {
    // Create an array to store unique scores from the leaderboard
    int uniqueScores[leaderboardSize];
    int uniqueCount = 0;

    // Create unique scores from the leaderboard
    for (int i = 0; i < leaderboardSize; i++) {
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            uniqueScores[uniqueCount++] = leaderboard[i];
        }
    }

    // Calculate ranks for your scores
    for (int i = 0; i < yourScoresSize; i++) {
        int rank = 1; // Start ranking from 1
        for (int j = 0; j < uniqueCount; j++) {
            if (yourScores[i] < uniqueScores[j]) {
                rank++;
            } else {
                break; // No need to check further
            }
        }
        printf("After game %d (score: %d), your rank is: %d\n", i + 1, yourScores[i], rank);
    }
}

int main() {
    // Example leaderboard scores (descending order)
    int leaderboard[] = {100, 90, 90, 80, 70};
    int leaderboardSize = sizeof(leaderboard) / sizeof(leaderboard[0]);

    // Example your game scores (ascending order)
    int yourScores[] = {60, 75, 85, 90};
    int yourScoresSize = sizeof(yourScores) / sizeof(yourScores[0]);

    // Calculate and print ranks
    calculateRanks(leaderboard, leaderboardSize, yourScores, yourScoresSize);

    return 0;
}