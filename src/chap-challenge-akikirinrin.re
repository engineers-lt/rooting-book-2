= 官公庁DevOpsへの道

== 目標規定文
(この章は、 大企業をカイゼンすべく戦っている方に「自分だけじゃない」と思ってもらうことを目的とする。
自身がこれまでやってきたことを伝えることによって。)

== はじめに
こんにちは、@<tt>{@akikirinrin}と申します。
私は、某国立研究開発法人で働く海洋生物研究者です。
本来の仕事は研究業務ですが、胸の内では自らをDevOps伝道師と定義し、組織をより良くするために奮闘しています。

ここに寄稿を決めたのは、「エンジニアの登壇を応援する会」の活動に貢献したいという思いからでした。
数年前――まだ自身の活動を定義できていなかった時代――、私は『成長する本』と出会いました。
向上心を持っていきいきとした人生をおくる人たちがコミュニティを形成していることを知り、宝物を見つけたような気持ちになったことを覚えています。
『応援する本2』の出版計画を聞き、今度は私がコミュニティの一員として、「応援する」活動に貢献するときと思いました。

謝辞:
- 妻
- OSS
- 真鍋、木下

この章の目的は、組織の改善に取り組まれている方に勇気を与えることです。
組織を変えるための活動には、たくさんのエネルギーが必要です。
無力感を感じ、くじけそうになることもあります。
もしあなたがそのような境遇にあるなら、
官公庁というダイナソーで戦っている私の事例を知り、
また「なにかやろうとしている人の背中を押す」やさしいコミュニティがあることを知ってください。
希望を胸に戦っているのはあなただけありません。

本章では、私の取り組みの過程を次の3つに分けて説明します:

 * うまくいかなかった時期（@<hd>{before}）

 * 転換期（@<hd>{breakthrough}）

 * 芽が出始めた現在（@<hd>{now}）

私の取り組みがはじめうまくいかなかった理由は、私自身が問題を正しく捉えられていなかったことにあります。
組織づくりという視点を持たなかった新人のころの私は、表面的な問題に目を奪われたきり、プロジェクトの渦に吸い込まれていったのです。

=={before} 幕開け前

=== シーズンイン

6月、長崎。
今年もプロジェクトのシーズンがやってきました。
私はここ数日、1年前に自分で書いたR言語のスクリプトを恐る恐る実行していました。

「・・・ほっ、動いた・・・」

全部で十数種あるスパゲッティスクリプトがとりあえず動くことを確認したら、
つぎは吐き出されたcsvファイルを一つ一つ、目的のExcelファイルに貼っていきます。
目にも色鮮やかなこのExcelファイルさえ更新していれば、プロジェクトで文句は言われないはずです。
大学院のときから、全ての作業をR言語でやっていた「スマートな」私にとって、ネ申Excelを一つずつ手作業で整形していくなど、罰ゲームにしか思えなかったのです。
ひとまず、仕上がったExcelファイルの計算チェックを依頼し、先に進みます。

「次は何だったかな」

手順が書いてあるWordファイルを開きます。
私たちは複数のプロジェクトを抱えていますが、それぞれが年次プロジェクトであるため、どの仕事をするときも常に1年ぶりなのです。
手順書によれば、こんどは別のネ申Excelの軍勢と戦い、それらをまた別のExcelファイルへと縛り上げる仕事のようです。
この仕事のために去年作ったスクリプトたちを開きます。
ネ申Excelと同じ数だけ用意されたネ申スパゲッティを、一つずつ実行していきます。

「あ、動かない」

どうやらデバッグが必要なようですが、今日は一日、このプロジェクトにかかりっきりです。
私は日課の勉強を済ませてから帰ることにしました。

=== 滝下りをはじめよう

スパゲッティのどこに問題があるかは、だいたい検討がつきました。
他人には散らかっているように見えても、本人にとっては整理されているものなのです。

「なるほど全角数字か...ったく勘弁してくれよ」

