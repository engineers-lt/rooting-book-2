= 官公庁DevOpsへの道

== 下書きのための概要

 * キーワード: 官公庁、改善、DevOps
 
 * 主題: 官公庁にDevOpsを根付かせようと奮闘している
 
 * 対象読者: 大組織の改善に取り組んでいるエンジニアの方
 
 * なぜか:
 
 ** ダイナソーの極みである官公庁へのDevOps奮闘記は、エンジニアの方々にも勇気を与えられると思うから

 ** 官公庁へのDevOps浸透は国力さえ動かすインパクトがあると信じているから

 * ゴール: 大企業をカイゼンすべく戦っている方がパワーを得ること
 
== 私のミッション
官公庁系研究機関へのDevOps導入

=== 私は誰？

某国立研究開発法人に勤務する海洋生物研究者。

エンジニアではないので技術的には尖っていないです。

=== なぜ技術を持っていないのにここに書くのか

技術系でも旧態依然とした会社が少なからず存在し、改革に向けて奮闘している人がいたるところにいると聞いた。

官公庁というダイナソーで戦っている自分の事例が、コミュニティにいくらか勇気を与えることができると思った

私自身、コミュニティから力をいただいたことが大きい。

特定の人の記事というわけではないが、コミュニティとしての厚みを感じた。

私が背中を押してもらったように、私もコミュニティの「応援する」気持ちに厚みをもたせることに貢献できたらと思う。

他の誰かの力になれたらと思う。

1年間の活動をメタ的に振り返るきっかけにもなった

=== 私の組織が抱える問題

手作業ウォーターフォールの極み。

Excelでの猛烈な手作業をWordに貼り付け、チェック。

間違いがあったらやり直し。

DRY原則破りまくり

多様なネ申エクセル

汚い

降ってくる指示はほとんどが手作業とDRY原則違反

かっこいい白書も一太郎で作っている

当たり前品質（狩野モデル）を満たすだけの非生産的作業を毎年繰り返している。

テスト・ビルドの概念がないため、当たり前品質さえ安定しない。

疲弊した状態で魅力的品質の向上に着手。

今年の魅力的品質は来年の当たり前品質。

国家プロジェクト。担当者は精一杯やっているが、デプロイされている報告書やデータには、確実にミスがあるだろう。

現在のやり方がまずいことは誰が見ても明らか。

他の官公庁も同様と想像する

== 幕開け前

うまくいっていなかった時代

理由: 自分個人のスキルを強化することにしか興味がなかった

人間の問題を軽んじすぎていた（というか、考えもしなかった）

技術本を乱読したが、個人技の強化という観点でしかみていなかった。

DevOpsやXPもざっとページをめくったが、全く心に引っかかっていなかった

今からの4年前の2016年4月

大学院を卒業

初めての赴任先は組織の中枢から離れた長崎

OJTで手作業ウォーターフォール業務にどっぷりつかった

この時点でのスキルセット

* R言語

* LaTeX

* bash

* IDE

* C

年間数種類のプロジェクトがあるが、どれも時期をずらした年次作業

やり方に問題を抱えていることはわかったので、自分なりに改善を試していた

1年後に自分で見てもさっぱりわからなかった

結局は思いつきの改善に過ぎなかった。

業界標準に従っていなかった

=== 私自身の問題

DevOpsという概念を知らなかった。

WordじゃなくLaTeXを使うべきだという短絡的思考 -> 主張する解決策も結局は個人的好みの押し付けだった

世話を焼こうとしたが、お前がいなくなったらどうするという質問に答えられなかった

志を同じくする仲間がいないことも大きい問題だった

勉強はしていたが、いまいち方向性が悪かった

イディオム無視

表面的改善

多様なデータに多様なスクリプト

この頃学んだもの

* Vim

* Git

* リーダブルコード

== 0から１は大きな一歩

大きく2つの変化があった

 * 私自身の変化
 
 * 環境の変化

=== 私自身の変化

==== ユーザーから開発者への越境

CIの導入

自動回帰テストの威力に驚愕

何気なく手にとった『Rパッケージ開発入門』のおかげ

「テスト」「ビルド」の概念に触れて以来、スクリプトとコードを明確に意識するようになった

いくつかパッケージを書くうちに、研究業務、いや全ての知的活動はソフトウェアそのものだと気づいた

同時にパッケージのスコープに悩むようになり、「製品」「顧客」という考え方の重要性に気づいた

==== DevOpsとの出会い

ただのツール集ではなく、文化などの人間的な側面に着目した概念ということに気づいた

