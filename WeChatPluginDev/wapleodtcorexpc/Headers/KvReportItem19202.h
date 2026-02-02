//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem19202
{
    unsigned int _MsgType_22;
    unsigned int _OptType_24;
    unsigned int _Position_25;
    unsigned int _SendType_28;
    unsigned int _bizuin_32;
    unsigned int _msgid_33;
    unsigned int _idx_34;
    unsigned int _downMsgScene_36;
    unsigned int _upMsgType_37;
    unsigned int _upMsgSubType_38;
    unsigned int _addContactScene_40;
    NSString *_Username_21;
    NSString *_MsgUrl_23;
    unsigned long long _SendTime_26;
    unsigned long long _EnterTime_27;
    unsigned long long _svrMsgId_29;
    long long _scene_30;
    NSString *_sessionId_31;
    unsigned long long _exitTime_35;
    long long _menuid_39;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int addContactScene_40; // @synthesize addContactScene_40=_addContactScene_40;
@property(nonatomic) long long menuid_39; // @synthesize menuid_39=_menuid_39;
@property(nonatomic) unsigned int upMsgSubType_38; // @synthesize upMsgSubType_38=_upMsgSubType_38;
@property(nonatomic) unsigned int upMsgType_37; // @synthesize upMsgType_37=_upMsgType_37;
@property(nonatomic) unsigned int downMsgScene_36; // @synthesize downMsgScene_36=_downMsgScene_36;
@property(nonatomic) unsigned long long exitTime_35; // @synthesize exitTime_35=_exitTime_35;
@property(nonatomic) unsigned int idx_34; // @synthesize idx_34=_idx_34;
@property(nonatomic) unsigned int msgid_33; // @synthesize msgid_33=_msgid_33;
@property(nonatomic) unsigned int bizuin_32; // @synthesize bizuin_32=_bizuin_32;
@property(retain, nonatomic) NSString *sessionId_31; // @synthesize sessionId_31=_sessionId_31;
@property(nonatomic) long long scene_30; // @synthesize scene_30=_scene_30;
@property(nonatomic) unsigned long long svrMsgId_29; // @synthesize svrMsgId_29=_svrMsgId_29;
@property(nonatomic) unsigned int SendType_28; // @synthesize SendType_28=_SendType_28;
@property(nonatomic) unsigned long long EnterTime_27; // @synthesize EnterTime_27=_EnterTime_27;
@property(nonatomic) unsigned long long SendTime_26; // @synthesize SendTime_26=_SendTime_26;
@property(nonatomic) unsigned int Position_25; // @synthesize Position_25=_Position_25;
@property(nonatomic) unsigned int OptType_24; // @synthesize OptType_24=_OptType_24;
@property(retain, nonatomic) NSString *MsgUrl_23; // @synthesize MsgUrl_23=_MsgUrl_23;
@property(nonatomic) unsigned int MsgType_22; // @synthesize MsgType_22=_MsgType_22;
@property(retain, nonatomic) NSString *Username_21; // @synthesize Username_21=_Username_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