ウルトラハードコードで修正――スパゲッティのお化けは、また少し大きくなったようです。
なんとか二つ目の集計Excelも仕上げ、これもチェックに出しました。

「作業を思い出しがてら、先に進めておこうかな」

まだまだウォーターフォールの先は長いので、気が急きます。
昨日依頼したExcelのチェック結果が返ってくるには、まだ数日かかるでしょう。
待つべきですが、頭が次の作業に慣れる時間も必要です。
それに、提出したExcelにミスがなければ、今日からのリードがそのまま生きてくるという期待もありました。

作業をすすめるため、「いつものあの作業」をします。
去年のプロジェクトフォルダからExcelファイルをコピーし、末尾の日付を今日のものに変えるのです。
秘伝のタレは決して切らしてはいけません: 明日はまたこれをコピーして、明日の日付に変えるのです。
このバックアップ作業はもはや呼吸のようなもので、目をつぶっていてもできます。

私はウォーターフォール下りを始めました。
ネ申Excelを集計した結果を、最後のExcelファイルへとペーストしていく作業です。
シートは十数種類あるので見切れていますが、色付けされているのですぐに見つけられます。
ペースト先のセルも親切に色付けされているので、迷う必要はありません。
計算結果をここへ貼れば、黄色い「集計」シートの値が変わるしくみです。
忘れてはいけないのが、数式の参照範囲の更新。
これを怠ると、結果が大きく変わってしまいます。
私は頼りないマウス操作で、該当する箇所を全て更新しました。
これで、今年の数値は大丈夫。
心になにか引っかかるものがある気がしましたが、
ひとまずウォーターフォールを一つ下り、私は身のない達成感を感じていました。

===[column] 私たちのプロジェクトが抱える問題
ウォーターフォールひとりモグラ叩き――手作業によるネ申エクセルの整形、Wordへの手貼り、そして目grepによるチェック。
ミスは即ふりだし行きです。
製品の品質は低く、しかも不安定です。
プロジェクトメンバーはみな、目先の作業に奔走していました。
疲弊した状態で魅力的品質の向上に着手。
みんな頑張っていましたが、今年の魅力的品質は来年の当たり前品質。
毎年、来年の自分の首を締めているような格好でした。

残念ですが、現在公開されている資料にもどこかにミスはあるでしょう。

===[/column]

=== 手戻り地獄

「@<tt>{@kikirinrin}さん、すいません...」

Excelファイルのチェックをしてくれた方の顔をみた瞬間、何が起きたかはすぐにわかりました。
ウォーターフォール上流でのミス発覚。
たった今まですすめていた作業は、全て無駄だったのです。

原因は、スクリプトのバグでした。
ひとまずミスを見つけてくれたことに感謝を述べ、修正にかかりました。
この先のウォーターフォールの長さを考えると、あまり丁寧に修正している時間はありません。
スパゲッティお化けの機嫌を間に合わせの餌やりで直し、吐き出されたcsvを再び集計Excelに貼りました。

Wordを使った執筆セクションに入ってからも、手戻りはなくなりません。
なにせ文中の数値はExcelからのコピペなのです。
就職してから3年が経とうとしていましたが、この作業への耐性はつきそうにありませんでした。

=== 青二才からの提案

プロジェクトがひと段落したある日、私は所属課のメンバーに時間をもらって、業務体系の改善案をプレゼンしました。
内容は、TeXを用いたドキュメント生成の紹介です。
プレゼンでは、毎年繰り返される手作業ウォーターフォールを賽の河原での石積みに例えました。
解脱のカギがTeXというわけです。
終盤では、「ぼくのかんがえたさいきょうのスクリプト」が実際に動いている様子と、実際に生成されたドキュメントも見せました。

「きれいな成果物を、迅速に！！」
ポジティブな言葉でプレゼンをしめくくり、私は、プロジェクトが来年から良い方向に進んでいくだろうと安堵していました。

あれから3年。
未だにドキュメントは手作業で作られています。

===[column] 私の問題点

私の取り組みは、全く効果がありませんでした。
そもそも私自身に問題があったからです。

