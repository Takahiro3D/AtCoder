# AtCoder
AtCoder用競技プログラミング環境

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/Takahiro3D/AtCoder)

## 対応言語

- C++
- Python (基本動作のみ確認済み)

## 使い方

作業は全てVSCode tasksで登録してあります。  
VSCode taskは以下のパッケージを利用して動かしています。
- [online-judge-tools](https://github.com/online-judge-tools/oj)
- [online-judge-template-generator](https://github.com/online-judge-tools/template-generator)

以下にAtCoderのプログラングコンテストで使用する流れを記載します。

### 1. コンテストの準備

:::note warn
ABCでは問題文の読み取りを禁止されているため、このスクリプトは使用しないでください。
:::

タスク`AtCoder: Prepare contest` を実行します。
ダイアログボックスにコンテスト名入力します。

(1回のみ)
AtCoderのユーザー名とパスワードを入力します。

タスクの実行結果は無視して問題ありません。

### 2. 問題を解く

問題のディレクトリは以下のようなパスで置かれています。
`src/practice/practice_1`

解きたい言語によって`main.cpp`か`main.py`を編集します。

### 3. テストケースの確認

タスク `AtCoder: Check test case (C++)` か `AtCoder: Check test case (Python)` を問題を解いた言語に応じて実行します。

### 4. ソースコードの提出

タスク`AtCoder: Submit code`を問題を解いたソースコードを開いた状態で実行します。

## デバッグ

### 自作テストケースの作り方

テストケースを自作してテストすることができます。
テスト入力と出力ファイルを問題の`test`ディレクトリ内に作成することで、テストケースの確認時に実行されます。

### ランダムテストの作り方

`generator.py`を用いてランダム入力を生成することができます。
問題文から成約を満たす入力を`generetor.py`で作成し、ファイルを開いた状態でタスク`AtCoder: Generate test`を実行します。
生成されたテストはテストケースの確認時に実行されます。

### デバッガーの起動方法 (C++のみ対応)

`F5`キーを押すか`Run and Debug`タブから`C/C++: build and debug`を実行します。
ダイアログボックスにプログラムの入力に使用するテストケースの名前を問題の`test`ディレクトリ内から入力します。

## License

MIT License
