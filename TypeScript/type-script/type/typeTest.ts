const name1 = "kang";
console.log("typeof name1 : ", typeof name1);

const name2: string = "kang";
console.log("typeof name2 : ", typeof name2);

let name3 = "kang";
console.log("π ~ file: typeTest.ts ~ line 7 ~ name3", typeof name3);
// name3 = 1234;
// console.log("π ~ file: typeTest.ts ~ ~ name3", typeof name3);
// name3 = true;
// console.log("π ~ file: typeTest.ts ~ line 7 ~ name3", typeof name3);
// μμ²λΌ ν μμλ νμ λ³κ²½μ΄ μλ°μ€ν¬λ¦½νΈμ²λΌ μ§μμ΄ μλλ€.

let name4: any = "kang";
console.log("name4 : ", typeof name4);
name4 = 1234;
console.log("name4 : ", typeof name4);
name4 = true;
console.log("name4 : ", typeof name4);
// νμμ€ν¬λ¦½νΈμμ anyλ₯Ό μ¬μ©νλ©΄ μλ°μ€ν¬λ¦½νΈ μ²λΌ νμ λ³κ²½ κ°λ₯
