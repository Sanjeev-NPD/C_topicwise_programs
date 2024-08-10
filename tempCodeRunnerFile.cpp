    dynamic(string t, int p, int d) : toy(t),price(p),discount(d) 
    {
        sell = price*(1+discount);
    }

    dynamic(string t, int p, float d) : toy(t),price(p),discount(d) 
    {
         sell = price*(1+discount);
    }