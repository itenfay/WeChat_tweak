//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MyWCTimeline : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _m_localId;
    unsigned int _m_groupHint;
    int _m_codingType;
    long long lastInsertedRowID;
    NSString *_m_id;
    NSString *_m_fromUser;
    NSData *_m_buffer;
}

+ (void)__wcdb_column_constraint_60:(void *)arg1;
+ (void)__wcdb_column_constraint_59:(void *)arg1;
+ (void)__wcdb_index_58:(void *)arg1;
+ (void)__wcdb_index_57:(void *)arg1;
+ (void)__wcdb_index_56:(void *)arg1;
+ (void)__wcdb_index_55:(void *)arg1;
+ (void)__wcdb_index_54:(void *)arg1;
+ (void)__wcdb_column_constraint_53:(void *)arg1;
+ (void)__wcdb_column_constraint_52:(void *)arg1;
+ (id)swift_m_codingType;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (const void *)m_codingType;
+ (id)swift_m_buffer;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (const void *)m_buffer;
+ (id)swift_m_fromUser;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (const void *)m_fromUser;
+ (id)swift_m_id;
+ (const void *)__wcdb_synthesize_48:(void *)arg1;
+ (const void *)m_id;
+ (id)swift_m_groupHint;
+ (const void *)__wcdb_synthesize_47:(void *)arg1;
+ (const void *)m_groupHint;
+ (id)swift_m_localId;
+ (const void *)__wcdb_synthesize_46:(void *)arg1;
+ (const void *)m_localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int m_codingType; // @synthesize m_codingType=_m_codingType;
@property(retain, nonatomic) NSData *m_buffer; // @synthesize m_buffer=_m_buffer;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned int m_groupHint; // @synthesize m_groupHint=_m_groupHint;
@property(nonatomic) unsigned int m_localId; // @synthesize m_localId=_m_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

- (id)convertToDataItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

