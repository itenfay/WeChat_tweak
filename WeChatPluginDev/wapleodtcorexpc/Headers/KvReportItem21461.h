//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem21461
{
    _Bool _UseServerTime_34;
    unsigned int _Mid_22;
    unsigned int _Idx_23;
    int _ItemShowType_24;
    unsigned int _RecOrder_27;
    unsigned int _Style_30;
    int _Weight_32;
    unsigned int _RedDotFlag_33;
    int _Pos_35;
    int _InsertRet_36;
    NSString *_BizUin_21;
    NSString *_ExpType_25;
    NSString *_CardId_26;
    unsigned long long _RecId_28;
    NSString *_RecSummary_29;
    NSString *_RecInfo_31;
}

- (void).cxx_destruct;
@property(nonatomic) int InsertRet_36; // @synthesize InsertRet_36=_InsertRet_36;
@property(nonatomic) int Pos_35; // @synthesize Pos_35=_Pos_35;
@property(nonatomic) _Bool UseServerTime_34; // @synthesize UseServerTime_34=_UseServerTime_34;
@property(nonatomic) unsigned int RedDotFlag_33; // @synthesize RedDotFlag_33=_RedDotFlag_33;
@property(nonatomic) int Weight_32; // @synthesize Weight_32=_Weight_32;
@property(copy, nonatomic) NSString *RecInfo_31; // @synthesize RecInfo_31=_RecInfo_31;
@property(nonatomic) unsigned int Style_30; // @synthesize Style_30=_Style_30;
@property(copy, nonatomic) NSString *RecSummary_29; // @synthesize RecSummary_29=_RecSummary_29;
@property(nonatomic) unsigned long long RecId_28; // @synthesize RecId_28=_RecId_28;
@property(nonatomic) unsigned int RecOrder_27; // @synthesize RecOrder_27=_RecOrder_27;
@property(copy, nonatomic) NSString *CardId_26; // @synthesize CardId_26=_CardId_26;
@property(copy, nonatomic) NSString *ExpType_25; // @synthesize ExpType_25=_ExpType_25;
@property(nonatomic) int ItemShowType_24; // @synthesize ItemShowType_24=_ItemShowType_24;
@property(nonatomic) unsigned int Idx_23; // @synthesize Idx_23=_Idx_23;
@property(nonatomic) unsigned int Mid_22; // @synthesize Mid_22=_Mid_22;
@property(copy, nonatomic) NSString *BizUin_21; // @synthesize BizUin_21=_BizUin_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

