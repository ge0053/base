  #ifndef GLOBALCONSTANTS_H
#define GLOBALCONSTANTS_H
/*creation.must be a static const */
 static const struct outer constants={
    .a=222,
    .b=111,
    .c=13,
    .set={.bit={.b0=1,.b1=1,.b2=0,.b3=1}},
    .f=19,
    .inner={
        .value=12,
        .num=1.1
        }
    };




#endif
