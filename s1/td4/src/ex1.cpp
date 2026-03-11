#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

    size_t const dwarf_count { 50 };

    vector<float> calories {};

    srand(time(NULL)); // seed par rapport au temps
    
    for (size_t i { 0 }; i < dwarf_count; ++i)
    {
        float const random_01 { static_cast<float>(rand()) / static_cast<float>(RAND_MAX) };
        calories.push_back(100.f + (24000.f-100.f) * random_01);
    }


    const size_t length_tab = 5;
    array<float,length_tab> top_calories { 0.f }; 
    float min_calories { MAXFLOAT };
    for (float const c : calories)
    {

        for (size_t i { 0 }; i < top_calories.size(); ++i)
        {
            if (c > top_calories[i])
            {
                // décaler les autres valeurs
                for (size_t j = top_calories.size() - 1; j > i; --j)
                {
                    top_calories[j] = top_calories[j - 1];
                }
                top_calories[i] = c;
                break;
            }
        }
        if (c < min_calories)
        {
            min_calories = c;
        }
    }
    cout << "Top " << length_tab << " calories: ";
    for (float const c : top_calories)
    {
        cout << c << " ";
    }
    float sum { 0.f };
    for (float const c : top_calories) sum += c;
    cout << " (somme des top " << length_tab << ": " << sum << ") ";
    cout << endl; 

    cout << "Min calories: " << min_calories << endl;

    return min_calories;

    return 0;
}