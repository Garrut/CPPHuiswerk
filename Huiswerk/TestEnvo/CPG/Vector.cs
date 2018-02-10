using System;

namespace TestEnvo
{

    public class Vector
    {
        public float X { get; set; }
        public float Y { get; set; }

        public Vector()
        {

        }

        public Vector(float x, float y)
        {
            this.X = x;
            this.Y = y;
        }

        public static Vector operator +(Vector v1, Vector v2)
        {
            return new Vector(v1.X + v2.X, v1.Y + v2.Y);
        }

        public override string ToString()
        {
            return String.Format("X: {0},Y: {1}", this.X, this.Y);
        }
    }
}
