using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MatrixTransformations
{
    class Matrix
    {
        public Matrix()
        {
            throw new NotImplementedException();
        }
        public Matrix(float m11, float m12,
                      float m21, float m22)
        {
            throw new NotImplementedException();
        }

        public Matrix(Vector v)
        {
            throw new NotImplementedException();
        }

        public static Matrix operator +(Matrix m1, Matrix m2)
        {
            throw new NotImplementedException();
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
