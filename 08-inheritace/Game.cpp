#include <iostream>
using namespace std;

class Game
{
protected:
    int scores[5];

public:
    void setScore(int round, int score)
    {
        if (round >= 1 && round <= 5)
        {
            scores[round - 1] = score;
        }
    }

    int getScore(int round)
    {
        if (round >= 1 && round <= 5)
        {
            return scores[round - 1];
        }

        return -1; // invalid round
    }
};

class GameResult : public Game
{
    int results[5]; // 2 = win, 1 = draw, 0 = lose

public:
    void setResult(int round, int result)
    {
        if (round >= 1 && round <= 5)
        {
            results[round - 1] = result;
        }
    }

    int getResult(int round)
    {
        if (round >= 1 && round <= 5)
        {
            return results[round - 1];
        }

        return -1;
    }

    int calculateFinalResult()
    {
        int wins = 0, losses = 0, draws = 0;

        for (int i = 0; i < 5; i++)
        {
            if (results[i] == 2)
                wins++;
            else if (results[i] == 0)
                losses++;
            else if (results[i] == 1)
                draws++;
        }

        if (wins > losses)
            return 2;
        else if (losses > wins)
            return 0;
        else
            return 1;
    }
};

int main()
{
    GameResult gr;

    gr.setScore(1, 10);
    gr.setResult(1, 2);

    gr.setScore(2, 5);
    gr.setResult(2, 0);

    gr.setScore(3, 8);
    gr.setResult(3, 2);

    gr.setScore(4, 8);
    gr.setResult(4, 1);

    gr.setScore(5, 3);
    gr.setResult(5, 0);

    cout << "Round scores and results:\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << "Round " << i
             << " - Score: " << gr.getScore(i)
             << ", Result: " << gr.getResult(i) << "\n";
    }

    int finalResult = gr.calculateFinalResult();

    cout << "\nFinal Result: ";

    if (finalResult == 2)
        cout << "Win\n";
    else if (finalResult == 0)
        cout << "Lose\n";
    else
        cout << "Draw\n";

    return 0;
}