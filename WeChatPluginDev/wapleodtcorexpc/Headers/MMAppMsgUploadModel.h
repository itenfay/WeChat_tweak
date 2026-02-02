//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAppMsgUploadModel
{
    unsigned int _m_uiCreateTime;
    unsigned int _uploadSize;
    unsigned int _m_uiMesLocalID;
    NSString *_m_nsToUsr;
}

+ (id)genSendFileUploadMsgFileInfo:(id)arg1;
+ (id)genAMUItem:(id)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_m_uiMesLocalID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_uiMesLocalID;
+ (id)swift_uploadSize;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)uploadSize;
+ (id)swift_m_uiCreateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_uiCreateTime;
+ (id)swift_m_nsToUsr;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_nsToUsr;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID=_m_uiMesLocalID;
@property(nonatomic) unsigned int uploadSize; // @synthesize uploadSize=_uploadSize;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr=_m_nsToUsr;
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

