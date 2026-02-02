//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MyWCMessage : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _m_localId;
    unsigned int _m_type;
    unsigned int _m_source;
    unsigned int _m_flag;
    unsigned int _m_createTime;
    unsigned int _m_commentFlag;
    long long lastInsertedRowID;
    NSString *_m_id;
    NSString *_m_parentId;
    NSString *_m_fromUser;
    NSString *_m_fromNickname;
    NSString *_m_toUser;
    NSString *_m_toNickname;
    NSString *_m_content;
    NSData *_m_ref;
    NSData *_m_metaData;
    NSString *_m_commentId;
    NSString *_m_clientId;
    NSString *_m_comment64Id;
}

+ (void)__wcdb_column_constraint_30:(void *)arg1;
+ (void)__wcdb_column_constraint_29:(void *)arg1;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (void)__wcdb_column_constraint_27:(void *)arg1;
+ (void)__wcdb_index_26:(void *)arg1;
+ (void)__wcdb_index_25:(void *)arg1;
+ (void)__wcdb_column_constraint_24:(void *)arg1;
+ (id)swift_m_commentFlag;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)m_commentFlag;
+ (id)swift_m_comment64Id;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)m_comment64Id;
+ (id)swift_m_clientId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)m_clientId;
+ (id)swift_m_commentId;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)m_commentId;
+ (id)swift_m_metaData;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)m_metaData;
+ (id)swift_m_ref;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)m_ref;
+ (id)swift_m_content;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)m_content;
+ (id)swift_m_toNickname;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)m_toNickname;
+ (id)swift_m_toUser;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)m_toUser;
+ (id)swift_m_fromNickname;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)m_fromNickname;
+ (id)swift_m_fromUser;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)m_fromUser;
+ (id)swift_m_parentId;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)m_parentId;
+ (id)swift_m_id;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)m_id;
+ (id)swift_m_createTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)m_createTime;
+ (id)swift_m_flag;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)m_flag;
+ (id)swift_m_source;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)m_source;
+ (id)swift_m_type;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)m_type;
+ (id)swift_m_localId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)m_localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_commentFlag; // @synthesize m_commentFlag=_m_commentFlag;
@property(retain, nonatomic) NSString *m_comment64Id; // @synthesize m_comment64Id=_m_comment64Id;
@property(retain, nonatomic) NSString *m_clientId; // @synthesize m_clientId=_m_clientId;
@property(retain, nonatomic) NSString *m_commentId; // @synthesize m_commentId=_m_commentId;
@property(retain, nonatomic) NSData *m_metaData; // @synthesize m_metaData=_m_metaData;
@property(retain, nonatomic) NSData *m_ref; // @synthesize m_ref=_m_ref;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content=_m_content;
@property(retain, nonatomic) NSString *m_toNickname; // @synthesize m_toNickname=_m_toNickname;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser=_m_toUser;
@property(retain, nonatomic) NSString *m_fromNickname; // @synthesize m_fromNickname=_m_fromNickname;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) NSString *m_parentId; // @synthesize m_parentId=_m_parentId;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned int m_createTime; // @synthesize m_createTime=_m_createTime;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag=_m_flag;
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

