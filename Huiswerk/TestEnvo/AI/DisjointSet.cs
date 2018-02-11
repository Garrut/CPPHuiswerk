using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TestEnvo.AI
{

    public class DisjointSet
    {
        public DisjointSet(int elements)
        {
            set = new int[elements];
            for (int i = 0; i < set.Length; i++)
                set[i] = -1;
        }

        private int[] set;

        /// <summary>
        /// Merge 2 sets using height
        /// </summary>
        /// <param name="x">First set</param>
        /// <param name="y">Second set</param>
        public void Union(int x, int y)
        {
            if (x == y)
                throw new Exception("Cannot merge a set with itself!");
            
            //Y's height is greater
            if(set[y] < set[x])
            {
                //s[x] has now y as parent
                set[x] = y;
            } else //X's height is greater or the same
            {
                if (set[x] == set[y])
                    set[x]--;
                //s[y] has now x as parent
                set[y] = x;
            }
        }

        /// <summary>
        /// Find name of root of element
        /// </summary>
        /// <param name="x"></param>
        public int Find(int x)
        {
            if (IsTreeRoot(x))
                return x;

            //No path compression
            //return Find(sets[x]);

            //Path compression
            return set[x] = Find(set[x]);
        }

        /// <summary>
        /// Returns true if element is tree root
        /// </summary>
        /// <param name="i"></param>
        private bool IsTreeRoot(int i)
        {
            ExistsInArray(i);

            if (set[i] < 0)
                return true;

            return false;
        }

        /// <summary>
        /// Throws exception if the element does not exist in the array
        /// </summary>
        /// <param name="i"></param>
        private void ExistsInArray(int i)
        {
            if (i < 0 || i > set.Length)
                throw new Exception("Item does not exist in array!");
        }

        public override string ToString()
        {
            string result = "Sets \n";
            for(int i = 0; i < set.Length; i++)
                result += string.Format("Set {0} : {1}\n", i, set[i]);

            return result;
        }
    }
}
