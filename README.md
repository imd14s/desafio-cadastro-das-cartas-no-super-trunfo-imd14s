
# 🃏 CartasSuperTrunfo

Projeto de graduação desenvolvido para o curso de **Engenharia de Software** na **Estácio**.  
Este programa simula uma lógica básica do jogo **Super Trunfo**, utilizando atributos de cidades para comparar e determinar a carta vencedora.

---

## 🚀 Sobre o Projeto

O programa permite cadastrar duas cartas com atributos como população, área, PIB e pontos turísticos.  
Após o cadastro, os dados são exibidos e uma comparação é feita com base no cálculo de um "poder" especial (`super_power`), que considera:

- Densidade populacional
- PIB per capita
- Pontos turísticos

---

## 🧮 Lógica de Cálculo

```c
super_power = 1 / população_densidade + pib_per_capita + pontos_turisticos
```

---

## 📋 Requisitos

- Compilador **GCC**
- Sistema com terminal ou **VS Code**
- Sistema operacional: Linux ou Windows

---

## ⚙️ Como compilar e executar

### ✅ Compilando com GCC via terminal:
```bash
gcc CartasSuperTrunfo.c -o CartasSuperTrunfo
```

### ▶️ Executando:
```bash
./CartasSuperTrunfo
```

> 📌 **Observação:**  
> Em alguns sistemas, o programa **só roda corretamente no terminal interno do VS Code**.  
> Executar em terminais externos pode gerar erros de entrada.

---

## 👨‍💻 Autor

- **Everson Dias**  
  Estudante de Engenharia de Software — Estácio  
  Apaixonado por tecnologia, programação e segurança da informação.

---

## 📎 Observações

- Código escrito em linguagem C
- Utiliza `struct` para representar cartas
- Lógica simples e direta para aprendizado de conceitos fundamentais

---

🧠 *“O conhecimento é poder. Compartilhar conhecimento é ainda mais poderoso.”*
