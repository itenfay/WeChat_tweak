//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MyWCStrangerMessage : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _m_localId;
    unsigned int _m_type;
    unsigned int _m_source;
    unsigned int _m_createTime;
    long long lastInsertedRowID;
    NSString *_m_id;
    NSString *_m_fromUser;
    NSString *_m_fromNickname;
    NSString *_m_toUser;
    NSString *_m_toNickname;
    NSString *_m_content;
    NSData *_m_metaData;
}

+ (void)__wcdb_column_constraint_45:(void *)arg1;
+ (void)__wcdb_column_constraint_44:(void *)arg1;
+ (void)__wcdb_column_constraint_43:(void *)arg1;
+ (void)__wcdb_column_constraint_42:(void *)arg1;
+ (id)swift_m_metaData;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (const void *)m_metaData;
+ (id)swift_m_content;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (const void *)m_content;
+ (id)swift_m_toNickname;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (const void *)m_toNickname;
+ (id)swift_m_toUser;
+ (const void *)__wcdb_synthesize_38:(void *)arg1;
+ (const void *)m_toUser;
+ (id)swift_m_fromNickname;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (const void *)m_fromNickname;
+ (id)swift_m_fromUser;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (const void *)m_fromUser;
+ (id)swift_m_id;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (const void *)m_id;
+ (id)swift_m_createTime;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (const void *)m_createTime;
+ (id)swift_m_source;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)m_source;
+ (id)swift_m_type;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)m_type;
+ (id)swift_m_localId;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)m_localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *m_metaData; // @synthesize m_metaData=_m_metaData;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content=_m_content;
@property(retain, nonatomic) NSString *m_toNickname; // @synthesize m_toNickname=_m_toNickname;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser=_m_toUser;
@property(retain, nonatomic) NSString *m_fromNickname; // @synthesize m_fromNickname=_m_fromNickname;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned int m_createTime; // @synthesize m_createTime=_m_createTime;
@property(nonatomic) unsigned int m_source; // @synthesize m_source=_m_source;
@property(nonatomic) unsigned int m_type; // @synthesize m_type=_m_type;
@property(nonatomic) unsigned int m_localId; // @synthesize m_localId=_m_localId;
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

