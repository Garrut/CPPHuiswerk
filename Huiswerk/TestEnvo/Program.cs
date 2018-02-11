using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TestEnvo.AI;

namespace TestEnvo
{

    class Program
    {
        static void Main(string[] args)
        {
            //GreatestCommonDivisor(20, 15);
            DisjointSet sets = new DisjointSet(10);

            Console.WriteLine(sets.ToString());

            sets.Union(5, 1);
            sets.Union(2, 3);
            sets.Union(5, 2);

            Console.WriteLine(sets.ToString());

        }

        /*static void GreatestCommonDivisor(int x, int y)
        {

            Math.DivRem(x, y, out int rem);
            int wat = x % y;

            int BIG;
            int SMALL;

            if(x > y)
            {
                BIG = x;
                SMALL = y;
            } else
            {
                BIG = y;
                SMALL = x;
            }
        }*/
    }
}
