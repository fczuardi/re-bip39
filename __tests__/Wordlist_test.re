let expectedWords = 2048;
let expectedBytes = 13116;
/* let expectedSHA256Sum = "e514127042c74b1c701fe8596e97c1dba686abdd5141e474395fdb46"; */

open Jest;

describe("Word List", () => {
  open Expect;

  test("should have 2048 words", () =>
    expect(Array.length(Wordlist.words)) |> toBe(expectedWords)
  );

  test("should have 13116 bytes", () =>
    expect(Wordlist.toTxt() |> String.length) |> toBe(expectedBytes)
  );
});
