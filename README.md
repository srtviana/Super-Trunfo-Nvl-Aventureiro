# 🃏 Super Trunfo — Nível Aventureiro  
**Interatividade com Menu e Comparação de Atributos**

Este programa é a continuação do desafio anterior (nível intermediário), onde foram cadastrados os dados das cartas.  
Agora, no nível aventureiro, o objetivo é permitir que o jogador escolha qual atributo deseja comparar entre duas cartas usando *menu interativo* e estruturas de decisão.

---

## 🎮 Funcionalidades Implementadas

### ✔ Menu Interativo (estrutura `switch`)
O usuário escolhe qual atributo será usado para comparar duas cartas:

1. População  
2. Área  
3. PIB  
4. Pontos Turísticos  
5. Densidade Demográfica *(menor valor vence)*  

---

## 🧠 Lógica das Comparações

- Para **População**, **Área**, **PIB** e **Pontos Turísticos**:  
  → **Vence a carta com maior valor**.

- Para **Densidade Demográfica**:  
  → **Vence a carta com menor densidade**, conforme regra do Super Trunfo.

- Em todas as comparações, o programa exibe:
  - Nome dos dois países  
  - Valor do atributo selecionado  
  - Qual carta venceu  
  - "Empate!" se os valores forem iguais  

---

## 📌 Estruturas utilizadas neste nível

- `switch` para criar o **menu**
- `if/else` e **decisões aninhadas** para as comparações
- Variáveis da carta previamente definidas (conforme nível anterior)

---

## ▶ Como compilar

No terminal:

```bash
gcc super_trunfo_menu.c -o supertrunfo
