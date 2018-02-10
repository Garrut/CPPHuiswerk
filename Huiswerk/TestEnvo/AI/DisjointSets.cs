using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TestEnvo.AI
{
    public class DisjointSets
    {
        public DisjointSets(int elements)
        {
            sets = new int[elements];
            for (int i = 0; i < sets.Length; i++)
                sets[i] = -1;
        }

        private int[] sets;

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
            if(sets[y] < sets[x])
            {
                //s[x] has now y as parent
                sets[x] = y;
            } else //X's height is greater or the same
            {
                if (sets[x] == sets[y])
                    sets[x]--;
                //s[y] has now x as parent
                sets[y] = x;
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
            return sets[x] = Find(sets[x]);
        }

        /// <summary>
        /// Returns true if element is tree root
        /// </summary>
        /// <param name="i"></param>
        private bool IsTreeRoot(int i)
        {
            ExistsInArray(i);

            if (sets[i] < 0)
                return true;

            return false;
        }

        /// <summary>
        /// Throws exception if the element does not exist in the array
        /// </summary>
        /// <param name="i"></param>
        private void ExistsInArray(int i)
        {
            if (i < 0 || i > sets.Length)
                throw new Exception("Item does not exist in array!");
        }

        public override string ToString()
        {
            string result = "Sets \n";
            for(int i = 0; i < sets.Length; i++)
                result += string.Format("Set {0} : {1}\n", i, sets[i]);

            return result;
        }
    }
}
