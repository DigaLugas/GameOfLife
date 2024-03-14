          #include <stdio.h>
          #include <stdlib.h>
          #include <unistd.h> 

          // Definição de linha e coluna
          #define ROWS 25
          #define COLS 25

          //Inicializar a grade com células aleatórias vivas ou mortas
          void initializeGrid(int grid[ROWS][COLS]) {
              for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {
                      grid[i][j] = rand() % 2; // 0 para célula morta, 1 para célula viva
                  }
              }
          }

          // Função para imprimir a grade
          void printGrid(int grid[ROWS][COLS]) {
              for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {
                      printf("%c ", grid[i][j] ? 'X' : '-'); // 'X' para célula viva, '-' para célula morta
                  }
                  printf("\n");
              }
              printf("\n");
          }

          // Função para calcular o próximo estado da grade
          void nextGeneration(int grid[ROWS][COLS]) {
              int nextGrid[ROWS][COLS];

              // Percorrer a matriz
              for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {
                      // Contar o número de vizinhos vivos
                      int neighbors = 0;
                      for (int di = -1; di <= 1; di++) {
                          for (int dj = -1; dj <= 1; dj++) {
                              if (di == 0 && dj == 0) continue; // Ignorar a própria célula
                              int ni = i + di;
                              int nj = j + dj;
                              if (ni >= 0 && ni < ROWS && nj >= 0 && nj < COLS && grid[ni][nj]) {
                                  neighbors++;
                              }
                          }
                      }

                      // Regras
                      if (grid[i][j]) {
                          nextGrid[i][j] = (neighbors == 2 || neighbors == 3) ? 1 : 0; // Sobrevive
                      } else {
                          nextGrid[i][j] = (neighbors == 3) ? 1 : 0; // Nasce
                      }
                  }
              }

              //Atualiza o Grid para o proximo estado
              for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {
                      grid[i][j] = nextGrid[i][j];
                  }
              }
          }

int main() {
    int grid[ROWS][COLS];

    // Inicializa
    initializeGrid(grid);

    //Executa
    while (1) {
        // Limpa a tela
        system("clear");

        // Imprimir a grade atual
        printGrid(grid);

        // Calcula o próximo estado da grade
        nextGeneration(grid);

        // Aguardar 1 segundo antes de exibir a próxima geração
        sleep(1);
    }

    return 0;
}
