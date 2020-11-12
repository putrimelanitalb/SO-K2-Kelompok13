# Program Multithread : Statistika

**Kelompok : 13**  

**Paralel : K2**  
  
| NIM | Nama |
| --- | ---- |
| G64180053	| Putri Melanita Londong Bua |
| G64180062	| Syukriyatul Hanifa |
| G64180085	| Mutia Marcha Fatika |
| G64180103	| Denny Lindawati Sinurat |
| G64189001	| Emilia Syafitri |

## Soal 4.21

Write a multithreaded program that calculates various statistical values for a list of numbers. This program will be passed a series of numbers on the command line and will then create three separate worker threads. One thread will determine the average of the numbers, the second will determine the maximum value, and the third will determine the minimum value. For example, suppose your program is passed the integers  

```
90 81 78 95 79 72 85
```  
  
The program will report  

```
The average value is 82
The minimum value is 72
The maximum value is 95
```  

The variables representing the average, minimum, and maximum values will be stored globally. The worker threads will set these values, and the parent thread will output the values once the workers have exited. (We could obviously expand this program by creating additional threads that determine other statistical values, such as median and standard deviation.)  
  
  
### **Sumber**  
Silberschatz A, Galvin PB, Gagne G. 2013. *Operating System Concepts Ninth Edition*. New Jersey (USA): John Wiley & Sons, Inc.
