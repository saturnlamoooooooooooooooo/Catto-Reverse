// gml_GlobalScript_hex_to_real
// 0 argument(s), 1 local(s)

function hex_to_real(argument0)
{
    str = string(argument0);
    s = 0;
    r = 0;
    i = string_length(str);
    while (i >= 1)
    {
        c = ord(string_char_at(str, i));
        if (c <= 57)
        {
            if (c >= 49)
            {
                r += (c - 48 << s);
            }
        }
        else
        {
            if (c <= 70)
            {
                if (c >= 65)
                {
                    r += (c - 55 << s);
                }
            }
            else
            {
                if (c <= 102)
                {
                    if (c >= 97)
                    {
                        r += (c - 87 << s);
                    }
                }
            }
        }
        s += 4;
        i--;
    }
    return r;
}
