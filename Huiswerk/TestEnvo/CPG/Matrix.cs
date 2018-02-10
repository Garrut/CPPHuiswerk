using System;

namespace TestEnvo
{
    public class Matrix
    {
        public float[][] matrix;
        public const int MATRIXLENGTH = 2;

        public Matrix()
        {
            matrix = new float[][]
            {
                new float[2],
                new float[2],
            };
        }

        public Matrix(float m11, float m12,
                      float m21, float m22)
        {
            matrix = new float[][]
            {
                new float[]{m11,m21},
                new float[]{m12,m22},
            };
        }

        public Matrix(Vector v)
        {
            matrix = new float[][]
            {
                new float[]{v.X},
                new float[]{v.Y},
            };
        }

        public static Matrix operator +(Matrix m1, Matrix m2)
        {
            Matrix result;

            for(int i = 0; i < MATRIXLENGTH; i++)
            {

            }    
        }

        public static Matrix operator -(Matrix m1, Matrix m2)
        {
            throw new NotImplementedException();
        }
        public static Matrix operator *(Matrix m1, float f)
        {
            throw new NotImplementedException();
        }

        public static Matrix operator *(float f, Matrix m1)
        {
            throw new NotImplementedException();
        }
        public static Matrix operator *(Matrix m1, Matrix m2)
        {
            throw new NotImplementedException();
        }

        public static Vector operator *(Matrix m1, Vector v)
        {
            throw new NotImplementedException();
        }

        public static Matrix Identity()
        {
            throw new NotImplementedException();
        }

        public override string ToString()
        {
            throw new NotImplementedException();
        }
    }
}
