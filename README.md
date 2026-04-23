# ⏱ Timer para Terminal

Timer regressivo escrito em C para rodar direto no terminal.
Entrada no formato `hh:mm:ss`, interface limpa e controles por teclado.

## Como compilar e executar

​```bash
gcc main.c -o timer
./timer
​```

## Uso

Ao iniciar, digite o tempo desejado no formato `h:m:s`:

​```
Digite o tempo desejado (Ex: 01:10:05): 0:0:30
 Tempo: 00:00:27
​```

### Controles

| Tecla | Ação      |
|-------|-----------|
| `p`   | Pausar    |
| `r`   | Retomar   |
| `s`   | Reiniciar |


## Roadmap

- [x] Timer regressivo funcional no formato `hh:mm:ss`
- [x] Atualização em tempo real na mesma linha
- [ ] Controles de pausa, retomar e reinício
- [ ] Tecla para sair `Ctrl+C`
- [ ] Interface estilizada ( bordas e alinhamento)
- [ ] Alarme sonoro ao finalizar

## Tecnologias

- C (padrão POSIX)
- Bibliotecas: `stdio.h`, `time.h`, `unistd.h`, `stdbool.h`
