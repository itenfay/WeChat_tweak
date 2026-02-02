//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GroupNoticeRevokeMessage : NSObject
{
    unsigned int _m_uiCreateTime;
    unsigned int _isRevokeByMyself;
    long long _m_n64SvrId;
    NSString *_announcementId;
    NSString *_sourceId;
}

+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)swift_isRevokeByMyself;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)isRevokeByMyself;
+ (id)swift_sourceId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)sourceId;
+ (id)swift_announcementId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)announcementId;
+ (id)swift_m_uiCreateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)m_uiCreateTime;
+ (id)swift_m_n64SvrId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_n64SvrId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isRevokeByMyself; // @synthesize isRevokeByMyself=_isRevokeByMyself;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *announcementId; // @synthesize announcementId=_announcementId;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(nonatomic) long long m_n64SvrId; // @synthesize m_n64SvrId=_m_n64SvrId;

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

