open Jest;

describe("Word List", () =>
  Expect.(
    test("should have 2048 words", () =>
      expect(Array.length(Wordlist.words)) |> toBe(2048)
    )
  )
);
