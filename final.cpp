#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <string.h>
using namespace std;
int player1[12] = {0}, p1 = 0, runs1 = 0, ball1 = 0, balls1[12] = {0};
int player2[12] = {0}, p2 = 0, runs2 = 0, ball2 = 0, balls2[12] = {0};
int four = 0, six = 0, t_four = 0, t_six = 0;
// string team2[12];
string player_ind[12] = {"Dhawan", "Rohit", "Virat kholi", "Ayer", "Pant", "Hardik pandya", "Krunal pandya", "B kumar", "Bumra", "Ishanth sharma", "Shami"};
string player_pak[12] = {"Babar Azam", "Md Rizwan", "Azam Khan", "Afridi", "Md Hafeez", "Fakhar Zaman", "Md Hasnain", "Sohaib Maqsood", "Shadab Khan", "Wasim", "Haris Rauf"};
string player_ind_copy[12], player_pak_copy[12];
void star();
int teamplayers(int res, int value)
{
    cout << "\n\n\n";
    star();
    cout << "\t\t\t\t\t\t\t Team Details" << endl;
    star();
    if (res == 1)
    {
        cout << "\t\t\t\t (toss)Team 1 ";
        if (value == 1)
            cout << "(Batting)";
        else
            cout << "(Bowling)";
        cout << "\t\t\t\t Team 2 \n";
    }
    else if (res == 2)
    {
        cout << "\t\t\t\t\t Team 1 "
             << "\t\t\t\t(toss)Team 2 ";
        if (value == 1)
            cout << "(Batting)\n";
        else
            cout << "(Bowling)\n";
    }
    else
    {
        cout << "\n\nInvalid ";
        getch();
    }
    star();
    cout << "\n";
    for (int i = 0; i < 11; i++)
    {
        cout << "\t\t\t " << setw(18) << player_ind[i] << "\t\t\t\t\t" << player_pak[i] << "\n";
    }
    cout << "\n";
    star();
    getch();

    return 0;
}
int players_ind()
{
    int bowlers;
    srand(time(NULL));
    bowlers = rand() % 11;
    cout << "  is bowled by  " << player_ind[bowlers];
    return 0;
}
int players_pak()
{
    int bowlers;
    srand(time(NULL));
    bowlers = rand() % 11;
    cout << " is bowled by " << player_pak[bowlers];
    return 0;
}
int toss()
{
    char ch;
    int coin, won, choice, Toss;
invalid1:
    cout << "\n\n\n";
    star();
    cout << "\t\t\t\t\t\t\t Toss \n";
    star();
    cout << "\n\t\t\t\t\t\t Team 1 can choose";
    cout << "\n\n\t\t\t\t\t\t Enter H for Head and T for Tail";
    cout << "\n\n\t\t\t\t\t\t Enter your choice : ";
    cin >> ch;
    cout << "\n";
    star();
    srand(time(NULL));
    coin = rand() % 2;
    if (ch == 'H' || ch == 'h')
    {
        if (coin == 0)
        {
            cout << "\t\t\t\t\t\tCoin has been tossed and its Head\n";
            star();
            getch();
            system("cls");
            cout << "\n\n\n";
            star();
            cout << "\t\t\t\t\t\t ****TEAM 1 WON THE TOSS****\n";
            star();
            Toss = 1;
        invalid2:
            star();
            cout << "\t\t\t\t\t Enter 1 for batting or 2 for bowling = ";
            cin >> choice;
            star();
            if (choice == 1)
            {
                won = 1;
            }
            else if (choice == 2)
            {
                won = 2;
            }
            else
            {
                star();
                cout << "\t\t\t\t\t\t\tInvalid input\n";
                star();
                getch();
                goto invalid2;
            }
            getch();
            system("cls");
        }
        else
        {
            cout << "\t\t\t\t\t\t Coin has been tossed and its Tail\n";
            star();
            getch();
            system("cls");
            cout << "\n\n\n";
            star();
            cout << "\t\t\t\t\t\t ****TEAM 2 WON THE TOSS****\n";
            star();
            Toss = 2;
        invalid3:
            star();
            cout << "\t\t\t\t\tEnter 1 for batting or 2 for bowling = ";
            cin >> choice;
            star();
            if (choice == 1)
            {
                won = 2;
            }
            else if (choice == 2)
            {
                won = 1;
            }
            else
            {
                star();
                cout << "\t\t\t\t\t\t\tInvalid input\n";
                star();
                getch();
                goto invalid3;
            }
            getch();
            system("cls");
        }
    }
    else if (ch == 'T' || ch == 't')
    {

        if (coin == 1)
        {
            cout << "\t\t\t\t\t\tCoin has been tossed and its Tail\n";
            star();
            getch();
            system("cls");
            cout << "\n\n\n";
            star();
            cout << "\t\t\t\t\t\t ****TEAM 1 WON THE TOSS****\n";
            star();
            Toss = 1;
        invalid4:
            star();
            cout << "\t\t\t\t\t Enter 1 for batting or 2 for bowling = ";
            cin >> choice;
            star();
            if (choice == 1)
            {
                won = 1;
            }
            else if (choice == 2)
            {
                won = 2;
            }
            else
            {
                star();
                cout << "\t\t\t\t\t\t\tInvalid input\n";
                star();
                getch();
                goto invalid4;
            }
            getch();
            system("cls");
        }
        else
        {
            cout << "\t\t\t\t\t\t Coin has been tossed and its Head\n";
            star();
            getch();
            system("cls");
            cout << "\n\n\n";
            star();
            cout << "\t\t\t\t\t\t ****TEAM 2 WON THE TOSS****\n";
            star();
            Toss = 2;
        invalid5:
            star();
            cout << "\t\t\t\t\t Enter 1 for batting or 2 for bowling = ";
            cin >> choice;
            star();
            if (choice == 1)
            {
                won = 2;
            }
            else if (choice == 2)
            {
                won = 1;
            }
            else
            {
                star();
                cout << "\t\t\t\t\t\t\tInvalid input\n";
                star();
                getch();
                goto invalid5;
            }
            getch();
            system("cls");
        }
    }
    else
    {
        star();
        cout << "\t\t\t\t\t\t\t INVALID CHOICE\n";
        star();
        getch();
        system("cls");
        goto invalid1;
    }
    teamplayers(Toss, choice);
    return won;
}
void star()
{
    std::cout << "\t\t\t";
    for (int i = 1; i < 81; i++)
    {
        std::cout << "*";
    }
    std::cout << endl;
}
int match(int res)
{
    for (int i = 0; i < 11; i++)
    {
        player_ind_copy[i] = player_ind[i];
        player_pak_copy[i] = player_pak[i];
    }
    system("cls");
    int f = 0, n, i, j, m = 6, k = 1, r = 1, total = 0, a, c = 1, z = 0, b, wickets = 10, w = 0, y = 0, x = 1, p;
    float runrate, runrate1, reqrunrate;
    int f1 = 0, i1, innings, j1, m1 = 6, k1 = 1, r1 = 1, total1 = 0, a1, c1 = 1, z1 = 0, b1, wickets1 = 10, w1 = 0, y1 = 0, x1 = 1;
    // int play[12];
    char strike1 = '*';
    int id1 = 0, id2 = 1, id3;
    string final, temp, wic = "(out)";
    std::cout << endl
              << endl
              << endl
              << endl
              << endl;
    star();
    std::cout << "\t\t\t\t\t\tCRICKET SCORECARD MANAGEMENT SYSTEM\n";
    star();
over:
    cout << "\n\t\t\t\t\t\t Enter the number of overs = ";
    cin >> n;
    if (n > 0)
    {
        system("cls");
        star();
        cout << "\t\t\t\t\t\t\t TEAM " << res << "\n";
        star();
        for (i = 0; i < n; i++)
        {
            srand(time(NULL));
            star();
            cout << "\t\t\t\t\t\t Over  " << k;
            if (res == 1)
            {
                players_pak();
            }
            else
            {
                players_ind();
            }
            cout << "\n";
            star();
            cout << "\t\t\t\t\t    NAME \t\tRUNS \t\t   OVERS \n";
            four = 0;
            six = 0;
            for (j = 1; j <= m; j++)
            {
                if (wickets == 0)
                {
                    cout << "\n\n";
                    star();
                    cout << "\t\t\t\t\t\t FIRST INNINGS COMPLETED\n";
                    star();
                    goto jump;
                    break;
                }
                getch();
            add:
                a = rand() % 9;
                b = a;
                if (b == 5)
                {
                    // cout << "\n"
                    //      << "\t\t\t\t\t\t\t\t"
                    //      << " " << i << "." << j << " = Wicket";
                    f = 5;
                    wickets--;
                    w++;
                    y++;
                    ball1++;
                    if (strike1 == '*')
                    {
                        balls1[id1] += ball1;
                    }
                    else
                    {
                        balls1[id2] += ball1;
                    }
                    ball1 = 0;
                    if (strike1 == '*')
                    {
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id1] << setw(20) << "\tWicket \t\t   " << i << "." << j;
                            temp = player_ind[id1];
                            final = temp + " " + wic;
                            player_ind[id1] = final;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id1] << setw(20) << "\tWicket \t\t   " << i << "." << j;
                            temp = player_pak[id1];
                            final = temp + " " + wic;
                            player_pak[id1] = final;
                        }
                        if (id1 < id2)
                        {
                            id1 = id2 + 1;
                        }
                        else
                        {
                            id1 = id1 + 1;
                        }
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t\t " << player_ind[id1] << " has come to bat";
                        }
                        else
                        {
                            cout << "\n\n\t\t\t\t " << player_pak[id1] << " has come to bat";
                        }
                    }
                    else
                    {
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id2] << setw(20) << "\tWicket \t\t   " << i << "." << j;
                            temp = player_ind[id2];
                            final = temp + " " + wic;
                            player_ind[id2] = final;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id2] << setw(20) << "\tWicket \t\t   " << i << "." << j;
                            temp = player_pak[id2];
                            final = temp + " " + wic;
                            player_pak[id2] = final;
                        }
                        if (id1 < id2)
                        {
                            id2 = id2 + 1;
                        }
                        else
                        {
                            id2 = id1 + 1;
                        }
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t\t " << player_ind[id2] << " has come to bat";
                        }
                        else
                        {
                            cout << "\n\n\t\t\t\t " << player_pak[id2] << " has come to bat";
                        }
                    }
                }
                else if (b == 7)
                {
                    // cout << "\n\n"
                    //      << "\t\t\t\t\t\t\t";
                    // cout << " " << i << "." << j << " = Wide\n";
                    if (res == 1)
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_ind[id1] << setw(20) << "\tWide \t\t   " << i << "." << j;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_pak[id1] << setw(20) << "\tWide \t\t   " << i << "." << j;
                    }
                    f = 7;
                    total++;
                    z++;
                    goto add;
                }
                else if (b == 8)
                {
                    // cout << "\n\n"
                    //      << "\t\t\t\t\t\t\t";
                    // cout << " " << i << "." << j << " = Noball\n";
                    if (res == 1)
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_ind[id1] << setw(20) << "\tNoball \t\t   " << i << "." << j;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_pak[id1] << setw(20) << "\tNoball \t\t   " << i << "." << j;
                    }
                    f = 8;
                    total++;
                    z++;
                    goto add;
                }
                else
                {
                    // cout << "\n"
                    //      << "\t\t\t\t\t\t\t"
                    //      << " " << i << "." << j << " = " << a << "\n";
                    f = 0;
                    ball1++;
                }
                if (b == 1 || b == 3)
                {
                    if (strike1 == '*')
                    {
                        player1[id1] += b;
                        strike1 = '0';
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id1] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id1] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        balls1[id1] += ball1;
                    }
                    else
                    {
                        player1[id2] += b;
                        strike1 = '*';
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id2] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id2] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        balls1[id2] += ball1;
                    }
                    ball1 = 0;
                }
                if (b == 2 || b == 4 || b == 6 || b == 0)
                {
                    if (strike1 == '*')
                    {
                        player1[id1] += b;
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id1] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id1] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        balls1[id1] += ball1;
                    }
                    else
                    {
                        player1[id2] += b;
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id2] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id2] << setw(17) << b << " \t\t   " << i << "." << j;
                        }
                        balls1[id2] += ball1;
                    }
                    ball1 = 0;
                }
                total = (total + a) - f;
                z = (z + a) - f;
                if (f == 0)
                {
                    if (b == 4)
                    {
                        four++;
                    }
                    if (b == 6)
                    {
                        six++;
                    }
                }
            }
            cout << "\n\n";
            star();
            cout << "\n\t\t\t\t\t\t Runs in  " << c << "  over = " << total << "/" << w << "\t\t (4/6) = " << four << "/" << six;
            cout << "\n\t\t\t\t\t\t Wickets remaining"
                 << " = " << wickets;
            runrate = float(z) / x;
            cout << "\n\t\t\t\t\t\t Runrate = " << runrate;
            cout << "\n\n\t\t\t\t\t\t Total runs = " << z << "/" << y << "\n\n";
            star();
            getch();
            system("cls");
            cout << "\n\n\n";
            star();
            std::cout << "\t\t\t\t\t\t CRICKET SCORESHEET AFTER " << i + 1 << " OVERS\n";
            star();
            cout << "\n\t\t\t\t\t\t    Players\t\t\tRuns\tballs" << endl;
            if (res == 1)
            {
                for (int l = 0; l < 11; l++)
                {
                    if (balls1[l] == 0)
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l];
                    }
                    else
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l] << "\t\t\t" << player1[l] << "\t" << balls1[l];
                    }
                }
            }
            else
            {
                for (int l = 0; l < 11; l++)
                {
                    if (balls1[l] == 0)
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l];
                    }
                    else
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l] << "\t\t\t" << player1[l] << "\t" << balls1[l];
                    }
                }
            }
            cout << "\n\n";
            star();
            k++;
            c++;
            total = 0;
            w = 0;
            x++;
            t_four += four;
            t_six += six;
            id3 = id1;
            id1 = id2;
            id2 = id3;
            getch();
            system("cls");
        }
    jump:
        cout << "\n\n";
        star();
        cout << "\t\t\t\t\t\t\t FIRST INNINGS COMPLETED \n";
        star();
        cout << "\n\n\t\t\t\t\t\t Total runs = " << z << "/" << y << setw(10) << "(" << n << ")"
             << "\t\t (4/6) = " << t_four << "/" << t_six << endl;
        cout << "\n";
        star();
        std::cout << "\t\t\t\t\t\t  CRICKET SCORESHEET AFTER FIRST INNINGS\n ";
        star();
        cout << "\n\t\t\t\t\t\t   Players\t\t\tRuns\tballs" << endl;
        if (res == 1)
        {
            for (int l = 0; l < 11; l++)
            {
                if (balls1[l] == 0)
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l];
                }
                else
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l] << "\t\t\t" << player1[l] << "\t" << balls1[l];
                }
            }
        }
        else
        {
            for (int l = 0; l < 11; l++)
            {
                if (balls1[l] == 0)
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l];
                }
                else
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l] << "\t\t\t" << player1[l] << "\t" << balls1[l];
                }
            }
        }
        cout << "\n\n ";
        star();
        getch();
        system("cls");
        star();
        if (res == 1)
        {
            res = 2;
        }
        else
        {
            res = 1;
        }
        char strike2 = '*';
        int id_1 = 0, id_2 = 1, id_3, p, q, p1;
        p1 = n - 1;
        // string player_ind_copy[12], player_pak_copy[12];
        for (int i = 0; i < 11; i++)
        {
            player_ind[i] = player_ind_copy[i];
            player_pak[i] = player_pak_copy[i];
        }
        cout << "\t\t\t\t\t\t\t TEAM " << res << " \n";
        star();
        cout << "\n\t\t\t\t\t\t Second innings\n";
        cout << "\t\t\t\t\t\t " << n << " Overs match\n";
        t_four = 0;
        t_six = 0;
        getch();
        system("cls");
        for (i1 = 0; i1 < n; i1++)
        {
            srand(time(NULL));
            star();
            cout << "\t\t\t\t\t\t Over  " << k1;
            if (res == 1)
            {
                players_pak();
            }
            else
            {
                players_ind();
            }
            cout << "\n";
            star();
            cout << "\t\t\t\t\t    NAME \t\tRUNS \t\t   OVERS \n";
            four = 0;
            six = 0;
            for (j1 = 1; j1 <= m1; j1++)
            {
                if (z < z1)
                {
                    cout << "\n\n";
                    star();
                    cout << "\t\t\t\t\t\t SECOND INNINGS COMPLETED \n";
                    star();
                    cout << "\n\t\t\t\t\t\t Total runs = " << z1 << "/" << y1 << setw(4) << "(" << n << ")"
                         << "\t\t (4/6) = " << t_four << "/" << t_six << "\n\n";
                    getch();
                    system("cls");
                    star();
                    std::cout << "\t\t\t\t\t\t  CRICKET SCORESHEET AFTER SECOND INNINGS\n ";
                    star();
                    cout << "\n\t\t\t\t\t\t   Players\t\t\tRuns\tballs" << endl;
                    if (res == 1)
                    {
                        for (int l = 0; l < 11; l++)
                        {
                            if (balls2[l] == 0)
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l];
                            }
                            else
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                            }
                        }
                    }
                    else
                    {
                        for (int l = 0; l < 11; l++)
                        {
                            if (balls2[l] == 0)
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l];
                            }
                            else
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                            }
                        }
                    }
                    cout << "\n\n";
                    star();
                    getch();
                    system("cls");
                    cout << "\n";
                    star();
                    cout << "\t\t\t\t\t\t Congratulations TEAM " << res << " is winner\n";
                    star();
                    getch();
                    exit(0);
                    goto out;
                }
                if (wickets1 == 0)
                {
                    cout << "\n\n";
                    star();
                    cout << "\t\t\t\t\t\t SECOND INNINGS COMPLETED \n";
                    star();
                    goto high;
                    break;
                }
                getch();
            sub:
                a1 = rand() % 9;
                b1 = a1;
                if (b1 == 5)
                {
                    // cout << "\n\n"
                    //      << "\t\t\t\t\t\t\t"
                    //      << " " << i1 << "." << j1 << " = Wicket";
                    f1 = 5;
                    wickets1--;
                    w1++;
                    y1++;
                    ball2++;
                    if (strike2 == '*')
                    {
                        balls2[id_1] += ball2;
                    }
                    else
                    {
                        balls2[id_2] += ball2;
                    }
                    ball2 = 0;
                    if (strike2 == '*')
                    {
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id_1] << setw(20) << "\tWicket \t\t   " << i1 << "." << j1;
                            temp = player_ind[id_1];
                            final = temp + " " + wic;
                            player_ind[id_1] = final;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id_1] << setw(20) << "\tWicket \t\t   " << i1 << "." << j1;
                            temp = player_pak[id_1];
                            final = temp + " " + wic;
                            player_pak[id_1] = final;
                        }
                        if (id_1 < id_2)
                        {
                            id_1 = id_2 + 1;
                        }
                        else
                        {
                            id_1 = id_1 + 1;
                        }
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t\t " << player_ind[id_1] << " has come to bat";
                        }
                        else
                        {
                            cout << "\n\n\t\t\t\t " << player_pak[id_1] << " has come to bat";
                        }
                    }
                    else
                    {
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id_2] << setw(20) << "\tWicket \t\t   " << i1 << "." << j1;
                            temp = player_ind[id_2];
                            final = temp + " " + wic;
                            player_ind[id_2] = final;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id_2] << setw(20) << "\tWicket \t\t   " << i1 << "." << j1;
                            temp = player_pak[id_2];
                            final = temp + " " + wic;
                            player_pak[id_2] = final;
                        }
                        if (id_1 < id_2)
                        {
                            id_2 = id_2 + 1;
                        }
                        else
                        {
                            id_2 = id_1 + 1;
                        }
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t\t " << player_ind[id_2] << " has come to bat";
                        }
                        else
                        {
                            cout << "\n\n\t\t\t\t " << player_pak[id_2] << " has come to bat";
                        }
                    }
                }
                else if (b1 == 7)
                {
                    // cout << "\n\n"
                    //      << "\t\t\t\t\t\t\t";
                    // cout << " " << i1 << "." << j1 << " = Wide\n";
                    if (res == 1)
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_ind[id_1] << setw(20) << "\tWide \t\t   " << i1 << "." << j1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_pak[id_1] << setw(20) << "\tWide \t\t   " << i1 << "." << j1;
                    }
                    f1 = 7;
                    total1++;
                    z1++;
                    goto sub;
                }
                else if (b1 == 8)
                {
                    // cout << "\n\n"
                    //      << "\t\t\t\t\t\t\t";
                    // cout << " " << i1 << "." << j1 << " = Noball\n";
                    if (res == 1)
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_ind[id_1] << setw(20) << "\tNoball \t\t   " << i1 << "." << j1;
                    }
                    else
                    {
                        cout << "\n\n\t\t\t " << setw(25) << player_pak[id_1] << setw(20) << "\tNoball \t\t   " << i1 << "." << j1;
                    }
                    f1 = 8;
                    total1++;
                    z1++;
                    goto sub;
                }
                else
                {
                    // cout << "\n\n"
                    //      << "\t\t\t\t\t\t\t"
                    //      << " " << i1 << "." << j1 << "=" << a1 << "\n";
                    f1 = 0;
                    ball2++;
                }
                if (b1 == 1 || b1 == 3)
                {
                    if (strike2 == '*')
                    {
                        player2[id_1] += b1;
                        strike2 = '0';
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id_1] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id_1] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        balls2[id_1] += ball2;
                    }
                    else
                    {
                        player2[id_2] += b1;
                        strike2 = '*';
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id_2] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id_2] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        balls2[id_2] += ball2;
                    }
                    ball2 = 0;
                }
                if (b1 == 2 || b1 == 4 || b1 == 6 || b1 == 0)
                {
                    if (strike2 == '*')
                    {
                        player2[id_1] += b1;
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id_1] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id_1] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        balls2[id_1] += ball2;
                    }
                    else
                    {
                        player2[id_2] += b1;
                        if (res == 1)
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_ind[id_2] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        else
                        {
                            cout << "\n\n\t\t\t " << setw(25) << player_pak[id_2] << setw(17) << b1 << " \t\t   " << i1 << "." << j1;
                        }
                        balls2[id_2] += ball2;
                    }
                    ball2 = 0;
                }
                total1 = (total1 + a1) - f1;
                z1 = (z1 + a1) - f1;
                if (f1 == 0)
                {
                    if (b1 == 4)
                    {
                        four++;
                    }
                    if (b1 == 6)
                    {
                        six++;
                    }
                }
            }
            cout << "\n\n";
            star();
            cout << "\n\t\t\t\t\t\t Runs in " << c1 << " over = " << total1 << "/" << w1 << "\t\t (4/6) = " << four << "/" << six;
            cout << "\n\t\t\t\t\t\t Wickets remaining"
                 << " = " << wickets1;
            runrate1 = float(z1) / x1;
            cout << "\n\t\t\t\t\t\t NetRunrate = " << runrate1 << "\n";
            p = n - i1 - 1;
            reqrunrate = float(z - z1 + 1) / p;
            cout << "\n\t\t\t\t\t\t RequiredRunrate = " << reqrunrate << "\n";
            q = p1 * 6;
            p1--;
            cout << "\n\t\t\t\t\t\t" << z - z1 + 1 << "  "
                 << "from"
                 << " " << q << " "
                 << "deliveries"
                 << "\n";
            cout << "\n\n\t\t\t\t\t\t Total runs = " << z1 << "/" << y1 << setw(4) << "(" << n << ")"
                 << "\n\n";
            star();
            getch();
            system("cls");
            cout << "\n\n\n";
            star();
            std::cout << "\t\t\t\t\t\t CRICKET SCORESHEET AFTER " << i1 + 1 << " OVERS\n";
            star();
            cout << "\n\t\t\t\t\t\t   Players\t\t\tRuns\tballs" << endl;
            if (res == 1)
            {
                for (int l = 0; l < 11; l++)
                {
                    if (balls2[l] == 0)
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l];
                    }
                    else
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                    }
                }
            }
            else
            {
                for (int l = 0; l < 11; l++)
                {
                    if (balls2[l] == 0)
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l];
                    }
                    else
                    {
                        cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                    }
                }
            }
            cout << "\n\n";
            star();
            k1++;
            c1++;
            total1 = 0;
            w1 = 0;
            x1++;
            t_four += four;
            t_six += six;
            id_3 = id_1;
            id_1 = id_2;
            id_2 = id_3;
            getch();
            system("cls");
            if (z < z1)
            {
                if (z == z1)
                {
                    cout << "\n\n\t\t\t\t\t\t Match is TIE";
                }
                else
                {
                innings:
                    cout << "\n\n";
                    star();
                    cout << "\t\t\t\t\t\t SECOND INNINGS COMPLETED \n";
                    star();
                    cout << "\n\n\t\t\t\t\t\t Total runs = " << z1 << "/" << y1 << setw(5) << "(" << n << ")"
                         << "\t\t (4/6) = " << t_four << "/" << t_six << endl;
                    star();
                    std::cout << "\t\t\t\t\t\t  CRICKET SCORESHEET AFTER SECOND INNINGS\n ";
                    star();
                    cout << "\n\t\t\t\t\t\t   Players\t\t\tRuns\tballs" << endl;
                    if (res == 1)
                    {
                        for (int l = 0; l < 11; l++)
                        {
                            if (balls2[l] == 0)
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l];
                            }
                            else
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                            }
                        }
                    }
                    else
                    {
                        for (int l = 0; l < 11; l++)
                        {
                            if (balls2[l] == 0)
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l];
                            }
                            else
                            {
                                cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                            }
                        }
                    }
                    cout << "\n\n";
                    star();
                    getch();
                    system("cls");
                    cout << "\n";
                    star();
                    cout << "\t\t\t\t\t\t Congratulations TEAM " << res << " is winner\n";
                    star();
                    getch();
                    exit(0);
                }
            }
        }
    high:
    out:
        cout << "\n\n";
        star();
        cout << "\t\t\t\t\t\t\t SECOND INNINGS COMPLETED \n";
        star();
        cout << "\n\n\t\t\t\t\t\t Total runs = " << z1 << "/" << y1 << "\t\t (4/6) = " << t_four << "/" << t_six << endl;
        star();
        std::cout << "\t\t\t\t\t\t  CRICKET SCORESHEET AFTER SECOND INNINGS\n ";
        star();
        cout << "\n\t\t\t\t\t\t   Players\t\t\tRuns\tballs" << endl;
        if (res == 1)
        {
            for (int l = 0; l < 11; l++)
            {
                if (balls2[l] == 0)
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l];
                }
                else
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_ind[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                }
            }
        }
        else
        {
            for (int l = 0; l < 11; l++)
            {
                if (balls2[l] == 0)
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l];
                }
                else
                {
                    cout << "\n\t\t\t\t\t " << setw(18) << player_pak[l] << "\t\t\t" << player2[l] << "\t" << balls2[l];
                }
            }
        }
        cout << "\n\n";
        star();
        getch();
        system("cls");
        cout << "\n";
        star();
        if (res == 2)
        {
            res = 1;
        }
        else
        {
            res = 2;
        }
        cout << "\t\t\t\t\t\t Congratulations TEAM " << res << " is winner\n";
        star();
        getch();
        return 0;
    }
    else
    {
        star();
        cout << "\t\t\t\t\t\t\t Invalid input\n";
        star();
        getch();
        goto over;
    }
}
int main()
{
    system("cls");
    int res;
    res = toss();
    match(res);
}
