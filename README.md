# atcoder-vscode

## 使い方
### atcoder へのログイン

```
acc login
```

### コンテスト用のディレクトリの作成
（constestID にはコンテストの URL の https://atcoder.jp/contests/ 以下を入れる。）

```
acc new <contestID>
```

### サンプルケースのテスト
ファイル名の部分にはビルド後のファイルを指定する

```
oj test -c ./<ファイル名> -d ./tests
```

### コードの提出

```
acc submit <ファイル名>
```

### 参考文献
- [atcoder初心者こそ環境構築しよう！(atcoder-cli,online-judge-toolsのインストール、使い方）](https://qiita.com/Adaachill/items/3d4ddad56c5c2cc372cd)

## /archived
過去に練習用で解いた問題のコードたち
