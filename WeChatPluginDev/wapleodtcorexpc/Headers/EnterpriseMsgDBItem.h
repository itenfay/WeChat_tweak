//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EnterpriseMsgDBItem
{
    _Bool isAutoIncrement;
    unsigned int m_uiMesLocalId;
    unsigned int m_uiCreateTime;
    unsigned int m_uiDesc;
    unsigned int m_uiStatus;
    unsigned int m_uiImgStatus;
    unsigned int m_uiType;
    unsigned long long m_ui64MesSvrId;
    NSString *m_nsMessage;
    NSString *m_nsMsgSource;
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    NSString *m_nsBizChatId;
    NSString *m_nsRealChatUsr;
    NSString *m_nsPattern;
    long long lastInsertedRowID;
    NSString *_m_nsBizCliMsgId;
}

+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_index_18:(void *)arg1;
+ (void)__wcdb_index_17:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_m_nsBizCliMsgId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)m_nsBizCliMsgId;
+ (id)swift_m_nsPattern;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)m_nsPattern;
+ (id)swift_m_nsRealChatUsr;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)m_nsRealChatUsr;
+ (id)swift_m_nsBizChatId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)m_nsBizChatId;
+ (id)swift_m_nsToUsr;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)m_nsToUsr;
+ (id)swift_m_nsFromUsr;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)m_nsFromUsr;
+ (id)swift_m_nsMsgSource;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)m_nsMsgSource;
+ (id)swift_m_uiType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)m_uiType;
+ (id)swift_m_nsMessage;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)m_nsMessage;
+ (id)swift_m_uiImgStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)m_uiImgStatus;
+ (id)swift_m_uiStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_uiStatus;
+ (id)swift_m_uiDesc;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_uiDesc;
+ (id)swift_m_uiCreateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uiCreateTime;
+ (id)swift_m_uiMesLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_uiMesLocalId;
+ (id)swift_m_ui64MesSvrId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_ui64MesSvrId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_nsBizCliMsgId; // @synthesize m_nsBizCliMsgId=_m_nsBizCliMsgId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType;
@property(retain, nonatomic) NSString *m_nsMessage; // @synthesize m_nsMessage;
@property(nonatomic) unsigned int m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned int m_uiDesc; // @synthesize m_uiDesc;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiMesLocalId; // @synthesize m_uiMesLocalId;
@property(nonatomic) unsigned long long m_ui64MesSvrId; // @synthesize m_ui64MesSvrId;
- (long long)compareMessageAscending:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

