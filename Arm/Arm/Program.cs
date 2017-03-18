using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Arm
{
    class Program
    {
         public static bool narcisista(int narc)
        {
            int r=narc;
            int[] v =new int [10];
            int i = 0;
             while (r != 0)
             {
                 v[i++] = r % 10;
                 r = (r - (r % 10)) / 10;
             }
             for (int a = 0; a < i; a++)
             {
                 r += (int)Math.Pow(v[a], i);
             }
             return narc == r;
                
        }
        static void Main(string[] args)
        {

             Console.WriteLine(narcisista(153));
            Console.ReadKey();
        }
    }
}
