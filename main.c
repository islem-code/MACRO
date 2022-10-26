/**
  ******************************************************************************
  * @file    main.c
  * @author  Islem Amdouni
  * @brief   support multiple platforms 
  * @version V9.10.1
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

#define INTEL
#define SOM
/* Function definition min*/
#define min(var1, var2) (((var1) < (var2)) ? (var1) : (var2)) 

#define OTHERS
#define MUL
/* Function definition max*/
#define max(var1, var2) (((var1) > (var2)) ? (var1) : (var2))



/* Private function prototypes -----------------------------------------------*/
  static int som(int var1, int var2);
  static int Mul(int var1, int var2);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  som,Mul,min,max
  * @retval None
  */
int main(void)
{
#ifdef SOM
  int ResultSom=som(10,2);
#endif /*SOMME*/
#ifdef MUL  
  int ResultMul=Mul(100,20);
#endif /*MULTIPLICATION*/
  int ResultMin=min(10,2);/*MIN*/
  int ResultMax=max(100,20);/*MAX*/

  while (1)
  {
   
  }
}
/* Function definition som*/
#ifdef SOM
  static int som(int var1, int var2)
  {
    return (var1+var2);
  }
#endif
/* Function definition mul*/
#ifdef MUL  
  static int Mul(int var1, int var2)
  {
    return (var1*var2);
  }
#endif

/**************************************END OF FILE**************************************/
