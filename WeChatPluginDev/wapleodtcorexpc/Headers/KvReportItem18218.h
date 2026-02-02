//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem18218
{
    _Bool _FirstTimeExpose_24;
    _Bool _IsRedDot_33;
    unsigned int _ExposeTime_21;
    unsigned int _ExposePos_25;
    unsigned int _UnreadCount_27;
    unsigned int _ExposeStatus_28;
    unsigned int _Reason_31;
    unsigned int _MsgType_32;
    unsigned int _Idx_38;
    unsigned int _unreadCountType_44;
    unsigned int _renderMode_45;
    unsigned int _dataMode_46;
    NSString *_BizUserName_22;
    long long _Mid_23;
    NSString *_Desc_26;
    unsigned long long _ExposeSessionId_29;
    unsigned long long _ExposeTimeMs_30;
    NSString *_StrategyInfo_34;
    NSString *_DigestBoldInfo_35;
    long long _CardType_36;
    long long _Style_37;
    NSString *_RecInfo_39;
    NSString *_ExtraData_40;
    NSString *_LastRecCardId_41;
    NSString *_finderFeedExportId_42;
    NSString *_rankSessionId_43;
    NSString *_ReddotReportInfo_48;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ReddotReportInfo_48; // @synthesize ReddotReportInfo_48=_ReddotReportInfo_48;
@property(nonatomic) unsigned int dataMode_46; // @synthesize dataMode_46=_dataMode_46;
@property(nonatomic) unsigned int renderMode_45; // @synthesize renderMode_45=_renderMode_45;
@property(nonatomic) unsigned int unreadCountType_44; // @synthesize unreadCountType_44=_unreadCountType_44;
@property(copy, nonatomic) NSString *rankSessionId_43; // @synthesize rankSessionId_43=_rankSessionId_43;
@property(copy, nonatomic) NSString *finderFeedExportId_42; // @synthesize finderFeedExportId_42=_finderFeedExportId_42;
@property(copy, nonatomic) NSString *LastRecCardId_41; // @synthesize LastRecCardId_41=_LastRecCardId_41;
@property(copy, nonatomic) NSString *ExtraData_40; // @synthesize ExtraData_40=_ExtraData_40;
@property(copy, nonatomic) NSString *RecInfo_39; // @synthesize RecInfo_39=_RecInfo_39;
@property(nonatomic) unsigned int Idx_38; // @synthesize Idx_38=_Idx_38;
@property(nonatomic) long long Style_37; // @synthesize Style_37=_Style_37;
@property(nonatomic) long long CardType_36; // @synthesize CardType_36=_CardType_36;
@property(copy, nonatomic) NSString *DigestBoldInfo_35; // @synthesize DigestBoldInfo_35=_DigestBoldInfo_35;
@property(copy, nonatomic) NSString *StrategyInfo_34; // @synthesize StrategyInfo_34=_StrategyInfo_34;
@property(nonatomic) _Bool IsRedDot_33; // @synthesize IsRedDot_33=_IsRedDot_33;
@property(nonatomic) unsigned int MsgType_32; // @synthesize MsgType_32=_MsgType_32;
@property(nonatomic) unsigned int Reason_31; // @synthesize Reason_31=_Reason_31;
@property(nonatomic) unsigned long long ExposeTimeMs_30; // @synthesize ExposeTimeMs_30=_ExposeTimeMs_30;
@property(nonatomic) unsigned long long ExposeSessionId_29; // @synthesize ExposeSessionId_29=_ExposeSessionId_29;
@property(nonatomic) unsigned int ExposeStatus_28; // @synthesize ExposeStatus_28=_ExposeStatus_28;
@property(nonatomic) unsigned int UnreadCount_27; // @synthesize UnreadCount_27=_UnreadCount_27;
@property(copy, nonatomic) NSString *Desc_26; // @synthesize Desc_26=_Desc_26;
@property(nonatomic) unsigned int ExposePos_25; // @synthesize ExposePos_25=_ExposePos_25;
@property(nonatomic) _Bool FirstTimeExpose_24; // @synthesize FirstTimeExpose_24=_FirstTimeExpose_24;
@property(nonatomic) long long Mid_23; // @synthesize Mid_23=_Mid_23;
@property(copy, nonatomic) NSString *BizUserName_22; // @synthesize BizUserName_22=_BizUserName_22;
@property(nonatomic) unsigned int ExposeTime_21; // @synthesize ExposeTime_21=_ExposeTime_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

