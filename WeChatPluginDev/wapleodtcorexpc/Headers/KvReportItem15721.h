//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem15721
{
    unsigned int _MsgId_21;
    unsigned int _Optype_22;
    unsigned int _EventTime_23;
    unsigned int _SessionId_24;
    unsigned int _Idx_25;
    unsigned int _CardType_28;
    unsigned int _Order_29;
    unsigned int _RecRk_33;
    unsigned int _RecStyle_34;
    unsigned int _MsgType_38;
    NSString *_BizUserName_20;
    long long _Id_26;
    NSString *_FbContent_27;
    NSString *_ExpType_30;
    NSString *_Event_31;
    NSString *_CardId_32;
    NSString *_RecInfo_35;
    NSString *_LinkTitle_36;
    NSString *_LinkUrl_37;
    NSString *_FinderObjectId_39;
    NSString *_FinderUin_40;
    NSString *_FinderSessionBuffer_41;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *FinderSessionBuffer_41; // @synthesize FinderSessionBuffer_41=_FinderSessionBuffer_41;
@property(copy, nonatomic) NSString *FinderUin_40; // @synthesize FinderUin_40=_FinderUin_40;
@property(copy, nonatomic) NSString *FinderObjectId_39; // @synthesize FinderObjectId_39=_FinderObjectId_39;
@property(nonatomic) unsigned int MsgType_38; // @synthesize MsgType_38=_MsgType_38;
@property(copy, nonatomic) NSString *LinkUrl_37; // @synthesize LinkUrl_37=_LinkUrl_37;
@property(copy, nonatomic) NSString *LinkTitle_36; // @synthesize LinkTitle_36=_LinkTitle_36;
@property(copy, nonatomic) NSString *RecInfo_35; // @synthesize RecInfo_35=_RecInfo_35;
@property(nonatomic) unsigned int RecStyle_34; // @synthesize RecStyle_34=_RecStyle_34;
@property(nonatomic) unsigned int RecRk_33; // @synthesize RecRk_33=_RecRk_33;
@property(copy, nonatomic) NSString *CardId_32; // @synthesize CardId_32=_CardId_32;
@property(copy, nonatomic) NSString *Event_31; // @synthesize Event_31=_Event_31;
@property(copy, nonatomic) NSString *ExpType_30; // @synthesize ExpType_30=_ExpType_30;
@property(nonatomic) unsigned int Order_29; // @synthesize Order_29=_Order_29;
@property(nonatomic) unsigned int CardType_28; // @synthesize CardType_28=_CardType_28;
@property(copy, nonatomic) NSString *FbContent_27; // @synthesize FbContent_27=_FbContent_27;
@property(nonatomic) long long Id_26; // @synthesize Id_26=_Id_26;
@property(nonatomic) unsigned int Idx_25; // @synthesize Idx_25=_Idx_25;
@property(nonatomic) unsigned int SessionId_24; // @synthesize SessionId_24=_SessionId_24;
@property(nonatomic) unsigned int EventTime_23; // @synthesize EventTime_23=_EventTime_23;
@property(nonatomic) unsigned int Optype_22; // @synthesize Optype_22=_Optype_22;
@property(nonatomic) unsigned int MsgId_21; // @synthesize MsgId_21=_MsgId_21;
@property(copy, nonatomic) NSString *BizUserName_20; // @synthesize BizUserName_20=_BizUserName_20;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;

@end

