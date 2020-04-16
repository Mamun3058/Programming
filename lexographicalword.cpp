char s [MaxN];
bool b [MaxN];
int k, n;

void solve (vector <int> v)
{
   int i, j;
   int64 p, q;
   char c;

   vector <int> w;
   for (c = 'a'; c <= 'z'; c++)
   {
       p = q = 0;
       w.clear ();
       for (j = 0; j < (int) v.size (); j++)
       {
           i = v[j];
           if (s[i] == c)
           {
               w.push_back (i + 1);
               p++;
               q += n - i;
           }
      }
      if (k < q)
          break;
      k -= q;
   }
   assert (c <= 'z');

   putchar (c);
   if (k < p)
       return;
   k -= p;
   solve (w);
}

int main (void)
{
    int i;

    while (scanf (" %s %d", s, &k) != EOF)
    {
         n = (int) strlen (s);
         if (k > ((((int64) n) * (int64) (n + 1)) >> 1LL))
         {
             printf ("No such line.\n");
             continue;
         }
         k--;

         vector <int> v;
         for (i = 0; i < n; i++)
         v.push_back (i);
         solve (v);
         putchar ('\n');
     }
     return 0;
}
