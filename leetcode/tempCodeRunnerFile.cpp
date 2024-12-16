for (int i = s.size() - 1; i >= 0; i++)
        {
            int temp = number[indexFind(roman, s[i])];
            int check = number[indexFind(roman, s[i+1])];
            if (temp < check)
            {
                num = num - check;
            }
            else
            {
                num = num + temp;
            }
        }