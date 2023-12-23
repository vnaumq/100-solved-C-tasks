#include <iostream>
using namespace std;

char board[3][3]; // игровое поле 3х3

void initialize_board() // функция инициализации игрового поля
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void print_board() // функция вывода игрового поля на экран
{
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) {
                cout << "|";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << "  -----" << endl;
        }
    }
}

bool is_winner(char player) // функция проверки победы
{
    // проверка строк
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // проверка столбцов
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return true;
        }
    }

    // проверка диагоналей
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

bool is_board_full() // функция проверки заполненности игрового поля
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void make_move(char player) // функция совершения хода
{
    setlocale(LC_ALL, "RUS");
    int row, col;
    do {
        cout << "Ходит игрок " << player << endl;
        cout << "Введите номер строки (1-3): ";
        cin >> row;
        cout << "Введите номер столбца (1-3): ";
        cin >> col;
        row--;
        col--;
    } while (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ');

    board[row][col] = player;
}

int main()
{
    initialize_board(); // инициализируем игровое поле

    char player = 'X'; // начинает игрок 'X'

    while (true) {
        print_board(); // выводим игровое поле на экран
        make_move(player); // совершаем ход
    }
}