==== 文化の大切さに気づいていなかった

私がカイゼンのつもりでやっていた取り組みはどれも、近視眼的な自動化に過ぎませんでした。
手作業をスクリプトに置き換えただけで、いわば自動モグラ叩きを作ろうとしているに過ぎませんでした。
ほんとうは、モグラ叩きの生産から止めないといけなかったのです。

私が文化的側面の重要性に気づいていなかったのは、ユーザー文化にどっぷりと浸かり、その外側が見えていなかったためです。
私とプログラミングとの出会いはR言語がきっかけでしたが、コミュニティイベントに参加することもせず、わからない点は全てweb検索で片付けてしまっていました。
技術的知識の吸収には興味があったのですが、その動機も、今振り返れば「個人技の強化」という観点に過ぎません。
DevOpsやXPもざっとページをめくったが、全く刺さっていませんでした。
業務において不可欠な「ひとつの製品を仲間と協力して作りあげる」という視点を持てていませんでした。

===[/column]



=={breakthrough} ゼロからイチは大きな一歩

2019年。
事態は突然動き出しました。
一つめの要因は、開発者的な視点を手に入れたことでした。

=== 越境

いつからか、私と妻は、土曜日の午後を市内のカフェで過ごすようになっていました。
向かい合わせに座ったら、あとは読書するもよし、考えごとをするもよし。
それぞれが思い思いに、コーヒーと自分の時間を楽しむ時間でした。
私にとっては、積ん読本を崩すいい機会になっていました。
11月の積ん読本は、Hadley Wickhamの『Rパッケージ開発』。
これが私に越境のきっかけをくれました。
R歴は既に6年目に入っていたのですが、この本で解説されている概念は、私が知っているRの概念とは別物のように思えました。
私は自分が6年もの間、コンフォートゾーンの中で漫然と過ごしていたことにやっと気づき、
次の週からはラップトップを持ち込んで、手を動かしながら読みはじめました。

自分と開発者たちとの違いを知ったのは、テストという概念に出会ったときでした。
とくに、回帰テストが失敗するのを初めて見たとき
――「自分史上、最高に賢い」今の自分による自信たっぷりのコミットが、
「愚かだった」過去の自分が書いたプログラムを壊す瞬間を目の当たりにしたとき――
私は謙虚になることができました。
また同時に、テストという概念は私たち研究者の働き方を根本から変えるものだと確信しました。

継続的インテグレーションを知ったときは、開発者たちの怠惰さに心底あきれたのを覚えています。
しかし胸に手を当てて考えてみた結果、
テストすること自体を忘れたり、ローカルファイルのコミットを忘れてしまう愚かな私が是非とも導入すべき手法であることに気づきました。

キーボードを叩く姿は似ていても、
コードを書く開発者とスクリプトを書くユーザーの働き方は全く違うことを知って、
私の仕事観は大きく変わりました。
いくつかパッケージを書いていくなかで、ソフトウェアという言葉をとらえなおすことが出来ました。
研究業務、いや全ての知識労働を含む言葉だったことに気づいたのです。
私たち研究者は、開発者に学ぶべきと確信した冬でした。

=== 三本の矢

二つ目の転機は、転勤によって、思いがけず仲間を得たことでした。

当初、私は引き続き長崎で新年度を迎えるものと思っていました。
私の組織ではふつう、異動の噂は11月ごろから聞こえはじめます。
この年、私のところには冬に入っても異動の話は来ず、
長男誕生を2月に控えた私と妻は、内心ほっとしていました。
年が明ける頃には、私は異動がないことを半ば確信していました
――週末は相変わらず、妻とカフェに通うのを楽しみにしていましたし、車まで買い替えたほどです。

知らせは突然やってきました。
異例の2月。異動先は横浜です。
ちょうど長男が生まれ、妻の体調が万全でない上に、
私も慣れない子育てに戸惑っているところでした。
なんとか準備をすすめ、

