//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem21001
{
    unsigned int _BizUin_21;
    unsigned int _MsgId_23;
    unsigned int _Idx_24;
    unsigned int _AbsolutePosition_25;
    unsigned int _EventType_28;
    unsigned int _NetworkType_32;
    NSString *_Vid_22;
    NSString *_Sessionid_26;
    NSString *_AutoPlayId_27;
    unsigned long long _PlayDuration_29;
    unsigned long long _VideoDuration_30;
    unsigned long long _BuffDuration_31;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int NetworkType_32; // @synthesize NetworkType_32=_NetworkType_32;
@property(nonatomic) unsigned long long BuffDuration_31; // @synthesize BuffDuration_31=_BuffDuration_31;
@property(nonatomic) unsigned long long VideoDuration_30; // @synthesize VideoDuration_30=_VideoDuration_30;
@property(nonatomic) unsigned long long PlayDuration_29; // @synthesize PlayDuration_29=_PlayDuration_29;
@property(nonatomic) unsigned int EventType_28; // @synthesize EventType_28=_EventType_28;
@property(copy, nonatomic) NSString *AutoPlayId_27; // @synthesize AutoPlayId_27=_AutoPlayId_27;
@property(copy, nonatomic) NSString *Sessionid_26; // @synthesize Sessionid_26=_Sessionid_26;
@property(nonatomic) unsigned int AbsolutePosition_25; // @synthesize AbsolutePosition_25=_AbsolutePosition_25;
@property(nonatomic) unsigned int Idx_24; // @synthesize Idx_24=_Idx_24;
@property(nonatomic) unsigned int MsgId_23; // @synthesize MsgId_23=_MsgId_23;
@property(copy, nonatomic) NSString *Vid_22; // @synthesize Vid_22=_Vid_22;
@property(nonatomic) unsigned int BizUin_21; // @synthesize BizUin_21=_BizUin_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

