using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Variables
{
    class Program
    {
        static void Main(string[] args)
        {
            //int x;
            //int y;

            //x = 7;
            //y = x + 3;
            //Console.WriteLine(y);

            //string myFirstName;
           // myFirstName = "Bob";



            // -> string myFirstName = "Bob";

            // var myFirstName = true;

            int x = 7;
            string y = "Bob";
           
            // string conversion -----------------------------
            // -> string myFirstTry = x + y;
            // what happenns behind the scene is this
            string myFirstTry = x.ToString() + y;
            // -----------------------------------------------




            // int mySecondTry = x + y;.
            int mySecondTry = x + int.Parse(y);


            // .Net allows to implicitly combine different data types together
            Console.WriteLine(myFirstTry);

            Console.ReadLine();

        }
    }
}