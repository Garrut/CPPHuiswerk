using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TestEnvo
{

    class Program
    {
        static void Main(string[] args)
        {
            greatestCommonDivisor(20, 15);
        }

        static void greatestCommonDivisor(int x, int y)
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
        }
    }
}
