#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
    int ut, mt, initial, uc, mc, target1 = 0, target2 = 0, target3 = 0, target4 = 0, u1bat, u1boll, u2boll, u3boll, u2bat, u4bat, s1 = 0, s2 = 0, s3 = 0, s4 = 0, m1g, m2g, m3g, m4g;
    cout << "1.Head" << endl;
    cout << "2.Tail" << endl;
    cin >> ut;
    cout << "\n";
    srand(time(0));
    mt = (rand() % 2) + 1;
    if ((ut + mt) % 2 == 0)
    {
        cout << "Toss is Tail." << endl
             << endl;
        ;
        if (ut == 2)
        {
            cout << "You won the toss" << endl;
            initial = 2;
        }
        else
        {
            cout << "You lose the toss." << endl;
            cout << "Mobile win the toss." << endl;
            initial = 1;
        }
    }
    else
    {
        cout << "Toss is Head." << endl
             << endl;
        if (ut == 1)
        {
            cout << "You won the toss." << endl;
            initial = 2;
        }
        else
        {
            cout << "You lose the toss." << endl;
            cout << "Mobile win the toss." << endl;
            initial = 1;
        }
    }
    if (initial == 2)
    {
        cout << "\nYou have 2 options:" << endl;
        cout << "1.Bat(🏏):-" << endl;
        cout << "2.Boll(🥎):-" << endl;
        cin >> uc;
        switch (uc)
        {
        case 1:
            cout << "\nYou->(🏏).";
            cout << "\nMobile->(🥎).";
            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    srand(time(0));
                    cout << "\nEnter your num:";
                    cin >> u1bat;
                    cout << "\nYour choice:"
                         << "🏏" << u1bat << endl;
                    m1g = (rand() % 6) + 1;
                    cout << "Mobile choice:"
                         << "🥎" << m1g << endl;
                    if (u1bat == m1g)
                    {
                        cout << "\n😭😭😭😭😭😭😭😭😭" << endl;
                        cout << "Sorry,you are out." << endl;
                        cout << "\n•]Your score=" << s1;
                        break;
                    }
                    else
                    {
                        s1 = s1 + u1bat;
                        cout << "\n•]Your score=" << s1;
                    }
                }
                cout << "\n\n•]Total score=" << s1;
                break;
            } while (u1bat != m1g);

            cout << "\n\n👉Now Mobile's turn.";
            cout << "\nMobile->(🏏).";
            cout << "\nYou->(🥎)";
            target1 = target1 + s1 + 1;
            cout << "\n\n🎯Target:" << target1;
            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    cout << "\nEnter your num:";
                    cin >> u2boll;
                    cout << "\nYour choice:"
                         << "🥎" << u2boll << endl;
                    srand(time(0));
                    m2g = (rand() % 6) + 1;
                    cout << "Mobile choice:"
                         << "🏏" << m2g << endl;
                    if (u2boll == m2g)
                    {
                        cout << "❕\"out\"❕" << endl;
                        cout << "\n🕺Way,Mobile is out" << endl;
                        cout << "•]Mobile's score:" << m2g;
                        break;
                    }
                    else
                    {
                        s2 = s2 + m2g;
                        cout << "\n•]Mobile's score=" << m2g;
                    }
                    if (s2 == target1 || s2 > target1)
                    {
                        cout << "\nMobile win";
                        break;
                    }
                }
                cout << "\n\n•]Total score=" << s2;
                break;
            } while (u2boll != m2g);

            cout << "\n\n•)Your total score:" << s1;
            cout << "\n•)Mobile's total score:" << s2;
            if (s1 > s2)
            {
                cout << "\n\n🕺You win the match.";
                exit(0);
            }
            else if (s1 == s2)
            {
                cout << "\n\n🙄Match tried";
                exit(0);
            }
            if (s1 < s2)
            {
                cout << "\n\n😭You lose the match.";
                exit(0);
            }

        case 2:
            cout << "\nMobile->(🏏).";
            cout << "\nYou->(🥎).";
            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    cout << "\nEnter your num:";
                    cin >> u1boll;
                    cout << "\nYour choice:"
                         << "🥎" << u1boll << endl;
                    srand(time(0));
                    m1g = (rand() % 6) + 1;
                    cout << "Mobile choice:"
                         << "🏏" << m1g << endl;
                    if (u1boll == m1g)
                    {
                        cout << "❕\"out\"❕" << endl;
                        cout << "\n🕺Way,Mobile is out" << endl
                             << endl;
                        cout << "•]Mobile's score:" << s1;
                        break;
                    }
                    else
                    {
                        s1 = s1 + m1g;
                        cout << "\n•]Mobile's score=" << s1;
                    }
                }
                cout << "\n•]Total score=" << s1;
                break;
            } while (u1boll != m1g);

            cout << "\n\n👉Now your turn.";
            cout << "\nYou->(🏏)";
            cout << "\nMobile->(🥎).";
            target1 = target1 + s1 + 1;
            cout << "\n\n🎯Target:" << target1;

            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    srand(time(0));
                    cout << "\nEnter your num:";
                    cin >> u2bat;
                    cout << "\nYour choice"
                         << "🏏" << u2bat << endl;
                    m2g = (rand() % 6) + 1;
                    cout << "Mobile choice"
                         << "🥎" << m2g << endl;
                    if (u2bat == m2g)
                    {
                        cout << "❕\"out\"❕" << endl;
                        cout << "😭Sorry,you are out" << endl;
                        cout << "•]Your score:" << s2;
                        break;
                    }
                    else
                    {
                        s2 = s2 + u2bat;
                        cout << "•]Your score=" << s2;
                    }
                    if (s2 == target1 || s2 > target1)
                    {
                        cout << "\n🕺,WayYou win";
                        break;
                    }
                }
                cout << "\n•]Total score=" << s1;
                break;
            } while (u2bat != m2g);

            cout << "\n\n•)Your total score:" << s2;
            cout << "\n•)Mobile's total score:" << s1;
            if (s2 > s1)
            {
                cout << "\n\n🕺You win the match.";
                exit(0);
            }
            else if (s1 == s2)
            {
                cout << "\n\n🙄Match tried";
                exit(0);
            }
            if (s2 < s1)
            {
                cout << "\n\n😭You lose the match.";
                exit(0);
            }
        }
    }
    else if (initial == 1)
    {
        cout << "\nMobile has 2 options:" << endl;
        cout << "1.Bat:-" << endl;
        cout << "2.Boll:-" << endl;
        srand(time(0));
        mc = (rand() % 3) + 1;
        if (mc == 2)
            cout << "\nMobile has chosen:" << mc;
        else if (mc == 3)
            cout << "\nMobile has chosen:" << mc - 1;
        else
            cout << "\nMobile has chosen:" << mc;
        switch (mc)
        {
        case 1:
            cout << "\nMobile->(🏏).";
            cout << "\nYou->(🥎).";
            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    cout << "\nEnter your num:";
                    cin >> u1boll;
                    cout << "\nYour choice:"
                         << "🥎" << u1boll << endl;
                    srand(time(0));
                    m1g = (rand() % 6) + 1;
                    cout << "Mobile choice:"
                         << "🏏" << m1g << endl;
                    if (u1boll == m1g)
                    {
                        cout << "❕\"out\"❕" << endl;
                        cout << "\n🕺Way,Mobile is out" << endl
                             << endl;
                        cout << "•]Mobile's score:" << s1;
                        break;
                    }
                    else
                    {
                        s1 = s1 + m1g;
                        cout << "\n•]Mobile's score=" << s1;
                    }
                }
                cout << "\n•]Total score=" << s1;
                break;
            } while (u1boll != m1g);

            cout << "\n\n👉Now your turn.";
            cout << "\nYou->(🏏)";
            cout << "\nMobile->(🥎).";
            target1 = target1 + s1 + 1;
            cout << "\n\n🎯Target:" << target1;

            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    srand(time(0));
                    cout << "\nEnter your num:";
                    cin >> u2bat;
                    cout << "\nYour choice"
                         << "🏏" << u2bat << endl;
                    m2g = (rand() % 6) + 1;
                    cout << "Mobile choice"
                         << "🥎" << m2g << endl;
                    if (u2bat == m2g)
                    {
                        cout << "❕\"out\"❕" << endl;
                        cout << "😭Sorry,you are out" << endl;
                        cout << "•]Your score:" << s2;
                        break;
                    }
                    else
                    {
                        s2 = s2 + u2bat;
                        cout << "•]Your score=" << s2;
                    }
                    if (s2 == target1 || s2 > target1)
                    {
                        cout << "\n🕺,WayYou win";
                        break;
                    }
                }
                cout << "\n•]Total score=" << s1;
                break;
            } while (u2bat != m2g);

            cout << "\n\n•)Your total score:" << s2;
            cout << "\n•)Mobile's total score:" << s1;
            if (s2 > s1)
            {
                cout << "\n\n🕺You win the match.";
                exit(0);
            }
            else if (s1 == s2)
            {
                cout << "\n\n🙄Match tried";
                exit(0);
            }
            if (s2 < s1)
            {
                cout << "\n\n😭You lose the match.";
                exit(0);
            }

        case 2:
            cout << "\n\nYou->(🏏).";
            cout << "\nMobile->(🥎).";
            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    srand(time(0));
                    cout << "\nEnter your num:";
                    cin >> u1bat;
                    cout << "\nYour choice:"
                         << "🏏" << u1bat << endl;
                    m1g = (rand() % 6) + 1;
                    cout << "Mobile choice:"
                         << "🥎" << m1g << endl;
                    if (u1bat == m1g)
                    {
                        cout << "\n😭😭😭😭😭😭😭😭😭" << endl;
                        cout << "Sorry,you are out." << endl;
                        cout << "\n•]Your score=" << s1;
                        break;
                    }
                    else
                    {
                        s1 = s1 + u1bat;
                        cout << "\n•]Your score=" << s1;
                    }
                }
                cout << "\n\n•]Total score=" << s1;
                break;
            } while (u1bat != m1g);

            cout << "\n\n👉Now Mobile's turn.";
            cout << "\nMobile->(🏏).";
            cout << "\nYou->(🥎)";
            target1 = target1 + s1 + 1;
            cout << "\n\n🎯Target:" << target1;
            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    cout << "\nEnter your num:";
                    cin >> u2boll;
                    cout << "\nYour choice"
                         << "🥎" << u2boll << endl;
                    srand(time(0));
                    m2g = (rand() % 6) + 1;
                    cout << "Mobile choice"
                         << "🏏" << m2g << endl;
                    if (u2boll == m2g)
                    {
                        cout << "❕\"out\"❕" << endl;
                        cout << "\n🕺Way,Mobile is out" << endl;
                        cout << "•]Mobile's score:" << m2g;
                        break;
                    }
                    else
                    {
                        s2 = s2 + m2g;
                        cout << "\n•]Mobile's score=" << m2g;
                    }
                    if (s2 == target1 || s2 > target1)
                    {
                        cout << "\nMobile win";
                        break;
                    }
                }
                cout << "\n\n•]Total score=" << s2;
                break;
            } while (u2boll != m2g);

            cout << "\n\n•)Your total score:" << s1;
            cout << "\n•)Mobile's total score:" << s2;
            if (s1 > s2)
            {
                cout << "\n\n🕺You win the match.";
                exit(0);
            }
            else if (s1 == s2)
            {
                cout << "\n\n🙄Match tried";
                exit(0);
            }
            if (s1 < s2)
            {
                cout << "\n\n😭You lose the match.";
                exit(0);
            }

        case 3:
            cout << "\n\nYou->(🏏).";
            cout << "\nMobile->(🥎).";
            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    srand(time(0));
                    cout << "\nEnter your num:";
                    cin >> u1bat;
                    cout << "\nYour choice:"
                         << "🏏" << u1bat << endl;
                    m1g = (rand() % 6) + 1;
                    cout << "Mobile choice:"
                         << "🥎" << m1g << endl;
                    if (u1bat == m1g)
                    {
                        cout << "\n😭😭😭😭😭😭😭😭😭" << endl;
                        cout << "Sorry,you are out." << endl;
                        cout << "\n•]Your score=" << s1;
                        break;
                    }
                    else
                    {
                        s1 = s1 + u1bat;
                        cout << "\n•]Your score=" << s1;
                    }
                }
                cout << "\n\n•]Total score=" << s1;
                break;
            } while (u1bat != m1g);

            cout << "\n\n👉Now Mobile's turn.";
            cout << "\nMobile->(🏏).";
            cout << "\nYou->(🥎)";
            target1 = target1 + s1 + 1;
            cout << "\n\n🎯Target:" << target1;

            do
            {
                for (int i = 1; i <= 6; i++)
                {
                    cout << "\n\nBoll No."
                         << "[" << i << "]";
                    cout << "\nEnter your num:";
                    cin >> u2boll;
                    cout << "\nYour choice"
                         << "🥎" << u2boll << endl;
                    srand(time(0));
                    m2g = (rand() % 6) + 1;
                    cout << "Mobile choice"
                         << "🏏" << m2g << endl;
                    if (u2boll == m2g)
                    {
                        cout << "❕\"out\"❕" << endl;
                        cout << "\n🕺Way,Mobile is out" << endl;
                        cout << "•]Mobile's score:" << m2g;
                        break;
                    }
                    else
                    {
                        s2 = s2 + m2g;
                        cout << "\n•]Mobile's score=" << m2g;
                    }
                    if (s2 == target1 || s2 > target1)
                    {
                        cout << "\nMobile win";
                        break;
                    }
                }
                cout << "\n\n•]Total score=" << s2;
                break;
            } while (u2boll != m2g);

            cout << "\n\n•)Your total score:" << s1;
            cout << "\n•)Mobile's total score:" << s2;
            if (s1 > s2)
            {
                cout << "\n\n🕺You win the match.";
                exit(0);
            }
            else if (s1 == s2)
            {
                cout << "\n\n🙄Match tried";
                exit(0);
            }
            if (s1 < s2)
            {
                cout << "\n\n😭You lose the match.";
                exit(0);
            }
        }
    }
    return 0;
}