同僚が二人増えることを知ったのは、横浜に着任してからでした。
聞けば二人とも、私と同い年。
同年代の若手が一気に3人も着任するだけでも異例なことですが、
私がもっと驚いたのは、彼らの担当課題の漠然さです;
彼らは業務改善のために採用されたのでした。


改善点についてインタビューを受けた。

データベース不在が弱点の１つであることを指摘。

まずここで、3年間にわたるウォーターフォールモグラ叩きの特訓が生きた。

彼らと意気投合。

社内向けデータベースを作るためのアジャイルチームを組織した。

=== 組織外とのつながり

横浜への転勤は、もうひとついいことがあった。

組織の外とのつながりができたこと。


2019年技術書展、まさか行けるとは思っていなかった

応援する本1を購入。engineers_ltを知り、Slackに参加。


LTのきっかけ

『残暑に負けるな！自由研究LT大会』の案内を得た

登壇: 手作業ウォーターフォールで仕事をする自身の組織の問題を発信した。

ヤバさはけっこう受けた。改善宣言をした

タグ付けされる、というアウトプットの重要性に気づいた


===[column] 進展の要因

まったく違う文化を得た

集団を形成できた

座標を得た

自分の考えの輪郭をより明確にできた

アウトプットの重要性に気づいた

組織の中枢に近づき、組織づくりのことを考えるようになった

===[/column]

=== そして何がおきたか

 * 勉強会のホストを本気でやるようになった

DevOpsについて語った第1回は失敗。スコープが明らかに広すぎた

職員は、組織の一員である前に研究者。

彼らに振り向いてもらうために、スコープを「論文執筆」にした

コミュニティとする必要があることに気づいた。

のちの部活につながっている。

* 問題の再発見

暗黙知の多さ

誰かの常識は誰かの非常識。

この気付きは、我々官公庁の「ビジネス」について真面目に考えるきっかけもあたえてくれました。
開発者とは、ただプログラムを書くだけではなく、顧客を幸せにするための製品、そしてそれを生み出す過程を常に改善していく集団のこと

それがビジネス上必要なことなら、プレーンテキストにしないといけない。

=={now} 達成に向かって

=== 達成基準

私の活動の達成基準は、私のプロジェクトについて、以下の3点が満たされていることです。

 * 製品がビルドされていること
 * 顧客が誰であるか、メンバー間で共通認識が形成されていること
 * 各メンバーが製品に誇りを持ち、自己肯定感を持って働けていること

スコープを大きくしすぎて失敗した勉強会での教訓を活かし、
達成記述のスコープは組織ではなく、プロジェクトに限りました。

私たちの顧客とは、全国民および予算元省庁、
そして私たちの製品とは、報告書や統計データのことです。

=== 私たちに必要なこと

究極的には組織体質を変える必要があります。
そのためにはまず、私たち自身が広義の開発者である自覚をもち、仕事のヒントを開発者文化に求めることが必要です。
開発者的視点を手に入れれば、自身の仕事を広義の製品としてみなすようになります。
製品という言葉は、顧客満足を中心とした働き方につながり、よりよい仕事への好循環を生み出します。

==== 開発者の自覚
私たちの仕事の多くは、物質的な製品を作ることではありません。
つまり、私達の仕事は広義のソフトウェア開発なのですが、
このような視点はあまり浸透していません。

まずは、学術研究とソフトウェア開発との関連性を示すことが必要と考えています。
それは、私達の仕事のヒントが開発者の世界にたくさん転がっているにも関わらず、
使われている用語があまりにも違うため、我々のコミュニティからはまったく自分ごととして認識されていないためです。
開発者としての目覚めは、仕事を製品として認識することにつながります。

インフラや技術に投資する文化を醸成する必要もあります。
良い仕事には、よいツールは必要条件だからです。
ナレッジベースはもちろん、継続的インテグレーションツールなどの人間の作業を肩代わりしてくれるサービスや、
コミュニケーションツールを整備することの重要性をきちんと認識し、定期的に使い勝手や効果を測定しなければなりません。

