using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MatrixTransformations
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            Vector v1 = new Vector();
            Console.WriteLine(v1);
            Vector v2 = new Vector(1, 2);
            Console.WriteLine(v2);

            Matrix m1 = new Matrix();
            Console.WriteLine(m1);
            Matrix m2 = new Matrix(
                1, 2,
                3, 4);
            Console.WriteLine(m2);
        }
    }
}
