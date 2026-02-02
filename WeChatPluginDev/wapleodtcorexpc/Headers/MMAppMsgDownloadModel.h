//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAppMsgDownloadModel
{
    unsigned int _m_uiMesLocalID;
    unsigned int _appMsgState;
    unsigned int _msgCreateTime;
    NSString *_m_nsFromUsr;
    long long _newMsgId;
}

+ (id)genAMDItem:(id)arg1 state:(unsigned int)arg2;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_msgCreateTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)msgCreateTime;
+ (id)swift_appMsgState;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)appMsgState;
+ (id)swift_m_uiMesLocalID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uiMesLocalID;
+ (id)swift_newMsgId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)newMsgId;
+ (id)swift_m_nsFromUsr;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_nsFromUsr;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) unsigned int appMsgState; // @synthesize appMsgState=_appMsgState;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID=_m_uiMesLocalID;
@property(nonatomic) long long newMsgId; // @synthesize newMsgId=_newMsgId;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr=_m_nsFromUsr;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

