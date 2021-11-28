using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp6
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rnd = new Random();
            int[][] array = new int[4][];
            array[0] = new int[1];
            array[1] = new int[1];
            array[2] = new int[4];
            array[3] = new int[1];
            for (int i = 0; i < array.Length; i++)
            {
                for (int j = 0; j < array[i].Length; j++)
                {
                    array[i][j] = rnd.Next(1, 10);
                    Console.Write(array[i][j] + " ");
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
}