using System.Collections.Generic;

namespace TestEnvo.AI
{
    public struct Edge
    {
        public Edge(int p1, int p2)
        {
            this.p1 = p1;
            this.p2 = p2;
        }

        public int p1;
        public int p2;
    }

    public class Maze
    {
        private const int DEFAULTSIZE = 5;

        protected int rows;
        protected int columns;
        protected int MazeSize
        {
            get
            {
                return rows * columns;
            }
        }

        private DisjointSet Cells { get; set; }
        private int[][] Edges;
        private int visitedCells;

        public Maze()
        {
            this.rows = DEFAULTSIZE;
            this.columns = DEFAULTSIZE;

            Cells = new DisjointSet(MazeSize);

            AddEdges();
        }

        private void AddEdges()
        {
            
        }

        public Maze(int width, int height)
        {
            this.rows = width;
            this.columns = height;

            Cells = new DisjointSet(MazeSize);
        }

    }
}
