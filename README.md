# 42cpp-module-01
- [What is the meaning of having void in the constructor definition?](https://stackoverflow.com/questions/693652/what-is-the-meaning-of-having-void-in-the-constructor-definition)

### ex00
- オブジェクトをスタック保存かヒープ保存か
- [引数1個のコンストラクタの暗黙呼び出しとexplicit](http://exlight.net/devel/cpp/explicit.html)

### ex01
- ヒープ保存の消し忘れによるメモリーリーク
- delete

### ex02
- オブジェクトのスタックとヒープの練習
- [静的キャスト](https://docs.oracle.com/cd/E19957-01/805-7887/6j7dsdhg4/index.html)
- [動的キャスト](https://docs.oracle.com/cd/E19957-01/805-7887/6j7dsdhg5/index.html)

### ex03
- コンストラクタのオーバーロード（多重定義）
- オブジェクト配列の delete の仕方
- [deleteとdelete[ ]の違い](https://superactionshootinggame4.hatenablog.com/entry/2018/01/26/135038)

### ex04
- ポインタと参照
  - ポインタとは，他の変数のメモリアドレスを保持する変数のことです．ポインタが指すメモリ位置にアクセスするためには，`*` 演算子を用いてポインタを参照解除する必要があります．
  - 参照変数とは，エイリアス，つまりすでに存在する変数の別の名前のことです．参照は，ポインタと同様に，オブジェクトのアドレスを格納することでも実装されます．参照は，自動インダイレクト機能を持つ定数ポインタ（定数値へのポインタと混同してはいけません！）と考えることができます．つまり，コンパイラが `*` 演算子を適用してくれるということです． 
- [Pointers vs References in C++](https://www.geeksforgeeks.org/pointers-vs-references-cpp/)

### ex05
- アドレスを文字列に変換する
- [Convert “this” pointer to string](https://stackoverflow.com/questions/7850125/convert-this-pointer-to-string)

### ex06
- コンストラクタにおける参照型の初期化方法
- [Initialising reference in constructor C++](https://stackoverflow.com/questions/6576109/initialising-reference-in-constructor-c)
- 参照とポインタの違い
  - 初期化時のみ参照先を指定でき，その後変更することができない．
  - なので，参照には明示的に const を付ける．
  - 参照自身のアドレスを獲得できない．
  - [第16回目 参照、それはポインタと同じ？違う？](https://theolizer.com/cpp-school1/cpp-school1-16/)

### ex07
- [[C++] ifstreamでファイルを読む際のファイル存在チェック](https://qiita.com/yohm/items/91c5180d9c6d427b22d0)
- ifstream: ファイルに対する入力ストリーム
- ofstream: ファイルに対する出力ストリーム
- [std::basic_string::append](https://cpprefjp.github.io/reference/string/basic_string/append.html)
- [std::basic_string::find](https://cpprefjp.github.io/reference/string/basic_string/find.html)
- [std::basic_string::replace](https://cpprefjp.github.io/reference/string/basic_string/replace.htmlf)
