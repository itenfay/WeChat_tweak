//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBHello : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _version;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _imageStatus;
    unsigned int _type;
    unsigned int _des;
    unsigned int _opCode;
    unsigned int _sayHelloStatus;
    unsigned int _ConIntRes2;
    unsigned int _ConIntRes3;
    long long lastInsertedRowID;
    long long _msgServerId;
    NSString *_message;
    NSString *_userName;
    NSString *_ConStrRes1;
    NSString *_ConStrRes2;
    NSString *_ConStrRes3;
}

+ (void)__wcdb_column_constraint_145:(void *)arg1;
+ (void)__wcdb_column_constraint_144:(void *)arg1;
+ (void)__wcdb_column_constraint_143:(void *)arg1;
+ (void)__wcdb_column_constraint_142:(void *)arg1;
+ (void)__wcdb_column_constraint_141:(void *)arg1;
+ (void)__wcdb_column_constraint_140:(void *)arg1;
+ (void)__wcdb_column_constraint_139:(void *)arg1;
+ (void)__wcdb_column_constraint_138:(void *)arg1;
+ (void)__wcdb_column_constraint_137:(void *)arg1;
+ (void)__wcdb_index_136:(void *)arg1;
+ (void)__wcdb_index_135:(void *)arg1;
+ (void)__wcdb_index_134:(void *)arg1;
+ (void)__wcdb_column_constraint_133:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (const void *)__wcdb_synthesize_132:(void *)arg1;
+ (const void *)ConStrRes3;
+ (id)swift_ConStrRes2;
+ (const void *)__wcdb_synthesize_131:(void *)arg1;
+ (const void *)ConStrRes2;
+ (id)swift_ConStrRes1;
+ (const void *)__wcdb_synthesize_130:(void *)arg1;
+ (const void *)ConStrRes1;
+ (id)swift_ConIntRes3;
+ (const void *)__wcdb_synthesize_129:(void *)arg1;
+ (const void *)ConIntRes3;
+ (id)swift_ConIntRes2;
+ (const void *)__wcdb_synthesize_128:(void *)arg1;
+ (const void *)ConIntRes2;
+ (id)swift_sayHelloStatus;
+ (const void *)__wcdb_synthesize_127:(void *)arg1;
+ (const void *)sayHelloStatus;
+ (id)swift_opCode;
+ (const void *)__wcdb_synthesize_126:(void *)arg1;
+ (const void *)opCode;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_125:(void *)arg1;
+ (const void *)userName;
+ (id)swift_des;
+ (const void *)__wcdb_synthesize_124:(void *)arg1;
+ (const void *)des;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_123:(void *)arg1;
+ (const void *)type;
+ (id)swift_imageStatus;
+ (const void *)__wcdb_synthesize_122:(void *)arg1;
+ (const void *)imageStatus;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_121:(void *)arg1;
+ (const void *)status;
+ (id)swift_message;
+ (const void *)__wcdb_synthesize_120:(void *)arg1;
+ (const void *)message;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_119:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgServerId;
+ (const void *)__wcdb_synthesize_118:(void *)arg1;
+ (const void *)msgServerId;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_117:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_116:(void *)arg1;
+ (const void *)version;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2=_ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1=_ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3=_ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(nonatomic) unsigned int sayHelloStatus; // @synthesize sayHelloStatus=_sayHelloStatus;
@property(nonatomic) unsigned int opCode; // @synthesize opCode=_opCode;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
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

