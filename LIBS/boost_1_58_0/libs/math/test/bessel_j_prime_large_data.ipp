//  Copyright (c) 2007 John Maddock
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

   static const boost::array<boost::array<typename table_type<T>::type, 3>, 140> bessel_j_prime_large_data = {{
      {{ SC_(0.725889492034912109375e1), SC_(0.725889492034912109375e1), SC_(0.10324136466803984563203229652469623629494905060386) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.90838165283203125e1), SC_(-0.02593519786909798552765612804866897946479440240923) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.30492671966552734375e2), SC_(-0.047080257597058131629810223790028536535803474378352) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.5872027587890625e2), SC_(-0.014012844137446280573245916882913065491127263562409) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.7212715911865234375e2), SC_(0.054458376236420905446669301105156336564921757412998) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.25201507568359375e3), SC_(-0.04631537908062274011320210316705358881961610351373) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.48982421875e3), SC_(-0.0060649563874099807709114400005618647589566000275274) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.62516943359375e3), SC_(0.012835551477049571640571660215815149921761938180526) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.1671535888671875e4), SC_(-0.011072541953225443053992414821381330548274822359804) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.26791259765625e4), SC_(-0.0040203060731606304013884921160432530955952442348141) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.4495525390625e4), SC_(0.0034139588556494873718031282767885395559257062797421) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.126748310546875e5), SC_(-0.0063619266525178140158368519421343677753579228281661) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.209469140625e5), SC_(0.0041262286461927089884446344976275231300377278386951) }}, 
      {{ SC_(0.725889492034912109375e1), SC_(0.389408984375e5), SC_(0.0038200212312170664560196435362151463527309870841345) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.725889492034912109375e1), SC_(0.057462719893084318361539149065422897696564571175617) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.90838165283203125e1), SC_(0.089659949266546722134954522036367247193058988843547) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.30492671966552734375e2), SC_(0.12633872153677020321938532744367216000151668982417) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.5872027587890625e2), SC_(-0.039767591955586498741396845171957099912226432000865) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.7212715911865234375e2), SC_(-0.083496440278016227431907268266550165065468867450589) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.25201507568359375e3), SC_(0.050140892713800893925169241151468499209389597189675) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.48982421875e3), SC_(0.016470253023231229541583713819252014340846711119823) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.62516943359375e3), SC_(-0.020868036617164333317499092590900743227059722683943) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.1671535888671875e4), SC_(0.015131003921115804387763234316617494904361226471306) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.26791259765625e4), SC_(-0.00025776076911176488080270947080572768047082536025358) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.4495525390625e4), SC_(-0.0064146804589290934910910255823390516155409201653211) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.126748310546875e5), SC_(0.0052692128979686692152179587325105711420628312559325) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.209469140625e5), SC_(-0.0029750511422684484033284943126605056780047972340025) }}, 
      {{ SC_(0.90838165283203125e1), SC_(0.389408984375e5), SC_(-0.0040363956776524008824366722987028718976389893753723) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.725889492034912109375e1), SC_(2.2009282551860363066177321141913731260702490454568e-16) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.90838165283203125e1), SC_(1.268567517734958812856154382495289912629011923375e-13) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.30492671966552734375e2), SC_(0.041155216713217603231035232573648092856381622367508) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.5872027587890625e2), SC_(0.061376927705003855129212468972991761962182848992945) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.7212715911865234375e2), SC_(0.088401817468658069749511879090439967366096121211858) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.25201507568359375e3), SC_(0.041500824659655892935314961717358669503680772969897) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.48982421875e3), SC_(-0.027605351279641337124315645812803124172587505416502) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.62516943359375e3), SC_(0.023369907623823060432689710507773439859903216180384) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.1671535888671875e4), SC_(-0.017139447809568956103724958233112903039374240787091) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.26791259765625e4), SC_(0.013761343728747804944284675651293617827582723926078) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.4495525390625e4), SC_(0.011897239492850689700750258421867622373745126183724) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.126748310546875e5), SC_(0.00087453360740882640476003410657010979376627330391768) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.209469140625e5), SC_(-0.0020385356170116955722604854558013002335640685341094) }}, 
      {{ SC_(0.30492671966552734375e2), SC_(0.389408984375e5), SC_(0.0025732209720762338651017691860113498189531192827353) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.725889492034912109375e1), SC_(1.0882205936621337531301878051357240543222252109118e-46) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.90838165283203125e1), SC_(4.0011829386688060680708870451239959918295214971328e-41) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.30492671966552734375e2), SC_(1.9861251876723715790258913073673705891724091763284e-12) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.5872027587890625e2), SC_(0.026803238704567074704786160892272450490650925117104) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.7212715911865234375e2), SC_(0.071688955465646812616034961090538049938702404253361) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.25201507568359375e3), SC_(-0.02953030207585916855278297700753600030678645033374) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.48982421875e3), SC_(0.034998521345438710476427048981210570680356697292086) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.62516943359375e3), SC_(-0.023625415343510772396066436304243894988947060871843) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.1671535888671875e4), SC_(-0.012213854972075787826217927896889591281633987973704) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.26791259765625e4), SC_(0.014452656764003670482350075185007132236610571799515) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.4495525390625e4), SC_(0.011880840217676056709634490156510101123348489247046) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.126748310546875e5), SC_(-0.00095009037575978097221300314119557528457640310323889) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.209469140625e5), SC_(-0.00044802889763068082118980748303517763314743735661281) }}, 
      {{ SC_(0.5872027587890625e2), SC_(0.389408984375e5), SC_(0.0034347666965478536109693620917840161523232847463224) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.725889492034912109375e1), SC_(1.8742291056685367486604835067483670117700044247127e-63) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.90838165283203125e1), SC_(1.4282081159646625696876562768953687202787247683419e-56) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.30492671966552734375e2), SC_(1.7167327540138663434373759647457727172926767815842e-20) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.5872027587890625e2), SC_(0.00011313949904159594988405034687041720129094704143894) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.7212715911865234375e2), SC_(0.023413123848599003224460315503587068133802297999475) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.25201507568359375e3), SC_(0.030671536528689248199571601276457879053134513618087) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.48982421875e3), SC_(0.028738897491231363831635227038760428260445144664004) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.62516943359375e3), SC_(-0.0010093419342560062527810763369997012568981525934777) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.1671535888671875e4), SC_(-0.013719590480575821360869872767879279517259291740196) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.26791259765625e4), SC_(-0.0095296031487014712579566785405350334423544985895886) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.4495525390625e4), SC_(-0.0057061748346359058350002402346872461124279845559405) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.126748310546875e5), SC_(-0.0054003673139833103975219612528577819134697347524516) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.209469140625e5), SC_(0.004795382262258735983589266249514105404812153080133) }}, 
      {{ SC_(0.7212715911865234375e2), SC_(0.389408984375e5), SC_(-0.00024582533629175284743870583752200842392083317439995) }},
      {{ SC_(-0.725889492034912109375e1), SC_(0.725889492034912109375e1), SC_(0.075010240400860322613588322385784928118364880736695) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.90838165283203125e1), SC_(0.17292120210126263561415023262372069502366047591587) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.30492671966552734375e2), SC_(0.1300230135708545251451284632662913618590497005281) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.5872027587890625e2), SC_(-0.065049311803174387754506604162390029198372383266164) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.7212715911865234375e2), SC_(-0.092830783074932671605437743276082693692863587333459) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.25201507568359375e3), SC_(0.045985329695857270068873731671899604557425267363133) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.48982421875e3), SC_(0.029986669098159366984601159676748450668424644451746) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.62516943359375e3), SC_(-0.030045984815826954584409983717226929463292637207141) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.1671535888671875e4), SC_(0.019284132813714522523037501521681463406050537069753) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.26791259765625e4), SC_(-0.0080504538932434871427480062765520293263706838952802) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.4495525390625e4), SC_(-0.010628632050827181522697574008666509306629190691784) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.126748310546875e5), SC_(0.0021019987551443021088489912211629336815395795677434) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.209469140625e5), SC_(-0.00017862326343335141326573661614068444901895674829948) }}, 
      {{ SC_(-0.725889492034912109375e1), SC_(0.389408984375e5), SC_(-0.0035874118948545397421834819042679544717287334585026) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.725889492034912109375e1), SC_(0.085262034198347563263534433024129293612834560767137) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.90838165283203125e1), SC_(-0.041893287944850898762914151037199350780089556519602) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.30492671966552734375e2), SC_(-0.13840522823984569236571362285136981294601880444501) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.5872027587890625e2), SC_(0.06326858680033948924267215787799379348173705577273) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.7212715911865234375e2), SC_(0.091615612798265726399791491917396789588660321158487) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.25201507568359375e3), SC_(-0.049251301178573950940827837522525581224323805090589) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.48982421875e3), SC_(-0.024248736158355953777484052994943618355691120575526) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.62516943359375e3), SC_(0.026432004312796279515226168665514805947400354314947) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.1671535888671875e4), SC_(-0.017817486075726423885421685964689132728689188133227) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.26791259765625e4), SC_(0.0042605971396147240047442031727720954466985706216351) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.4495525390625e4), SC_(0.0088024530022866310316562284067475973211940610402256) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.126748310546875e5), SC_(-0.0038539827573016516124883159655524837754568464110856) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.209469140625e5), SC_(0.0016644608915323727662114862649150576045954366002272) }}, 
      {{ SC_(-0.90838165283203125e1), SC_(0.389408984375e5), SC_(0.0039587905883269263929263562363636527497358688466854) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.725889492034912109375e1), SC_(-812641609167090.25643280771442754871632055541314833) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.90838165283203125e1), SC_(-884852329238.54500126975482320664733117521288415775) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.30492671966552734375e2), SC_(-0.073568862465630781217719784502000848867410243108955) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.5872027587890625e2), SC_(-0.072740113388965194704013050733085916130032490364337) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.7212715911865234375e2), SC_(-0.011570388777069726809133239807825326725652565241199) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.25201507568359375e3), SC_(0.02897032755874979635831525730554684915565177531416) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.48982421875e3), SC_(0.0224909807920612239400031810520859918909229844082) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.62516943359375e3), SC_(-0.021157709835773537825215605681736856963628404676255) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.1671535888671875e4), SC_(0.0089322479384135777485760676963754763166016418270993) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.26791259765625e4), SC_(0.0072598836667662590078603550886094415409693575729519) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.4495525390625e4), SC_(2.0341896831741316511607269818484994376983865246926e-05) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.126748310546875e5), SC_(0.0070511994537966677583454970337743924020998871474901) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.209469140625e5), SC_(-0.0051677166686131394281319583004701439612246720092222) }}, 
      {{ SC_(-0.30492671966552734375e2), SC_(0.389408984375e5), SC_(-0.0030587347103217577403313023977419490435264823911065) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.725889492034912109375e1), SC_(-2490598589530532918901026917005018213179419706.6979) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.90838165283203125e1), SC_(-4306457414448048792057782801355896791103.1735406647) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.30492671966552734375e2), SC_(-6659159035.9177809840192869360262230712725099102536) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.5872027587890625e2), SC_(-0.053893470599785658911598519210101221005956728731929) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.7212715911865234375e2), SC_(-0.047203056970663100651101522881499140175465324876385) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.25201507568359375e3), SC_(0.049492577025895209566271144439318016408840480455371) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.48982421875e3), SC_(-0.016104474272828827391828092345913186310788018340556) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.62516943359375e3), SC_(-0.0013604482241225644983243058431224219484242945740896) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.1671535888671875e4), SC_(0.019507233002347143580436951008831698338694979444064) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.26791259765625e4), SC_(-0.0050982749418564724446058338132936532772165932995438) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.4495525390625e4), SC_(-0.0070671875681923095500609735352864351792318784880567) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.126748310546875e5), SC_(0.0060137507828957318886109570818828783017563089621599) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.209469140625e5), SC_(-0.0039447819238648396445588000685008421672396759074184) }}, 
      {{ SC_(-0.5872027587890625e2), SC_(0.389408984375e5), SC_(-0.0038342070305193476943523937859241248143902150846196) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.725889492034912109375e1), SC_(-8.9961838527297942274719779804045778863286089313031e+61) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.90838165283203125e1), SC_(-7.5167877096039971015777758344454965524761227820002e+54) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.30492671966552734375e2), SC_(-506952799834887823.85782440141966242525150761499231) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.5872027587890625e2), SC_(-13.257231766335022838646782567251259287955614056549) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.7212715911865234375e2), SC_(0.0053955431520634703099897474186201412616152929858934) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.25201507568359375e3), SC_(0.043218023874828779689533995082260620778553365126069) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.48982421875e3), SC_(0.03481430835746538985346981750017950705669748843079) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.62516943359375e3), SC_(-0.013293663607688604968580527846149022126938760163712) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.1671535888671875e4), SC_(-0.018032564444017678971442941171935185432231135240593) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.26791259765625e4), SC_(-0.0040680527446346280495913667175615878400455056205867) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.4495525390625e4), SC_(-0.0011955997706384835733521148536147887229015063929401) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.126748310546875e5), SC_(-0.0067601510171817445966096633306319288060682821068724) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.209469140625e5), SC_(0.0054755679536842675831712821454104474653176771646281) }}, 
      {{ SC_(-0.7212715911865234375e2), SC_(0.389408984375e5), SC_(0.0013432302588697356293697664384457952182799873797) }},
   }};