DevOps的考え方は、プログラムを書かなくても必要。

仕事をする上での基本的態度の一つであると思う

=== 環境の変化

長崎から横浜への異動が大きな転機となった

==== 仲間を得た

偶然、同い年の若手2名と合流

彼らの任務は改善だった

改善点についてインタビューを受けた。

データベース不在が弱点の１つであることを指摘。

3年間どっぷり浸かった経験が生きた。

社内向けデータベースを作るためのアジャイルチームを組織した。

最初からプレーンテキストベース

2020年からスクラム開発を導入。成長しながら開発している。

==== 組織の中枢に近づいた

組織のことを考えるようになった

==== 社会とつながった

2019年技術書展

応援する本1をきっかけにengineers_ltを知った -> Slack参加

登壇: 手作業ウォーターフォールで仕事をする自身の組織の問題を発信した。

ヤバさはけっこう受けた。改善宣言をした

タグ付けされる、というアウトプットの重要性に気づいた

=== そして何がおきたか

 * 勉強会のホストを本気でやるようになった

DevOpsについて語った第1回は失敗。スコープが明らかに広すぎた

職員は、組織の一員である前に研究者。

彼らに振り向いてもらうために、スコープを「論文執筆」にした

 * 部活を作った

コミュニティとする必要があることに気づいた。

* 問題の再発見

暗黙知の多さ

== 達成基準

我が組織内に、自律したアジャイルチームが複数稼働し、それぞれが高品質な製品を安定的に生み出すようになること

 * ここで製品とは: 報告書や統計データ

 * ここで顧客とは: 全国民および予算元省庁

我が組織が他の官公庁の模範となり、政府の中にまでDevOpsが浸透すること

== 達成に向かって

=== 必要なこと
==== 概念の輸入と文化の醸成


 * データ構造重要性を啓蒙


 * 技術書の「翻訳」: 有用な技術書はたいてい開発者色が強すぎて研究者が手に取らない、見向きもしない -> 自分たちの業務と関連付けて引用することにより、技術者たちの思考パターンの有用性に気づいてもらう

==== 新たな習慣・価値観の定着を後押しする

 * その情報がどう保持されたがっているのかを見極める

 * 顧客目線での製品開発: 事業の顧客を明確に認識し、彼らが必要としているものを作る

 * インクリメンタルな開発スタイル: 完成していないように見えるものをリポジトリにpushする心理的ハードルを下げる

 * 作りすぎのムダを減らす: 勤勉さの定義の転換も必要

 * サイロ化脱却

 * 形式知化: スーパーマン頼みの組織は弱い。ビジネス要求はテストにし、学んだことは共有せよ

 * 学習文化

 * 車輪の再発明の徹底排除

 * プレゼン簡略化

 * プレーンテキスト化

国家プロジェクトの知識がバイナリで分散していると思うとぞっとする

 * いいタイミングで身を引くことになりそう

 * リモートのトレーニング

 * 中堅クラスの教育: ウォーターフォールプロジェクトの乱立を食い止める

 * ツールに投資する文化の醸成

 * エディタを愛する

 * 人海戦術&精神論体質からの脱却

 * 学術研究とソフトウェア開発との関連性を示す

=== 今やっていること

スクラム導入

ユーザー目線の視点を得た

ピボットで一度死んでいることに気づいた

== 計画していること

 * スクラム開発の普及 -> チームとして成長する強みを実感してもらう

 * 新人研修のジャック

 * 研究成果で背中を見せる

=== ロードマップ

『ひとりの妄想』を引用する

少し時間かけすぎたかも


== 私の組織ビジョン

「DevOps in Government」

* テストがある政府: いい意味で、手を抜く政府

* 求められる以上の仕事を、どんどん手を抜きながら実現していく政府

* Govだって、もっと魅力的品質に注力していい

開発現場では当たり前（?）のDevOpsも、場が変わるとインパクトが変わる

まさか自分が組織づくりについて考えるとは思っていなかったが、このビジョンは国力さえ増強しうると確信している

手を抜いていることに胸を張れるようにならないといけない

=== よりよい国にしていくために

 * 余白が必要

 ** 思考を熟成させるために

 ** 職員のさらなる学びのために

OSSツールに感謝

敢えて挙げることはしないが、心から感謝している。

=== 仕事に対する考え方を変えてくれた本

 * XP

 * 達人プログラマー

 * 情熱プログラマー

 * ハッカーと画家

 * 銃・病原菌・鉄

 * デザイン思考が世界を変える

 * ひとりの妄想で未来は変わる
