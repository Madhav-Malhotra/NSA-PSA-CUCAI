void memcpy(double *dst, double *src, int n) {
    for (int i = 0; i < n / (sizeof(double)); i++) {
        dst[i] = src[i];
    }
}
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[2];
    double var1[2];
    double var2[2];
    double var3[2];
    double var4[2];
    double var5[2];
    double var6[2];
    double var7[2];
    double var8[2];
    double var9[2];
    double var10[2];
    double var11[2];
    double var12[2];
    double var13[2];
    double var14[2];
    double var15[2];
    double var16[2];
    double var17[2];
    double var18[2];
    double var19[2];
    double var20[2];
    double var21[2];
    double var22[2];
    double var23[2];
    double var24[2];
    double var25[2];
    double var26[2];
    double var27[2];
    double var28[2];
    double var29[2];
    double var30[2];
    double var31[2];
    double var32[2];
    double var33[2];
    double var34[2];
    double var35[2];
    double var36[2];
    double var37[2];
    double var38[2];
    double var39[2];
    double var40[2];
    double var41[2];
    double var42[2];
    double var43[2];
    double var44[2];
    double var45[2];
    double var46[2];
    double var47[2];
    double var48[2];
    double var49[2];
    double var50[2];
    double var51[2];
    double var52[2];
    double var53[2];
    double var54[2];
    double var55[2];
    double var56[2];
    double var57[2];
    double var58[2];
    double var59[2];
    double var60[2];
    double var61[2];
    double var62[2];
    double var63[2];
    double var64[2];
    double var65[2];
    double var66[2];
    double var67[2];
    double var68[2];
    double var69[2];
    double var70[2];
    double var71[2];
    double var72[2];
    double var73[2];
    double var74[2];
    double var75[2];
    double var76[2];
    double var77[2];
    double var78[2];
    double var79[2];
    double var80[2];
    double var81[2];
    double var82[2];
    double var83[2];
    double var84[2];
    double var85[2];
    double var86[2];
    double var87[2];
    double var88[2];
    double var89[2];
    double var90[2];
    double var91[2];
    double var92[2];
    double var93[2];
    double var94[2];
    double var95[2];
    double var96[2];
    double var97[2];
    double var98[2];
    double var99[2];
    double var100[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var100, (double[]){0.9406764272736705, 0.05932357272632945}, 2 * sizeof(double));
    } else {
        memcpy(var100, (double[]){0.05099145510740894, 0.949008544892591}, 2 * sizeof(double));
    }
    double var101[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var101, (double[]){0.96376587486602, 0.03623412513398}, 2 * sizeof(double));
    } else {
        memcpy(var101, (double[]){0.018455127647739163, 0.9815448723522608}, 2 * sizeof(double));
    }
    add_vectors(var100, var101, 2, var99);
    double var102[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var102, (double[]){0.964528513737405, 0.03547148626259506}, 2 * sizeof(double));
    } else {
        memcpy(var102, (double[]){0.018451065606974317, 0.9815489343930257}, 2 * sizeof(double));
    }
    add_vectors(var99, var102, 2, var98);
    double var103[2];
    if (input[5] <= -0.2677818536758423) {
        memcpy(var103, (double[]){0.9948175598163508, 0.005182440183649204}, 2 * sizeof(double));
    } else {
        memcpy(var103, (double[]){0.11832781228636714, 0.8816721877136329}, 2 * sizeof(double));
    }
    add_vectors(var98, var103, 2, var97);
    double var104[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var104, (double[]){0.965536818474737, 0.03446318152526293}, 2 * sizeof(double));
    } else {
        memcpy(var104, (double[]){0.01842199499256341, 0.9815780050074366}, 2 * sizeof(double));
    }
    add_vectors(var97, var104, 2, var96);
    double var105[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var105, (double[]){0.9633991358985559, 0.03660086410144417}, 2 * sizeof(double));
    } else {
        memcpy(var105, (double[]){0.018380411218537635, 0.9816195887814624}, 2 * sizeof(double));
    }
    add_vectors(var96, var105, 2, var95);
    double var106[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var106, (double[]){0.9854913813027634, 0.014508618697236592}, 2 * sizeof(double));
    } else {
        memcpy(var106, (double[]){0.02317679030796242, 0.9768232096920375}, 2 * sizeof(double));
    }
    add_vectors(var95, var106, 2, var94);
    double var107[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var107, (double[]){0.9396300996518164, 0.06036990034818362}, 2 * sizeof(double));
    } else {
        memcpy(var107, (double[]){0.050969429381379196, 0.9490305706186208}, 2 * sizeof(double));
    }
    add_vectors(var94, var107, 2, var93);
    double var108[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var108, (double[]){0.9659751308579047, 0.03402486914209535}, 2 * sizeof(double));
    } else {
        memcpy(var108, (double[]){0.018414444106347478, 0.9815855558936525}, 2 * sizeof(double));
    }
    add_vectors(var93, var108, 2, var92);
    double var109[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var109, (double[]){0.9852785560630584, 0.01472144393694162}, 2 * sizeof(double));
    } else {
        memcpy(var109, (double[]){0.023353228837837164, 0.9766467711621628}, 2 * sizeof(double));
    }
    add_vectors(var92, var109, 2, var91);
    double var110[2];
    if (input[5] <= -0.2677818536758423) {
        memcpy(var110, (double[]){0.9953873093344018, 0.004612690665598241}, 2 * sizeof(double));
    } else {
        memcpy(var110, (double[]){0.11801617510919847, 0.8819838248908015}, 2 * sizeof(double));
    }
    add_vectors(var91, var110, 2, var90);
    double var111[2];
    if (input[7] <= -0.2693522274494171) {
        memcpy(var111, (double[]){0.9957253301799973, 0.004274669820002679}, 2 * sizeof(double));
    } else {
        memcpy(var111, (double[]){0.11807902259927384, 0.8819209774007262}, 2 * sizeof(double));
    }
    add_vectors(var90, var111, 2, var89);
    double var112[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var112, (double[]){0.9855239256104746, 0.01447607438952543}, 2 * sizeof(double));
    } else {
        memcpy(var112, (double[]){0.023344353006960365, 0.9766556469930395}, 2 * sizeof(double));
    }
    add_vectors(var89, var112, 2, var88);
    double var113[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var113, (double[]){0.9857757993433445, 0.014224200656655521}, 2 * sizeof(double));
    } else {
        memcpy(var113, (double[]){0.023292573578048394, 0.9767074264219515}, 2 * sizeof(double));
    }
    add_vectors(var88, var113, 2, var87);
    double var114[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var114, (double[]){0.9853331563129316, 0.014666843687068337}, 2 * sizeof(double));
    } else {
        memcpy(var114, (double[]){0.023270428780962898, 0.9767295712190371}, 2 * sizeof(double));
    }
    add_vectors(var87, var114, 2, var86);
    double var115[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var115, (double[]){0.9851607167311112, 0.014839283268888925}, 2 * sizeof(double));
    } else {
        memcpy(var115, (double[]){0.02339826362637638, 0.9766017363736236}, 2 * sizeof(double));
    }
    add_vectors(var86, var115, 2, var85);
    double var116[2];
    if (input[2] <= -0.25424477458000183) {
        memcpy(var116, (double[]){0.9954345992467906, 0.004565400753209387}, 2 * sizeof(double));
    } else {
        memcpy(var116, (double[]){0.11655743055650504, 0.883442569443495}, 2 * sizeof(double));
    }
    add_vectors(var85, var116, 2, var84);
    double var117[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var117, (double[]){0.9850590024317737, 0.014940997568226375}, 2 * sizeof(double));
    } else {
        memcpy(var117, (double[]){0.023238055038280015, 0.97676194496172}, 2 * sizeof(double));
    }
    add_vectors(var84, var117, 2, var83);
    double var118[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var118, (double[]){0.9413273347217757, 0.058672665278224415}, 2 * sizeof(double));
    } else {
        memcpy(var118, (double[]){0.0506165975978119, 0.9493834024021881}, 2 * sizeof(double));
    }
    add_vectors(var83, var118, 2, var82);
    double var119[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var119, (double[]){0.9849495117853694, 0.01505048821463056}, 2 * sizeof(double));
    } else {
        memcpy(var119, (double[]){0.02333052199867169, 0.9766694780013283}, 2 * sizeof(double));
    }
    add_vectors(var82, var119, 2, var81);
    double var120[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var120, (double[]){0.9388613687205121, 0.06113863127948798}, 2 * sizeof(double));
    } else {
        memcpy(var120, (double[]){0.05096319079279588, 0.9490368092072041}, 2 * sizeof(double));
    }
    add_vectors(var81, var120, 2, var80);
    double var121[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var121, (double[]){0.9851062147774609, 0.014893785222539101}, 2 * sizeof(double));
    } else {
        memcpy(var121, (double[]){0.023290987576423734, 0.9767090124235762}, 2 * sizeof(double));
    }
    add_vectors(var80, var121, 2, var79);
    double var122[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var122, (double[]){0.9648573202229924, 0.03514267977700758}, 2 * sizeof(double));
    } else {
        memcpy(var122, (double[]){0.018433056388521357, 0.9815669436114787}, 2 * sizeof(double));
    }
    add_vectors(var79, var122, 2, var78);
    double var123[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var123, (double[]){0.9852479254641223, 0.014752074535877605}, 2 * sizeof(double));
    } else {
        memcpy(var123, (double[]){0.023368881312017704, 0.9766311186879822}, 2 * sizeof(double));
    }
    add_vectors(var78, var123, 2, var77);
    double var124[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var124, (double[]){0.9651949647335075, 0.03480503526649238}, 2 * sizeof(double));
    } else {
        memcpy(var124, (double[]){0.018399545512677126, 0.9816004544873229}, 2 * sizeof(double));
    }
    add_vectors(var77, var124, 2, var76);
    double var125[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var125, (double[]){0.9856597815240657, 0.014340218475934315}, 2 * sizeof(double));
    } else {
        memcpy(var125, (double[]){0.023266673950046828, 0.9767333260499531}, 2 * sizeof(double));
    }
    add_vectors(var76, var125, 2, var75);
    double var126[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var126, (double[]){0.9857131353196961, 0.014286864680304044}, 2 * sizeof(double));
    } else {
        memcpy(var126, (double[]){0.02334293760620587, 0.9766570623937941}, 2 * sizeof(double));
    }
    add_vectors(var75, var126, 2, var74);
    double var127[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var127, (double[]){0.9643950176566045, 0.035604982343395465}, 2 * sizeof(double));
    } else {
        memcpy(var127, (double[]){0.01830165308158329, 0.9816983469184166}, 2 * sizeof(double));
    }
    add_vectors(var74, var127, 2, var73);
    double var128[2];
    if (input[7] <= -0.2663205713033676) {
        memcpy(var128, (double[]){0.9941574375830747, 0.005842562416925245}, 2 * sizeof(double));
    } else {
        memcpy(var128, (double[]){0.11722058763382918, 0.8827794123661707}, 2 * sizeof(double));
    }
    add_vectors(var73, var128, 2, var72);
    double var129[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var129, (double[]){0.9647329006358382, 0.03526709936416187}, 2 * sizeof(double));
    } else {
        memcpy(var129, (double[]){0.018346740731407955, 0.981653259268592}, 2 * sizeof(double));
    }
    add_vectors(var72, var129, 2, var71);
    double var130[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var130, (double[]){0.9848580577069435, 0.015141942293056617}, 2 * sizeof(double));
    } else {
        memcpy(var130, (double[]){0.023212830058189873, 0.9767871699418101}, 2 * sizeof(double));
    }
    add_vectors(var71, var130, 2, var70);
    double var131[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var131, (double[]){0.9844499292521851, 0.015550070747814884}, 2 * sizeof(double));
    } else {
        memcpy(var131, (double[]){0.02331973449103435, 0.9766802655089656}, 2 * sizeof(double));
    }
    add_vectors(var70, var131, 2, var69);
    double var132[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var132, (double[]){0.9854232713987432, 0.014576728601256864}, 2 * sizeof(double));
    } else {
        memcpy(var132, (double[]){0.023407321111349844, 0.9765926788886501}, 2 * sizeof(double));
    }
    add_vectors(var69, var132, 2, var68);
    double var133[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var133, (double[]){0.9857634246513438, 0.014236575348656265}, 2 * sizeof(double));
    } else {
        memcpy(var133, (double[]){0.023291972568056957, 0.9767080274319431}, 2 * sizeof(double));
    }
    add_vectors(var68, var133, 2, var67);
    double var134[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var134, (double[]){0.9386418643387696, 0.06135813566123046}, 2 * sizeof(double));
    } else {
        memcpy(var134, (double[]){0.051245912201197896, 0.948754087798802}, 2 * sizeof(double));
    }
    add_vectors(var67, var134, 2, var66);
    double var135[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var135, (double[]){0.9859912797399305, 0.014008720260069442}, 2 * sizeof(double));
    } else {
        memcpy(var135, (double[]){0.023257918805493154, 0.9767420811945069}, 2 * sizeof(double));
    }
    add_vectors(var66, var135, 2, var65);
    double var136[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var136, (double[]){0.9856019579641838, 0.014398042035816166}, 2 * sizeof(double));
    } else {
        memcpy(var136, (double[]){0.023325062863098264, 0.9766749371369017}, 2 * sizeof(double));
    }
    add_vectors(var65, var136, 2, var64);
    double var137[2];
    if (input[2] <= -0.24592119455337524) {
        memcpy(var137, (double[]){0.994161710856492, 0.005838289143508015}, 2 * sizeof(double));
    } else {
        memcpy(var137, (double[]){0.11614187294438905, 0.883858127055611}, 2 * sizeof(double));
    }
    add_vectors(var64, var137, 2, var63);
    double var138[2];
    if (input[18] <= -0.13706271350383759) {
        memcpy(var138, (double[]){0.9322486803548431, 0.06775131964515688}, 2 * sizeof(double));
    } else {
        memcpy(var138, (double[]){0.0836777244339998, 0.9163222755660002}, 2 * sizeof(double));
    }
    add_vectors(var63, var138, 2, var62);
    double var139[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var139, (double[]){0.9853778780894555, 0.01462212191054445}, 2 * sizeof(double));
    } else {
        memcpy(var139, (double[]){0.023271358538358444, 0.9767286414616416}, 2 * sizeof(double));
    }
    add_vectors(var62, var139, 2, var61);
    double var140[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var140, (double[]){0.9399287887098261, 0.060071211290173954}, 2 * sizeof(double));
    } else {
        memcpy(var140, (double[]){0.05086585753123536, 0.9491341424687647}, 2 * sizeof(double));
    }
    add_vectors(var61, var140, 2, var60);
    double var141[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var141, (double[]){0.985329494226946, 0.014670505773053934}, 2 * sizeof(double));
    } else {
        memcpy(var141, (double[]){0.023287972441965787, 0.9767120275580342}, 2 * sizeof(double));
    }
    add_vectors(var60, var141, 2, var59);
    double var142[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var142, (double[]){0.985189771045593, 0.014810228954406991}, 2 * sizeof(double));
    } else {
        memcpy(var142, (double[]){0.02332410328525055, 0.9766758967147494}, 2 * sizeof(double));
    }
    add_vectors(var59, var142, 2, var58);
    double var143[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var143, (double[]){0.93747073830022, 0.06252926169977997}, 2 * sizeof(double));
    } else {
        memcpy(var143, (double[]){0.051036614733488, 0.948963385266512}, 2 * sizeof(double));
    }
    add_vectors(var58, var143, 2, var57);
    double var144[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var144, (double[]){0.9859397388823493, 0.014060261117650616}, 2 * sizeof(double));
    } else {
        memcpy(var144, (double[]){0.023158294671491535, 0.9768417053285084}, 2 * sizeof(double));
    }
    add_vectors(var57, var144, 2, var56);
    double var145[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var145, (double[]){0.9643126367836541, 0.03568736321634586}, 2 * sizeof(double));
    } else {
        memcpy(var145, (double[]){0.018417368916793343, 0.9815826310832066}, 2 * sizeof(double));
    }
    add_vectors(var56, var145, 2, var55);
    double var146[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var146, (double[]){0.9390037315076921, 0.0609962684923079}, 2 * sizeof(double));
    } else {
        memcpy(var146, (double[]){0.05076648349230008, 0.9492335165077}, 2 * sizeof(double));
    }
    add_vectors(var55, var146, 2, var54);
    double var147[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var147, (double[]){0.9858096080516774, 0.014190391948322563}, 2 * sizeof(double));
    } else {
        memcpy(var147, (double[]){0.02330311158556919, 0.9766968884144308}, 2 * sizeof(double));
    }
    add_vectors(var54, var147, 2, var53);
    double var148[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var148, (double[]){0.964855713681886, 0.035144286318113935}, 2 * sizeof(double));
    } else {
        memcpy(var148, (double[]){0.01843701450524184, 0.9815629854947582}, 2 * sizeof(double));
    }
    add_vectors(var53, var148, 2, var52);
    double var149[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var149, (double[]){0.9641603086295717, 0.035839691370428306}, 2 * sizeof(double));
    } else {
        memcpy(var149, (double[]){0.01835279769047461, 0.9816472023095254}, 2 * sizeof(double));
    }
    add_vectors(var52, var149, 2, var51);
    double var150[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var150, (double[]){0.9646130020451084, 0.03538699795489165}, 2 * sizeof(double));
    } else {
        memcpy(var150, (double[]){0.018351033585406414, 0.9816489664145936}, 2 * sizeof(double));
    }
    add_vectors(var51, var150, 2, var50);
    double var151[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var151, (double[]){0.9393357798323212, 0.0606642201676789}, 2 * sizeof(double));
    } else {
        memcpy(var151, (double[]){0.05113639575628863, 0.9488636042437114}, 2 * sizeof(double));
    }
    add_vectors(var50, var151, 2, var49);
    double var152[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var152, (double[]){0.9390999032240338, 0.060900096775966264}, 2 * sizeof(double));
    } else {
        memcpy(var152, (double[]){0.050976004491516486, 0.9490239955084835}, 2 * sizeof(double));
    }
    add_vectors(var49, var152, 2, var48);
    double var153[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var153, (double[]){0.9641432990913225, 0.03585670090867757}, 2 * sizeof(double));
    } else {
        memcpy(var153, (double[]){0.018288825007922945, 0.9817111749920769}, 2 * sizeof(double));
    }
    add_vectors(var48, var153, 2, var47);
    double var154[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var154, (double[]){0.9642545952864672, 0.03574540471353278}, 2 * sizeof(double));
    } else {
        memcpy(var154, (double[]){0.018454578689469956, 0.98154542131053}, 2 * sizeof(double));
    }
    add_vectors(var47, var154, 2, var46);
    double var155[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var155, (double[]){0.9843928405758777, 0.015607159424122248}, 2 * sizeof(double));
    } else {
        memcpy(var155, (double[]){0.023436746969960613, 0.9765632530300394}, 2 * sizeof(double));
    }
    add_vectors(var46, var155, 2, var45);
    double var156[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var156, (double[]){0.939443141722651, 0.060556858277349}, 2 * sizeof(double));
    } else {
        memcpy(var156, (double[]){0.05117435071651984, 0.9488256492834801}, 2 * sizeof(double));
    }
    add_vectors(var45, var156, 2, var44);
    double var157[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var157, (double[]){0.9654449716419032, 0.03455502835809685}, 2 * sizeof(double));
    } else {
        memcpy(var157, (double[]){0.018411697109544718, 0.9815883028904552}, 2 * sizeof(double));
    }
    add_vectors(var44, var157, 2, var43);
    double var158[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var158, (double[]){0.9652840126984626, 0.03471598730153731}, 2 * sizeof(double));
    } else {
        memcpy(var158, (double[]){0.0185529723526325, 0.9814470276473675}, 2 * sizeof(double));
    }
    add_vectors(var43, var158, 2, var42);
    double var159[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var159, (double[]){0.9646071611162197, 0.03539283888378024}, 2 * sizeof(double));
    } else {
        memcpy(var159, (double[]){0.018406354258233483, 0.9815936457417664}, 2 * sizeof(double));
    }
    add_vectors(var42, var159, 2, var41);
    double var160[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var160, (double[]){0.9852488397621739, 0.01475116023782616}, 2 * sizeof(double));
    } else {
        memcpy(var160, (double[]){0.023262743061998454, 0.9767372569380016}, 2 * sizeof(double));
    }
    add_vectors(var41, var160, 2, var40);
    double var161[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var161, (double[]){0.9855010205524065, 0.01449897944759354}, 2 * sizeof(double));
    } else {
        memcpy(var161, (double[]){0.023365434332266885, 0.9766345656677331}, 2 * sizeof(double));
    }
    add_vectors(var40, var161, 2, var39);
    double var162[2];
    if (input[2] <= -0.25371235609054565) {
        memcpy(var162, (double[]){0.9949227840492911, 0.005077215950708892}, 2 * sizeof(double));
    } else {
        memcpy(var162, (double[]){0.11679246490657794, 0.8832075350934221}, 2 * sizeof(double));
    }
    add_vectors(var39, var162, 2, var38);
    double var163[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var163, (double[]){0.9396879916317656, 0.06031200836823427}, 2 * sizeof(double));
    } else {
        memcpy(var163, (double[]){0.050978810056865505, 0.9490211899431344}, 2 * sizeof(double));
    }
    add_vectors(var38, var163, 2, var37);
    double var164[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var164, (double[]){0.9850703670335139, 0.014929632966486073}, 2 * sizeof(double));
    } else {
        memcpy(var164, (double[]){0.023410210955627196, 0.9765897890443728}, 2 * sizeof(double));
    }
    add_vectors(var37, var164, 2, var36);
    double var165[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var165, (double[]){0.9401902005361225, 0.05980979946387761}, 2 * sizeof(double));
    } else {
        memcpy(var165, (double[]){0.05070617184938402, 0.9492938281506159}, 2 * sizeof(double));
    }
    add_vectors(var36, var165, 2, var35);
    double var166[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var166, (double[]){0.985657625475757, 0.014342374524242989}, 2 * sizeof(double));
    } else {
        memcpy(var166, (double[]){0.023103136895562534, 0.9768968631044375}, 2 * sizeof(double));
    }
    add_vectors(var35, var166, 2, var34);
    double var167[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var167, (double[]){0.9849852267210562, 0.015014773278943891}, 2 * sizeof(double));
    } else {
        memcpy(var167, (double[]){0.023370086237290512, 0.9766299137627095}, 2 * sizeof(double));
    }
    add_vectors(var34, var167, 2, var33);
    double var168[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var168, (double[]){0.984984699587121, 0.015015300412879011}, 2 * sizeof(double));
    } else {
        memcpy(var168, (double[]){0.02334246078594119, 0.9766575392140587}, 2 * sizeof(double));
    }
    add_vectors(var33, var168, 2, var32);
    double var169[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var169, (double[]){0.9656789503678801, 0.03432104963211994}, 2 * sizeof(double));
    } else {
        memcpy(var169, (double[]){0.018303483479068797, 0.9816965165209313}, 2 * sizeof(double));
    }
    add_vectors(var32, var169, 2, var31);
    double var170[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var170, (double[]){0.9641521323493965, 0.03584786765060364}, 2 * sizeof(double));
    } else {
        memcpy(var170, (double[]){0.018331526507816175, 0.9816684734921838}, 2 * sizeof(double));
    }
    add_vectors(var31, var170, 2, var30);
    double var171[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var171, (double[]){0.9857415826058787, 0.014258417394121274}, 2 * sizeof(double));
    } else {
        memcpy(var171, (double[]){0.023323875026511235, 0.9766761249734888}, 2 * sizeof(double));
    }
    add_vectors(var30, var171, 2, var29);
    double var172[2];
    if (input[9] <= 1.2809316515922546) {
        memcpy(var172, (double[]){0.93861100589768, 0.06138899410231998}, 2 * sizeof(double));
    } else {
        memcpy(var172, (double[]){0.05106195032984634, 0.9489380496701536}, 2 * sizeof(double));
    }
    add_vectors(var29, var172, 2, var28);
    double var173[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var173, (double[]){0.9847957389277124, 0.015204261072287457}, 2 * sizeof(double));
    } else {
        memcpy(var173, (double[]){0.02340720756155849, 0.9765927924384415}, 2 * sizeof(double));
    }
    add_vectors(var28, var173, 2, var27);
    double var174[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var174, (double[]){0.9645595961691028, 0.03544040383089724}, 2 * sizeof(double));
    } else {
        memcpy(var174, (double[]){0.018446299474337097, 0.9815537005256629}, 2 * sizeof(double));
    }
    add_vectors(var27, var174, 2, var26);
    double var175[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var175, (double[]){0.9857414955257005, 0.014258504474299607}, 2 * sizeof(double));
    } else {
        memcpy(var175, (double[]){0.02328293441008751, 0.9767170655899126}, 2 * sizeof(double));
    }
    add_vectors(var26, var175, 2, var25);
    double var176[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var176, (double[]){0.9854534228044911, 0.014546577195508913}, 2 * sizeof(double));
    } else {
        memcpy(var176, (double[]){0.023252752353001775, 0.9767472476469983}, 2 * sizeof(double));
    }
    add_vectors(var25, var176, 2, var24);
    double var177[2];
    if (input[2] <= -0.2446524128317833) {
        memcpy(var177, (double[]){0.9943765641488056, 0.005623435851194399}, 2 * sizeof(double));
    } else {
        memcpy(var177, (double[]){0.11572178436147809, 0.8842782156385218}, 2 * sizeof(double));
    }
    add_vectors(var24, var177, 2, var23);
    double var178[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var178, (double[]){0.9635804181784278, 0.03641958182157217}, 2 * sizeof(double));
    } else {
        memcpy(var178, (double[]){0.018387261660161334, 0.9816127383398386}, 2 * sizeof(double));
    }
    add_vectors(var23, var178, 2, var22);
    double var179[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var179, (double[]){0.9844407962261781, 0.015559203773821985}, 2 * sizeof(double));
    } else {
        memcpy(var179, (double[]){0.023397719068250142, 0.9766022809317499}, 2 * sizeof(double));
    }
    add_vectors(var22, var179, 2, var21);
    double var180[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var180, (double[]){0.9851777053769232, 0.014822294623076849}, 2 * sizeof(double));
    } else {
        memcpy(var180, (double[]){0.023472693591833352, 0.9765273064081667}, 2 * sizeof(double));
    }
    add_vectors(var21, var180, 2, var20);
    double var181[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var181, (double[]){0.9856051560140822, 0.014394843985917742}, 2 * sizeof(double));
    } else {
        memcpy(var181, (double[]){0.023276806861549877, 0.9767231931384501}, 2 * sizeof(double));
    }
    add_vectors(var20, var181, 2, var19);
    double var182[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var182, (double[]){0.985894439645659, 0.014105560354341016}, 2 * sizeof(double));
    } else {
        memcpy(var182, (double[]){0.023341365434658666, 0.9766586345653413}, 2 * sizeof(double));
    }
    add_vectors(var19, var182, 2, var18);
    double var183[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var183, (double[]){0.9853332674375996, 0.014666732562400373}, 2 * sizeof(double));
    } else {
        memcpy(var183, (double[]){0.023369524825823263, 0.9766304751741768}, 2 * sizeof(double));
    }
    add_vectors(var18, var183, 2, var17);
    double var184[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var184, (double[]){0.9849987998909558, 0.015001200109044198}, 2 * sizeof(double));
    } else {
        memcpy(var184, (double[]){0.023320374380922722, 0.9766796256190774}, 2 * sizeof(double));
    }
    add_vectors(var17, var184, 2, var16);
    double var185[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var185, (double[]){0.98507276054513, 0.014927239454869986}, 2 * sizeof(double));
    } else {
        memcpy(var185, (double[]){0.02314767552653135, 0.9768523244734686}, 2 * sizeof(double));
    }
    add_vectors(var16, var185, 2, var15);
    double var186[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var186, (double[]){0.9854259531692483, 0.014574046830751648}, 2 * sizeof(double));
    } else {
        memcpy(var186, (double[]){0.02333555195451801, 0.9766644480454819}, 2 * sizeof(double));
    }
    add_vectors(var15, var186, 2, var14);
    double var187[2];
    if (input[2] <= -0.25456398725509644) {
        memcpy(var187, (double[]){0.9951928870757673, 0.004807112924232808}, 2 * sizeof(double));
    } else {
        memcpy(var187, (double[]){0.11672954497264443, 0.8832704550273556}, 2 * sizeof(double));
    }
    add_vectors(var14, var187, 2, var13);
    double var188[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var188, (double[]){0.9855964980826125, 0.01440350191738741}, 2 * sizeof(double));
    } else {
        memcpy(var188, (double[]){0.023084977904853355, 0.9769150220951467}, 2 * sizeof(double));
    }
    add_vectors(var13, var188, 2, var12);
    double var189[2];
    if (input[4] <= -0.22155498713254929) {
        memcpy(var189, (double[]){0.9960204806606802, 0.003979519339319953}, 2 * sizeof(double));
    } else {
        memcpy(var189, (double[]){0.14235475627890112, 0.8576452437210988}, 2 * sizeof(double));
    }
    add_vectors(var12, var189, 2, var11);
    double var190[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var190, (double[]){0.9852201804201828, 0.014779819579817248}, 2 * sizeof(double));
    } else {
        memcpy(var190, (double[]){0.02332951850195568, 0.9766704814980444}, 2 * sizeof(double));
    }
    add_vectors(var11, var190, 2, var10);
    double var191[2];
    if (input[5] <= -0.2677818536758423) {
        memcpy(var191, (double[]){0.9955596376095018, 0.004440362390498138}, 2 * sizeof(double));
    } else {
        memcpy(var191, (double[]){0.11833151258567651, 0.8816684874143236}, 2 * sizeof(double));
    }
    add_vectors(var10, var191, 2, var9);
    double var192[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var192, (double[]){0.9859030000108315, 0.014096999989168474}, 2 * sizeof(double));
    } else {
        memcpy(var192, (double[]){0.023309648476802603, 0.9766903515231974}, 2 * sizeof(double));
    }
    add_vectors(var9, var192, 2, var8);
    double var193[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var193, (double[]){0.9853317072892898, 0.014668292710710244}, 2 * sizeof(double));
    } else {
        memcpy(var193, (double[]){0.023254955039181336, 0.9767450449608186}, 2 * sizeof(double));
    }
    add_vectors(var8, var193, 2, var7);
    double var194[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var194, (double[]){0.9854559117227772, 0.014544088277222806}, 2 * sizeof(double));
    } else {
        memcpy(var194, (double[]){0.023454737308328418, 0.9765452626916716}, 2 * sizeof(double));
    }
    add_vectors(var7, var194, 2, var6);
    double var195[2];
    if (input[2] <= -0.2547658532857895) {
        memcpy(var195, (double[]){0.9954820762706619, 0.00451792372933817}, 2 * sizeof(double));
    } else {
        memcpy(var195, (double[]){0.11683219688551078, 0.8831678031144893}, 2 * sizeof(double));
    }
    add_vectors(var6, var195, 2, var5);
    double var196[2];
    if (input[2] <= -0.2544991075992584) {
        memcpy(var196, (double[]){0.9953597548925688, 0.0046402451074313246}, 2 * sizeof(double));
    } else {
        memcpy(var196, (double[]){0.11669577047660858, 0.8833042295233915}, 2 * sizeof(double));
    }
    add_vectors(var5, var196, 2, var4);
    double var197[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var197, (double[]){0.985984691098725, 0.014015308901275055}, 2 * sizeof(double));
    } else {
        memcpy(var197, (double[]){0.02320765405617165, 0.9767923459438284}, 2 * sizeof(double));
    }
    add_vectors(var4, var197, 2, var3);
    double var198[2];
    if (input[3] <= -0.11340580508112907) {
        memcpy(var198, (double[]){0.9846946690372282, 0.015305330962771818}, 2 * sizeof(double));
    } else {
        memcpy(var198, (double[]){0.02334116624588032, 0.9766588337541197}, 2 * sizeof(double));
    }
    add_vectors(var3, var198, 2, var2);
    double var199[2];
    if (input[8] <= -0.06525996699929237) {
        memcpy(var199, (double[]){0.9649978525750558, 0.03500214742494427}, 2 * sizeof(double));
    } else {
        memcpy(var199, (double[]){0.01834972998817056, 0.9816502700118295}, 2 * sizeof(double));
    }
    add_vectors(var2, var199, 2, var1);
    mul_vector_number(var1, 0.01, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}

int main() {
    double input[45];
    double output[2];
    while(1) {
        score(input, output);
    }
}