//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdvertiseLogDBItem
{
    _Bool isAutoIncrement;
    unsigned int _m_uiLocalId;
    unsigned int _m_uiCreateTime;
    unsigned int _m_uiLogId;
    long long lastInsertedRowID;
    NSString *_m_nsLogExt;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_m_nsLogExt;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_nsLogExt;
+ (id)swift_m_uiLogId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_uiLogId;
+ (id)swift_m_uiCreateTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_uiCreateTime;
+ (id)swift_m_uiLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_uiLocalId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsLogExt; // @synthesize m_nsLogExt=_m_nsLogExt;
@property(nonatomic) unsigned int m_uiLogId; // @synthesize m_uiLogId=_m_uiLogId;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(nonatomic) unsigned int m_uiLocalId; // @synthesize m_uiLocalId=_m_uiLocalId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

