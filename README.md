# re-bip39

WORK IN PROGRESS - NOT USABLE

A ReasonML implementation of [BIP0039][bip39]: Mnemonic code for generating deterministic keys

## Default Wordlist

This library uses the English wordlist linked on the BIP document as the default wordlist,
as of `July of 2018` that list was available in `https://raw.githubusercontent.com/bitcoin/bips/master/bip-0039/english.txt`
and had a sha256sum `e514127042c74b1c701fe8596e97c1dba686abdd5141e474395fdb46`,
included on that repo by an unsigned commit ([ce1862ac6bcffa1dd20aad858380e51e66e949ea][wordlist-commit])
by the github user `slush0`.

## Contributing

### Build

```
yarn build
```

### Watch Rebuild

```
yarn start
```

### Run tests
```
yarn test
```

### Watch run tests
```
yarn test --watch
```

## LICENSE (AGPL 3.0)
[AGPL-3.0][license] Copyright (C) 2018 Fabricio C Zuardi


[bip39]: https://github.com/bitcoin/bips/blob/master/bip-0039.mediawiki
[wordlist-commit]: https://github.com/bitcoin/bips/commit/ce1862ac6bcffa1dd20aad858380e51e66e949ea
[license]: ./LICENSE

