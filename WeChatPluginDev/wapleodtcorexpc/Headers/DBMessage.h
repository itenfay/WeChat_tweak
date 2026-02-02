//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBMessage : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _version;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _imageStatus;
    unsigned int _type;
    unsigned int _des;
    long long lastInsertedRowID;
    long long _msgServerId;
    NSString *_message;
}

+ (void)__wcdb_column_constraint_71:(void *)arg1;
+ (void)__wcdb_column_constraint_70:(void *)arg1;
+ (void)__wcdb_column_constraint_69:(void *)arg1;
+ (void)__wcdb_column_constraint_68:(void *)arg1;
+ (void)__wcdb_column_constraint_67:(void *)arg1;
+ (void)__wcdb_index_66:(void *)arg1;
+ (void)__wcdb_index_65:(void *)arg1;
+ (void)__wcdb_index_64:(void *)arg1;
+ (void)__wcdb_index_63:(void *)arg1;
+ (void)__wcdb_index_62:(void *)arg1;
+ (void)__wcdb_index_61:(void *)arg1;
+ (void)__wcdb_index_60:(void *)arg1;
+ (void)__wcdb_index_59:(void *)arg1;
+ (void)__wcdb_column_constraint_58:(void *)arg1;
+ (id)swift_des;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (const void *)des;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (const void *)type;
+ (id)swift_imageStatus;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (const void *)imageStatus;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (const void *)status;
+ (id)swift_message;
+ (const void *)__wcdb_synthesize_53:(void *)arg1;
+ (const void *)message;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_52:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgServerId;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (const void *)msgServerId;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (const void *)version;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int des; // @synthesize des=_des;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int imageStatus; // @synthesize imageStatus=_imageStatus;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
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