暗黙知の徹底排除も課題です。
「ひとりモグラ叩き」のストーリーからわかるように、私達のプロジェクトは、
各メンバーが自身の担当業務のエキスパートに育っていくことで成り立っています。
そればかりか、プロジェクトへの貢献度が異常に高いスーパーマンのようなメンバーもごく少数います。
私たちのプロジェクトは、暗黙知やスーパーマンに支えられ、とても危うい状態です。
他の官公庁、ひいては、日本という国が同じようなしくみで回っているのではないかと想像しています。
私たちには、ビジネス知識を関数として、ビジネス要求をテストとして蓄積する、プレーンテキスト文化が必要です。

私たちの仕事の多くは年次プロジェクトなので、基本的にメガリリース文化に支配されています。
ひとりモグラ叩きとメガリリース文化の融合は極めて危険です。
インクリメンタルな開発スタイルに慣れ、
要求を正確に把握できているかをこまめに確認しながら働く必要があります。

==== 顧客目線での製品開発

仕事を製品として捉えるようになると、必然的に顧客の存在を意識するようになります。
顧客を明確に認識し、彼らが必要としているものを作る姿勢は、プロジェクトメンバーの方向性を統一する大きな助けとなります。
これは、物理法則からも明らかです: 仕事のベクトルの不統一は摩擦を引き起こし、エネルギーは熱として散逸してしまうからです。
メンバーの目的が顧客満足に正しく向いていれば、部門の壁は薄くなり、顧客満足を満たす仲間になるでしょう。

==== 集団で成長する

知識労働者には、継続的な学びの文化が不可欠です。
顧客満足を効果的に実現するためには、年齢や職歴にとらわれず、プロジェクトメンバーが共に学び、成長してゆく必要があります。
ウォーターフォールプロジェクトの乱立を食い止めるには、管理職にも開発者的センスが必要ですし、
プロジェクトの生産性をよくするためには、現場のメンバーにも管理職や経営者の視点を持つことが必要です。

知識労働者は、情報の処理方法に敏感にならねばなりません。
なぜなら、情報こそが、私たちの商売道具だからです。
プロジェクトに固有の主語にとらわれず、知識労働という現象に着目することで、
学びの対象は一気に広がります。
歴史から学ぶ
個々の情報の本質を見極め、最も適した方法で蓄積していかねばならない。
蓄積形態は一度決定したら終わりではなく、常に見直しが必要。

情報処理を研ぎ澄ますことは、無駄を排除することです。
車輪の再発明の徹底排除することはもちろん、
作りすぎのムダを減らす必要があります。
スタートアップという、資源が極端に限られた状況下で価値を生み出す集団。
どんなに予算的に恵まれたプロジェクトに属していようと、スタートアップ的な視点は重要。
よい仕事には、余白が必要なのです。
思考を熟成させるため、あるいはさらなる学びのために。
勤勉さの定義の転換ともいえるかもしれません。



===[column] 仕事に対する考え方を変えてくれた本

よい本があったら教えて下さい。

===[/column]


== おわりに

=== 私のビジョン

「DevOps in Government」

我が組織が他の官公庁の模範となり、政府の中にまでDevOpsが浸透すること

 * テストがある政府: いい意味で、手を抜く政府

 * 求められる以上の仕事を、どんどん手を抜きながら実現していく政府

 * Govだって、もっと魅力的品質に注力していい

「病んだ政治を下から治療することはできない」のです（デッドライン）。


開発現場では当たり前（?）のDevOpsも、場が変わるとインパクトが変わる

まさか自分が組織づくりについて考えるとは思っていなかったが、このビジョンは国力さえ増強しうると確信している

手を抜いていることに胸を張れるようにならないといけない


=== よりよい国にしていくために

 * 余白が必要

 ** 思考を熟成させるために

 ** 職員のさらなる学びのために


1年間の活動をメタ的に振り返るきっかけにもなった

仲間を募集している。Twitterなどで見かけたら、絡んでほしい
